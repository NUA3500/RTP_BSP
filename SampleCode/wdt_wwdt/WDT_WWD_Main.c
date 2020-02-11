#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "NuMicro.h"

#include "WDT_WWDT_Test.h"

volatile uint32_t gu32CFG[4];
volatile uint32_t g_au32PORValue[20];
volatile uint32_t g_au32WDTClk[2], g_au32WWDTClk[2];
volatile uint32_t gu32WDTCLKFreq, gu32WWDTCLKFreq;
volatile uint32_t gu32TIMER0CNT = 0;
volatile uint8_t gu8IsHWWDTEnabled = 0;
volatile uint8_t g_u8IsAllWDTandWWDTTest = 0;


void ResetCHIP(void)
{
    /* Disable register write-protection function */
    SYS_UnlockReg();
    
    /* Reset Chip */
    printf("Execute CHIP Reset\n\n\n");
    while(UART_IS_TX_EMPTY(DEBUG_PORT) == 0);
    SYS->IPRST0 = SYS_IPRST0_CHIPRST_Msk; 
}


void StopWDTandResetCnt(WDT_T *wdt)
{
    if(gu8IsHWWDTEnabled) 
    {
        wdt->CTL |= (0x7 << WDT_CTL_TOUTSEL_Pos);
        WDT_RESET_COUNTER(wdt);
        return ;
    }
    {
        /* Reset WDT counter and stop WDT */ 
        wdt->CTL |= wdt->CTL;
        wdt->CTL = 0x800;
        while(wdt->CTL & WDT_CTL_SYNC_Msk);
        if (wdt->CTL != 0x800)
        {
            printf("%s fail. (0x%08X) (L:%d)\n\n", __FUNCTION__, wdt->CTL, __LINE__);
            while(SYS->PDID) {}
        }
    }
}

#if 1
void TIMER0_IRQHandler(void)
{
    gu32TIMER0CNT++;	
	TIMER3->INTSTS = TIMER3->INTSTS;	 	
}
#endif

