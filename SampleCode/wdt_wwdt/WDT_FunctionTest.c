#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "NuMicro.h"

#include "WDT_WWDT_Test.h"

extern void Delay(uint32_t ticks);

volatile uint32_t gu32WDTTOUTFlag = 0, gu32WDTRSTFlag = 0, gu32WDTWKFlag = 0;

uint32_t gu32PeriodTable[9];
const char *gacTOUTIntervalLIRC[] = 
//    {"1.6 ms", "6.4 ms", "25.6 ms", "102.4 ms", "409.6 ms", "1.6384 s", "6.5536 s", "26.2144 s", "104.8576 s"}; // LIRC10K
    {"0.5 ms", "2 ms", "8 ms", "32 ms", "128 ms", "512 ms", "2048 ms", "8192 ms", "32768 ms"}; // LIRC32
const char *gacTOUTIntervalLXT[] = 
    {"0.49 ms", "1.95 ms", "7.81 ms", "31.25 ms", "125 ms", "500 ms", "2000 ms", "8000 ms", "32000 ms"};
volatile uint32_t g_u32Reg0, g_u32Reg1;
volatile uint8_t gu8IsSuccessivePWDTest = FALSE;
volatile uint32_t g_u32TMR2Ticks = 0;

void TMR2_IRQHandler(void)
{
    if (TIMER_GetIntFlag(TIMER2) == 1)
    {
        g_u32TMR2Ticks++;
        TIMER_ClearIntFlag(TIMER2);
    }
}

void WDT_IRQHandler()
{
  if (g_u8IsAllWDTandWWDTTest == 1)
  {
    if (WDT_GET_TIMEOUT_INT_FLAG(WDT2) == 1)
    {
        if ((DEBUG_PORT->FIFOSTS&UART_FIFOSTS_RXEMPTY_Msk) == 0)
        {
            char ch = DEBUG_PORT->DAT;
            if (ch == '0')
                WWDT_RELOAD_COUNTER(); // reload WWDT
        }
        WDT_RESET_COUNTER(WDT2);
        WDT2->CTL |= WDT2->CTL;
            WDT_RESET_COUNTER(WDT2);
            WDT_RESET_COUNTER(WDT2);
            WDT_RESET_COUNTER(WDT2);
            WDT_RESET_COUNTER(WDT2);
            WDT_RESET_COUNTER(WDT2);
            WDT_RESET_COUNTER(WDT2);
            WDT_RESET_COUNTER(WDT2);
            WDT_RESET_COUNTER(WDT2);
            WDT_RESET_COUNTER(WDT2);
            WDT_RESET_COUNTER(WDT2);
        PA0 ^= 1;
    }
    return ;
  }
    
    if (gu8IsSuccessivePWDTest) 
    {
        WDT2->CTL = (WDT2->CTL | WDT_CTL_RSTCNT_Msk);
        return ;
    }
    
    if ((WDT_GET_TIMEOUT_INT_FLAG(WDT2) == 1) || (WDT_GET_RESET_FLAG(WDT2) == 1))
    {
        g_u32Reg0 = WDT2->CTL;

        if ((g_u32Reg0&WDT_CTL_IF_Msk) == WDT_CTL_IF_Msk)
            gu32WDTTOUTFlag = 1;	 
            
        if ((g_u32Reg0&WDT_CTL_RSTF_Msk) == WDT_CTL_RSTF_Msk)
            gu32WDTRSTFlag = 1;	 
        
        if ((g_u32Reg0&WDT_CTL_WKF_Msk) == WDT_CTL_WKF_Msk)
            gu32WDTWKFlag = 1;	 

        WDT2->CTL = g_u32Reg0;
        g_u32Reg1 = WDT2->CTL;
        
        /* If RSTEN enabled, RSTCNT to avoid WDT2 time-out reset event */
        if ((g_u32Reg0&WDT_CTL_RSTEN_Msk) == WDT_CTL_RSTEN_Msk)
        {
            WDT_RESET_COUNTER(WDT2);
            //WDT2->CTL |= WDT_CTL_RSTCNT_Msk;
        }
    }
}

