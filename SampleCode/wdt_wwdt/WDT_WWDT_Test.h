
#ifndef __WDT_WWDT_TEST_H__
#define __WDT_WWDT_TEST_H__

#include "stdlib.h"
#include "tmr.h"

#define DEBUG_PORT	UART1

#define ENABLE_SIM          0
//#define printf(...)

#define DEF_REALCHIP        0

#define IS_SUPPORT_32K      0
#define IS_TEST_PCLKDIV     0

/* Select test method and items */
#define ENABLE_RSTSRC_AND_WDT_TEST  0   /* Set 0 to test "Full WDT functions" */
    #define ENABLE_WDT_ICEDEBUG     0   /* Test in case 2: WDT_RSTDSELTest_02(); using "default" compiler option*/

#define ENABLE_WWDT_TEST            1   
    #define ENABLE_WWDT_ICEDEBUG    0   /* test in WWDT_BasicFunctionTest_BC(), pass */


/* PA.0 */
#define IO_BIT_INIT         (PA->MODE = ((PA->MODE&~GPIO_MODE_MODE0_Msk) | (0x1<<GPIO_MODE_MODE0_Pos)))
#define IO_BIT_STR          "PA.0"
#define IO_CTL              (PA->DOUT)

#define CWDTEN_MSK          0x80000018
#define CWDTPDEN_MSK        0x40000000
#define CLIRCPDCTLEN_MSK    0x00000018
#define WDTHWEN_MSK         (WDT_CTL_WDTEN_Msk | WDT_CTL_RSTEN_Msk)


void WDT_WWDT_TestMain(void);
void ResetCHIP(void);
void StopWDTandResetCnt(WDT_T *wdt);
void WDT_TEST(WDT_T *wdt, uint8_t u8Mode);
void WDT_RegisterTest_0(WDT_T *wdt);
void WDT_SysRSTSRCAndWDTCounterTest(uint8_t u8Mode);
void WWDT_TEST(WWDT_T *wwdt, uint8_t u8Mode);
void WWDT_RegisterTest_A(WWDT_T *wwdt, uint8_t u8InCh);
void EnableAllWDTandWWDT(void);

extern volatile uint32_t g_au32PORValue[20];
extern volatile uint32_t gu32WDTCLKFreq;
extern volatile uint32_t gu32WWDTCLKFreq;
extern volatile uint32_t gu32TIMER3CNT;
extern volatile uint32_t gu32CFG[4];
extern volatile uint32_t gu32CMPDAT;
extern volatile uint32_t gu32PeriodSel;
extern volatile uint8_t gu8IsHWWDTEnabled;
extern volatile uint32_t gu32LIRCFreq, gu32HIRCFreq;
extern volatile uint8_t g_u8IsAllWDTandWWDTTest;


static __INLINE uint32_t GetNum(void)
{
    uint32_t i = 0;
    uint8_t u8Char=0, u8InStr[16]={0};

    while(u8Char != 0x0D)
    {
        u8Char = getchar();
        if(u8Char == 27)
        {
            return u8Char;
        }
        if(u8Char == 'x' || u8Char == 'X' || u8Char == 'f'||
           u8Char == 'F' || u8Char == 'r' || u8Char == 'R')
        {
            return u8Char;
        }

        if(u8Char == '-')
        {
            u8InStr[i] = u8Char;
            printf("%c",u8Char);
            i++;
        }
        else if(u8Char >= '0' && u8Char <= '9')
        {
            u8InStr[i] = u8Char;
            printf("%c",u8Char);
            i++;
        }
    }

	return atoi((char *)u8InStr);
}


#define WDT_CTL_RSTCNT_Pos              (0)                                 /*!< WDT_T::CTL: RSTCNT Position    */
#define WDT_CTL_RSTCNT_Msk              (0x1ul << WDT_CTL_RSTCNT_Pos)       /*!< WDT_T::CTL: RSTCNT Mask        */
/* For WDT application */
static __INLINE void WAIT_RSTCNTBIT(WDT_T *wdt)
{
    while((wdt)->CTL&WDT_CTL_RSTCNT_Msk);
}

/* For TIMER3 application */
#define GET_TM0CNT      (TIMER3->CNT)
#define RST_TM0CNT  \
    { \
        TIMER3->CNT = 0x0; \
        while(TIMER3->CNT&TIMER_CNT_RSTACT_Msk); \
    }
#define GET_TM0FLAG     (TIMER3->INTSTS)
#define CLR_TM0FLAG     (TIMER3->INTSTS = 0x1)
#define UPD_TM0CMP(x)   (TIMER3->CMP = (x))

static __INLINE uint32_t TIMER3_Init(uint32_t u32ActFreq)
{
    CLK->APBCLK0 |= CLK_APBCLK0_TMR3CKEN_Msk;
    CLK->CLKSEL1 = (CLK->CLKSEL1&~CLK_CLKSEL1_TMR3SEL_Msk) | CLK_CLKSEL1_TMR3SEL_HXT;

    /* If u32ActFreq = 4000000, target pre-scale value should be 2 */
    TIMER3->CMP = 0xFFFFFF;
    TIMER3->CTL = TIMER_PERIODIC_MODE | TIMER_CTL_CNTEN_Msk | ((24000000UL/u32ActFreq) - 1);
    TIMER3->INTSTS = TIMER3->INTSTS;

    printf("\nConfigure TIMER3 freq. is %d Hz. 1-tick %d us. (CLKSEL1:0x%08X)\n", u32ActFreq, (1000000/u32ActFreq), CLK->CLKSEL1);

    return TIMER3->CTL;
}

extern void TMR2_IRQHandler(void);
static __INLINE uint32_t TIMER2_Init_INT(void)
{
    CLK->APBCLK0 |= CLK_APBCLK0_TMR2CKEN_Msk;
    CLK->CLKSEL1 = (CLK->CLKSEL1&~CLK_CLKSEL1_TMR2SEL_Msk) | CLK_CLKSEL1_TMR2SEL_HXT;

//	IRQ_SetHandler(TMR2_IRQn, TMR2_IRQHandler);
//	IRQ_Enable(TMR2_IRQn);

    TIMER2->CMP = 0xffffff; // one tick is 1000 us;
    TIMER2->CTL = TIMER_PERIODIC_MODE | TIMER_CTL_CNTEN_Msk | TIMER_CTL_INTEN_Msk | 23;
    TIMER2->INTSTS = TIMER2->INTSTS;

    return TIMER2->CTL;
}


static int32_t IsWithinTheRange(uint32_t Val, uint32_t max, uint32_t min)
{
    if(((Val) > (max)) || ((Val) < (min)))
        return -1;
    else
        return 0;
    
}

#endif  //__WDT_WWDT_TEST_H__