void GetCFGSettings(uint8_t u8Mode)
{
    volatile uint32_t u32WDTCTL;
    volatile uint32_t u32Status = 0, u32RegVal;

    u32WDTCTL = WDT2->CTL;
    
    gu32CFG[0] = SYS->PWRONOTP;
	printf("\n[CFG0:0x%08X]\n", gu32CFG[0]);

    if ((SYS->RSTSTS & SYS_RSTSTS_WDT0RF_Msk) == SYS_RSTSTS_WDT0RF_Msk)
    {
        /* WDT or WWDT time-out reset occurred */
        if (((WDT2->CTL & WDT_CTL_RSTF_Msk) == WDT_CTL_RSTF_Msk) ||
           ((WWDT->STATUS & WWDT_STATUS_WWDTRF_Msk) == WWDT_STATUS_WWDTRF_Msk))
        {
            if ((WDT2->CTL & WDT_CTL_RSTF_Msk) == WDT_CTL_RSTF_Msk)
            {
                /* WDT time-out reset event */
                printf("    ### WDT time-out reset occurred.\n");
                WDT2->CTL = WDT2->CTL;
                u32RegVal = WDT2->CTL;
                if((u32RegVal & WDT_CTL_RSTF_Msk) == WDT_CTL_RSTF_Msk)
                    u32Status |= (1<<0);
                if((u32RegVal & WDT_CTL_IF_Msk) == WDT_CTL_IF_Msk)
                    u32Status |= (1<<1);
                if((u32RegVal & WDT_CTL_WKF_Msk) == WDT_CTL_WKF_Msk)
                    u32Status |= (1<<2);

                if(u32Status != 0) 
                {
                    if(u32Status & (1<<0))
                        printf("Clear RSTF status error.\n");
                    if(u32Status & (1<<1))
                        printf("Clear IF status error.\n");
                    if(u32Status & (1<<2))
                        printf("Clear WKF status error.\n");                        
                    while(1);
                }
            }
            if ((WWDT->STATUS & WWDT_STATUS_WWDTRF_Msk) == WWDT_STATUS_WWDTRF_Msk)
            {
                /* WWDT time-out reset event */
                printf("    ### WWDT time-out reset occurred. WWDT counter value is 0x%08x.\n", WWDT->CNT);
                IO_CTL = 0;
                WWDT->STATUS = WWDT->STATUS;
                if(WWDT->STATUS != 0)
                {
                    printf("Clear WWDT status error.\n");
                    while(1) 
                        IO_CTL ^= 1;
                }
            }
        }
        else 
        {
            printf("Invalid System Reset status, 0x%08x.\n", SYS->RSTSTS);
            SYS->RSTSTS = SYS->RSTSTS;
            while(1)
                IO_CTL ^= 1;
        }
    }

    /* WDT hardware enable function is inactive */
    if ((gu32CFG[0] & 0x4) == 0)
    {
        printf("    WDT function is controlled by SW after chip power up.\n");        
        printf("    [WDT_CTL: 0x%08x]\n", u32WDTCTL);
        if ((u32WDTCTL & 0xFFFFFFFB) == 0x800) // Do not check RSTF
        {
            ;; //pass
        }
        else
        {
            printf("    Default WDTx_CTL error after POR or system reset.\n");
            //getchar();
        }
    } 
    else 
    {
        printf("    WDT function is forced enable by HW after chip power up.\n");        
#if 0
        if ((gu32CFG[0] & CWDTEN_MSK) == CLIRCPDCTLEN_MSK)
        {
            /* CWDTEN[[2:0] == 0x3 ... WDT clock can be disabled in PWD mode */
            if ((gu32CFG[0] & CWDTPDEN_MSK) == 0x0)
            {
                printf("    10 kHz clock kept enabled when chip enters Power-down. (No matter LIRCEN bit is 0 or 1.)\n");
                if ((g_au32PORValue[1] & CLK_PWRCTL_LIRCEN_Msk) != CLK_PWRCTL_LIRCEN_Msk)
                {
                    printf("        [Default LIRC is disabled ... FAIL] (PWRCTL: 0x%08x)\n", g_au32PORValue[1]);
                    while(1);
                }
                
                /* LIRCEN bit can be clear to 0, but LIRC clock is still work normally for WDT function */
                if (((CLK->PWRCTL & ~CLK_PWRCTL_LIRCEN_Msk) & CLK_PWRCTL_LIRCEN_Msk) == CLK_PWRCTL_LIRCEN_Msk)
                {
                    printf("        [Set LIRC disabled ... FAIL] (PWRCTL: 0x%08x)\n", CLK->PWRCTL);
                    while(1);
                }
            } 
            else 
            {
                printf("    10 kHz clock on/off is according to LIRCEN bit during chip enters Power-down.\n");
            }            
        } 
        else 
        {
            printf("    10 kHz clock is always on when chip enters Power-down. (No matter LIRCEN bit is 0 or 1.)\n");
            if ((g_au32PORValue[1] & CLK_PWRCTL_LIRCEN_Msk) != CLK_PWRCTL_LIRCEN_Msk)
            {
                printf("        [Default LIRC is disabled ... FAIL] (PWRCTL: 0x%08x)\n", g_au32PORValue[1]);
                while(1);
            }
            
            /* LIRCEN bit can be clear to 0, but LIRC clock is still work normally for WDT function */
            if (((CLK->PWRCTL & ~CLK_PWRCTL_LIRCEN_Msk) & CLK_PWRCTL_LIRCEN_Msk) == CLK_PWRCTL_LIRCEN_Msk) {
                printf("        [Set LIRC is disabled ... FAIL] (PWRCTL: 0x%08x)\n", CLK->PWRCTL);
                while(1);
            }
        }
#endif

        if ((WDT2->CTL & 0xFFF) == ((8<<WDT_CTL_TOUTSEL_Pos) | WDTHWEN_MSK))
        {
            printf("        [Check if WDT_CTL is 0x%08x ... PASS]\n", WDT2->CTL);
        }
        else
        {
            printf("        [WDT_CTL is 0x%08x ... FAIL] (L:%d)\n", WDT2->CTL, __LINE__);
            while(1);
        }

        WDT2->CTL = (6<<WDT_CTL_TOUTSEL_Pos);        
        if ((WDT2->CTL & 0xFFF) == ((6<<WDT_CTL_TOUTSEL_Pos) | WDTHWEN_MSK))
        {
            printf("        [Check if WDTEN and RSTEN can not be clear to 0 ... PASS] (0x%08x)\n", WDT2->CTL);
        }
        else 
        {
            printf("        [WDTEN and RSTEN can be modified ... FAIL] (0x%08x) (L:%d)\n", WDT2->CTL, __LINE__);
            while(1);
        }
        
        /* Check WDT clock source is forced in LIRC */
        CLK->CLKSEL3 = (CLK->CLKSEL3 & ~(CLK_CLKSEL3_WDT0SEL_Msk|CLK_CLKSEL3_WDT1SEL_Msk)) | (CLK_CLKSEL3_WDT0SEL_PCLK3_DIV4096|CLK_CLKSEL3_WDT1SEL_PCLK3_DIV4096);
        if ((CLK->CLKSEL3 & CLK_CLKSEL3_WDT1SEL_LIRC) == CLK_CLKSEL3_WDT1SEL_PCLK3_DIV4096)
        {
            printf("        [Check if WDT1SEL can be modified ... PASS. (CLKSEL3: 0x%08x)]\n", CLK->CLKSEL3);
        }
        else 
        {
            printf("        [EWDTSEL can not be modified ... FAIL. (CLKSEL3: 0x%08x)] (L:%d)\n", CLK->CLKSEL3, __LINE__);
            while(1);
        }
        if ((CLK->CLKSEL3 & CLK_CLKSEL3_WDT0SEL_LIRC) == CLK_CLKSEL3_WDT0SEL_LIRC)
        {
            printf("        [Check if WDTSEL is fixed on LIRC32 ... PASS. (CLKSEL3: 0x%08x)]\n", CLK->CLKSEL3);
        }
        else 
        {
            printf("        [Check if WDTSEL is not fixed on LIRC32 ... FAIL. (CLKSEL3: 0x%08x)] (L:%d)\n", CLK->CLKSEL3, __LINE__);
            while(1);
        }

        /* Check WDTCKEN is forced on */
        CLK->APBCLK1 &= ~(CLK_APBCLK1_WDT0CKEN_Msk | CLK_APBCLK1_WDT1CKEN_Msk);
        if ((CLK->APBCLK1 & CLK_APBCLK1_WDT0CKEN_Msk) == CLK_APBCLK1_WDT0CKEN_Msk)
        {
            printf("        [Check if WDTCKEN is force enabled ... PASS. (APBCLK1: 0x%08x)]\n", CLK->APBCLK1);
        }
        else 
        {
            printf("        [WDTCKEN can be turn off ... FAIL. (APBCLK1: 0x%08x]\n", CLK->APBCLK1);
            while(1);
        }

        /* Check if WDTEN and RSTEN bit cannot be clear to 0 */
        if(WDT2->CTL == ((6<<WDT_CTL_TOUTSEL_Pos) | WDT_CTL_WDTEN_Msk | WDT_CTL_RSTEN_Msk))
        {
            printf("        [Check if WDTEN and RSTEN is locked ... PASS. (WDT_CTL: 0x%08x)]\n", WDT2->CTL);
        }
        else
        {
            printf("        [WDTEN and RSTEN was be modified ... FAIL. (WDT_CTL: 0x%08x)]\n", WDT2->CTL);
            while(1) {}
        }
            
        WDT2->CTL = (8<<WDT_CTL_TOUTSEL_Pos);
        if ((WDT2->CTL & 0xFFF) == ((8<<WDT_CTL_TOUTSEL_Pos) | WDT_CTL_WDTEN_Msk | WDT_CTL_RSTEN_Msk))
        {
            printf("        [Write WDTCTL to 0x882 ... PASS. (WDT_CTL: 0x%08x)]\n", WDT2->CTL);
        }
        else 
        {
            printf("        [Write WDTCTL to 0x882 ... FAIL. (WDT_CTL: 0x%08x)]\n", WDT2->CTL);
            while(1);
        }
    }
}


