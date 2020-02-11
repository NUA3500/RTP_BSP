#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "NuMicro.h"

#include "WDT_WWDT_Test.h"

volatile uint32_t gu32CMPDAT, gu32PeriodSel;

const uint16_t gu16PSCSELTable[] = {
    1, 2, 4, 8, 16, 32, 64, 128, 192, 256, 384, 512, 768, 1024, 1536, 2048
};


void WWDT_IRQHandler()
{
  if (g_u8IsAllWDTandWWDTTest == 1)
  {
    if (WWDT_GET_INT_FLAG() == 1)
    {
        PA1 ^= 1;
        WWDT_RELOAD_COUNTER();
        WWDT_CLEAR_INT_FLAG();
    }
    return ;
  }

    if ((WWDT_GET_INT_FLAG() == 1) || (WWDT_GET_RESET_FLAG() == 1))
    {
        static uint32_t i = 0;
        volatile uint32_t u32Cnt;
            
        if (WWDT_GET_INT_FLAG())
        {
            /* Get Timer0 CNT and reset Timer0 CNT to 0 */
            u32Cnt = GET_TM0CNT; RST_TM0CNT;               
            IO_CTL ^= 1;

            WWDT_RELOAD_COUNTER();
            WWDT_CLEAR_INT_FLAG();
                        
            if (i < 10)
                printf("INT: %d us. (%d us/INT).\n", (u32Cnt*10), (u32Cnt*10)/(64-gu32CMPDAT));
            else
                printf("INT: %d us. (%d)\r", (u32Cnt*10), i);
            i++;
        }
    }
}

void SelectWWDTPrescale(WWDT_T *wwdt, int32_t i32Mode)
{
    printf("Select PSCSEL, 0~15.\n");
    gu32PeriodSel = GetNum();
    printf("\n");
    if (gu32PeriodSel > 15)
        gu32PeriodSel = 8;
    
    printf("[Target PSCSEL is %d]\n\n", gu32PeriodSel); 
}

void SelectWWDTCMPDAT(WWDT_T *wwdt, int32_t i32Mode)
{
    printf("Select CMPDAT, 0~63.\n");
    gu32CMPDAT = GetNum();
    printf("\n");
    if (gu32CMPDAT > 63)
        gu32CMPDAT = 32;   
    
    printf("[Target CMPDAT is %d]\n\n", gu32CMPDAT); 
}

