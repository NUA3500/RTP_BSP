/**************************************************************************//**
 * @file     main.c
 *
 * @brief    MP3 player sample plays MP3 files stored on SD memory card
 *
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>
#include "NuMicro.h"
#include "config.h"
#include "diskio.h"
#include "ff.h"

#define PLL_CLOCK   192000000

uint32_t volatile u32BuffPos = 0;
FATFS FatFs[FF_VOLUMES];               /* File system object for logical drive */

#ifdef __ICCARM__
#pragma data_alignment=32
BYTE Buff[16] ;                   /* Working buffer */
DMA_DESC_T DMA_DESC[2];
#else
BYTE Buff[16] __attribute__((aligned(32)));       /* Working buffer */
DMA_DESC_T DMA_DESC[2] __attribute__((aligned(32)));
#endif

uint8_t bAudioPlaying = 0;
extern signed int aPCMBuffer[2][PCM_BUFFER_SIZE];

/*---------------------------------------------------------*/
/* User Provided RTC Function for FatFs module             */
/*---------------------------------------------------------*/
/* This is a real time clock service to be called from     */
/* FatFs module. Any valid time must be returned even if   */
/* the system does not support an RTC.                     */
/* This function is not required in read-only cfg.         */

unsigned long get_fattime (void)
{
    unsigned long tmr;

    tmr=0x00000;

    return tmr;
}


void SDH0_IRQHandler(void)
{
    unsigned int volatile isr;
    unsigned int volatile ier;

    // FMI data abort interrupt
    if (SDH0->GINTSTS & SDH_GINTSTS_DTAIF_Msk)
    {
        /* ResetAllEngine() */
        SDH0->GCTL |= SDH_GCTL_GCTLRST_Msk;
    }

    //----- SD interrupt status
    isr = SDH0->INTSTS;
    if (isr & SDH_INTSTS_BLKDIF_Msk)
    {
        // block down
        SD0.DataReadyFlag = TRUE;
        SDH0->INTSTS = SDH_INTSTS_BLKDIF_Msk;
    }

    if (isr & SDH_INTSTS_CDIF_Msk)   // port 0 card detect
    {
        //----- SD interrupt status
        // it is work to delay 50 times for SD_CLK = 200KHz
        {
            int volatile i;         // delay 30 fail, 50 OK
            for (i=0; i<0x500; i++);  // delay to make sure got updated value from REG_SDISR.
            isr = SDH0->INTSTS;
        }

        if (isr & SDH_INTSTS_CDSTS_Msk)
        {
            printf("\n***** card remove !\n");
            SD0.IsCardInsert = FALSE;   // SDISR_CD_Card = 1 means card remove for GPIO mode
            memset(&SD0, 0, sizeof(SDH_INFO_T));
        }
        else
        {
            printf("***** card insert !\n");
            SDH_Open(SDH0, CardDetect_From_GPIO);
            SDH_Probe(SDH0);
        }

        SDH0->INTSTS = SDH_INTSTS_CDIF_Msk;
    }

    // CRC error interrupt
    if (isr & SDH_INTSTS_CRCIF_Msk)
    {
        if (!(isr & SDH_INTSTS_CRC16_Msk))
        {
            //printf("***** ISR sdioIntHandler(): CRC_16 error !\n");
            // handle CRC error
        }
        else if (!(isr & SDH_INTSTS_CRC7_Msk))
        {
            if (!SD0.R3Flag)
            {
                //printf("***** ISR sdioIntHandler(): CRC_7 error !\n");
                // handle CRC error
            }
        }
        SDH0->INTSTS = SDH_INTSTS_CRCIF_Msk;      // clear interrupt flag
    }

    if (isr & SDH_INTSTS_DITOIF_Msk)
    {
        printf("***** ISR: data in timeout !\n");
        SDH0->INTSTS |= SDH_INTSTS_DITOIF_Msk;
    }

    // Response in timeout interrupt
    if (isr & SDH_INTSTS_RTOIF_Msk)
    {
        printf("***** ISR: response in timeout !\n");
        SDH0->INTSTS |= SDH_INTSTS_RTOIF_Msk;
    }
}

