/**************************************************************************//**
 * @file     main.c
 *
 * @brief    SPII2S Driver Sample Code
 *           This is a I2S demo for recording data and demonstrate how I2S works with PDMA.
 *
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>
#include "NuMicro.h"

#define I2S_TXData_DMA_CH 1
#define I2S_RX_DMA_CH 2

#define PLL_CLOCK   192000000

/*---------------------------------------------------------------------------------------------------------*/
/* Global variables                                                                                        */
/*---------------------------------------------------------------------------------------------------------*/
#define BUFF_LEN 4
#define TX_BUFF_LEN 8

typedef struct
{
    uint32_t CTL;
    uint32_t SA;
    uint32_t DA;
    uint32_t FIRST;
} DESC_TABLE_T;

DESC_TABLE_T g_asDescTable_DataTX[1], g_asDescTable_RX[2];

/* Function prototype declaration */
void SYS_Init(void);

/* Global variable declaration */
volatile uint8_t u8RxIdx = 0;
uint32_t PcmRxBuff[2][BUFF_LEN] = {0};
uint32_t PcmTxDataBuff[1][TX_BUFF_LEN] = {0};

/* Once PDMA has transferred, software need to reset Scatter-Gather table */
void PDMA_ResetRxSGTable(uint8_t id)
{
    g_asDescTable_RX[id].CTL |= PDMA_OP_SCATTER;
    g_asDescTable_RX[id].CTL |= ((BUFF_LEN-1)<<PDMA_DSCT_CTL_TXCNT_Pos);
}


int32_t main(void)
{
    uint32_t u32InitValue, u32DataCount;

    /* Unlock protected registers */
    SYS_UnlockReg();
    /* Init system, peripheral clock and multi-function I/O */
    SYS_Init();
    /* Lock protected registers */
    SYS_LockReg();

    /* Init UART to 115200-8n1 for print message */
    UART_Open(UART16, 115200);

    printf("\n");
    printf("+----------------------------------------------+\n");
    printf("|        SPII2S + PDMA  Record Sample Code     |\n");
    printf("+----------------------------------------------+\n");
    printf("  I2S configuration:\n");
    printf("      Sample rate 16 kHz\n");
    printf("      Word width 16 bits\n");
    printf("      Stereo mode\n");
    printf("      I2S format\n");
    printf("      TX value: 0x50005000, 0x50015001, ... \n");
    printf("  The I/O connection for I2S:\n");
    printf("      I2S1_LRCLK (PK12)\n      I2S1_BCLK(PK13)\n");
    printf("      I2S1_DI (PK14)\n      I2S1_DO (PK15)\n\n");
    printf("      This sample code will transmit and receive data with PDMA transfer.\n");
    printf("      Connect I2S_DI and I2S_DO to check if the data which stored in two receive\n buffers are the same with the transmitted values.\n");
    printf("      After PDMA transfer is finished, the received values will be printed.\n\n");

    /* Select clock source of SPI1 */
    CLK_SetModuleClock(SPI1_MODULE, CLK_CLKSEL4_SPI1SEL_HXT, MODULE_NoMsk);

    /* Enable I2S TX and RX functions */
    /* Sampling rate 16000 Hz; bit clock rate 512 kHz. */
    /* Master mode, 16-bit word width, stereo mode, I2S format. */
    SPII2S_Open(SPI1, SPII2S_MODE_MASTER, 16000, SPII2S_DATABIT_16, SPII2S_STEREO, SPII2S_FORMAT_I2S);

    /* Data initiation */
    u32InitValue = 0x50005000;
    for(u32DataCount = 0; u32DataCount < BUFF_LEN; u32DataCount++)
    {
        PcmTxDataBuff[0][u32DataCount] = u32InitValue;
        u32InitValue += 0x00010001;
    }

    /* Enable PDMA channels */
    PDMA_Open(PDMA2,(1 << I2S_TXData_DMA_CH) | (1 << I2S_RX_DMA_CH));

    /* Tx description */
    g_asDescTable_DataTX[0].CTL = ((TX_BUFF_LEN-1)<<PDMA_DSCT_CTL_TXCNT_Pos)|PDMA_WIDTH_32|PDMA_SAR_INC|PDMA_DAR_FIX|PDMA_REQ_SINGLE|PDMA_OP_BASIC;
    g_asDescTable_DataTX[0].SA = (uint32_t)&PcmTxDataBuff[0];
    g_asDescTable_DataTX[0].DA = (uint32_t)&SPI1->TX;

    /* Rx(Record) description */
    g_asDescTable_RX[0].CTL = ((BUFF_LEN-1)<<PDMA_DSCT_CTL_TXCNT_Pos)|PDMA_WIDTH_32|PDMA_SAR_FIX|PDMA_DAR_INC|PDMA_REQ_SINGLE|PDMA_OP_SCATTER;
    g_asDescTable_RX[0].SA = (uint32_t)&SPI1->RX;
    g_asDescTable_RX[0].DA = (uint32_t)&PcmRxBuff[0];
    g_asDescTable_RX[0].FIRST = (uint32_t)&g_asDescTable_RX[1] - (PDMA2->SCATBA);

    g_asDescTable_RX[1].CTL = ((BUFF_LEN-1)<<PDMA_DSCT_CTL_TXCNT_Pos)|PDMA_WIDTH_32|PDMA_SAR_FIX|PDMA_DAR_INC|PDMA_REQ_SINGLE|PDMA_OP_SCATTER;
    g_asDescTable_RX[1].SA = (uint32_t)&SPI1->RX;
    g_asDescTable_RX[1].DA = (uint32_t)&PcmRxBuff[1];
    g_asDescTable_RX[1].FIRST = (uint32_t)&g_asDescTable_RX[0] - (PDMA2->SCATBA);   //link to first description

    PDMA_SetTransferMode(PDMA2,1, PDMA_SPI1_TX, 1, (uint32_t)&g_asDescTable_DataTX[0]);
    PDMA_SetTransferMode(PDMA2,2, PDMA_SPI1_RX, 1, (uint32_t)&g_asDescTable_RX[0]);

    /* Enable PDMA channel 2 interrupt */
    PDMA_EnableInt(PDMA2,2, PDMA_INT_TRANS_DONE);

    NVIC_EnableIRQ(PDMA2_IRQn);

    /* Clear RX FIFO */
    SPII2S_CLR_RX_FIFO(SPI1);

    /* Enable RX function and TX function */
    SPII2S_ENABLE_RX(SPI1);
    SPII2S_ENABLE_TX(SPI1);

    /* Enable RX PDMA and TX PDMA function */
    SPII2S_ENABLE_TXDMA(SPI1);
    SPII2S_ENABLE_RXDMA(SPI1);

    printf("RX Buffer 1\tRX Buffer 2\n");

    /* Print the received data */
    for(u32DataCount = 0; u32DataCount < BUFF_LEN; u32DataCount++)
    {
        printf("0x%X\t\t0x%X\n", PcmRxBuff[0][u32DataCount], PcmRxBuff[1][u32DataCount]);
    }

    printf("\n\nExit I2S sample code.\n");

    while(1);

}

