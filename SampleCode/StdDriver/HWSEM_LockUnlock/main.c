/**************************************************************************//**
 * @file     main.c
 *
 * @brief    Demonstrate hardware semaphore (HWSEM) lock/unlock function.
 *
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#include <stdio.h>
#include "NuMicro.h"

#define KEY     0x55

void SYS_Init(void)
{
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init System Clock                                                                                       */
    /*---------------------------------------------------------------------------------------------------------*/

    /* Unlock protected registers */
    SYS_UnlockReg();

    /* Enable IP clock */
    CLK_EnableModuleClock(UART1_MODULE);

    /* Select IP clock source */
    CLK_SetModuleClock(UART1_MODULE,CLK_CLKSEL1_UART_S_XTAL,CLK_CLKDIV_UART(1));

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
    /* Init System, IP clock and multi-function I/O
       In the end of SYS_Init() will issue SYS_LockReg()
       to lock protected register. If user want to write
       protected register, please issue SYS_UnlockReg()
       to unlock protected register if necessary */
    SYS_Init();

    /* Init UART to 115200-8n1 for print message */
    UART_Open(UART1, 115200);

    printf("\nThis sample code demonstrate Hardware Semaphore(HWSEM) lock and unlock function\n");


    while(1)
    {
        // HWSEM_Try_Lock() may failed, so need to check return value
        if(HWSEM_Try_Lock(HWSEM0, 0, KEY) == 0)
        {
            // Lock by us, access critical section, and then unlock
            HWSEM_UNLOCK(HWSEM0, 0, KEY);
        }
        else
        {
            // Lock by A35, can't access critical section
        }

        // HWSEM_Spin_Lock() returns after acquired the lock
        HWSEM_Spin_Lock(HWSEM0, 0, KEY);
        // Lock by us, access critical section, and then unlock
        HWSEM_UNLOCK(HWSEM0, 0, KEY);
    }

}

