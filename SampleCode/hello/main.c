/*************************************************************************//**
 * @file     main.c
 * @version  V1.00
 * @brief    Emulation code
 *
 * @copyright (C) 2019 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#include <stdio.h>
#include "NuMicro.h"




void SYS_Init(void)
{


    /* TODO: Set clock */

    SystemCoreClockUpdate();

    /* TODO: Set UART MFP */
    
}


void UART_Init()
{
     /* Enable UART1 clock */
	outp32((void *)0X4046020C, inp32((void *)0X4046020C) | (1 << 13));  // Uart CLK @ APBCLK0
	outp32((void *)0X40460220, inp32((void *)0X40460220) & ~(3 << 18)); // Uart CLK from HXT
	/* UART0 multi-function PL4/5 as UART1 Tx/Rx */
	outp32((void *)0x404600D8, (inp32((void *)0x404600D8) & ~0xff0000) | 0x330000);

    /* Enable UART1 clock */
    UART1->LINE |= 0x7;
    UART1->BAUD = 0x3000000E;

}


int main()
{

    SYS_Init();
    UART_Init();

    printf("Hello World\n");
    while(1);


}