void WDT_TimeoutIntervalTest_01(WDT_T *wdt, int32_t i32TimeoutSel)
{
    uint32_t i = 0, u32EndOfItem = 0;
    volatile long u32TimeBase;
    volatile uint32_t u32GetInterval, u32TDeviationt;
    volatile uint32_t u32RegCTL, u32NewCTL;
    volatile uint32_t u32Cnt, u32Cnt1, u32Cnt2;
    float fDiff;
   
    IO_CTL = 1;
    {
        TIMER3_Init(100000);
        
        printf("\nWDT Time-Out Interval Selection Test. (Mode: 0x%X) (CLKSEL3:0x%08X, Freq: %d)\n\n",
                i32TimeoutSel, CLK->CLKSEL3, gu32WDTCLKFreq);

        u32TimeBase = (1000000*1000) / gu32WDTCLKFreq; /* ? x ns, per clock */
        gu32PeriodTable[0] = (u32TimeBase * (1<<4)) / 1000;
        gu32PeriodTable[1] = (u32TimeBase * (1<<6)) / 1000;
        gu32PeriodTable[2] = (u32TimeBase * (1<<8)) / 1000;
        gu32PeriodTable[3] = (u32TimeBase * (1<<10)) / 1000;
        gu32PeriodTable[4] = (u32TimeBase * (1<<12)) / 1000;
        gu32PeriodTable[5] = (u32TimeBase * (1<<14)) / 1000;
        gu32PeriodTable[6] = (u32TimeBase * (1<<16)) / 1000;
        gu32PeriodTable[7] = (u32TimeBase * (1<<18)) / 1000;
        gu32PeriodTable[8] = (u32TimeBase * (1<<20)) / 1000;
    }

    if (i32TimeoutSel == 0x5a5a0000)
    {
        printf("*** Check WDT2 IF generates when INTEN is disabled.\n\n");
        i = 0;
        u32EndOfItem = 0;
    }
    else if (i32TimeoutSel == 0x5a5a0001)
    {
        printf("*** Update TOUTSEL setting before WDT2 IF generated.\n\n");
        i = 3;
        u32EndOfItem = 3;
    }
    else if (i32TimeoutSel == 0x5a5a0002)
    {
        printf("*** Wait WDT2 IF, then delay (1/2 time-out period) and clear WDT2 IF then check the time-out period again.\n\n");
        i = 3;
        u32EndOfItem = 3;
    }
    else if (i32TimeoutSel == -1)
    {  
        i = 0;
        {
            if (((CLK->CLKSEL3 & CLK_CLKSEL3_WDT2SEL_Msk) >> CLK_CLKSEL3_WDT2SEL_Pos) == 0x2)
                u32EndOfItem = 7; // avoid timer counter overflow
            else
                u32EndOfItem = 8;
        }
    }
    else if ((i32TimeoutSel >= 0) && (i32TimeoutSel <= 8))
    { 
        i = u32EndOfItem = i32TimeoutSel;
    }
    else 
    {
        printf("Input parameter error.\n");
        while(SYS->PDID) {}
    }

    StopWDTandResetCnt(wdt);    
    
    if (i32TimeoutSel == 0x5a5a0000)
    { /* Test for INTEN and IF bit */
        printf("Time-out interval is about %d us.\n", gu32PeriodTable[i]);
        
        u32RegCTL = 0x80 | (i<<WDT_CTL_TOUTSEL_Pos);
        printf("    Setting WDT_CTL:0x%08X and TOUTSEL:%d\n", u32RegCTL, i);
        wdt->CTL = u32RegCTL;
        Delay((gu32PeriodTable[i]*6)/5); // gu32PeriodTable[i] * 1.2
        if (WDT_GET_TIMEOUT_INT_FLAG(wdt))
        {
            printf("WDT2 IF is ouucrred when INTEN disabled ... PASS.\n\n");
        }
        else 
        {
            printf("WDT2 IF is not ouucrred ... FAIL.\n");
            while(SYS->PDID);
        }
        StopWDTandResetCnt(wdt);  
        return ;
    }
    else if (i32TimeoutSel == 0x5a5a0001)
    { /* Test for update TOUTSEL before WDT2 IF generated */
        printf("Original time-out interval is about %d us.\n", gu32PeriodTable[i]);
        printf("Final time-out interval is about %d us.\n", gu32PeriodTable[i+1]);
        
        u32RegCTL = 0x80 | (i<<WDT_CTL_TOUTSEL_Pos);
        printf("    Setting WDT_CTL:0x%08X and TOUTSEL:%d\n", u32RegCTL, i);
        wdt->CTL = u32RegCTL;
            /* Reset Timer0 CNT to 0 */
            CLR_TM0FLAG;
            RST_TM0CNT;
                 
        Delay(gu32PeriodTable[i]/2/1000);
            u32RegCTL = 0x80 | (7<<WDT_CTL_TOUTSEL_Pos);
            wdt->CTL = u32RegCTL;
            u32NewCTL = wdt->CTL;
            if (u32NewCTL != u32RegCTL)
            {
                printf("\nProgram CTL fail. (0x%x)\n", u32NewCTL);
                while(SYS->PDID);
            }
            Delay(gu32PeriodTable[i]/10/1000);
            u32RegCTL = 0x80 | (i<<WDT_CTL_TOUTSEL_Pos);
            wdt->CTL = u32RegCTL;
            u32NewCTL = wdt->CTL;
            if (u32NewCTL != u32RegCTL)
            {
                printf("\nProgram CTL fail. (0x%x)\n", u32NewCTL);
                while(SYS->PDID);
            }
            Delay(gu32PeriodTable[i]/10/1000);
            u32RegCTL = 0x80 | (5<<WDT_CTL_TOUTSEL_Pos);
            wdt->CTL = u32RegCTL;
            u32NewCTL = wdt->CTL;
            if (u32NewCTL != u32RegCTL)
            {
                printf("\nProgram CTL fail. (0x%x)\n", u32NewCTL);
                while(SYS->PDID);
            }
            Delay(gu32PeriodTable[i]/10/1000);
        
        wdt->CTL = 0x80 | ((i+1)<<WDT_CTL_TOUTSEL_Pos); // Increase one to TOUTSEL 
        /* Wait WDT2 time-out interrupt flag and clear to 0 */
        while((wdt->CTL&WDT_CTL_IF_Msk) == 0x0) {};

            /* Get Timer0 CNT and reset Timer0 CNT to 0 */
            u32Cnt = GET_TM0CNT;
        
        printf("WDT_CTL:0x%08X and time-out occurred ! (%d us)", wdt->CTL, (u32Cnt*10));

        StopWDTandResetCnt(wdt);      
            
        u32GetInterval = (u32Cnt*10); // us
        if (u32GetInterval > gu32PeriodTable[i])
        {
            u32TDeviationt = u32GetInterval - gu32PeriodTable[i+1];
        }
        else
        {
            u32TDeviationt = gu32PeriodTable[i+1] - u32GetInterval;
        }            
        fDiff = (float)u32TDeviationt/gu32PeriodTable[i+1];
        
        if ((fDiff*100) >= 2)
        {
            printf("\n\n    Interval period is out off range.\n");
            getchar();
        }
        else 
        {
            printf(" ... PASS.\n\n");
        }                    
        return ;
    }
    else if (i32TimeoutSel == 0x5a5a0002)
    { /* Test for dealy (1/2 time-out period) then clear WDT2 IF */
        printf("Time-out interval is about %d us.\n", gu32PeriodTable[i]);
        
        u32RegCTL = 0x80 | (i<<WDT_CTL_TOUTSEL_Pos);
        printf("    Setting WDT_CTL:0x%08X and TOUTSEL:%d\n", u32RegCTL, i);
        wdt->CTL = u32RegCTL;
        RST_TM0CNT;
        
        while(WDT_GET_TIMEOUT_INT_FLAG(wdt) == 0);
        u32Cnt = GET_TM0CNT; RST_TM0CNT;
        WDT_CLEAR_TIMEOUT_INT_FLAG(wdt);
        
        while(WDT_GET_TIMEOUT_INT_FLAG(wdt) == 0);
        u32Cnt1 = GET_TM0CNT; RST_TM0CNT;
        Delay(gu32PeriodTable[i]/2/1000);
        WDT_CLEAR_TIMEOUT_INT_FLAG(wdt);
        
        while(WDT_GET_TIMEOUT_INT_FLAG(wdt) == 0);
        u32Cnt2 = GET_TM0CNT; RST_TM0CNT;
        WDT_CLEAR_TIMEOUT_INT_FLAG(wdt);
        
        u32TDeviationt = 200;
        if (IsWithinTheRange((u32Cnt*10), (gu32PeriodTable[i]+u32TDeviationt), (gu32PeriodTable[i]-u32TDeviationt)) != 0)
        {
            printf("Time-out interval %d us, FAIL. (A)\n", (u32Cnt*10));
            while(1);
        }
        if (IsWithinTheRange((u32Cnt1*10), (gu32PeriodTable[i]+u32TDeviationt), (gu32PeriodTable[i]-u32TDeviationt)) != 0)
        {
            printf("Time-out interval %d us, FAIL. (B)\n", (u32Cnt1*10));
            while(1);
        }
        if (IsWithinTheRange((u32Cnt2*10), (gu32PeriodTable[i]+u32TDeviationt), (gu32PeriodTable[i]-u32TDeviationt)) != 0)
        {
            printf("Time-out interval %d us, FAIL. (C)\n", (u32Cnt2*10));
            while(1);
        }
        printf("[PASS]\n");
        
        StopWDTandResetCnt(wdt);  
        return ;
    }

    do {
        printf("Check time-out interval is about %d us or not.\n", gu32PeriodTable[i]);
                
        /* Enable WDTEN, INTEN, RSTCNT and set TOUTSEL to [i] */
        u32RegCTL = 0xC0 | (i<<WDT_CTL_TOUTSEL_Pos);
        printf("    Setting WDT_CTL:0x%08X and TOUTSEL:%d\n", u32RegCTL, i);
      	printf("    Wait ... ");  
      
        /* Reset WDT2 counter and try to clear IF to measure WDT2 time-out interval */
        wdt->CTL = u32RegCTL;
            /* Reset Timer0 CNT to 0 */
            RST_TM0CNT;
        while(wdt->CTL&WDT_CTL_SYNC_Msk) 
        {
            RST_TM0CNT;
        }
        IO_CTL = 0;    
        u32NewCTL = wdt->CTL;
        if (u32NewCTL != u32RegCTL)
        {
            printf("\nProgram CTL fail. (0x%x)\n", u32NewCTL);
            while(SYS->PDID);
        }

        /* Wait WDT2 time-out interrupt flag and clear to 0*/
        while((wdt->CTL&WDT_CTL_IF_Msk) == 0x0) {};

            /* Get Timer0 CNT and reset Timer0 CNT to 0 */
            u32Cnt = GET_TM0CNT;
IO_CTL = 1;    
        
        StopWDTandResetCnt(wdt);        
        if (gu32WDTCLKFreq == gu32LIRCFreq)
        {
            u32GetInterval = (u32Cnt*10); // us
            if (u32GetInterval > gu32PeriodTable[i])
            {
                u32TDeviationt = u32GetInterval - gu32PeriodTable[i];
            }
            else 
            {
                u32TDeviationt = gu32PeriodTable[i] - u32GetInterval;
            }            
            fDiff = (float)u32TDeviationt/gu32PeriodTable[i];
            
            printf("1.Time-out occurred ! (Get %d us, Diff %d) (%f%%)\n\n", (u32Cnt*10), u32TDeviationt, fDiff);
            if (u32TDeviationt > (gu32PeriodTable[i]/5))
            { // deviation 20%
                printf("    Interval period is out off range. Hit any key to continue. (Diff:%d)\n\n", (u32GetInterval-gu32PeriodTable[i]));
                getchar();
            }    
        }
        else 
        {
            u32GetInterval = (u32Cnt*10); // us
            if (u32GetInterval > gu32PeriodTable[i])
            {
                u32TDeviationt = u32GetInterval - gu32PeriodTable[i];
            }
            else 
            {
                u32TDeviationt = gu32PeriodTable[i] - u32GetInterval;
            }            
            fDiff = (float)u32TDeviationt/gu32PeriodTable[i];
            
            printf("2.Time-out occurred ! (Get %d us, Diff %d) (%f%%)\n\n", (u32Cnt*10), u32TDeviationt, fDiff);
//            if (u32TDeviationt > ((gu32PeriodTable[i]*1)/100)) {
            if (u32TDeviationt > ((gu32PeriodTable[i]*2)/100))
            { // deviation 2%
                printf("    Interval period is out off range. Hit any key to continue. (Diff:%d)\n\n", (u32GetInterval-gu32PeriodTable[i]));
                getchar();
            }    
        }            
    } while(i++ < u32EndOfItem);
} 


void WDT_RSTDSELTest_02(WDT_T *wdt)
{
    uint8_t u8Char;
	uint32_t u32RegCTL, u32RegALTCTL, u32NewCTL;

    printf("\nWDT Time-out Reset Delay Selection Test. (CLKSEL3:0x%08X)\n\n", CLK->CLKSEL3);

    StopWDTandResetCnt(wdt);    

    printf("Select Reset Delay Period first\n");
    printf("    [0] (1026) * WDT_CLK    \n");
    printf("    [1] (130) * WDT_CLK     \n");
    printf("    [2] (18) * WDT_CLK      \n");
    printf("    [3] (3) * WDT_CLK       (CPU halt->resume->halt->resume...)\n");
    u8Char = getchar();
    printf("    -> [%c]\n\n", u8Char);

    u32RegALTCTL = u8Char - '0';
    u32RegALTCTL = (u32RegALTCTL > 3)? 0:(u32RegALTCTL & WDT_ALTCTL_RSTDSEL_Msk);
    wdt->ALTCTL = u32RegALTCTL;
        
#if (ENABLE_WDT_ICEDEBUG == 1)
    /* Enable WDTEN, RSTEN and set TOUTSEL to x */
    u32RegCTL = 0x582 | (0<<WDT_CTL_TOUTSEL_Pos);
    printf("Setting WDT_CTL:0x%08X, RSTDSEL:%d.\n", u32RegCTL, wdt->ALTCTL);
#else
    /* Enable WDTEN, RSTEN and set TOUTSEL to x */
    u32RegCTL = 0x82 | (0<<WDT_CTL_TOUTSEL_Pos);
    printf("(Measure %s low period time to check Reset Delay Period period).\n\n", IO_BIT_STR);
    printf("Setting WDT_CTL:0x%08X, RSTDSEL:%d.\n", u32RegCTL, wdt->ALTCTL);
    printf("Hit any key to check WDT2 behavior. \n([R]/[r] to reset WDT2 counter to avoid WDT2 time-out reset)\n\n");
#endif
    
    IO_CTL = 1;

#if (ENABLE_WDT_ICEDEBUG == 1)
    ;
#else
    /* Hit any key to start WDT2 counting */
    u8Char = getchar();
    if ((u8Char == 'R') || (u8Char == 'r'))
    {
        printf("System will NOT reset. Measure time-out period time.\n\n");
    }
    else
    {
        printf("System will be reset by WDT2 time-out reset system event.\n\n");
    }
#endif    
        
    wdt->CTL = u32RegCTL;
    while(wdt->CTL&WDT_CTL_SYNC_Msk);
    IO_CTL = 0;

    u32NewCTL = wdt->CTL;
    if (u32NewCTL != u32RegCTL)
    {
        printf("Program CTL fail. (0x%x)\n", u32NewCTL);
        while(SYS->PDID);
    }
    
    SYS_LockReg();
    
#if (ENABLE_WDT_ICEDEBUG == 1)
    WDT_RESET_COUNTER(wdt);
    
    SYS_LockReg();
    wdt->CTL |= WDT_CTL_ICEDEBUG_Msk;
    if ((wdt->CTL&WDT_CTL_ICEDEBUG_Msk) == WDT_CTL_ICEDEBUG_Msk)
    {
        printf("ICEDEBUG can be set after SYS_LockReg() ... FAILED.\n");
        while(1);
    }
    
    /* Halt CPU in SYS_UnlockReg() and system will not be reset */
    /* Halt CPU in SYS_UnlockReg() and system will not be reset */
    /* Halt CPU in SYS_UnlockReg() and system will not be reset */
    SYS_UnlockReg();
    
    wdt->CTL |= WDT_CTL_ICEDEBUG_Msk; /* Halt here to avoid WDT2 time-out reset */
    if ((wdt->CTL&WDT_CTL_ICEDEBUG_Msk) == 0)
    {
        printf("ICEDEBUG can not set after SYS_UnlockReg() ... FAILED.\n");
        while(1);
    }
    
    /* Halt CPU in while(1) and system will be reset */
    /* Halt CPU in while(1) and system will be reset */
    /* Halt CPU in while(1) and system will be reset */
    while(1) 
    {
        WDT_RESET_COUNTER(wdt);
    }
#endif    
    
    if ((u8Char == 'R') || (u8Char == 'r'))
    {
        while(1) 
        {
            if (WDT_GET_TIMEOUT_INT_FLAG(wdt) == 1)
            {
                WDT_RESET_COUNTER(wdt); 
                /* Reset WDT2 counter need 2*WDT_CLK. Time-out period will be delay around 2*WDT_CLK. */ 
                IO_CTL ^= 1;
                WDT_CLEAR_TIMEOUT_INT_FLAG(wdt);
            }
        }           
    }
    else 
    {
        while(1) 
        {
            if (WDT_GET_TIMEOUT_INT_FLAG(wdt) == 1)
            {
                WDT_CLEAR_TIMEOUT_INT_FLAG(wdt);
            }
        }           
    }
} 