void WWDT_BasicFunctionTest_BC(WWDT_T *wwdt, uint8_t u8ModeSel)
{
    volatile uint32_t i, u32Cnt;
    volatile uint32_t u32RegCTL, u32RegSTATUS;
    uint8_t u8IsEnableINT;
    
    if (u8ModeSel & 0x1)
        SYS_UnlockReg();
    else
        SYS_LockReg();
    
    u8IsEnableINT = (u8ModeSel&0x10)? 1:0;
    
    printf("\nWWDT Basic Function Test by [%s mode]. (%s)\n\n", 
        (u8IsEnableINT==0)?"Polling":"Interrupt", (SYS->REGWPCTL)?"RegWrite UnLock":"RegWrite Lock");

    /* Clear WWDT status first */
    wwdt->STATUS = wwdt->STATUS;
    
    SelectWWDTPrescale(wwdt, -1);    
    SelectWWDTCMPDAT(wwdt, -1);
    
	if (u8IsEnableINT == 1)
    {
        /* Enable WWDT NVIC */
   		NVIC_EnableIRQ(WWDT2_IRQn);
        u32RegCTL = (gu32CMPDAT<<WWDT_CTL_CMPDAT_Pos) | (gu32PeriodSel<<WWDT_CTL_PSCSEL_Pos) | WWDT_CTL_INTEN_Msk | WWDT_CTL_WWDTEN_Msk;
    }
    else 
    {
        u32RegCTL = (gu32CMPDAT<<WWDT_CTL_CMPDAT_Pos) | (gu32PeriodSel<<WWDT_CTL_PSCSEL_Pos) | WWDT_CTL_WWDTEN_Msk;
    }

    IO_CTL = 1;
    printf("Check WWDT time-out period by measure %s. (WWDT_CTL:0x%08X)\n\n", IO_BIT_STR, u32RegCTL);   

    if (((gu32CMPDAT == 0) || gu32CMPDAT == 63))
    {
        printf("Hit any key to start WWDT counter and check if the interval period is about %d us.\n", 
                ((1000000*gu16PSCSELTable[gu32PeriodSel])/gu32WWDTCLKFreq)*(64));
    }
    else 
    {
        printf("Hit any key to start WWDT counter and check if the interval period is about %d us.\n", 
                ((1000000*gu16PSCSELTable[gu32PeriodSel])/gu32WWDTCLKFreq)*(64-gu32CMPDAT));
    }
    getchar();

#if (ENABLE_WWDT_ICEDEBUG == 1) /* Enable for debug WWDT ICEDEBUG bit */   
    SYS_UnlockReg();
    if((uint32_t)wwdt == WWDT0_BASE)
		IRQ_Enable(WWDT0_IRQn);
    else
		IRQ_Enable(WWDT1_IRQn);
    IO_CTL = 0;
    printf("\nHit [0] WWDT counter will be held by ICE; [1] WWDT counter will keep counting\n");
    ch = getchar();
    if (ch == '1')
        u32RegCTL = (u32RegCTL | WWDT_CTL_ICEDEBUG_Msk); // enable to test ICEDEBUG bit
    printf("*** select [%c] ***\n\n", ch);
    wwdt->CTL = u32RegCTL; /* Set break point here */
    if (wwdt->CTL != u32RegCTL)
    {
        printf("Write WWDT_CTL FAIL.\n\n");
        while(1);
    }
    printf("WWDT_CTL 0x%08X\n", wwdt->CTL);
    
    while(1) 
    {
        if (wwdt->STATUS == WWDT_STATUS_WWDTIF_Msk)
        {
            printf("\nSet break point here... System will be reset.\n");
            IO_CTL = 1;
            break;
        }
    }
    printf("\nSet break point here... CPU halt in debug mode.\n");
    while(1);
#endif
    
    IO_CTL = 0;

    /* Reset Timer0 CNT to 0 */
    RST_TM0CNT;  
        
    wwdt->CTL = u32RegCTL;    
    if (wwdt->CTL != u32RegCTL)
    {
        printf("Write WWDT_CTL FAIL.\n\n");
        while(1);
    }
    
    i = 0;
    /* For polling mode */
    if (u8IsEnableINT == 0)
    {
        while(1) 
        {
            if (wwdt->STATUS == WWDT_STATUS_WWDTIF_Msk)
            {
                /* Get Timer0 CNT and reset Timer0 CNT to 0 */
                u32Cnt = GET_TM0CNT; RST_TM0CNT;                  
                IO_CTL ^= 1;
                
                wwdt->STATUS = WWDT_STATUS_WWDTIF_Msk;
                wwdt->RLDCNT = WWDT_RELOAD_WORD;               
                
                if (i < 10)
                    printf("Polling: %d us. (%d us).\n", (u32Cnt*10), (u32Cnt*10)/(64-gu32CMPDAT));
                else
                    printf("Polling: %d us. (%d)\r", (u32Cnt*10), i);
                i++;
            }
            if ((DEBUG_PORT->FIFOSTS & UART_FIFOSTS_RXEMPTY_Msk) == 0)
            {
                if ((DEBUG_PORT->DAT) == 0x1B)
                    ResetCHIP();
            }
        }
    }
    else 
    {
        while(1) 
        {
            if ((DEBUG_PORT->FIFOSTS & UART_FIFOSTS_RXEMPTY_Msk) == 0)
            {
                if ((DEBUG_PORT->DAT) == 0x1B)
                {
                    /* Disable all interrupt */
//                    __set_PRIMASK(1);
                    ResetCHIP();
                }
            }
        }
    }
}

