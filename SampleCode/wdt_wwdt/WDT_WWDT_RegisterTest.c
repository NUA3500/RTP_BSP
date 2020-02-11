#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "NuMicro.h"

#include "WDT_WWDT_Test.h"

extern void Delay(uint32_t ticks);

#define ATB_READ_ONLY       0
#define ATB_WRITE_ONLY		1
#define ATB_READ_WRITE		2
#define ATB_WRITE_CLEAR     3
#define NUM_OF_WDT_REG      2
#define NUM_OF_WDT_WWDT_REG 6

#define UNDEF_VALUE         0xFFFFFFFF
								                                  
const char regName[NUM_OF_WDT_WWDT_REG][12] = {
    "WDTCTL",     "WDTALTCTL", 
    "WWDTRLDCNT", "WWDTCTL",   "WWDTSATUS", "WWDTCNT"
}; 
const uint32_t regAddr[NUM_OF_WDT_WWDT_REG] = {
    WDT2_BASE+0x00,  WDT2_BASE+0x04,
    WWDT2_BASE+0x00, WWDT2_BASE+0x04, WWDT2_BASE+0x08, WWDT2_BASE+0x0C
};								 
const uint32_t regAttrb[NUM_OF_WDT_WWDT_REG] = {
    ATB_READ_WRITE, ATB_READ_WRITE,
    UNDEF_VALUE,    ATB_READ_WRITE, UNDEF_VALUE, UNDEF_VALUE
};
const uint32_t regDefaultValue[NUM_OF_WDT_WWDT_REG] = {
    0x00000800,     0x00000000,
    0x00000000,     0x003F0800,     0x00000000,     0x0000003F,
};
const uint32_t regWZeroVal[NUM_OF_WDT_WWDT_REG] = {
    0x00000000,     0x00000000,
    UNDEF_VALUE,    UNDEF_VALUE,    UNDEF_VALUE,    UNDEF_VALUE,
};
const uint32_t regWOneVal[NUM_OF_WDT_WWDT_REG] = {
    0xC0000FD2,     0x00000003,
    UNDEF_VALUE,    0x803F0F03,     UNDEF_VALUE,    UNDEF_VALUE,
};
const uint32_t regW5Val[NUM_OF_WDT_WWDT_REG] = {
    0x00000550,     0x00000001,
    UNDEF_VALUE,    UNDEF_VALUE,    UNDEF_VALUE,    UNDEF_VALUE,
};
const uint32_t regWAVal[NUM_OF_WDT_WWDT_REG] = {
    0xC0000A82,     0x00000002,
    UNDEF_VALUE,    UNDEF_VALUE,    UNDEF_VALUE,    UNDEF_VALUE,
};
                                					                    
struct {
    unsigned char name[12];
    unsigned int addr;
    unsigned int attribute;
    unsigned int defval;     
    unsigned int woneval; 
    unsigned int wzeroval;
    unsigned int w5val; 
    unsigned int wAval;
} RegTable[NUM_OF_WDT_WWDT_REG];