void WDT_RSTDSELWithSWDelayTest_03(WDT_T *wdt, uint32_t u32RSTDSEL)
{
    uint8_t u8Char;
	uint32_t u32RegCTL, u32NewCTL;
    uint32_t u32TotalDelayUs;
    long u32Delay_10us;

    printf("\nWDT Time-out Reset Delay with SW Delay Test. (CLKSEL3:0x%08X)\n\n", CLK->CLKSEL3);

    StopWDTandResetCnt(wdt);    

    wdt->ALTCTL = u32RSTDSEL;
        
    /* Enable WDTEN, RSTEN and set TOUTSEL to 2 */
    u32RegCTL = 0x82 | (2<<WDT_CTL_TOUTSEL_Pos);

    printf("Select ");
    printf("Reset Delay %d*WDT_CLK\n", 
        (u32RSTDSEL==WDT_RESET_DELAY_3CLK)?3: ((u32RSTDSEL==WDT_RESET_DELAY_18CLK)?18: ((u32RSTDSEL==WDT_RESET_DELAY_130CLK)?130: 1026)));
    if (u32RSTDSEL == WDT_RESET_DELAY_3CLK)
    {
        printf("    [0] delay (0.9 * WDT_CLK) period then execute CNT reset cmd... system will not reset.\n");
        printf("    [1] delay (1.0 * WDT_CLK) period then execute CNT reset cmd... system will reset.\n");
        printf("    [2] delay (3.0 * WDT_CLK) period then execute CNT reset cmd... system will reset.\n");
        printf("    [3] delay (2.5 * WDT_CLK) period then execute CNT reset cmd... system will reset.\n");
        printf("    [Others] no any delay after WDT2 IF occurred\n");
    }
    else 
    {
        printf("    [0] delay (0.9 * WDT_CLK) period then execute CNT reset cmd... system will not reset.\n");
        printf("    [1] delay (1.0 * WDT_CLK) period then execute CNT reset cmd... system will not reset.\n");
        printf("    [2] delay (3.0 * WDT_CLK) period then execute CNT reset cmd... system will not reset.\n");
        printf("    [3] delay (2.5 * WDT_CLK) period then execute CNT reset cmd... system will not reset.\n");
        printf("    [Others] no any delay after WDT2 IF occurred\n");
    }    
    u8Char = getchar();
    printf("    -> [%c]\n\n", u8Char);
    
    if (u8Char == '0')
    {
        u32Delay_10us = ((((1000000/gu32WDTCLKFreq) * 1) / 10) * 9) / 10;
        printf("*** Delay time is %d us.\n\n", u32Delay_10us * 10);
    }
    else if (u8Char == '3')
    {
        u32Delay_10us = ((((1000000/gu32WDTCLKFreq) * 1) / 10) * 5) / 2;
        printf("*** Delay time is %d us.\n\n", u32Delay_10us * 10);
    }
    else if ((u8Char == '1') || (u8Char == '2'))
    {
        if (u8Char == '1')
            u32Delay_10us = ((1000000/gu32WDTCLKFreq) * 1) / 10;
        else
            u32Delay_10us = ((1000000/gu32WDTCLKFreq) * 3) / 10;
        printf("*** Delay time is %d us.\n\n", u32Delay_10us * 10);
    }
    else
    {
        u32Delay_10us = 1;
    }
    u32TotalDelayUs = u32Delay_10us * 10;
    
    printf("(Measure %s low period to check SW delay time).\n\n", IO_BIT_STR);
    printf("Setting WDT_CTL:0x%08X, RSTDSEL:0x%x.\n", u32RegCTL, wdt->ALTCTL);
    printf("Hit any key to start test, then [ESC] to next test.\n\n");
    
    IO_CTL = 1;

    /* Hit any key to start WDT2 counting */
    u8Char = getchar();
IO_CTL = 0;    
    
    wdt->CTL = u32RegCTL;
    u32NewCTL = wdt->CTL;
    if (u32NewCTL == u32RegCTL)
    {
        printf("FAIL. Enable WDTEN needs 2 * WDT_CLK.\n");
        while(1);
    }
    while(wdt->CTL&WDT_CTL_SYNC_Msk) {}
        
IO_CTL = 1;
    u32NewCTL = wdt->CTL;
    if (u32NewCTL != u32RegCTL)
    {
        printf("Program CTL fail. (0x%x)\n", u32NewCTL);
        printf("****************\n");
        printf("****************\n");
        printf("****************\n");
        while(SYS->PDID);
    }
    
    while(1) 
    {
        if (WDT_GET_TIMEOUT_INT_FLAG(wdt) == 1)
        {
IO_CTL = 0;
            WDT_CLEAR_TIMEOUT_INT_FLAG(wdt);
Delay(u32TotalDelayUs);
IO_CTL = 1; /* For measure real delay time */
            WDT_RESET_COUNTER(wdt);
        }
        if ((DEBUG_PORT->FIFOSTS&UART_FIFOSTS_RXEMPTY_Msk) == 0)
        {
            if ((DEBUG_PORT->DAT) == 0x1B)
            {
                WDT_RESET_COUNTER(wdt);
                break;
            }
        }
    }      
    
    StopWDTandResetCnt(wdt);    
} 


void PowerDownAndPullIOLow(WDT_T *wdt, uint32_t u32RegWDTCTL, uint32_t u32IsLIRCEN)
{       
    volatile uint32_t u32Reg;
    
//    SCB->SCR = 4;

    /* To program PWRCTL register, it needs to disable register protection first. */
    CLK->PWRCTL &= ~(CLK_PWRCTL_PDEN_Msk | CLK_PWRCTL_LIRCEN_Msk | CLK_PWRCTL_PDWKDLY_Msk);
//    CLK->PWRCTL &= ~(CLK_PWRCTL_PDWTCPU_Msk | CLK_PWRCTL_PDEN_Msk | CLK_PWRCTL_LIRCEN_Msk);
    CLK->PWRCTL |= (CLK_PWRCTL_PDEN_Msk | CLK_PWRCTL_PDWKIEN_Msk | (u32IsLIRCEN<<CLK_PWRCTL_LIRCEN_Pos));
    u32Reg = CLK->PWRCTL;
    printf("Enter to Power-down. PWRCTL is 0x%08X.\n\n", u32Reg);
    
    /* Check LIRCEN can be set 0 when WDT2 HW enabled */
    if (u32IsLIRCEN == 0)
    {
        if ((CLK->PWRCTL&CLK_PWRCTL_LIRCEN_Msk) != 0)
        {
            printf("xxxxxx Set LIRCEN 0 Fail...\n");
            while(1);
            //CLK->PWRCTL = (u32Reg & ~CLK_PWRCTL_LIRCEN_Msk);
        }
    }
    else 
    {
        if ((CLK->PWRCTL&CLK_PWRCTL_LIRCEN_Msk) != CLK_PWRCTL_LIRCEN_Msk)
        {
            printf("xxxxxx Set LIRCEN 1 Fail...\n");
            while(1);
        }
    }

    /* To check if all the debug messages are finished */
    while(UART_IS_TX_EMPTY(UART1) == 0);

    IO_CTL = 0;

    /* Is valid WDT_CTL setting ? */
    if (u32RegWDTCTL == 0xFFFF0000)
    {
        ;
    }
    else 
    {
        wdt->CTL = u32RegWDTCTL;  
    }

    __WFI();
    
    IO_CTL = 1;
}