void SelectClockSource(uint32_t mode)
{
    uint8_t u8Char;
    volatile uint32_t u32PWRCTL, u32APBCLK1, u32RSTSTS, u32Reg;

    printf("\n[ SelectClockSource(%d) ]\n", mode);

    u32PWRCTL = CLK->PWRCTL;
    u32APBCLK1 = CLK->APBCLK1;
     
    while((CLK->STATUS & (CLK_STATUS_HXTSTB_Msk|CLK_STATUS_LIRCSTB_Msk)) != (CLK_STATUS_HXTSTB_Msk|CLK_STATUS_LIRCSTB_Msk));

    u32RSTSTS = SYS->RSTSTS;
	printf("**********************************************************\n");
	printf("[PWRCTL: 0x%08x, APBCLK1: 0x%08x, RSTSTS: 0x%08x / 0x%x]\n", u32PWRCTL, u32APBCLK1, SYS->RSTSTS, u32RSTSTS);
    SYS->RSTSTS = SYS->RSTSTS;
    printf("Clear RSTSTS to 0x%08x ... %s.\n", SYS->RSTSTS, (SYS->RSTSTS==0)?"PASS":"FAIL");

    printf("REGs of WDT:   CTL: 0x%08x, ALTCTL: 0x%08x, RSTCNT: 0x%08x.\n", WDT2->CTL, WDT2->ALTCTL, WDT2->RSTCNT);
    printf("REGs of WWDT:  RLDCNT: 0x%08x, CTL: 0x%08x, STATUS: 0x%08x, CNT: 0x%08x.\n", WWDT->RLDCNT, WWDT->CTL, WWDT->STATUS, WWDT->CNT);
    printf("===========================================================\n");
    
    printf("Select WDT clock source\n");
    printf("[1] WDT_CLK is LXT\n");
    printf("[2] WDT_CLK is PCLK3/4096 Hz\n");
    printf("[3] WDT_CLK is LIRC\n");
    u8Char = getchar();
    u8Char = u8Char - '0';
    u8Char = (u8Char > 3)? 3:u8Char;
    if(u8Char == 1)
    {
        g_au32WDTClk[mode] = 32768UL;
        CLK->PWRCTL |= CLK_PWRCTL_LXTEN_Msk;
        CLK->CLKSEL3 = (CLK->CLKSEL3 & ~CLK_CLKSEL3_WDT2SEL_Msk) | CLK_CLKSEL3_WDT2SEL_LXT;
    }
    else if(u8Char == 2) 
    {
        g_au32WDTClk[mode] = SystemCoreClock/4096;	/* TODO: PCLK3 = ? */
        CLK->CLKSEL3 = (CLK->CLKSEL3 & ~CLK_CLKSEL3_WDT2SEL_Msk) | CLK_CLKSEL3_WDT2SEL_PCLK3_DIV4096;
    }
    else 
    {
        u8Char = 3;
        g_au32WDTClk[mode] = gu32LIRCFreq;
      	CLK->CLKSEL3 = (CLK->CLKSEL3 & ~CLK_CLKSEL3_WDT2SEL_Msk) | CLK_CLKSEL3_WDT2SEL_LIRC;
    }
    printf("-> [%d]\n\n", u8Char);
    
    printf("Select WWDT clock source\n");
    printf("[2] WWDT_CLK is PCLK3/4096 Hz\n");
    printf("[3] WWDT_CLK is LIRC\n");
    u8Char = getchar();
    u8Char = u8Char - '0';
    u8Char = (u8Char > 3)? 3:u8Char;
    if (u8Char == 2)
    {
        g_au32WWDTClk[mode] = SystemCoreClock/4096;	/* TODO: PCLK3 = ? */
      	CLK->CLKSEL3 = (CLK->CLKSEL3 & ~CLK_CLKSEL3_WWDT2SEL_Msk) | CLK_CLKSEL3_WWDT2SEL_PCLK3_DIV4096;
    }
    else 
    {
        g_au32WWDTClk[mode] = gu32LIRCFreq;
       	CLK->CLKSEL3 = (CLK->CLKSEL3 & ~CLK_CLKSEL3_WWDT2SEL_Msk) | CLK_CLKSEL3_WWDT2SEL_LIRC;
    }
    printf("-> [%d]\n\n", u8Char);

    printf("Current CLKSEL3:0x%08X\n", CLK->CLKSEL3);

    if (mode == 0)
    {
		u32Reg = (CLK->CLKSEL3 & CLK_CLKSEL3_WDT2SEL_Msk);
		if (u32Reg == CLK_CLKSEL3_WDT2SEL_LIRC)
		{
			printf("    WDT clock source is LIRC (%d Hz).\n", gu32LIRCFreq);
			g_au32WDTClk[0] = gu32LIRCFreq;
		}
		else if (u32Reg == CLK_CLKSEL3_WDT2SEL_PCLK3_DIV4096)
		{
			printf("    WDT clock source is PCLK3/4096. (%d Hz)\n", g_au32WDTClk[0]);
			if (g_au32WDTClk[0] != (SystemCoreClock/4096))	/* TODO: PCLK3 = ? */
			{
				printf("Select WDT clock source FAIL.\n");
				while(1);
			}
		}
		else if (u32Reg == CLK_CLKSEL3_WDT2SEL_LXT)
		{
			printf("    WDT clock source is LXT (32768 Hz).\n");
			if (g_au32WDTClk[0] != 32768UL)
			{
				printf("Select WDT clock source FAIL.\n");
				while(1);
			}
		}
		else
		{
			printf("Invalid WDT clock source select.\n");
			while(1);
		}
    }

    if (mode == 0)
    {
		u32Reg = (CLK->CLKSEL3 & CLK_CLKSEL3_WWDT2SEL_Msk);
		if (u32Reg == CLK_CLKSEL3_WWDT2SEL_LIRC)
		{
			printf("    WWDT clock source is LIRC (%d Hz).\n", gu32LIRCFreq);
			if (g_au32WWDTClk[0] != gu32LIRCFreq)
			{
				printf("Select WWDT clock source FAIl.\n");
				while(1);
			}
		}
		else if (u32Reg == CLK_CLKSEL3_WWDT2SEL_PCLK3_DIV4096)
		{
			printf("    WWDT clock source is PCLK3/4096. (%d Hz)\n", g_au32WWDTClk[0]);
			if (g_au32WWDTClk[0] != (SystemCoreClock/4096))	/* TODO: PCLK3 = ? */
			{
				printf("Select WWDT clock source FAIl.\n");
				while(1);
			}
		}
		else if (u32Reg == CLK_CLKSEL3_WWDT2SEL_LXT)
		{
			printf("    WWDT clock source is LXT. (%d Hz)\n", g_au32WWDTClk[0]);
			if (g_au32WWDTClk[0] != 32768UL)
			{
				printf("Select WWDT clock source FAIl.\n");
				while(1);
			}
		}
		else
		{
			printf("Invalid WWDT clock source select.\n");
			while(1);
		}
    }

    printf("\n");
}