static int32_t WDT_RegisterSyncTest(WDT_T *wdt)
{
    uint32_t u32CTL = 0x80000FD2, u32ALTCT = 0x3;
    volatile uint32_t i, u32Def0, u32Def1, u32Reg0, u32Reg1, u32CLKSEL3;
    
    SYS_UnlockReg();

    /* Change WDT clock source from LIRC first */
    u32CLKSEL3 = CLK->CLKSEL3;
    CLK->APBCLK1 |= (CLK_APBCLK1_WDT0CKEN_Msk);
    CLK->CLKSEL3 = ((CLK->CLKSEL3 & ~CLK_CLKSEL3_WDT0SEL_Msk) | CLK_CLKSEL3_WDT0SEL_LIRC);
    
    wdt->CTL = 0x800;
    wdt->ALTCTL = 0x0;
    u32Def0 = wdt->CTL;
    u32Def1 = wdt->ALTCTL;
    
    wdt->CTL = 0;
    wdt->CTL |= 0x1;
    wdt->CTL |= 0x2;
    wdt->CTL |= 0x10;
    wdt->CTL |= 0x40;
    wdt->CTL |= 0x80;
    wdt->CTL |= 0x100;
    wdt->CTL |= 0x200;
    wdt->CTL |= 0x400;
    wdt->CTL |= 0x800;
    wdt->CTL |= 0x80000000;
    u32Reg0 = wdt->CTL;
    
    wdt->ALTCTL = 0;
    wdt->ALTCTL |= 0x1;
    wdt->ALTCTL |= 0x2;
    u32Reg1 = wdt->ALTCTL;
    
    wdt->CTL = WDT_CTL_RSTCNT_Msk;
    WAIT_RSTCNTBIT(wdt); // Wait RSTCNT bit clear
    
    wdt->CTL = u32Def0;
    wdt->ALTCTL = u32Def1;
    
    if ((u32Reg0 != (u32CTL|0x40000000)) || (u32Reg1 != u32ALTCT))
    {
        printf("Register Sync test FAIL. (Read CTL:0x%x, ALTCTL:0x%x)\n", u32Reg0, u32Reg1);
        getchar();
        return -1;
    } 
    else 
    {
        printf("Register Sync test PASS. (Read CTL:0x%x, ALTCTL:0x%x)\n", u32CTL, u32ALTCT);
    }              
    
    wdt->CTL = u32Def0;     // 0x800
    wdt->ALTCTL = u32Def1;  // 0x0
    
    /* To check LOCK bit */
    SYS_LockReg();
    
    wdt->CTL = 0xFFFFFFFF;
    Delay(1000);
    if (wdt->CTL != u32Def0)
    {
        printf("Program CTL in LockReg state, FAIL. (0)\n");
        while(1);
    }
    wdt->CTL = 0x00000000;
    Delay(1000);
    if (wdt->CTL != u32Def0)
    {
        printf("Program CTL in LockReg state, FAIL. (1)\n");
        while(1);
    }
    wdt->ALTCTL = 0xFFFFFFFF;
    Delay(1000);
    if (wdt->ALTCTL != u32Def1)
    {
        printf("Program ALTCTL in LockReg state, FAIL. (1)\n");
        while(1);
    }
        
    SYS_UnlockReg();
    
    /* Restore WDT clock source ... */
    CLK->CLKSEL3 = u32CLKSEL3;

    return 0;
}

static int32_t WDT_ICEDEBUGTest(WDT_T *wdt)
{
    printf("ICEDEBUG bit Test.\n");
    
    StopWDTandResetCnt(wdt);

    wdt->CTL = 0x0;
    wdt->ALTCTL = 0x0;
    wdt->CTL |= 0x4C1;  // Enable WDT reset function
    if (WDT_GET_TIMEOUT_INT_FLAG(wdt) == 1)
    {
        printf("WDT IF is occurred. (CTL:0x%08x)\n", wdt->CTL);
        WDT_CLEAR_TIMEOUT_INT_FLAG(wdt);
    }
    else
    {
        printf("    WDT IF did not occur. (CTL:0x%08x)\n", wdt->CTL);
    }
    
    StopWDTandResetCnt(wdt);
    
    return 0;
}