void WDT_TimeoutWakeupTest_05(WDT_T *wdt, int32_t i32TimeoutSel)
{
    uint8_t u8Char;
    uint32_t u32IsLIRCEN = 1, u32IsLXTEN = 1;
	volatile uint32_t u32RegPWRCTL, u32RegCTL, u32RegALTCTL;
    
    printf("\nWDT Time-Out Wakeup Test. (CLKSEL3:0x%08X)\n\n", CLK->CLKSEL3);

    if ((gu32WDTCLKFreq != gu32LIRCFreq) && (gu32WDTCLKFreq != 32768UL))
    {
        printf("[WDT2 clock source should be either LIRC32 or LXT (32.768 kHz) for enter to Power-down normally]\n\n");
        getchar();
        printf("\n\n");
//        return;
    }

    StopWDTandResetCnt(wdt);

    if (i32TimeoutSel == -1)
    {
        i32TimeoutSel = 3;
        u32RegCTL = 0xD2 | (i32TimeoutSel<<WDT_CTL_TOUTSEL_Pos) | WDT_CTL_RSTCNT_Msk; /* Enable WDTEN, INTEN, WKEN, RSTCNT and configure TOUTSEL */;
    } 
    else if ((i32TimeoutSel >= 0) && (i32TimeoutSel <= 7))
    {
        u32RegCTL = 0xD2 | (i32TimeoutSel<<WDT_CTL_TOUTSEL_Pos) | WDT_CTL_RSTCNT_Msk; /* Enable WDTEN, INTEN, WKEN, RSTCNT and configure TOUTSEL */
    } 
    else 
    {
        printf("Input parameter error.\n");
        while(1);
    }
    
    printf("Current WDT_CTL:0x%08X, and target WDT_CTL should be 0x%08X for test.\n\n", wdt->CTL, u32RegCTL);

    if ((gu32CFG[0] & 0x4) == 0)
    {
        ; //WDT2 clock behavior and WDTEN bit is controlled by SW
    } 
    else 
    {
        printf("WDT2 function is forced enable by HW after chip power up.\n");
#if 0
        if ((gu32CFG[0]&CWDTEN_MSK) == CLIRCPDCTLEN_MSK)
        {
            printf("   10 kHz clock is controlled by LIRCEN bit when chip enters Power-down.\n");
        } 
        else 
        {
            printf("   10 kHz is forced enable when chip enters Power-down. (No matter LIRCEN bit is 0 or 1.)\n");
        }
#endif
        printf("\nChoose LIRCEN Check setting.\n");
        printf("    [0] LIRC disabled (PWRCTL[3])\n");   
        printf("    [1] LIRC enabled (PWRCTL[3]) \n");   
        u8Char = getchar();
        
        u32IsLIRCEN = (u8Char=='1')? 1:0;
        printf("    [LIRC is %s]\n\n", (u32IsLIRCEN==1)? "Enabled":"Disabled");
        /* Modify LIRCEN enable or disable in PowerDownAndPullIOLow() */
    }

    printf("Hit any key to enter Power-down mode, then check %s low period after WDT2 time-out wake-up occurred.\n", IO_BIT_STR);
    if (gu32WDTCLKFreq == gu32LIRCFreq)
    {
        printf("    (WDT2 time-out interval is %s based on LIRC)\n\n", gacTOUTIntervalLIRC[i32TimeoutSel]);
    }
    else 
    {
        printf("\nChoose LXTEN Check setting.\n");
        printf("    [0] LXTEN disabled (PWRCTL[1])\n");   
        printf("    [1] LXTEN enabled (PWRCTL[1]) \n");   
        u8Char = getchar();
        
        u32IsLXTEN = (u8Char=='1')? 1:0;
        printf("    [LXT is %s]\n\n", (u32IsLXTEN==1)? "Enabled":"Disabled");
        printf("    (WDT2 time-out interval is %s based on LXT)\n\n", gacTOUTIntervalLXT[i32TimeoutSel]);
        CLK->PWRCTL = (CLK->PWRCTL&~(CLK_PWRCTL_LXTEN_Msk)) | (u32IsLXTEN<<CLK_PWRCTL_LXTEN_Pos);
    }

    getchar();
    
    /* Enable WDT2 NVIC */
   	NVIC_EnableIRQ(WDT2_IRQn);
    
    gu32WDTTOUTFlag = gu32WDTWKFlag = 0;

    u32RegPWRCTL = CLK->PWRCTL;   
    
    PowerDownAndPullIOLow(wdt, u32RegCTL, u32IsLIRCEN);
           
 	printf("WDT2 time-out wake-up event occurred. (PWRCTL:0x%08X)\n", CLK->PWRCTL);
    while((CLK->PWRCTL&CLK_PWRCTL_PDEN_Msk) == CLK_PWRCTL_PDEN_Msk); /* PDEN bit must be cleared automatically */
    while((CLK->PWRCTL&CLK_PWRCTL_PDWKIF_Msk) != CLK_PWRCTL_PDWKIF_Msk);
    CLK->PWRCTL |= CLK_PWRCTL_PDWKIF_Msk;            
        
	printf("WDT_CTL status in WDT_IRQHandler is from 0x%08X to 0x%08X ... ", g_u32Reg0, g_u32Reg1);
	printf("[%s]\n\n", ((g_u32Reg0&0xFD7)==g_u32Reg1)? "PASS":"FAIL");

    if ((gu32WDTTOUTFlag == 0) || (gu32WDTWKFlag == 0))
    {
        IO_CTL = 0;
        printf("ERROR ... flag. (IF: %d, WKF: %d)\n", gu32WDTTOUTFlag, gu32WDTWKFlag);
        while(1);
    }

    gu32WDTTOUTFlag = gu32WDTWKFlag = 0;
    
	printf("Current WDT_CTL:0x%08X\n", wdt->CTL);      
    printf("Current PPWRCTL:0x%08X (Before PWD API:0x%08X)\n", CLK->PWRCTL, u32RegPWRCTL);
    printf("Current APBCLK0:0x%08X\n", CLK->APBCLK0);
    printf("==================================================\n\n");
    
    CLK->PWRCTL = u32RegPWRCTL;

    StopWDTandResetCnt(wdt);

	// Disable WDT2 NVIC
   	NVIC_DisableIRQ(WDT2_IRQn);
    
    CLK->PWRCTL |= CLK_PWRCTL_LXTEN_Msk;
} 


void WDT_SuccessivePWDTest_06(WDT_T *wdt, int32_t i32TimeoutSel)
{
	volatile uint32_t u32RegCTL0, u32RegCTL1;
    
    printf("\nWDT Time-Out Wakeup Loop Test. (CLKSEL3:0x%08X)\n\n", CLK->CLKSEL3);

    if ((gu32WDTCLKFreq != gu32LIRCFreq) && (gu32WDTCLKFreq != 32768UL))
    {
        printf("[Halt. WDT2 clock source should be either LIRC32 or LXT (32.768 kHz) for Power-down mode test]\n\n");
        getchar();
        return ;
    }

    StopWDTandResetCnt(wdt);

    if (i32TimeoutSel == -1)
    {
        i32TimeoutSel = 3;
        u32RegCTL0 = 0xD2 | (i32TimeoutSel<<WDT_CTL_TOUTSEL_Pos) | WDT_CTL_RSTCNT_Msk;     /* Enable WDTEN, INTEN, WKEN, RSTCNT and configure TOUTSEL */;
        u32RegCTL1 = 0xD2 | ((i32TimeoutSel-1)<<WDT_CTL_TOUTSEL_Pos) | WDT_CTL_RSTCNT_Msk; /* Enable WDTEN, INTEN, WKEN, RSTCNT and configure TOUTSEL */;
    } 
    else if ((i32TimeoutSel >= 1) && (i32TimeoutSel <= 8))
    {
        u32RegCTL0 = 0xD2 | (i32TimeoutSel<<WDT_CTL_TOUTSEL_Pos) | WDT_CTL_RSTCNT_Msk;     /* Enable WDTEN, INTEN, WKEN, RSTCNT and configure TOUTSEL */
        u32RegCTL1 = 0xD2 | ((i32TimeoutSel-1)<<WDT_CTL_TOUTSEL_Pos) | WDT_CTL_RSTCNT_Msk; /* Enable WDTEN, INTEN, WKEN, RSTCNT and configure TOUTSEL */;
    } 
    else 
    {
        printf("Input parameter error.\n");
        while(1);
    }
    
    printf("Hit any key to enter Power-dpwn mode, then check %s low period after WDT2 time-out wake-up occurred.\n", IO_BIT_STR);
    printf("    (WDT2 time-out interval is %s->%s->%s->%s ...... based on LIRC)\n", 
            gacTOUTIntervalLIRC[i32TimeoutSel], gacTOUTIntervalLIRC[i32TimeoutSel-1], gacTOUTIntervalLIRC[i32TimeoutSel-1], gacTOUTIntervalLIRC[i32TimeoutSel-1]);
    printf("    (WDT2 time-out interval is %s->%s->%s->%s ...... based on LXT)\n\n", 
            gacTOUTIntervalLXT[i32TimeoutSel], gacTOUTIntervalLXT[i32TimeoutSel-1], gacTOUTIntervalLXT[i32TimeoutSel-1], gacTOUTIntervalLXT[i32TimeoutSel-1]);

    /* Enable WDT2 NVIC */
   	NVIC_EnableIRQ(WDT2_IRQn);

    IO_CTL = 1;
    
    getchar();

    printf("[Start to test...]\n");
     /* To check if all the debug messages are finished */
    while(UART_IS_TX_EMPTY(UART1) == 0);
//////////////////////////////////////////////////////////////
            
    IO_CTL = 0;
    
    while(1) 
    {
    /* Power-down 1 */
        gu32WDTWKFlag = 0;
        
//        SCB->SCR = 4;

        /* To program PWRCTL register, it needs to disable register protection first. */
        CLK->PWRCTL &= ~(CLK_PWRCTL_PDEN_Msk | CLK_PWRCTL_LIRCEN_Msk);
        CLK->PWRCTL |= (CLK_PWRCTL_PDEN_Msk | CLK_PWRCTL_PDWKIEN_Msk | CLK_PWRCTL_LIRCEN_Msk);

        wdt->CTL = u32RegCTL0;  

        __WFI();
        IO_CTL = 1;
        if (!gu32WDTWKFlag)
        {
            printf("Error 1. Can't get WKF.\n");
        }

        while((CLK->PWRCTL&CLK_PWRCTL_PDEN_Msk) == CLK_PWRCTL_PDEN_Msk); /* PDEN bit must be cleared automatically */
        while((CLK->PWRCTL&CLK_PWRCTL_PDWKIF_Msk) != CLK_PWRCTL_PDWKIF_Msk);
        CLK->PWRCTL |= CLK_PWRCTL_PDWKIF_Msk;            


    /* Power-down 2 */
        gu32WDTWKFlag = 0;

//        SCB->SCR = 4;

        /* To program PWRCTL register, it needs to disable register protection first. */
        CLK->PWRCTL &= ~(CLK_PWRCTL_PDEN_Msk | CLK_PWRCTL_LIRCEN_Msk);
        CLK->PWRCTL |= (CLK_PWRCTL_PDEN_Msk | CLK_PWRCTL_PDWKIEN_Msk | CLK_PWRCTL_LIRCEN_Msk);

        wdt->CTL = u32RegCTL1;  

        __WFI();
        IO_CTL = 0;
        if (!gu32WDTWKFlag)
        {
            printf("Error 2. Can't get WKF.\n");
        }

        while((CLK->PWRCTL&CLK_PWRCTL_PDEN_Msk) == CLK_PWRCTL_PDEN_Msk); /* PDEN bit must be cleared automatically */
        while((CLK->PWRCTL&CLK_PWRCTL_PDWKIF_Msk) != CLK_PWRCTL_PDWKIF_Msk);
        CLK->PWRCTL |= CLK_PWRCTL_PDWKIF_Msk;            
    
    /* Successive Power-down */
        gu8IsSuccessivePWDTest = TRUE;
        while(1)
        {
            CLK->PWRCTL |= (CLK_PWRCTL_PDEN_Msk);
//            SCB->SCR = 4;
            __WFI();
            IO_CTL ^= 1;        
        }        
    }
}