volatile uint32_t gu32LIRCFreq = 0;
static void GetLIRCAndHIRCFreq(void)
{
    volatile uint32_t u32CLKSEL1, u32TMR0Reg, u32TMR1Reg, u32TMR2Reg;
    volatile uint32_t u32LIRCCnts, u32HIRCCnts;
    
    u32CLKSEL1 = CLK->CLKSEL1;
    
    CLK->CLKSEL1 = (CLK->CLKSEL1&0xFFFFF888) | (CLK_CLKSEL1_TMR0SEL_HXT | CLK_CLKSEL1_TMR1SEL_LIRC | CLK_CLKSEL1_TMR2SEL_HIRC);
    CLK->APBCLK0 |= (CLK_APBCLK0_TMR0CKEN_Msk | CLK_APBCLK0_TMR1CKEN_Msk | CLK_APBCLK0_TMR2CKEN_Msk);
    
    TIMER3->CTL = 0x0;
    TIMER2->CTL = 0x0;
    TIMER3->INTSTS = TIMER3->INTSTS;
    TIMER2->INTSTS = TIMER2->INTSTS;
    
    TIMER3->CMP = 12000000UL;
    TIMER2->CMP = 0xFFFFFF;
    
    u32TMR0Reg = TIMER_PERIODIC_MODE | TIMER_CTL_CNTEN_Msk;
    u32TMR2Reg = TIMER_PERIODIC_MODE | TIMER_CTL_CNTEN_Msk | (100-1);
    TIMER2->CTL = u32TMR2Reg;
    TIMER3->CTL = u32TMR0Reg;
    
    while(TIMER3->INTSTS == 0);
    u32HIRCCnts = TIMER2->CNT;
    
    SYS->IPRST1 |= (SYS_IPRST1_TMR3RST_Msk | SYS_IPRST1_TMR2RST_Msk);
    SYS->IPRST1 &= ~(SYS_IPRST1_TMR3RST_Msk | SYS_IPRST1_TMR2RST_Msk);

    CLK->CLKSEL1 = u32CLKSEL1;
    
    gu32LIRCFreq = ((u32LIRCCnts+5)/10) * 10;
    printf("\n\nGet [LIRC: %dHz] (test cnts: %d, %d)\n\n", gu32LIRCFreq, u32LIRCCnts, u32HIRCCnts);
}