void SD_Inits(void)
{
    /* select multi-function pin */
    SYS->GPE_MFPL &= ~(SYS_GPE_MFPL_PE7MFP_Msk     | SYS_GPE_MFPL_PE6MFP_Msk     | SYS_GPE_MFPL_PE3MFP_Msk      | SYS_GPE_MFPL_PE2MFP_Msk);
    SYS->GPE_MFPL |=  (SYS_GPE_MFPL_PE7MFP_SD0_CMD | SYS_GPE_MFPL_PE6MFP_SD0_CLK | SYS_GPE_MFPL_PE3MFP_SD0_DAT1 | SYS_GPE_MFPL_PE2MFP_SD0_DAT0);

    SYS->GPB_MFPL &= ~(SYS_GPB_MFPL_PB5MFP_Msk      | SYS_GPB_MFPL_PB4MFP_Msk);
    SYS->GPB_MFPL |=  (SYS_GPB_MFPL_PB5MFP_SD0_DAT3 | SYS_GPB_MFPL_PB4MFP_SD0_DAT2);

    SYS->GPD_MFPH &= ~(SYS_GPD_MFPH_PD13MFP_Msk);
    SYS->GPD_MFPH |=  (SYS_GPD_MFPH_PD13MFP_SD0_nCD);

    /* Select IP clock source */
    CLK_SetModuleClock(SDH0_MODULE, CLK_CLKSEL0_SDH0SEL_PLL, CLK_CLKDIV0_SDH0(10));
    /* Enable IP clock */
    CLK_EnableModuleClock(SDH0_MODULE);
}

void SYS_Init(void)
{
    /* Unlock protected registers */
    SYS_UnlockReg();

    /* Enable External XTAL (4~24 MHz) */
    CLK_EnableXtalRC(CLK_PWRCTL_HXTEN_Msk);

    /* Waiting for 12MHz clock ready */
    CLK_WaitClockReady(CLK_STATUS_HXTSTB_Msk);

    /* Set core clock as PLL_CLOCK from PLL */
    CLK_SetCoreClock(PLL_CLOCK);

    /* Enable UART module clock */
    CLK_EnableModuleClock(UART16_MODULE);

    /* Select UART module clock source as HXT and UART module clock divider as 1 */
    CLK_SetModuleClock(UART16_MODULE, CLK_CLKSEL3_UART16SEL_HXT, CLK_CLKDIV1_UART16(1));

    /* Enable I2S0 module clock */
    CLK_EnableModuleClock(I2S0_MODULE);

    /* Enable I2C2 module clock */
    CLK_EnableModuleClock(I2C2_MODULE);

    /* Enable PDMA module clock */
    CLK_EnableModuleClock(PDMA2_MODULE);

    /* Enable GPIOD module clock */
    CLK_EnableModuleClock(GPD_MODULE);

    /* Set GPK multi-function pins for UART16 RXD and TXD */
    SYS->GPK_MFPL &= ~(SYS_GPK_MFPL_PK2MFP_Msk | SYS_GPK_MFPL_PK3MFP_Msk);
    SYS->GPK_MFPL |= (SYS_GPK_MFPL_PK2MFP_UART16_RXD | SYS_GPK_MFPL_PK3MFP_UART16_TXD);

    /* PB8: I2C2_SDA; PB9: I2C2_SCL */
    SYS->GPB_MFPH = (SYS->GPB_MFPH & (~(SYS_GPB_MFPH_PB8MFP_Msk|SYS_GPB_MFPH_PB9MFP_Msk))) | SYS_GPB_MFPH_PB8MFP_I2C2_SDA | SYS_GPB_MFPH_PB9MFP_I2C2_SCL;

    /* PK.12(I2S0_LRCK),PK.13(I2S0_BCLK),PK.14(I2S0_DI),PK.15(I2S0_DO), PN.15(I2S0_MCLK) */
    SYS->GPK_MFPH &= ~(SYS_GPK_MFPH_PK12MFP_Msk | SYS_GPK_MFPH_PK13MFP_Msk | SYS_GPK_MFPH_PK14MFP_Msk | SYS_GPK_MFPH_PK15MFP_Msk);
    SYS->GPK_MFPH |= (SYS_GPK_MFPH_PK12MFP_I2S0_LRCK | SYS_GPK_MFPH_PK13MFP_I2S0_BCLK | SYS_GPK_MFPH_PK14MFP_I2S0_DI | SYS_GPK_MFPH_PK15MFP_I2S0_DO);
    /* PN.15(I2S0_MCLK) */
    SYS->GPN_MFPH = (SYS->GPN_MFPH & (~SYS_GPN_MFPH_PN15MFP_Msk)) | SYS_GPN_MFPH_PN15MFP_I2S0_MCLK;
}