void WWDT_RLDCNTFeatureTest_D(WWDT_T *wwdt, uint8_t u8Mode)
{
    uint8_t u8Char;
    uint32_t u32TestCMP = 5
    ;
    volatile uint32_t i = 0, u32RegCTL, u32RegSTATUS;

    printf("\nWWDT RLDCNT Behavior Test.\n\n");   

    /* Clear WWDT status first */
    wwdt->STATUS = wwdt->STATUS;

    SelectWWDTPrescale(wwdt, -1);  
    
    gu32CMPDAT = u32TestCMP;
    printf("[Target CMPDAT sets to %d]\n\n", gu32CMPDAT); 

    printf("Hit '1' to enable ICEDEBUG function and WWDT counter will keep going no matter CPU is held by ICE or not.\n");
    u8Char = getchar();   
    if (u8Char == '1')
        u32RegCTL = (gu32CMPDAT<<WWDT_CTL_CMPDAT_Pos) | (gu32PeriodSel<<WWDT_CTL_PSCSEL_Pos) | WWDT_CTL_WWDTEN_Msk | WWDT_CTL_ICEDEBUG_Msk;
    else
        u32RegCTL = (gu32CMPDAT<<WWDT_CTL_CMPDAT_Pos) | (gu32PeriodSel<<WWDT_CTL_PSCSEL_Pos) | WWDT_CTL_WWDTEN_Msk;
    printf("ICEDEBUG function is %s.\n\n", (u32RegCTL&WWDT_CTL_ICEDEBUG_Msk)?"enabled":"disabled");
   
    printf("Select:\n");
    printf("    [0] Write RLDCNT from 0x00000000 to 0xFFFFFFFF except 0x00005AA5 when CNTDAT >= 10.\n        System will not generate reset event.\n");    
    printf("    [1] Write RLDCNT to 0x000005AA5 when CNTDAT > %d and system will generate a reset event.\n", u32TestCMP);    
    printf("    [2] Wait current CNTDAT and internal prescale counter are counting to 0, system will generate a reset event.\n");
    u8Char = getchar();   
    u8Char = u8Char - '0';
    u8Char = (u8Char > 2)? 0:u8Char;
    printf("    -> Select [%d]\n\n", u8Char);

    if (u8Char == 1)
    {
        printf("Hit any key to start WWDT counting and write RLDCNT 0x00005AA5 when CNTDAT = 10.\n"); 
        getchar();
        
        wwdt->CTL = u32RegCTL;
        while(1) 
        {
            if (wwdt->CNT == 10)
            {
                printf("CNTDAT %d.\n\n", wwdt->CNT);
                while(UART_IS_TX_EMPTY(DEBUG_PORT) == 0);
                wwdt->RLDCNT = 0x00005AA5;
            }
        }
    }
    else if (u8Char == 2) 
    {
        IO_CTL = 1;
        printf("Hit any key to start WWDT counting and wait system generates a reset event. (WWDT_CTL:0x%08X)\n", u32RegCTL); 
        printf("    [Measure %s low period to check WWDT Window period time]\n", IO_BIT_STR);    
        getchar();
        
        IO_CTL = 0;
        wwdt->CTL = u32RegCTL;
        
        while(1) 
        {
            printf("CNTDAT [0x%08X]\r", wwdt->CNT);
        }           
    }
    else 
    {
        IO_CTL = 1;
        printf("Hit any key to start WWDT counting. (WWDT_CTL:0x%08X)\n", u32RegCTL); 
        getchar();
                                                                      
        IO_CTL = 0;
        wwdt->CTL = u32RegCTL;

        while(1) 
        {
            if (WWDT_GET_INT_FLAG())
            {
                WWDT_CLEAR_INT_FLAG();
                WWDT_RELOAD_COUNTER();

                printf("[0x%08X] has been programmed to RLDCNT register.\r", i);
            }
            if (wwdt->CNT >= 10)
            {
                if (i != WWDT_RELOAD_WORD)
                    wwdt->RLDCNT = i;
                
                i++; 
                if (i == 0)
                {
                    printf("\n[Program RLDCNT != 0x00005AA5 between invalid reload window ... PASS]\n");                     
                    printf("\n[Program RLDCNT = 0x00005AA5 between invalid reload window to generate reset system event]\n\n"); 
                    break;                          
                }
            }
            if ((DEBUG_PORT->FIFOSTS&UART_FIFOSTS_RXEMPTY_Msk) == 0)
            {
                if ((DEBUG_PORT->DAT) == 27)
                    ResetCHIP();
            }
        }
    }
}