void SYS_Init(void)
{
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init System Clock                                                                                       */
    /*---------------------------------------------------------------------------------------------------------*/

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

    /* Select clock source of SPI1 */
    CLK_SetModuleClock(SPI1_MODULE, CLK_CLKSEL4_SPI1SEL_HXT, MODULE_NoMsk);

    /* Enable peripheral clock */
    CLK_EnableModuleClock(SPI1_MODULE);
    CLK_EnableModuleClock(PDMA2_MODULE);

    /* Update System Core Clock */
    /* User can use SystemCoreClockUpdate() to calculate PllClock, SystemCoreClock and CyclesPerUs automatically. */
    SystemCoreClockUpdate();

    /* Set GPK multi-function pins for UART16 RXD and TXD */
    SYS->GPK_MFPL &= ~(SYS_GPK_MFPL_PK2MFP_Msk | SYS_GPK_MFPL_PK3MFP_Msk);
    SYS->GPK_MFPL |= (SYS_GPK_MFPL_PK2MFP_UART16_RXD | SYS_GPK_MFPL_PK3MFP_UART16_TXD);

    /* Configure SPI1 related multi-function pins. */
    /* GPK[12:15] : SPI1_CLK (I2S1_BCLK), SPI1_MISO (I2S1_DI), SPI1_MOSI (I2S1_DO), SPI1_SS (I2S1_LRCLK). */
    SYS->GPK_MFPH &= ~(SYS_GPK_MFPH_PK12MFP_Msk | SYS_GPK_MFPH_PK13MFP_Msk | SYS_GPK_MFPH_PK14MFP_Msk | SYS_GPK_MFPH_PK15MFP_Msk);
    SYS->GPK_MFPH |= SYS_GPK_MFPH_PK12MFP_SPI1_SS0 | SYS_GPK_MFPH_PK13MFP_SPI1_CLK | SYS_GPK_MFPH_PK14MFP_SPI1_MOSI | SYS_GPK_MFPH_PK15MFP_SPI1_MISO;

    /* GPN[14] : SPI1_MCLK */
    SYS->GPN_MFPH = (SYS->GPN_MFPH & (~SYS_GPN_MFPH_PN14MFP_Msk)) | SYS_GPN_MFPH_PN14MFP_SPI1_I2SMCLK;
}

void PDMA2_IRQHandler(void)
{
    uint32_t u32Status = PDMA_GET_INT_STATUS(PDMA2);

    if (u32Status & 0x1)   /* abort */
    {
        if (PDMA_GET_ABORT_STS(PDMA2) & 0x4)
            PDMA_CLR_ABORT_FLAG(PDMA2,PDMA_ABTSTS_ABTIF2_Msk);
    }
    else if (u32Status & 0x2)
    {
        if (PDMA_GET_TD_STS(PDMA2) & 0x4)            /* channel 2 done */
        {
            /* Reset PDMA Scatter-Gather table */
            PDMA_ResetRxSGTable(u8RxIdx);
            u8RxIdx ^= 1;
        }
        PDMA_CLR_TD_FLAG(PDMA2,PDMA_TDSTS_TDIF2_Msk);
    }
    else
        printf("unknown interrupt, status=0x%x!!\n", u32Status);
}