void WDT_RegisterTest_0(WDT_T *wdt)
{
	int32_t i, iErr;
	volatile uint32_t u32ReadVal;
	
    printf("\n[Basic WDT Register test ... ]\n");

    /* New pattern */
    WDT_RegisterSyncTest(wdt);
//    WDT_ICEDEBUGTest(wdt);
    
    SYS_UnlockReg();
    
    /* Initial register table */
    for(i=0; i<NUM_OF_WDT_WWDT_REG; i++) 
    {
        RegTable[i].addr      = regAddr[i];          				    /* io address 					*/
        RegTable[i].attribute = regAttrb[i];       						/* attribute 					*/
        RegTable[i].defval    = regDefaultValue[i];      			    /* default value 				*/
        RegTable[i].woneval   = regWOneVal[i];    						/* result after write all 1     */
        RegTable[i].wzeroval  = regWZeroVal[i];   						/* result after write all 0     */
        RegTable[i].w5val     = regW5Val[i];      						/* result after write all 0x5   */
        RegTable[i].wAval     = regWAVal[i];      						/* result after write all 0xA   */
//        strcpy((void *)RegTable[i].name, (void *)&regName[i][0]);       /* register name 				*/
    }
    
  	iErr = 0;  	
  	printf("Default register value check .... "); 	
    for (i=0; i<NUM_OF_WDT_WWDT_REG; i++)
    {
        if ((u32ReadVal = inpw((void *)(long)RegTable[i].addr)) != RegTable[i].defval)
        {
            iErr = -1;
//            printf("\nError: REG %s[0x%08X] is read as [0x%08X], but the default value is [0x%08X].\n",
//                    RegTable[i].name, RegTable[i].addr, u32ReadVal, RegTable[i].defval);
            printf("\nError: REG 0x%08X is read as [0x%08X], but the default value is [0x%08X].\n",
                    RegTable[i].addr, u32ReadVal, RegTable[i].defval);
//            getchar();
        }
    }
	if (iErr == 0)
		printf("OK.\n");
    
    
  	iErr = 0;  	
  	printf("Write all 1 to test register .... "); 	
    for (i=0; i<NUM_OF_WDT_REG; i++)
    {
        if (RegTable[i].woneval != UNDEF_VALUE)
        {
            outpw((void *)(long)RegTable[i].addr, 0xFFFFFFFF);
            if ((u32ReadVal = inpw((void *)(long)RegTable[i].addr)) != RegTable[i].woneval)
            {
               	iErr = -1;
//              	printf("\nError: REG %s[0x%08X] is read as [0x%08X], but the target value should be [0x%08X].\n",
//                        RegTable[i].name, RegTable[i].addr, u32ReadVal, RegTable[i].woneval);
              	printf("\nError: REG 0x%08X is read as [0x%08X], but the target value should be [0x%08X].\n",
                        RegTable[i].addr, u32ReadVal, RegTable[i].woneval);
//                getchar();
            }
        }
    }
	if (iErr == 0)
		printf("OK.\n");
    wdt->CTL = WDT_CTL_RSTCNT_Msk;
    WAIT_RSTCNTBIT(wdt);
    

    iErr = 0;  	
 	printf("Write all 0 to test register .... "); 	
    for (i=0; i<NUM_OF_WDT_REG; i++)
    {
        if (RegTable[i].wzeroval != UNDEF_VALUE)
        {
            outpw((void *)(long)RegTable[i].addr, 0x00000000);
            if ((u32ReadVal = inpw((void *)(long)RegTable[i].addr)) != RegTable[i].wzeroval)
            {
               	iErr = -1;
//              	printf("\nError: REG %s[0x%08X] is read as [0x%08X], but the target value should be [0x%08X].\n",
//                        RegTable[i].name, RegTable[i].addr, u32ReadVal, RegTable[i].wzeroval);
              	printf("\nError: REG 0x%08X is read as [0x%08X], but the target value should be [0x%08X].\n",
                        RegTable[i].addr, u32ReadVal, RegTable[i].wzeroval);
//                getchar();
            }
       }
    }
	if (iErr == 0)
		printf("OK.\n");
    wdt->CTL = WDT_CTL_RSTCNT_Msk;
    WAIT_RSTCNTBIT(wdt);
 
  	iErr = 0;  	
  	printf("Write 0x55555555 to test register .... "); 	
    for (i=0; i<NUM_OF_WDT_REG; i++)
    {
        if (RegTable[i].w5val != UNDEF_VALUE)
        {
            outpw((void *)(long)RegTable[i].addr, 0x55555555);
            if ((u32ReadVal = inpw((void *)(long)RegTable[i].addr)) != RegTable[i].w5val)
            {
               	iErr = -1;
//              	printf("\nError: REG %s[0x%08X] is read as [0x%08X], but the target value should be [0x%08X].\n",
//                        RegTable[i].name, RegTable[i].addr, u32ReadVal, RegTable[i].w5val);
              	printf("\nError: REG 0x%08X is read as [0x%08X], but the target value should be [0x%08X].\n",
                        RegTable[i].addr, u32ReadVal, RegTable[i].w5val);
//                getchar();
            }
        }
    }
	if (iErr == 0)
		printf("OK.\n");
    wdt->CTL = WDT_CTL_RSTCNT_Msk;
    WAIT_RSTCNTBIT(wdt);
 
  	iErr = 0;  	
  	printf("Write 0xAAAAAAAA to test register .... "); 	
    for (i=0; i<NUM_OF_WDT_REG; i++)
    {
        if (RegTable[i].wAval != UNDEF_VALUE)
        {
            outpw((void *)(long)RegTable[i].addr, 0xAAAAAAAA);
            if ((u32ReadVal = inpw((void *)(long)RegTable[i].addr)) != RegTable[i].wAval)
            {
               	iErr = -1;
//              	printf("\nError: REG %s[0x%08X] is read as [0x%08X], but the target value should be [0x%08X].\n",
//                    RegTable[i].name, RegTable[i].addr, u32ReadVal, RegTable[i].wAval);
              	printf("\nError: REG 0x%08X is read as [0x%08X], but the target value should be [0x%08X].\n",
                    RegTable[i].addr, u32ReadVal, RegTable[i].wAval);
//                getchar();
            }
        }
    }
	if (iErr == 0)
		printf("OK.\n");
    wdt->CTL = WDT_CTL_RSTCNT_Msk;
    WAIT_RSTCNTBIT(wdt);
     
    ResetCHIP();

    while(1) {}
}