#if 0
void WDT_ModifyCFG0Test_07(WDT_T *wdt, uint8_t u8Mode)
{
    uint8_t u8Char;
    uint32_t u32CFG0;
    
    printf("Select CWDTEN[2:0] value\n");
    u8Char = getchar();
    printf("%c\n", u8Char);
    
    u32CFG0 = gu32CFG[0] & ~CWDTEN_MSK;
    
    switch(u8Char) 
    {
        case '0':
            break;
        
        case '1':
            u32CFG0 |= BIT3;
            break;
        
        case '2':
            u32CFG0 |= BIT4;
        break;
        
        case '3':
            u32CFG0 |= (BIT3 | BIT4);
        break;
        
        case '4':
            u32CFG0 |= BIT31;
            break;
        
        case '5':
            u32CFG0 |= (BIT31 | BIT3);
            break;
        
        case '6':
            u32CFG0 |= (BIT31 | BIT4);
            break;
        
        case '7':
            u32CFG0 |= (BIT31 | BIT4 | BIT3);
            break;
        
        default:
            u32CFG0 = gu32CFG[0];
            break;
    }
    printf("[CFG0 should be 0x%08X] WDT2 clock source is %s.\n\n", u32CFG0, ((u32CFG0&CWDTEN_MSK)==CWDTEN_MSK)?"controlled by SW":"forced in LIRC");
    

    printf("Select: (The below setting only works if CWDTEN[2:0] is 0x3)\n");
    printf("    [0] Set CWDTPDEN 0 (CFG0[30]); 10 kHz clock is forced enable when chip enters Power-down.\n");
    printf("    [1] Set CWDTPDEN 1 (CFG0[30]); 10 kHz clock is controlled by LIRCEN bit when chip enters Power-down.\n");
    u8Char = getchar();
    printf("%c\n", u8Char);
    if (u8Char == '0')
    {
        u32CFG0 = u32CFG0 & ~CWDTPDEN_MSK;
    } 
    else 
    {
        u32CFG0 = u32CFG0 | CWDTPDEN_MSK;
    }
    printf("[New CFG0 should be 0x%08X]\n\n", u32CFG0);
   
    if ((u32CFG0&CWDTEN_MSK) == CWDTEN_MSK)
    {
        printf("    WDT2 function is controlled by SW after chip power up.\n");
    } 
    else 
    {
        printf("    WDT2 function is forced enable by HW after chip power up.\n");
        if ((u32CFG0&CWDTEN_MSK) == CLIRCPDCTLEN_MSK)
        {
            if ((u32CFG0&CWDTPDEN_MSK) == 0x0)
            {
                printf("    10 kHz clock is forced enable when chip enters Power-down. (No matter LIRCEN bit is 0 or 1.)\n");
            } 
            else 
            {
                printf("    10 kHz clock is controlled by LIRCEN bit when chip enters Power-down.\n");
            }            
        } 
        else 
        {
            printf("    10 kHz clock is forced enable when chip enters Power-down. (No matter LIRCEN bit is 0 or 1.)\n");
        }
    }

    printf("\n");
    printf("Hit [Y]/[y] to accept above setting and reset CHIP to reload new CFG setting.\n");
    u8Char = getchar();
    printf("\n");
    if ((u8Char == 'y') || (u8Char == 'Y'))
    {
        FMC_Erase(FMC_CONFIG_BASE);
        FMC_Write(FMC_CONFIG_BASE, u32CFG0);
        FMC_Write(FMC_CONFIG_BASE+0x4, gu32CFG[1]);

        ResetCHIP();
    }
    else 
    {
        printf("\nDon't change CFG setting.\n\n");
    } 
}
#endif

void WDT_RSTCNTRegisterTest_04(WDT_T *wdt)
{
	volatile uint32_t u32RegCTL0, i;
    volatile uint32_t u32TimeBase, u32TOUTTime[4];
    int32_t i32Err = 0;

    TIMER3_Init(1000000);
    
    printf("\nWDT RSTCNT Register Test. (CLKSEL3:0x%08X)\n\n", CLK->CLKSEL3);

    StopWDTandResetCnt(wdt);
    
    u32RegCTL0 = WDT_TIMEOUT_2POW12 | WDT_CTL_WDTEN_Msk;
   
    u32TimeBase = (1000000*1000) / gu32WDTCLKFreq; /* ? x ns, per clock */
    u32TimeBase = (u32TimeBase * (1<<12)) / 1000;
    printf("Standard time-out period is %d us. Hit any key to start test.\n\n", u32TimeBase);

    getchar();
        
    wdt->CTL = (u32RegCTL0 | WDT_CTL_RSTCNT_Msk);  
    WAIT_RSTCNTBIT(wdt);
    while(wdt->CTL&WDT_CTL_SYNC_Msk) {}
    
    /* Reset Timer0 CNT to 0 */
    RST_TM0CNT;  

    /* Enable write-protect to check if WDT_RSTCNT register work well or not */
    SYS_LockReg();

    IO_CTL = 0;    
    while(WDT_GET_TIMEOUT_INT_FLAG(wdt) == 0);
    u32TOUTTime[0] = GET_TM0CNT; RST_TM0CNT;
    WDT_CLEAR_TIMEOUT_INT_FLAG(wdt);
        /* Check disable WDTEN is invalid while SYS_LockReg() */
        wdt->CTL &= ~WDT_CTL_WDTEN_Msk;
        /* Check disable WDTEN is invalid while SYS_LockReg() */
        if ((wdt->CTL & WDT_CTL_WDTEN_Msk) == 0)
        {
            printf("FAIL ... WDTEN bit should not be cleared.\n");
            while(1);
        }
    Delay(50000); // 50 ms
    wdt->RSTCNT = WDT_RESET_COUNTER_KEYWORD;
    while(WDT_GET_TIMEOUT_INT_FLAG(wdt) == 0) 
    {
        if ((wdt->CTL & WDT_CTL_RSTCNT_Msk) == WDT_CTL_RSTCNT_Msk)
        {
            printf("WDT_CTL[0] status fail.\n");
            while(1);
        }            
    }
    u32TOUTTime[1] = GET_TM0CNT; RST_TM0CNT; // Should be TimeBase + 50 ms
    WDT_CLEAR_TIMEOUT_INT_FLAG(wdt);
    /* Check WDT_RSTCNT work well when SYS_LockReg() */
    
    
    /* Disable write-protect to check if WDT_RSTCNT work well or not */
    SYS_UnlockReg();

        /* Check disable WDTEN is ok while SYS_UnlockReg() */
        wdt->CTL &= ~WDT_CTL_WDTEN_Msk;
        if((wdt->CTL&WDT_CTL_WDTEN_Msk) == WDT_CTL_WDTEN_Msk) 
        {
            printf("FAIL ... WDTEN bit should be cleared.\n");
            while(1);
        }
        Delay(50000); // 50 ms
        wdt->CTL |= WDT_CTL_WDTEN_Msk;
    
    RST_TM0CNT;
    Delay(100000); // 100 ms
    wdt->RSTCNT = WDT_RESET_COUNTER_KEYWORD;
    while(WDT_GET_TIMEOUT_INT_FLAG(wdt) == 0) 
    {
        if ((wdt->CTL & WDT_CTL_RSTCNT_Msk) == WDT_CTL_RSTCNT_Msk)
        {
            printf("WDT_CTL[0] status fail.\n");
            while(1);
        }            
    }
    u32TOUTTime[2] = GET_TM0CNT; RST_TM0CNT; // Should be = (TimeBase + 100 ms)
    WDT_CLEAR_TIMEOUT_INT_FLAG(wdt);

    while(WDT_GET_TIMEOUT_INT_FLAG(wdt) == 0);
    u32TOUTTime[3] = GET_TM0CNT; RST_TM0CNT; // Should be = (TimeBase)
    WDT_CLEAR_TIMEOUT_INT_FLAG(wdt);
    
    printf("Time-out period time is %d, %d, %d, %d us.\n", u32TOUTTime[0], u32TOUTTime[1], u32TOUTTime[2], u32TOUTTime[3]);
    
    if (IsWithinTheRange(u32TOUTTime[0], (u32TimeBase+200), (u32TimeBase-200)) != 0)
    {
        i32Err |= (1<<0);
    }
    if (IsWithinTheRange(u32TOUTTime[1]-50000, (u32TimeBase+500), (u32TimeBase-500)) != 0)
    {
        i32Err |= (1<<1);
    }
    if (IsWithinTheRange(u32TOUTTime[2]-100000, (u32TimeBase+500), (u32TimeBase-500)) != 0)
    {
        i32Err |= (1<<2);
    }
    if (IsWithinTheRange(u32TOUTTime[3], (u32TimeBase+100), (u32TimeBase-100)) != 0)
    {
        i32Err |= (1<<3);
    }
    
    if (i32Err != 0)
    {
        printf("Period check FAIL. (0x%x)\n", i32Err);
        if (i32Err & 0x1)
            printf("0 diff: %d (%d, %d)\n", u32TOUTTime[0]-u32TimeBase, u32TOUTTime[0], u32TimeBase);
        if (i32Err & 0x2)
            printf("1 diff: %d (%d, %d)\n", u32TOUTTime[1]-u32TimeBase, u32TOUTTime[1], u32TimeBase);
        if (i32Err & 0x4)
            printf("2 diff: %d (%d, %d)\n", u32TOUTTime[2]-u32TimeBase, u32TOUTTime[2], u32TimeBase);
        if (i32Err & 0x8)
            printf("3 diff: %d (%d, %d)\n", u32TOUTTime[3]-u32TimeBase, u32TOUTTime[3], u32TimeBase);
        printf("*** Check deviation again (200, 500, 100000, 100)***\n\n");
        getchar();
    }
    else 
    {
        printf("0 diff: %d (%d, %d)\n", u32TOUTTime[0]-u32TimeBase, u32TOUTTime[0], u32TimeBase);
        printf("1 diff: %d (%d, %d)\n", u32TOUTTime[1]-u32TimeBase, u32TOUTTime[1], u32TimeBase);
        printf("2 diff: %d (%d, %d)\n", u32TOUTTime[2]-u32TimeBase, u32TOUTTime[2], u32TimeBase);
        printf("3 diff: %d (%d, %d)\n", u32TOUTTime[3]-u32TimeBase, u32TOUTTime[3], u32TimeBase);
        printf("Period check ... PASS.\n\n");
    }    
    
    printf("Write WDT_RSTCNT != 0x5AA5 will generate WDT2 IF flag ...\n");
    
    while(WDT_GET_TIMEOUT_INT_FLAG(wdt) == 0) {}
    RST_TM0CNT;
    WDT_CLEAR_TIMEOUT_INT_FLAG(wdt);
    i = 0;
    do {
        wdt->RSTCNT = i;
        if (i == 0x5AA4)
            i = 0x5AA6;
        else
            i++;
        
        if (WDT_GET_TIMEOUT_INT_FLAG(wdt))
        {
            u32TOUTTime[0] = GET_TM0CNT; RST_TM0CNT;
IO_CTL ^= 1;            
            wdt->RSTCNT = 0x12345678;
            Delay(20*100);
            WDT_CLEAR_TIMEOUT_INT_FLAG(wdt);
            if (gu32WDTCLKFreq == gu32LIRCFreq)
            {
                if (IsWithinTheRange(u32TOUTTime[0], (u32TimeBase+1000), (u32TimeBase-1000)) != 0)
                {
                    printf("Time-out period fail, %d us. (Diff: %d) (L%d)\n", 
                        u32TOUTTime[0], (u32TOUTTime[0]-u32TimeBase), __LINE__);  
                    getchar();
                }
                else 
                {
                    printf("0x%x\r", i);
                }
            }
            else
            {
                if (IsWithinTheRange(u32TOUTTime[0], (u32TimeBase+100), (u32TimeBase-100)) != 0)
                {
                    printf("Time-out period fail, %d us. (Diff: %d) (L%d)\n",
                        u32TOUTTime[0], (u32TOUTTime[0]-u32TimeBase), __LINE__);  
                    getchar();
                }
                else 
                {
                    printf("0x%x\r", i);
                }
            }
            wdt->RSTCNT = 0x87654321;
            
            if ((DEBUG_PORT->FIFOSTS&UART_FIFOSTS_RXEMPTY_Msk) == 0)
            {
                if ((DEBUG_PORT->DAT) == 27)
                    ResetCHIP();
            }
        }
    } while(i != 0xFFFFFFFF);
    
    printf("\nPASS. System halted.\n");
    while(SYS->PDID);
}