void WWDT_CheckCounterBehaviorInPWD_E(WDT_T *wdt, WWDT_T *wwdt, uint8_t u8Mode)
{
    uint8_t u8Char;
    volatile uint32_t i = 0, u32RegWDTCTL, u32RegWWDTCTL, u32RegWWDTCNT, u32NewWWDTCNT;
    uint32_t u32TotalWWDTCnt, u32WWDTPeriodBeforePWD, u32WWDTPeriodAterPWD;
    uint32_t u32ActiveFreq;

    printf("\nWWDT and WDT Behavior in Power-down mode.\n\n");   

    u32ActiveFreq = gu32LIRCFreq;
    
    IO_CTL = 1;

    /* Clear WWDT status first */
    wwdt->STATUS = wwdt->STATUS;

    gu32PeriodSel = 8;
    gu32CMPDAT = 10;
    printf("Setting PSCSEL is %d, CMPDAT is %d\n", gu32PeriodSel, gu32CMPDAT);

    /* Enable WWDT NVIC */
	NVIC_EnableIRQ(WWDT2_IRQn);
    u32RegWWDTCTL = (gu32CMPDAT<<WWDT_CTL_CMPDAT_Pos) | (gu32PeriodSel<<WWDT_CTL_PSCSEL_Pos) | WWDT_CTL_INTEN_Msk | WWDT_CTL_WWDTEN_Msk;

    /* Enable WDT NVIC */
    {
        CLK->APBCLK1 |= CLK_APBCLK1_WDT2CKEN_Msk;
		NVIC_EnableIRQ(WDT2_IRQn);
	    CLK->CLKSEL3 = (CLK->CLKSEL3 & ~CLK_CLKSEL3_WDT2SEL_Msk) | CLK_CLKSEL3_WDT2SEL_LIRC;
    }
    StopWDTandResetCnt(wdt);    
    u32RegWDTCTL = 0x4D2;
    
    // Select WDT clk source from 10 KHz first.
//    printf("Select WDT and WWDT closk source are all from LIRC (32k) \nand WDT time-out interval should be around %d us (PWD period).\n\n", (4096*1000000/u32ActiveFreq));
    CLK->CLKSEL3 = (CLK->CLKSEL3 & ~CLK_CLKSEL3_WWDT2SEL_Msk) | CLK_CLKSEL3_WWDT2SEL_LIRC;

    u32TotalWWDTCnt = (64 - gu32CMPDAT);
    u32WWDTPeriodBeforePWD = ((1000000*gu16PSCSELTable[gu32PeriodSel])/u32ActiveFreq)*gu32CMPDAT;
    u32WWDTPeriodAterPWD = ((1000000*gu16PSCSELTable[gu32PeriodSel])/u32ActiveFreq)*u32TotalWWDTCnt - u32WWDTPeriodBeforePWD;
//    printf("Set WWDTCTL to 0x%08X then check [%s L->H->L period time] is around %d us.\n",
//            u32RegWWDTCTL, IO_BIT_STR, (u32WWDTPeriodBeforePWD + u32WWDTPeriodAterPWD + (4096*1000000/u32ActiveFreq)));
    printf("    [*] First low-period is around (%d * WWDT_CLK), %d us.\n", 10, ((1000000*gu16PSCSELTable[gu32PeriodSel])/u32ActiveFreq)*10);    
    printf("    [*] Total WWDT counter active period (low period only) is around %d us.\n\n", (u32WWDTPeriodBeforePWD + u32WWDTPeriodAterPWD));  

    printf("Select:\n");
    printf("    [0] Check WWDT and WDT counter behavior in PWD mode.\n");
    printf("    [1] WWDT counter will stop in IDLE mode.\n");
    u8Char = getchar();
    printf("    -> Select [%c]\n\n", u8Char);
                                                                      
    if (u8Char == '1')
    {
        CLK->PWRCTL = 0x13D;
        wwdt->CTL = u32RegWWDTCTL;
        
        while(1)
        {
            if (wwdt->CNT <= 40)
            {
                u32RegWWDTCNT = wwdt->CNT;
                IO_CTL = 1;
                break;
            }
        }
        
        wwdt->CTL = u32RegWDTCTL;
        __WFI();
        
        printf("\nWake-up and exit IDLE mode !\nCNTDAT before IDLE is %d, and after IDLE is %d.\n\n", u32RegWWDTCNT, wwdt->CNT);
        if (wwdt->CNT != u32RegWWDTCNT)
        {
            printf("[FAIL]\n");
            while(1);
        }            
        while(UART_IS_TX_EMPTY(DEBUG_PORT) == 0);
        
        while(1) 
        {
            if ((DEBUG_PORT->FIFOSTS&UART_FIFOSTS_RXEMPTY_Msk) == 0)
            {
                if ((DEBUG_PORT->DAT) == 0x1B)
                    ResetCHIP();
            }
        }
    }
    else 
    {
        /* To check if all the debug messages are finished */
        while(UART_IS_TX_EMPTY(DEBUG_PORT) == 0);
        
        IO_CTL = 0;
        wwdt->CTL = u32RegWWDTCTL;

        while(1) 
        {
            if (wwdt->CNT <= 53)
            {
                u32RegWWDTCNT = wwdt->CNT;
                IO_CTL = 1;
                break;
            }
        }

        {
            /* WDT enter to Power-down */       
//            SCB->SCR = 4;
            CLK->PWRCTL = 0x17F;
            CLK->PWRCTL = 0x1FF;
            wdt->CTL = u32RegWDTCTL;
        
            __WFI();
        }
        
        u32NewWWDTCNT = wwdt->CNT;
        IO_CTL = 0;
        StopWDTandResetCnt(wdt);
        
        CLK->PWRCTL = CLK->PWRCTL;
        printf("\nWake-up and exit PWD mode !\nCNTDAT before PWD is %d, and after PWD is %d. (PWRCTL:0x%08X)\n\n", 
                u32RegWWDTCNT, u32NewWWDTCNT, CLK->PWRCTL);
        if (u32NewWWDTCNT != u32RegWWDTCNT)
        {
            printf("*** [FAIL] ***\n\n");
            while(1);
        }
        else
        {
            printf("\t[PASS]\n\n");
        }    

        while(1) 
        {
            if ((DEBUG_PORT->FIFOSTS&UART_FIFOSTS_RXEMPTY_Msk) == 0)
            {
                if ((DEBUG_PORT->DAT) == 0x1B)
                    ResetCHIP();
            }
        }
    }
}

