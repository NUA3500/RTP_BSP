/**************************************************************************//**
 * @file     main.c
 *
 * @brief    Demonstrate Wormhole Controller (WHC) transmit and receive function.
 *
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#include <stdio.h>
#include "NuMicro.h"

uint32_t au32RxBuf[WHC_BUFFER_LEN];
uint32_t au32TxBuf[WHC_BUFFER_LEN];

void WHC0_IRQHandler(void)
{
    // Clear interrupt flag
    WHC_CLR_INT_FLAG(WHC0, WHC_INTSTS_RX0IF_Msk);

    WHC_Recv(WHC0, 0, au32RxBuf);

    printf("Received message: %08x, %08x, %08x, %08x\n", au32RxBuf[0], au32RxBuf[1], au32RxBuf[2], au32RxBuf[3]);

}


void SYS_Init(void)
{
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init System Clock                                                                                       */
    /*---------------------------------------------------------------------------------------------------------*/

    /* Unlock protected registers */
    SYS_UnlockReg();

    /* Enable IP clock */
    CLK_EnableModuleClock(UART1_MODULE);
    CLK_EnableModuleClock(TMR2_MODULE);


    /* Select IP clock source */
    CLK_SetModuleClock(UART1_MODULE,CLK_CLKSEL1_UART_S_XTAL,CLK_CLKDIV_UART(1));
    CLK_SetModuleClock(TMR2_MODULE, CLK_CLKSEL1_TMR2SEL_HXT, 0);

    /*---------------------------------------------------------------------------------------------------------*/
    /* Init I/O Multi-function                                                                                 */
    /*---------------------------------------------------------------------------------------------------------*/
    /* Set multi-function pins for UART RXD, TXD */


    /* To update the variable SystemCoreClock */
    SystemCoreClockUpdate();

    /* Lock protected registers */
    SYS_LockReg();
}

int32_t main (void)
{
    uint32_t i = 0;
    /* Init System, IP clock and multi-function I/O
       In the end of SYS_Init() will issue SYS_LockReg()
       to lock protected register. If user want to write
       protected register, please issue SYS_UnlockReg()
       to unlock protected register if necessary */
    SYS_Init();

    /* Init UART to 115200-8n1 for print message */
    UART_Open(UART1, 115200);

    printf("\nThis sample code demonstrate Wormhole Controller(WHC) transmit and receive function\n");

    WHC_ENABLE_INT(WHC0, WHC_INTEN_RX0IEN_Msk);
    NVIC_EnableIRQ(WHC0_IRQn);

    while(1)
    {
        if(WHC_IS_RX_READY(WHC0, 0))
        {
            au32TxBuf[0] = i++;
            au32TxBuf[1] = i++;
            au32TxBuf[2] = i++;
            au32TxBuf[3] = i++;

            WHC_Send(WHC0, 0, au32TxBuf);
        }
        TIMER_Delay(TIMER2, 1000000);
    }
}