#if (ENABLE_RSTSRC_AND_WDT_TEST == 1)
void WDT_SysRSTSRCAndWDTCounterTest(uint8_t u8Mode)
{
    volatile uint32_t i = 0, u32CFG0, u32CFG1, u32CFG2, u32CFG3;
    uint8_t u8Char;
        
    if (u8Mode != 1)
        return ;

    g_au32PORValue[0] = SYS->RSTSTS;
    g_au32PORValue[1] = CLK->PWRCTL;
    g_au32PORValue[2] = CLK->APBCLK1;
    g_au32PORValue[3] = CLK->CLKSEL3;
    g_au32PORValue[4] = CLK->CLKSEL3;
    g_au32PORValue[5] = WDT2->CTL;
    g_au32PORValue[6] = WWDT->CTL;
    g_au32PORValue[7] = WDT2->ALTCTL;
    g_au32PORValue[8] = WWDT->STATUS;
    g_au32PORValue[9] = WDT1->CTL;
    g_au32PORValue[10] = WWDT1->CTL;
    g_au32PORValue[11] = WDT1->ALTCTL;
    g_au32PORValue[12] = WWDT1->STATUS;

    printf("\n");
    printf("[RSTSRC: 0x%08x; WDT_CTL: 0x%08x; WDT_ALTCTL: 0x%08x; WWDT_CTL: 0x%08x; WWDT_STATUS: 0x%08x]\n\n", 
        g_au32PORValue[0], g_au32PORValue[5], g_au32PORValue[7], g_au32PORValue[6], g_au32PORValue[8]);
    printf("[RSTSRC: 0x%08x]\nWDT_CTL: 0x%08x; WDT_ALTCTL: 0x%08x; WWDT_CTL: 0x%08x; WWDT_STATUS: 0x%08x;\n", 
        g_au32PORValue[0], g_au32PORValue[5], g_au32PORValue[7], g_au32PORValue[6], g_au32PORValue[8]);
    
    /* Clear all RSTSTS and WDT2 STS */
    SYS->RSTSTS |= SYS->RSTSTS;
    WDT2->CTL |= WDT2->CTL;

#if 0
    if ((g_au32PORValue[0]&SYS_RSTSTS_PORF_Msk) == SYS_RSTSTS_PORF_Msk)
    {
        printf("We got CHIP or POR reset flag.\n\n");
    }
    else 
    {
        printf("No CHIP or POR reset occurred.\n\n");
    }
    
    if ((g_au32PORValue[0] & SYS_RSTSTS_CPU0RST_Msk) == SYS_RSTSTS_CPU0RST_Msk)
    {
        printf("Get CPURF flag.\n");
    }
    else
    {
        printf("Get SYSRF flag.\n");
    }
    printf("WDT_CTL: 0x%08X.\n", g_au32PORValue[5]);
    while(1)
    {
        if ((g_au32PORValue[5]&0xC) == WDT_CTL_RSTF_Msk)
        {
            printf("    [RSTF]\n");
            while(1);
        }
        else if ((g_au32PORValue[5]&0xC) == WDT_CTL_IF_Msk)
        {
            printf("    [IF]\n");
        }
        else
        {
            printf("%d         \r", i++);
        }
        IO_CTL ^= 1;
    }
#endif

    printf(" [CLKSEL3:  0x%08X] *** check WDTSEL setting\n", g_au32PORValue[3]);
    /* Set WDT2 clock source LIRC first */
    CLK->CLKSEL3 = (CLK->CLKSEL3 & ~(CLK_CLKSEL3_WDT0SEL_Msk|CLK_CLKSEL3_WDT1SEL_Msk)) | (CLK_CLKSEL3_WDT0SEL_LIRC|CLK_CLKSEL3_WDT1SEL_LIRC);
    
    printf("\n");     
	printf("**********************************************************\n");
	printf("Select [Reset] source to check WDT2 behavior after reset. (WDT_CTL:0x%X, RSTSTS:0x%X)\n", WDT2->CTL, SYS->RSTSTS);
	printf("    (WDT_CLK is LIRC)\n");
	printf("    [0] NVIC reset system   (WDT_CTL will not be reset)\n");
	printf("    [1] Reset CPU           (WDT_CTL will not be reset)\n");
	printf("    [2] Reset CHIP          (WDT_CTL will be reset)\n");
	printf("    [3] Wait time-out       (WDT_CTL will be reset)\n");
	printf("    [4] WDT2 HW function is disabled, perform CHIP reset before RSTF 1\n");
	printf("    [5] WDT2 HW function is disabled, perform CPU reset before RSTF 1\n");
	printf("    [6] WDT2 HW function is enabled, perform CHIP reset before RSTF 1\n");
	printf("    [7] WDT2 HW function is enabled, perform CPU reset before RSTF 1\n");
    u8Char = getchar();
    u8Char = u8Char - '0';
    u8Char = (u8Char > 7)? 7:u8Char;
    
    if (u8Char == 0)
    {
        WDT2->CTL = 0x701;
        while((WDT2->CTL & WDT_CTL_RSTCNT_Msk) == WDT_CTL_RSTCNT_Msk); // wait RSTCNT bit clear
        WDT2->ALTCTL = 0;
        WDT1->CTL = 0x701;
        while((WDT1->CTL & WDT_CTL_RSTCNT_Msk) == WDT_CTL_RSTCNT_Msk); // wait RSTCNT bit clear
        WDT1->ALTCTL = 0;
        
        WDT2->CTL = 0x782;
        WDT1->CTL = 0x782;
        printf("Select [0].\n\n");  
        for(i=0; i<(1000000/10); i++) 
        {
            IO_CTL ^= 1;
            Delay(10);
        }
        printf("Execute...\n\n");  
        while(UART_IS_TX_EMPTY(UART1) == 0);
        SYS->IPRST0 = SYS_IPRST0_CHIPRST_Msk;
    }
    else if (u8Char == 1)
    {
        WDT2->CTL = 0x701;
        while((WDT2->CTL&WDT_CTL_RSTCNT_Msk) == WDT_CTL_RSTCNT_Msk); // wait RSTCNT bit clear        
        WDT2->ALTCTL = 1;
        
        WDT2->CTL = 0x782;
        printf("Select [1].\n\n");  
        for(i=0; i<(1000000/10); i++) 
        {
            IO_CTL ^= 1;
            Delay(10);
        }
        printf("Execute...\n\n");  
        while(UART_IS_TX_EMPTY(UART1) == 0);
        SYS->IPRST0 = SYS_IPRST0_CPURST_Msk;
    }
    else if (u8Char == 2)
    {
        WDT2->CTL = 0x701;
        while((WDT2->CTL&WDT_CTL_RSTCNT_Msk) == WDT_CTL_RSTCNT_Msk); // wait RSTCNT bit clear        
        WDT2->ALTCTL = 2;
        
        WDT2->CTL = 0x782;
        printf("Select [2].\n\n");  
        for (i=0; i<(1000000/10); i++)
        {
            IO_CTL ^= 1;
            Delay(10);
        }
        printf("Execute...\n\n");  
        while(UART_IS_TX_EMPTY(UART1) == 0);
        SYS->IPRST0 = SYS_IPRST0_CHIPRST_Msk;
    }
    else if (u8Char == 3)
    {
        /* Set WDT2 clock source HCLK first */
        CLK->CLKSEL3 = (CLK->CLKSEL3 & ~(CLK_CLKSEL3_WDT0SEL_Msk|CLK_CLKSEL3_WDT1SEL_Msk)) | (CLK_CLKSEL3_WDT0SEL_PCLK3_DIV4096|CLK_CLKSEL3_WDT1SEL_PCLK3_DIV4096);
        printf("Set WDT2 clock source PCLK3/4096...\n\n");
        WDT2->CTL = 0x701;
        while((WDT2->CTL&WDT_CTL_RSTCNT_Msk) == WDT_CTL_RSTCNT_Msk); // wait RSTCNT bit clear        
        WDT2->ALTCTL = 3;
        
        WDT2->CTL = 0x782;
        printf("Select [3]. Wait WDT2 time-out.\n\n");  
        while(UART_IS_TX_EMPTY(UART1) == 0);
        while(SYS->PDID)
            IO_CTL ^= 1;
    }

    printf("No action.\n");
    
    while(1) {}
}
#endif