void WDT_WWDT_TestMain(void)
{        
    uint8_t u8Char;
        
    /* 1: To check NVIC reset, CPU reset and CHIP reset behavior */
#if (ENABLE_RSTSRC_AND_WDT_TEST == 1)
    WDT_SysRSTSRCAndWDTCounterTest(1);
#endif    
    
    printf("[[ WDT and WWDT Emulation ]] (WDT_CTL:0x%08X, WWDT_CTL:0x%08X)\n", WDT2->CTL, WWDT2->CTL);
    
#if 1
    printf("************************\n");
    printf(" [RSTSRC:   0x%08X]\n", g_au32PORValue[0]);
    printf(" [PWRCTL:   0x%08X]\n", g_au32PORValue[1]);
    printf(" [APBCLK1:  0x%08X]\n", g_au32PORValue[2]);
    printf(" [CLKSEL3:  0x%08X]\n", g_au32PORValue[13]);
    printf(" [CLKSEL3:  0x%08X] *** check WDTSEL setting\n", g_au32PORValue[3]);
    printf(" [CLKSEL3:  0x%08X]\n", g_au32PORValue[4]);
    printf(" [WDT_CTL:      0x%08X]\n", g_au32PORValue[5]);
    printf(" [WDT_ALTCTL:   0x%08X]\n", g_au32PORValue[7]);
    printf(" [WWDT_CTL:     0x%08X]\n", g_au32PORValue[6]);
    printf(" [WWDT_STATUS:  0x%08X]\n", g_au32PORValue[8]);
    printf(" [WDT1_CTL:     0x%08X]\n", g_au32PORValue[9]);
    printf(" [WDT1_ALTCTL:  0x%08X]\n", g_au32PORValue[10]);
    printf(" [WWDT1_CTL:    0x%08X]\n", g_au32PORValue[11]);
    printf(" [WWDT1_STATUS: 0x%08X]\n", g_au32PORValue[12]);
    printf("************************\n\n");
    
    if ((g_au32PORValue[2] & CLK_APBCLK1_WDT0CKEN_Msk) != CLK_APBCLK1_WDT0CKEN_Msk)
    {
        printf("WDT0CKEN bit error. (APBCLK1: 0x%08X)\n", g_au32PORValue[2]);
        while(1) {}
    }

    /* Get CFG setting */
    GetCFGSettings(0);
    
    //GetLIRCAndHIRCFreq();
    gu32LIRCFreq = 36000;
    printf("\n\nGet [LIRC: %dHz]\n\n", gu32LIRCFreq);

    /* Configure clock setting */
    SelectClockSource(0);
#endif
#if 0
    /* LXT clock source was selected */
    if ((CLK->CLKSEL3 & CLK_CLKSEL3_WDT0SEL_Msk) == CLK_CLKSEL3_WDT0SEL_LXT)
    {
        printf("Hit [1] to change RTC clock source to 32 kHz.\n\n");
        u8Char = getchar();
        if (u8Char == '1')
        {
            RTC->LXTCTL |= RTC_LXTCTL_RTCCKSEL_Msk;
            if ((RTC->LXTCTL & RTC_LXTCTL_RTCCKSEL_Msk) == 0)
            {
                printf("FAIL.\n");              
                while(1) {}
            }
            printf("    [RTC clock changed to LIRC and will not affect WDT clock source from LXT]\n\n");
            gu32WWDTCLKFreq = gu32LIRCFreq;
        } 
        else 
        {
            printf("    [RTC clock keeps as 32 kHz]\n\n");
        }
    }
#endif

    gu32WDTCLKFreq = g_au32WDTClk[0];
    gu32WWDTCLKFreq = g_au32WWDTClk[0];
    printf("For WDT test...\n");
    printf("For WWDT test...\n");
    
    TIMER3_Init(100000); /* one timer tick is 10 us */

 	do {
        printf("\n\n\n");
        printf("+---------------------------------------+\n");
       	printf("| ### For WDT Test                      |\n");
        printf("|   [0] WDT Register test               |\n");
        printf("|   [1] WDT Time-uout Interval test     |\n");
        printf("|   [2] WDT Time-out RSTDSEL test       |\n");
		printf("|   [3] WDT Max SW Delay for RSTDSEL    |\n");
		printf("|   [4] WDT_RSTCNT register test        |\n");
		printf("|   [5] WDT Time-out wake-up test       |\n");
		printf("|   [6] WDT successive Power-down test  |\n");
		printf("|   [7] Test CFG0[31:30]&CFG0[4:3]      |\n");
		printf("|   [8] Test TIMER_CLK from LIRC        |\n");
		printf("|       and WDT HW enabled (LIRCEN 0, timer still active) \n");
		printf("|   [9] WDT Time-out reset in PWD       |\n");
		printf("|[Note] ENABLE_RSTSRC_AND_WDT_TEST      |\n");
		printf("|[Note] ENABLE_WDT_ICEDEBUG             |\n");
#if (ENABLE_WWDT_TEST == 1)
       	printf("| ### For WWDT Test                                          |\n");
        printf("|   [a] WWDT Register test                                   |\n");
        printf("|   [b] WWDT Basic Function in Polling mode (RegLock)        |\n");
        printf("|   [c] WWDT Basic Function in Interrupt mode (RegUnLock)    |\n");
        printf("|   [d] WWDT RLDCNT Behavior test                            |\n");
        printf("|   [e] WWDT and WDT Counter in PWD and IDLE mode            |\n");
        printf("|   [f] WWDT CMPDAT and PSCSEL Limitation test               |\n");
		printf("|[Note] ENABLE_WWDT_ICEDEBUG                                 |\n");
#endif        
        printf("|   [x] Enable WDT and WWDT reset function                   |\n");
        printf("+---------------------------------------+\n");
		printf("|   [s] CPU reset,    TOUTSEL 0x5, WWDT_CTL, CLKSEL no reset |\n");
		printf("|   [n] System reset, TOUTSEL 0x4, WWDT_CTL, CLKSEL reset    |\n");
		printf("|   [r] CHIP reset,   TOUTSEL 0x3, WWDT_CTL, CLKSEL reset    |\n");
        printf("+---------------------------------------+\n");
        printf("Choose test item: ");
        u8Char = getchar();
        printf("[%c]\n\n", u8Char);
             
        switch(u8Char)
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            {
                WDT_TEST(WDT2, u8Char - '0');
                break;
            }
            
#if (ENABLE_WWDT_TEST == 1)
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            {
                if((u8Char >= 'A') && (u8Char <= 'F'))
                    WWDT_TEST(WWDT, u8Char - 'A');
                else
                    WWDT_TEST(WWDT, u8Char - 'a');
                break;
            }
#endif          
            
            case 'x':
            case 'X':
                g_u8IsAllWDTandWWDTTest = 1;
                EnableAllWDTandWWDT();
                break;
            
            case 's':
            case 'S':
                WDT2->CTL = (WDT2->CTL&~WDT_CTL_TOUTSEL_Msk) | (0x5<<WDT_CTL_TOUTSEL_Pos);
                WDT2->ALTCTL = 0x3;
                WWDT->CTL = 0xFFFFFFFF;
                while(UART_IS_TX_EMPTY(DEBUG_PORT) == 0);
                SYS->IPRST0 = SYS_IPRST0_CPURST_Msk; 
                break;

            case 'n':
            case 'N':
                WDT2->CTL = (WDT2->CTL&~WDT_CTL_TOUTSEL_Msk) | (0x4<<WDT_CTL_TOUTSEL_Pos);
                WDT2->ALTCTL = 0x3;
                WWDT->CTL = 0xFFFFFFFF;
                while(UART_IS_TX_EMPTY(DEBUG_PORT) == 0);
                SYS_LockReg();
                //NVIC_SystemReset();
                break;

            case 'r':
            case 'R':                
                WDT2->CTL = (WDT2->CTL&~WDT_CTL_TOUTSEL_Msk) | (0x3<<WDT_CTL_TOUTSEL_Pos);
                WDT2->ALTCTL = 0x2;
                WWDT->CTL = 0xFFFFFFFF;
                while(UART_IS_TX_EMPTY(DEBUG_PORT) == 0);
                SYS->IPRST0 = SYS_IPRST0_CHIPRST_Msk; 
                break;
        }
    } while(1);
}     