void WWDT_CMPDATLimitationTest_F(WWDT_T *wwdt, uint8_t u8Mode)
{
    uint8_t u8Char;
    volatile uint32_t i, u32Cnt;
    volatile uint32_t u32RegCTL, u32RegSTATUS, u32PSC;
    uint8_t au8CMP[] = {0x03, 0x3E, 0x02, 0x3F, 0x02, 0x3E, 0x01, 0x3F, 0x00, 0x01, 0x0};

    printf("\nWWDT CMPDAT and PSCSEL Limitation Test.\n\n");   

    IO_CTL = 1;

    /* Clear WWDT status first */
    wwdt->STATUS = wwdt->STATUS;

    printf("Select:\n");
    printf("    [0] Prescale 1 (PSCSEL 0x0), CMPDAT 0x03. System will not reset.\n");
    printf("    [1] Prescale 1 (PSCSEL 0x0), CMPDAT 0x3E. System will not reset.\n");
    printf("    [2] Prescale 1 (PSCSEL 0x0), CMPDAT 0x02. System will reset.\n");
    printf("    [3] Prescale 1 (PSCSEL 0x0), CMPDAT 0x3F. System will reset.\n");
    printf("    [4] Prescale 2 (PSCSEL 0x1), CMPDAT 0x02. System will not reset.\n");
    printf("    [5] Prescale 2 (PSCSEL 0x1), CMPDAT 0x3E. System will not reset.\n");
    printf("    [6] Prescale 2 (PSCSEL 0x1), CMPDAT 0x01. System will reset.\n");
    printf("    [7] Prescale 2 (PSCSEL 0x1), CMPDAT 0x3F. System will reset.\n");
    printf("    [8] Prescale 4 (PSCSEL 0x2), CMPDAT 0x00. System will reset.\n");
    printf("    [9] Prescale 4 (PSCSEL 0x2), CMPDAT 0x01. System will not reset.\n");
    printf("    [A] Prescale 2048 (PSCSEL 0xF), CMPDAT 0x0. Measure WWDTCNT 0 -> System reset.\n");
    u8Char = getchar();
    if ((u8Char == 'a') || (u8Char == 'A'))
    {
        IO_CTL = 1;
        printf("    -> Select [%c]\n\n", u8Char);
        wwdt->CTL = (0<<WWDT_CTL_CMPDAT_Pos) | (0xF<<WWDT_CTL_PSCSEL_Pos) | WWDT_CTL_WWDTEN_Msk;
        IO_CTL = 0;
        while(wwdt->CNT != 0x0) {}
        IO_CTL = 0;
        printf("STS: 0x%X\n", wwdt->STATUS);
        printf("STS: 0x%X\n", wwdt->STATUS);
        printf("STS: 0x%X\n", wwdt->STATUS);
        printf("STS: 0x%X\n", wwdt->STATUS);
        printf("STS: 0x%X\n", wwdt->STATUS);
        while(1);
    }
    
    u8Char = u8Char - '0';
    i = (u8Char>10)? 0:u8Char;
    printf("    -> Select [%d]\n\n", i);

    u32PSC = i/4;
    gu32CMPDAT = au8CMP[i];
    
//    printf("Setting PSCSEL is 0x%X, CMPDAT is 0x%X.\n", gu32PeriodSel, gu32CMPDAT);
    printf("Setting PSCSEL is 0x%X, CMPDAT is 0x%X.\n", u32PSC, gu32CMPDAT);

    u32RegCTL = (gu32CMPDAT<<WWDT_CTL_CMPDAT_Pos) | (u32PSC<<WWDT_CTL_PSCSEL_Pos) | WWDT_CTL_WWDTEN_Msk;

    IO_CTL = 1;
    printf("Check WWDT time-out period by measure %s. (WWDT_CTL:0x%08X)\n\n", IO_BIT_STR, u32RegCTL);   

    printf("Hit any key to start WWDT counter and check if the interval period is about %d us.\n", 
            ((1000000*gu16PSCSELTable[u32PSC])/gu32WWDTCLKFreq)*(64-gu32CMPDAT));
    getchar();
    IO_CTL = 0;

    /* Reset Timer0 CNT to 0 */
    RST_TM0CNT;  
    
    wwdt->CTL = u32RegCTL;
    if (wwdt->CTL != u32RegCTL)
    {
        printf("Write WWDT_CTL FAIL.\n\n");
        while(1);
    }
    
    i = 0;
    while(1) 
    {
        if (WWDT_GET_INT_FLAG())
        {
// remove printf to avoid WWDT time-out reset ... printf time > wwdt period            
//            /* Get Timer0 CNT and reset Timer0 CNT to 0 */
//            u32Cnt = GET_TM0CNT; RST_TM0CNT;                  
            IO_CTL ^= 1;
            
            WWDT_CLEAR_INT_FLAG();
            WWDT_RELOAD_COUNTER();               
        }
        if ((DEBUG_PORT->FIFOSTS&UART_FIFOSTS_RXEMPTY_Msk) == 0)
        {
            if ((DEBUG_PORT->DAT) == 0x1B)
                ResetCHIP();
        }
    }
}

void WWDT_TEST(WWDT_T *wwdt, uint8_t u8Mode)
{    
    switch(u8Mode)
    {
        case 0:
        {
            WWDT_RegisterTest_A(wwdt, 0xFF);
            break;
        }

        case 1:
        {
            WWDT_BasicFunctionTest_BC(wwdt, 0x00); /* bit[1]: Interrupt/Polling; bit[0]: RegWrite Unlock/Lock */
            break;
        }

        case 2:
        {
            printf("\n");
            WWDT_BasicFunctionTest_BC(wwdt, 0x11); /* bit[1]: Interrupt/Polling; bit[0]: RegWrite Unlock/Lock */
            break;
        }

        case 3:
        {
            WWDT_RLDCNTFeatureTest_D(wwdt, 0xFF);
            break;
        }

        case 4:
        {
            WWDT_CheckCounterBehaviorInPWD_E(WDT2, wwdt, 0xFF);
            break;
        }
        
        case 5:
        {
            WWDT_CMPDATLimitationTest_F(wwdt, 0xFF);
            break;
        }
    }
}