void WDT_TIMERSourceFromLIRC_08(WDT_T *wdt, uint8_t u8Mode)
{
    volatile uint32_t i, u32CFG0;
    volatile uint32_t u32Reg;

    printf("Current CFG0 is 0x%08X.\n", gu32CFG[0]);

    CLK->APBCLK0 |= CLK_APBCLK0_TMR1CKEN_Msk;
    CLK->CLKSEL1 = (CLK->CLKSEL1&~CLK_CLKSEL1_TMR1SEL_Msk) | CLK_CLKSEL1_TMR1SEL_LIRC;

    printf("Check TIMER1 keeps counting and clock source from LIRC even if LIRCEN bit set 0 and WDT2 HW enabled.\n\n");
    if((CLK->PWRCTL&CLK_PWRCTL_LIRCEN_Msk) != CLK_PWRCTL_LIRCEN_Msk)
    {
        printf("Initial LIRCEN isn't 1. FAIL.\n");
        while(1);
    }

    u32Reg = CLK->PWRCTL;
    CLK->PWRCTL &= ~CLK_PWRCTL_LIRCEN_Msk;
    if((CLK->PWRCTL&CLK_PWRCTL_LIRCEN_Msk) != 0x0)
    {
        printf("Set LIRCEN 0 fail on Read-Modify-Write.\n");
        getchar();
    }

    u32Reg &= ~(CLK_PWRCTL_LIRCEN_Msk|CLK_PWRCTL_LXTEN_Msk);
    CLK->PWRCTL = u32Reg;
    if((CLK->PWRCTL&CLK_PWRCTL_LIRCEN_Msk) != 0x0)
    {
        printf("Set LIRCEN 0 fail on direct clear LIRCEN bit. (W:0x%X, R:0x%X)\n", u32Reg, CLK->PWRCTL);
        getchar();
    }

    printf("PWRCTL is 0x%08X.\n", CLK->PWRCTL);

    printf("Check %s toggle (duty 500ms) or use message...\n\n", IO_BIT_STR);
    i = 0;
    TIMER3->CMP = (10*500);
    TIMER3->CTL = TIMER_PERIODIC_MODE | TIMER_CTL_CNTEN_Msk;
    while(1)
    {
        if (TIMER3->INTSTS)
        {
            TIMER3->INTSTS = TIMER3->INTSTS;
            IO_CTL ^= 1;
            printf("%d      \r", i++);
        }
    }
}


void WDT_TimeoutWakeupTest_09(WDT_T *wdt, int32_t i32TimeoutSel)
{
    uint8_t u8Char;
    uint32_t u32IsLIRCEN = 1, u32IsLXTEN = 1;
	volatile uint32_t u32RegPWRCTL, u32RegCTL, u32RegALTCTL;
    
    printf("\nWDT Time-Out Wakeup Test. (CLKSEL3:0x%08X)\n\n", CLK->CLKSEL3);

    if ((gu32WDTCLKFreq != gu32LIRCFreq) && (gu32WDTCLKFreq != 32768UL))
    {
        printf("[WDT2 clock source should be either LIRC32 or LXT (32.768 kHz) for enter to Power-down normally]\n\n");
        getchar();
        printf("\n\n");
    }

    StopWDTandResetCnt(wdt);

    if (i32TimeoutSel == -1)
    {
        i32TimeoutSel = 3;
        u32RegCTL = 0xD2 | (i32TimeoutSel<<WDT_CTL_TOUTSEL_Pos) | WDT_CTL_RSTCNT_Msk; /* Enable WDTEN, INTEN, WKEN, RSTCNT and configure TOUTSEL */;
    } 
    else if ((i32TimeoutSel >= 0) && (i32TimeoutSel <= 7))
    {
        u32RegCTL = 0xD2 | (i32TimeoutSel<<WDT_CTL_TOUTSEL_Pos) | WDT_CTL_RSTCNT_Msk; /* Enable WDTEN, INTEN, WKEN, RSTCNT and configure TOUTSEL */
    } 
    else 
    {
        printf("Input parameter error.\n");
        while(1);
    }
    
    printf("Current WDT_CTL:0x%08X, and target WDT_CTL should be 0x%08X for test.\n\n", wdt->CTL, u32RegCTL);

    if ((gu32CFG[0]&CWDTEN_MSK) == CWDTEN_MSK)
    {
        ; //WDT2 clock behavior and WDTEN bit is controlled by SW
    } 
    else 
    {
        printf("WDT2 function is forced enable by HW after chip power up.\n");
        if ((gu32CFG[0]&CWDTEN_MSK) == CLIRCPDCTLEN_MSK)
        {
            printf("   10 kHz clock is controlled by LIRCEN bit when chip enters Power-down.\n");
        } 
        else 
        {
            printf("   10 kHz is forced enable when chip enters Power-down. (No matter LIRCEN bit is 0 or 1.)\n");
        }

        printf("\nChoose LIRCEN Check setting.\n");
        printf("    [0] LIRC disabled (PWRCTL[3])\n");   
        printf("    [1] LIRC enabled (PWRCTL[3]) \n");   
        u8Char = getchar();
        
        u32IsLIRCEN = (u8Char=='1')? 1:0;
        printf("    [LIRC is %s]\n\n", (u32IsLIRCEN==1)? "Enabled":"Disabled");
        /* Modify LIRCEN enable or disable in PowerDownAndPullIOLow() */
    }

    printf("Hit any key to enter Power-dpwn mode, then check %s low period after WDT2 time-out wakeup occurred.\n", IO_BIT_STR);   
    if (gu32WDTCLKFreq == gu32LIRCFreq)
    {
        printf("    (WDT2 time-out interval is %s based on LIRC)\n\n", gacTOUTIntervalLIRC[i32TimeoutSel]);
    }
    else 
    {
        printf("\nChoose LXTEN Check setting.\n");
        printf("    [0] LXTEN disabled (PWRCTL[1])\n");   
        printf("    [1] LXTEN enabled (PWRCTL[1]) \n");   
        u8Char = getchar();
        
        u32IsLXTEN = (u8Char=='1')? 1:0;
        printf("    [LXT is %s]\n\n", (u32IsLXTEN==1)? "Enabled":"Disabled");
        printf("    (WDT2 time-out interval is %s based on LXT)\n\n", gacTOUTIntervalLXT[i32TimeoutSel]);
        CLK->PWRCTL = (CLK->PWRCTL&~(CLK_PWRCTL_LXTEN_Msk)) | (u32IsLXTEN<<CLK_PWRCTL_LXTEN_Pos);
    }

    getchar();
    
// Disable interrupt to generate reset system event    
//    /* Enable WDT2 NVIC */
//    NVIC_EnableIRQ(EWDT_IRQn);
    
    gu32WDTTOUTFlag = gu32WDTWKFlag = 0;

    u32RegPWRCTL = CLK->PWRCTL;   
    
    PowerDownAndPullIOLow(wdt, u32RegCTL, u32IsLIRCEN);
           
 	printf("WDT2 time-out wakeup event occurred. (PWRCTL:0x%08X)\n", CLK->PWRCTL);
    while((CLK->PWRCTL&CLK_PWRCTL_PDEN_Msk) == CLK_PWRCTL_PDEN_Msk); /* PDEN bit must be cleared automatically */
    while((CLK->PWRCTL&CLK_PWRCTL_PDWKIF_Msk) != CLK_PWRCTL_PDWKIF_Msk);
    CLK->PWRCTL |= CLK_PWRCTL_PDWKIF_Msk;            
        
	printf("WDT_CTL status in WDT_IRQHandler is from 0x%08X to 0x%08X ... ", g_u32Reg0, g_u32Reg1);
	printf("[%s]\n\n", ((g_u32Reg0&0xFD7)==g_u32Reg1)? "PASS":"FAIL");

    if ((gu32WDTTOUTFlag == 0) || (gu32WDTWKFlag == 0))
    {
        IO_CTL = 0;
        printf("ERROR ... flag. (IF: %d, WKF: %d)\n", gu32WDTTOUTFlag, gu32WDTWKFlag);
        while(1);
    }
} 