void I2C2_Init(void)
{
    /* Open I2C2 and set clock to 100k */
    I2C_Open(I2C2, 100000);
}

// Configure PDMA to Scatter Gather mode */
void PDMA_Init(void)
{
    DMA_DESC[0].ctl = ((PCM_BUFFER_SIZE-1)<<PDMA_DSCT_CTL_TXCNT_Pos)|PDMA_WIDTH_32|PDMA_SAR_INC|PDMA_DAR_FIX|PDMA_REQ_SINGLE|PDMA_OP_SCATTER;
    DMA_DESC[0].src = (uint32_t)&aPCMBuffer[0][0];
    DMA_DESC[0].dest = (uint32_t)&I2S0->TXFIFO;
    DMA_DESC[0].offset = (uint32_t)&DMA_DESC[1] - (PDMA2->SCATBA);

    DMA_DESC[1].ctl = ((PCM_BUFFER_SIZE-1)<<PDMA_DSCT_CTL_TXCNT_Pos)|PDMA_WIDTH_32|PDMA_SAR_INC|PDMA_DAR_FIX|PDMA_REQ_SINGLE|PDMA_OP_SCATTER;
    DMA_DESC[1].src = (uint32_t)&aPCMBuffer[1][0];
    DMA_DESC[1].dest = (uint32_t)&I2S0->TXFIFO;
    DMA_DESC[1].offset = (uint32_t)&DMA_DESC[0] - (PDMA2->SCATBA);

    PDMA_Open(PDMA2,1 << 2);
    PDMA_SetTransferMode(PDMA2,2, PDMA_I2S0_TX, 1, (uint32_t)&DMA_DESC[0]);

    PDMA_EnableInt(PDMA2,2, 0);
    NVIC_EnableIRQ(PDMA2_IRQn);
}


int32_t main (void)
{
    TCHAR       sd_path[] = { '0', ':', 0 };    /* SD drive started from 0 */

    /* Init System, IP clock and multi-function I/O */
    SYS_Init();

    /* Init SD */
    SD_Inits();

    /* Init UART to 115200-8n1 for print message */
    UART_Open(UART16, 115200);

    printf("+------------------------------------------------------------------------+\n");
    printf("|                   MP3 Player Sample with NAU88L25 Codec                |\n");
    printf("+------------------------------------------------------------------------+\n");
    printf(" Please put MP3 files on SD card \n");

    SDH_Open_Disk(SDH0, CardDetect_From_GPIO);
    f_chdrive(sd_path);          /* set default path */

    /* Init I2C2 to access WAU88C22 */
    I2C2_Init();

    /* Set PD.13 low to enable phone jack on DEV board. */
    /* PD.13(AUDIO_JKEN : keep output low) */
    SYS->GPD_MFPH = (SYS->GPD_MFPH & ~(SYS_GPD_MFPH_PD13MFP_Msk));
    GPIO_SetMode(PD, BIT13, GPIO_MODE_OUTPUT);
    PD13 = 0;

    // select source from HXT(12MHz)
    CLK_SetModuleClock(I2S0_MODULE, CLK_CLKSEL4_I2S0SEL_HXT, 0);

    MP3Player();

    while(1);
}

