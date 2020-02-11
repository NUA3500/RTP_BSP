/*************************************************************************//**
 * @file     main.c
 * @version  V1.00
 * @brief    Emulation code
 *
 * @copyright (C) 2019 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#include <stdio.h>
#include "NuMicro.h"

#include "WDT_WWDT_Test.h"

extern void WWDT_IRQHandler(void);
extern void WDT_IRQHandler(void);

void Delay(uint32_t ticks)
{
	TIMER2->CNT = 0;
	TIMER2->INTSTS |= TIMER2->INTSTS;
	TIMER2->CMP = ticks;
	while ((TIMER2->INTSTS & 0x1) == 0);
}

void SYS_Init(void)
{
    /* TODO: Set clock */

    SystemCoreClockUpdate();

    /* TODO: Set UART MFP */
    
	/* set sspcc, timer2 and timer 3 for SubM */
//	outp32((void *)0x404F0014, inp32((void *)0x404F0014) | 0xC);
	
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
	SYS_UnlockReg();
    SYS_Init();
    UART_Init();

    g_au32PORValue[0] = SYS->RSTSTS;
    g_au32PORValue[1] = CLK->PWRCTL;
    g_au32PORValue[2] = CLK->APBCLK1;
    g_au32PORValue[3] = CLK->CLKSEL3;
    g_au32PORValue[4] = WDT2->CTL;
    g_au32PORValue[5] = WWDT2->CTL;
    g_au32PORValue[6] = WDT2->ALTCTL;
    g_au32PORValue[7] = WWDT2->STATUS;

    printf(">> pwr 0x%x, apb clk 0x%x, sel 0x%x\n", CLK->PWRCTL, CLK->APBCLK1, CLK->CLKSEL3);
    CLK->PWRCTL |= 0xf;
    CLK->APBCLK1 |= (7 << 16);

    printf("<< pwr 0x%x, apb clk 0x%x, sel 0x%x\n", CLK->PWRCTL, CLK->APBCLK1, CLK->CLKSEL3);

    TIMER2_Init_INT();
    WDT_WWDT_TestMain();

}