void WWDT_RegisterTest_A(WWDT_T *wwdt, uint8_t u8InCh)
{
    uint8_t u8Char;
    volatile uint32_t i, j, u32RegWWDT[4], u32RegTemp;
    
    CLK->APBCLK1 |= (CLK_APBCLK1_WDT0CKEN_Msk);
    CLK->CLKSEL3 = ((CLK->CLKSEL3 & ~CLK_CLKSEL3_WWDT0SEL_Msk) | CLK_CLKSEL3_WWDT0SEL_LIRC);
    
    /* Enable register write-protection function */
    SYS_LockReg();
    
    printf("\n[Basic WWDT Register R/W test ... (%s)]\n", (SYS->REGWPCTL)?"RegWrite UnLock":"RegWrite Lock");

  	printf("Default WWDT register value check ...... "); 	
    for (i=0; i<4; i++)
    {
        u32RegWWDT[i] = inpw((void *)(WWDT2_BASE+(i*4)));
    }
    if ((u32RegWWDT[0] == 0x0) && (u32RegWWDT[1] == 0x3F0800) && (u32RegWWDT[2] == 0x0) && (u32RegWWDT[3] == 0x3F))
    {
        printf("OK. (0x%08X, 0x%08X, 0x%08X, 0x%08X)\n\n", u32RegWWDT[0], u32RegWWDT[1], u32RegWWDT[2], u32RegWWDT[3]);
    } 
    else 
    {
        printf("FAIL. (0x%08X, 0x%08X, 0x%08X, 0x%08X)\n\n", u32RegWWDT[0], u32RegWWDT[1], u32RegWWDT[2], u32RegWWDT[3]);
        while(1) {}
    }
        
	do
    {
        printf("+---------------------------------------+\n");
        printf("| [1] Write all 0x0000_0000 test        |\n");
        printf("| [2] Write all 0xFFFF_FFFF test        |\n");
        printf("| [3] Write all 0x5555_5555 test        |\n");
        printf("| [4] Write all 0xAAAA_AAAA test        |\n");
        printf("| [5] Check if WWDT_CTL is write-once register after powered on or chip reset\n");
        printf("| [6] Measure WWDTIF transit period time from 1 to 0.\n");
        printf("+---------------------------------------+\n");
        u8Char = getchar();
        printf("[%c]\n\n", u8Char); 
        
        switch(u8Char) 
        {
            case '1':
            {
                u32RegWWDT[1] = 0x00000000;
                wwdt->CTL = u32RegWWDT[1];
                if (wwdt->CTL == 0x00000000)
                {
                    printf("Write all 0x0000_0000 OK. (0x%08X)\n\n", wwdt->CTL);
                } 
                else 
                {
                    printf("Write all 0x0000_0000 FAIL. (0x%08X)\n\n", wwdt->CTL);
                }
                ResetCHIP();
                break;
            }

            case '2':
            {
                u32RegWWDT[1] = 0xFFFFFFFF;
                wwdt->CTL = u32RegWWDT[1];
                if (wwdt->CTL == 0x803F0F03)
                {
                    printf("Write all 0xFFFF_FFFF OK. (0x%08X)\n\n", wwdt->CTL);
                } 
                else 
                {
                    printf("Write all 0xFFFF_FFFF FAIL. (0x%08X)\n\n", wwdt->CTL);
                }
                printf("[Wait time-out]\n");
                while(1)
                {
                    printf("%d  \r", wwdt->CNT);
                    if ((DEBUG_PORT->FIFOSTS & UART_FIFOSTS_RXEMPTY_Msk) == 0)
                    {
                        if ((DEBUG_PORT->DAT) == 27)
                            ResetCHIP();
                    }
                }
                break;
            }

            case '3':
            {
                u32RegWWDT[1] = 0x55555555;
                wwdt->CTL = u32RegWWDT[1];
                if (wwdt->CTL == 0x00150501)
                {
                    printf("Write all 0x5555_5555 OK. (0x%08X)\n\n", wwdt->CTL);
                } 
                else 
                {
                    printf("Write all 0x5555_5555 FAIL. (0x%08X)\n\n", wwdt->CTL);
                }
                printf("[Wait time-out]\n");
                while(1)
                {
                    printf("%d  \r", wwdt->CNT);
                    if ((DEBUG_PORT->FIFOSTS & UART_FIFOSTS_RXEMPTY_Msk) == 0)
                    {
                        if ((DEBUG_PORT->DAT) == 27)
                            ResetCHIP();
                    }
                }
                break;
            }

            case '4':
            {
                u32RegWWDT[1] = 0xAAAAAAAA;
                wwdt->CTL = u32RegWWDT[1];
                if (wwdt->CTL == 0x802A0A02)
                {
                    printf("Write all 0xAAAA_AAAA OK. (0x%08X)\n\n", wwdt->CTL);
                }
                else 
                {
                    printf("Write all 0xAAAA_AAAA FAIL. (0x%08X)\n\n", wwdt->CTL);
                }
                printf("[WWDT counter keeps 63 and hit [ESC] to exit] \n");
                while(1)
                {
                    printf("%d  \r", wwdt->CNT);
                    wwdt->RLDCNT = 0x00005AA5;
                    if ((DEBUG_PORT->FIFOSTS & UART_FIFOSTS_RXEMPTY_Msk) == 0)
                    {
                        if ((DEBUG_PORT->DAT) == 0x1B)
                            ResetCHIP();
                    }
                }
                break;
            }

            case '5':
            {
                u32RegWWDT[1] = 0x00010C03;
                printf("Write initial WWDT_CTL to 0x%08X ... ", u32RegWWDT[1]);
                wwdt->CTL = u32RegWWDT[1];                                
                if (wwdt->CTL == u32RegWWDT[1])
                {
                    printf("PASS.\n");
                } 
                else 
                {
                    printf("FAIL. (0x%08X)\n", wwdt->CTL);                   
                    while(1);
                }
                
                printf("Witre continue data to update WWDT_CTL and check its cannot be changed.\n\n");
                i = 0;
                while(1) 
                {
                    u32RegTemp = ((i%64)<<WWDT_CTL_CMPDAT_Pos) | 
                                ((i%16)<<WWDT_CTL_PSCSEL_Pos) |
                                ((i%4)<<WWDT_CTL_WWDTEN_Pos);
                    
                    wwdt->CTL = u32RegTemp;
                    if (wwdt->CTL != u32RegWWDT[1])
                    {
                        printf("\nFAIL. (0x%08X)\n", wwdt->CTL);                   
                        while(1);
                    }
                    printf("0x%08X, %d\r", u32RegTemp, i++);
                }
            }

            case '6':
            {
                wwdt->CTL = 0x00300801;
                if (wwdt->CTL == 0x00300801)
                {
                    printf("Write 0x00300801 OK.\n\n");
                } 
                else 
                {
                    printf("Write 0x00300801 FAIL. (0x%08X)\n\n", wwdt->CTL);
                    while(1);
                }
                
                IO_CTL = 1;
                while(1)
                {
                    if (wwdt->STATUS == WWDT_STATUS_WWDTIF_Msk)
                    {
                        IO_CTL = 0;
                        wwdt->STATUS = WWDT_STATUS_WWDTIF_Msk;
                        if (wwdt->STATUS != 0)
                        {
                            printf("Clear WWDTIF fail.\n");
                            while(1);
                        }
                        IO_CTL = 1;
                        WWDT_RELOAD_COUNTER();               
                    }
                    printf("%d  \r", wwdt->CNT);
                    if ((DEBUG_PORT->FIFOSTS&UART_FIFOSTS_RXEMPTY_Msk) == 0)
                    {
                        if ((DEBUG_PORT->DAT) == 27)
                            ResetCHIP();
                    }
                }
                break;
            }
        }
    } while(u8Char != 27);
    
    /* Disable register write-protection function */
    SYS_UnlockReg();
}