void WDT_TEST(WDT_T *wdt, uint8_t u8Mode)
{
    switch(u8Mode)
    {
        case 0:
        {
            WDT_RegisterTest_0(wdt);
            break;
        }
        
        case 1:
        {
            volatile uint32_t u32CLKFreq, u32CLKSEL3;
            /* 
                -1:  All Time-out Interval Selection test
                0~8: Specify Time-out Interval test  
            */
            u32CLKFreq = gu32WDTCLKFreq;
            u32CLKSEL3 = CLK->CLKSEL3;
            
            gu32WDTCLKFreq = gu32LIRCFreq;
            CLK->CLKSEL3 = (CLK->CLKSEL3 & ~CLK_CLKSEL3_WDT2SEL_Msk) | CLK_CLKSEL3_WDT2SEL_LIRC;
#if (IS_TEST_PCLKDIV == 1)
            CLK->PCLKDIV = 0x0;
            CLK->PCLKDIV = 0x44;
            if (CLK->PCLKDIV != 0x44)
            {
                printf("\nSet PCLKDIV fail. (L:%d)\n", __LINE__);
                while(1) {}
            }
            printf("[CLK->PCLKDIV: 0x%x]\n", CLK->PCLKDIV);
#endif            
            WDT_TimeoutIntervalTest_01(wdt, -1); // test LIRC

            gu32WDTCLKFreq = SystemCoreClock/4096;		/* TODO: PCLK3 = ? */
            CLK->CLKSEL3 = (CLK->CLKSEL3 & ~CLK_CLKSEL3_WDT2SEL_Msk) | CLK_CLKSEL3_WDT2SEL_PCLK3_DIV4096;
#if (IS_TEST_PCLKDIV == 1)
            /* Set PCLK0SEL enable */
            CLK->PCLKDIV = 0x0;
            CLK->PCLKDIV = 0x5;
            if (CLK->PCLKDIV != 0x5)
            {
                printf("\nSet PCLKDIV fail.\n");
                while(1);
            }
            printf("[CLK->PCLKDIV: 0x%x]\n", CLK->PCLKDIV);
#endif            
            WDT_TimeoutIntervalTest_01(wdt, -1); // ok, test HCLK/2048
#if (IS_TEST_PCLKDIV == 1)
            if (CLK->PCLKDIV != 0x5)
            {
                printf("\nSet PCLK0SEL fail.\n");
                while(1);
            }
#endif            

            gu32WDTCLKFreq = SystemCoreClock/4096;	/* TODO: PCLK3 = ? */
            CLK->CLKSEL3 = (CLK->CLKSEL3 & ~CLK_CLKSEL3_WDT2SEL_Msk) | CLK_CLKSEL3_WDT2SEL_PCLK3_DIV4096;
#if (IS_TEST_PCLKDIV == 1)
            /* Set PCLK1SEL enable */
            CLK->PCLKDIV = 0x0;
            CLK->PCLKDIV = 0x50;
            if (CLK->PCLKDIV != 0x50)
            {
                printf("\nSet PCLKDIV fail.\n");
                while(1);
            }
            printf("[CLK->PCLKDIV: 0x%x]\n", CLK->PCLKDIV);
#endif            
            WDT_TimeoutIntervalTest_01(wdt, -1); // ok, test HCLK/2048
#if (IS_TEST_PCLKDIV == 1)
            if (CLK->PCLKDIV != 0x50)
            {
                printf("\nSet PCLKDIV fail.\n");
                while(1);
            }
            CLK->PCLKDIV = (CLK->PCLKDIV&~(CLK_PCLKDIV_APB0DIV_Msk|CLK_PCLKDIV_APB1DIV_Msk));
            if (CLK->PCLKDIV != 0x0)
            {
                printf("\nDisable PCLKDIV fail.\n");
                while(1);
            }
            printf("[CLK->PCLKDIV: 0x%x]\n", CLK->PCLKDIV);
#endif            
                                     
#if (IS_TEST_PCLKDIV == 1)
            CLK->PCLKDIV = 0x33;
            printf("[CLK->PCLKDIV: 0x%x]\n", CLK->PCLKDIV);
#endif                
#if (IS_SUPPORT_32K == 1)
            gu32WDTCLKFreq = 32768UL;
            if((uint32_t)wdt == WDT0_BASE)
                CLK->CLKSEL3 = (CLK->CLKSEL3 & ~CLK_CLKSEL3_WDT0SEL_Msk) | CLK_CLKSEL3_WDT0SEL_LXT;
            else
                CLK->CLKSEL3 = (CLK->CLKSEL3 & ~CLK_CLKSEL3_WDT1SEL_Msk) | CLK_CLKSEL3_WDT1SEL_LXT;
            WDT_TimeoutIntervalTest_01(wdt, -1); // ok, test LXT
#endif
                
            /* Configure WDT2 clock source to LIRC */
            gu32WDTCLKFreq = gu32LIRCFreq;
            CLK->CLKSEL3 = (CLK->CLKSEL3 & ~CLK_CLKSEL3_WDT2SEL_Msk) | CLK_CLKSEL3_WDT2SEL_LIRC;
            printf("Additional case 1 ====================\n");
            WDT_TimeoutIntervalTest_01(wdt, 0x5a5a0000); /* To check WDT2 IF when INTEN is disabled */            
            printf("Additional case 2 ====================\n");
            WDT_TimeoutIntervalTest_01(wdt, 0x5a5a0001); /* Update TOUTSEL before WDT2 IF generates */
            printf("Additional case 3 ====================\n");
            WDT_TimeoutIntervalTest_01(wdt, 0x5a5a0002); /* Update TOUTSEL before WDT2 IF generates */
            
            CLK->CLKSEL3 = u32CLKSEL3;
            gu32WDTCLKFreq = u32CLKFreq;            
#if (IS_TEST_PCLKDIV == 1)
            CLK->PCLKDIV = 0x0;
            if (CLK->PCLKDIV != 0)
            {
                printf("\nReset PCLKDIV fail. (L:%d)\n", __LINE__);
                while(1) {}
            }
#endif            
            break;
        }

        case 2:
        {
            WDT_RSTDSELTest_02(wdt); // ok
            break;
        }

        case 3:
        {
            WDT_RSTDSELWithSWDelayTest_03(wdt, WDT_RESET_DELAY_3CLK);
            WDT_RSTDSELWithSWDelayTest_03(wdt, WDT_RESET_DELAY_18CLK);
//            WDT_RSTDSELWithSWDelayTest_03(wdt, WDT_RESET_DELAY_130CLK);
//            WDT_RSTDSELWithSWDelayTest_03(wdt, WDT_RESET_DELAY_1026CLK);
            break;
        }
        
        case 4:
        {
            WDT_RSTCNTRegisterTest_04(wdt); // ok
            break;
        }

        case 5:
        {
            WDT_TimeoutWakeupTest_05(wdt, 4); // ok
            WDT_TimeoutWakeupTest_05(wdt, 1);            
            WDT_TimeoutWakeupTest_05(wdt, 0);
            break;
        }

        case 6:
        {
            WDT_SuccessivePWDTest_06(wdt, 3); //ok
            break;
        }
        
        case 7:
        {
            //WDT_ModifyCFG0Test_07(wdt, 0); // ok
            break;
        }
        
        case 8:
        {
            WDT_TIMERSourceFromLIRC_08(wdt, 0);
            break;
        }

        case 9:
        {
            WDT_TimeoutWakeupTest_09(wdt, 5);
            break;
        }
    }
}

void EnableAllWDTandWWDT(void)
{
	uint32_t u32WDTCTL[2], u32WWDTCTL[2];

    PA->MODE = 0x55;
    PA0 = PA1 = PA2 = PA3 = 1;
    
    printf("\nEnableAllWDTandWWDT. (CLKSEL3:0x%08X)\n\n", CLK->CLKSEL3);

    StopWDTandResetCnt(WDT2);

    NVIC_EnableIRQ(WDT2_IRQn);
    NVIC_EnableIRQ(WWDT2_IRQn);
    
    WDT2->ALTCTL = 0x2;
    u32WDTCTL[0] = u32WDTCTL[1] = (WDT_CTL_RSTEN_Msk | WDT_CTL_INTEN_Msk | WDT_CTL_WDTEN_Msk);
    u32WWDTCTL[0] = u32WWDTCTL[1] = ((62<<WWDT_CTL_CMPDAT_Pos) | (3<<WWDT_CTL_PSCSEL_Pos) | WWDT_CTL_INTEN_Msk | WWDT_CTL_WWDTEN_Msk);
    printf("Toggling PA.0 in WDT_IRQ, PA.2 in EWDT_IRQ, PA.1 in WWDT_IRQ, PA.3 in EWWDT_IRQ;\n");
    printf("* WDT_CTL:  0x%x, WDT_ALTCTL:  0x%x (Period 16*WDT_CLK)\n", u32WDTCTL[0], WDT2->ALTCTL);
    printf("* WWDT_CTL:  0x%x (Period %d*WWDT_CLK)\n", u32WWDTCTL[0], (64-62)*8);
    printf("\n");
    while(UART_IS_TX_EMPTY(UART1) == 0);

    WDT2->CTL = u32WDTCTL[0];
    Delay(1000);
    WWDT->CTL = u32WWDTCTL[0];
    
    while(1) {}
}

