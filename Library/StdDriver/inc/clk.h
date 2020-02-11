/**************************************************************************//**
 * @file     CLK.h
 * @version  V1.0
 * @brief    M480 Series CLK Driver Header File
 *
 * @copyright (C) 2016 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#ifndef __CLK_H__
#define __CLK_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup CLK_Driver CLK Driver
  @{
*/

/** @addtogroup CLK_EXPORTED_CONSTANTS CLK Exported Constants
  @{
*/


#define FREQ_25MHZ         25000000UL   /*!< 25 MHz \hideinitializer */
#define FREQ_50MHZ         50000000UL   /*!< 50 MHz \hideinitializer */
#define FREQ_72MHZ         72000000UL   /*!< 72 MHz \hideinitializer */
#define FREQ_80MHZ         80000000UL   /*!< 80 MHz \hideinitializer */
#define FREQ_100MHZ        100000000UL  /*!< 100 MHz \hideinitializer */
#define FREQ_125MHZ        125000000UL  /*!< 125 MHz \hideinitializer */
#define FREQ_160MHZ        160000000UL  /*!< 160 MHz \hideinitializer */
#define FREQ_192MHZ        192000000UL  /*!< 192 MHz \hideinitializer */
#define FREQ_200MHZ        200000000UL  /*!< 200 MHz \hideinitializer */
#define FREQ_250MHZ        250000000UL  /*!< 250 MHz \hideinitializer */
#define FREQ_500MHZ        500000000UL  /*!< 500 MHz \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL0 constant definitions.  (Write-protection)                                                      */
/*---------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL0 constant definitions.  (Write-protection)                                                      */
/*---------------------------------------------------------------------------------------------------------*/
/********************* Bit definition of CLKSEL0 register **********************/
#define CLK_CLKSEL0_CA35CKSEL_HXT          (0x0UL<<CLK_CLKSEL0_CA35CKSEL_Pos)       /*!< Select CA35CK clock source from high speed crystal */
#define CLK_CLKSEL0_CA35CKSEL_A35PLL       (0x1UL<<CLK_CLKSEL0_CA35CKSEL_Pos)       /*!< Select CA35CK Clock source from Cortex A35 PLL */
#define CLK_CLKSEL0_CA35CKSEL_EPLL         (0x2UL<<CLK_CLKSEL0_CA35CKSEL_Pos)       /*!< Select CA35CK Clock source from Ethernet PLL */
#define CLK_CLKSEL0_CA35CKSEL_APLL         (0x3UL<<CLK_CLKSEL0_CA35CKSEL_Pos)       /*!< Select CA35CK Clock source from Audio PLL */
#define CLK_CLKSEL0_SYSCK0SEL_A35PLL       (0x0UL<<CLK_CLKSEL0_SYSCK0SEL_Pos)       /*!< Select SYSCK0 clock source from A35 PLL */
#define CLK_CLKSEL0_SYSCK0SEL_SYSPLL       (0x1UL<<CLK_CLKSEL0_SYSCK0SEL_Pos)       /*!< Select SYSCK0 clock source from System PLL */
#define CLK_CLKSEL0_SYSCK1SEL_HXT          (0x0UL<<CLK_CLKSEL0_SYSCK1SEL_Pos)       /*!< Select SYSCK1 clock source from high speed crystal */
#define CLK_CLKSEL0_SYSCK1SEL_A35PLL       (0x1UL<<CLK_CLKSEL0_SYSCK1SEL_Pos)       /*!< Select SYSCK1 clock source from Cortex A35 PLL */
#define CLK_CLKSEL0_SYSCK1SEL_EPLL         (0x2UL<<CLK_CLKSEL0_SYSCK1SEL_Pos)       /*!< Select SYSCK1 clock source from Ethernet PLL */
#define CLK_CLKSEL0_SYSCK1SEL_APLL         (0x3UL<<CLK_CLKSEL0_SYSCK1SEL_Pos)       /*!< Select SYSCK1 clock source from Audio PLL */
#define CLK_CLKSEL0_M4STSEL_HXT            (0x0UL<<CLK_CLKSEL0_M4STSEL_Pos)         /*!< Select M4ST clock source from high speed crystal */
#define CLK_CLKSEL0_M4STSEL_LXT            (0x1UL<<CLK_CLKSEL0_M4STSEL_Pos)         /*!< Select M4ST clock source from low speed crystal */
#define CLK_CLKSEL0_M4STSEL_HXT_DIV2       (0x2UL<<CLK_CLKSEL0_M4STSEL_Pos)         /*!< Select M4ST clock source from HXT/2 */
#define CLK_CLKSEL0_M4STSEL_HCLK           (0x3UL<<CLK_CLKSEL0_M4STSEL_Pos)         /*!< Select M4ST clock source from HCLK */
#define CLK_CLKSEL0_M4STSEL_HIRC_DIV2      (0x7UL<<CLK_CLKSEL0_M4STSEL_Pos)         /*!< Select M4ST clock source from HIRC/2 */
#define CLK_CLKSEL0_CCAP0SEL_HXT           (0x0UL<<CLK_CLKSEL0_CCAP0SEL_Pos)        /*!< Select CCAP0 clock source from high speed crystal */
#define CLK_CLKSEL0_CCAP0SEL_VPLL          (0x1UL<<CLK_CLKSEL0_CCAP0SEL_Pos)        /*!< Select CCAP0 clock source from VIDEO PLL */
#define CLK_CLKSEL0_CCAP0SEL_APLL          (0x2UL<<CLK_CLKSEL0_CCAP0SEL_Pos)        /*!< Select CCAP0 clock source from Audio PLL */
#define CLK_CLKSEL0_CCAP0SEL_SYSPLL        (0x3UL<<CLK_CLKSEL0_CCAP0SEL_Pos)        /*!< Select CCAP0 clock source from System PLL */
#define CLK_CLKSEL0_CCAP1SEL_HXT           (0x0UL<<CLK_CLKSEL0_CCAP1SEL_Pos)        /*!< Select CCAP1 clock source from high speed crystal */
#define CLK_CLKSEL0_CCAP1SEL_VPLL          (0x1UL<<CLK_CLKSEL0_CCAP1SEL_Pos)        /*!< Select CCAP1 clock source from VIDEO PLL */
#define CLK_CLKSEL0_CCAP1SEL_APLL          (0x2UL<<CLK_CLKSEL0_CCAP1SEL_Pos)        /*!< Select CCAP1 clock source from Audio PLL */
#define CLK_CLKSEL0_CCAP1SEL_SYSPLL        (0x3UL<<CLK_CLKSEL0_CCAP1SEL_Pos)        /*!< Select CCAP1 clock source from System PLL */
#define CLK_CLKSEL0_SD0SEL_HXT             (0x0UL<<CLK_CLKSEL0_SD0SEL_Pos)          /*!< Select SD0 clock source from high speed crystal */
#define CLK_CLKSEL0_SD0SEL_VPLL            (0x1UL<<CLK_CLKSEL0_SD0SEL_Pos)          /*!< Select SD0 clock source from VIDEO PLL */
#define CLK_CLKSEL0_SD0SEL_APLL            (0x2UL<<CLK_CLKSEL0_SD0SEL_Pos)          /*!< Select SD0 clock source from Audio PLL */
#define CLK_CLKSEL0_SD0SEL_SYSPLL          (0x3UL<<CLK_CLKSEL0_SD0SEL_Pos)          /*!< Select SD0 clock source from System PLL */
#define CLK_CLKSEL0_SD0TMSEL_HXT           (0x0UL<<CLK_CLKSEL0_SD0TMSEL_Pos)        /*!< Select SD0TM clock source from high speed crystal */
#define CLK_CLKSEL0_SD0TMSEL_LXT           (0x1UL<<CLK_CLKSEL0_SD0TMSEL_Pos)        /*!< Select SD0TM clock source from low speed crystal */
#define CLK_CLKSEL0_SD0TMSEL_APLL          (0x2UL<<CLK_CLKSEL0_SD0TMSEL_Pos)        /*!< Select SD0TM clock source from Audio PLL */
#define CLK_CLKSEL0_SD0TMSEL_SYSPLL        (0x3UL<<CLK_CLKSEL0_SD0TMSEL_Pos)        /*!< Select SD0TM clock source from System PLL */
#define CLK_CLKSEL0_SD1SEL_HXT             (0x0UL<<CLK_CLKSEL0_SD1SEL_Pos)          /*!< Select SD1 clock source from high speed crystal */
#define CLK_CLKSEL0_SD1SEL_VPLL            (0x1UL<<CLK_CLKSEL0_SD1SEL_Pos)          /*!< Select SD1 clock source from VIDEO PLL */
#define CLK_CLKSEL0_SD1SEL_APLL            (0x2UL<<CLK_CLKSEL0_SD1SEL_Pos)          /*!< Select SD1 clock source from Audio PLL */
#define CLK_CLKSEL0_SD1SEL_SYSPLL          (0x3UL<<CLK_CLKSEL0_SD1SEL_Pos)          /*!< Select SD1 clock source from System PLL */
#define CLK_CLKSEL0_SD1TMSEL_HXT           (0x0UL<<CLK_CLKSEL0_SD1TMSEL_Pos)        /*!< Select SD1TM clock source from high speed crystal */
#define CLK_CLKSEL0_SD1TMSEL_LXT           (0x1UL<<CLK_CLKSEL0_SD1TMSEL_Pos)        /*!< Select SD1TM clock source from low speed crystal */
#define CLK_CLKSEL0_SD1TMSEL_APLL          (0x2UL<<CLK_CLKSEL0_SD1TMSEL_Pos)        /*!< Select SD1TM clock source from Audio PLL */
#define CLK_CLKSEL0_SD1TMSEL_SYSPLL        (0x3UL<<CLK_CLKSEL0_SD1TMSEL_Pos)        /*!< Select SD1TM clock source from System PLL */
#define CLK_CLKSEL0_DCUSEL_EPLL             (0x0UL<<CLK_CLKSEL0_DCUSEL_Pos)          /*!< Select DCU clock source from Etherent PLL */
#define CLK_CLKSEL0_DCUSEL_SYSPLL           (0x1UL<<CLK_CLKSEL0_DCUSEL_Pos)          /*!< Select DCU clock source from System  PLL */
#define CLK_CLKSEL0_GFXSEL_EPLL             (0x0UL<<CLK_CLKSEL0_GFXSEL_Pos)          /*!< Select GFX clock source from Etherent PLL */
#define CLK_CLKSEL0_GFXSEL_SYSPLL           (0x1UL<<CLK_CLKSEL0_GFXSEL_Pos)          /*!< Select GFX clock source from System PLL */
/********************* Bit definition of CLKSEL1 register **********************/
#define CLK_CLKSEL1_TMR0SEL_HXT            (0x0UL<<CLK_CLKSEL1_TMR0SEL_Pos)         /*!< Select TMR0 clock source from high speed crystal */
#define CLK_CLKSEL1_TMR0SEL_LXT            (0x1UL<<CLK_CLKSEL1_TMR0SEL_Pos)         /*!< Select TMR0 clock source from low speed crystal */
#define CLK_CLKSEL1_TMR0SEL_LIRC           (0x5UL<<CLK_CLKSEL1_TMR0SEL_Pos)         /*!< Select TMR0 clock source from low speed oscillator */
#define CLK_CLKSEL1_TMR0SEL_HIRC           (0x7UL<<CLK_CLKSEL1_TMR0SEL_Pos)         /*!< Select TMR0 clock source from high speed oscillator */
#define CLK_CLKSEL1_TMR0SEL_PCLK0          (0x2UL<<CLK_CLKSEL1_TMR0SEL_Pos)         /*!< Select TMR0 clock source from PCLK0 */
#define CLK_CLKSEL1_TMR0SEL_EXT            (0x3UL<<CLK_CLKSEL1_TMR0SEL_Pos)         /*!< Select TMR0 clock source from external trigger */
#define CLK_CLKSEL1_TMR1SEL_HXT            (0x0UL<<CLK_CLKSEL1_TMR1SEL_Pos)         /*!< Select TMR1 clock source from high speed crystal */
#define CLK_CLKSEL1_TMR1SEL_LXT            (0x1UL<<CLK_CLKSEL1_TMR1SEL_Pos)         /*!< Select TMR1 clock source from low speed crystal */
#define CLK_CLKSEL1_TMR1SEL_LIRC           (0x5UL<<CLK_CLKSEL1_TMR1SEL_Pos)         /*!< Select TMR1 clock source from low speed oscillator */
#define CLK_CLKSEL1_TMR1SEL_HIRC           (0x7UL<<CLK_CLKSEL1_TMR1SEL_Pos)         /*!< Select TMR1 clock source from high speed oscillator */
#define CLK_CLKSEL1_TMR1SEL_PCLK0          (0x2UL<<CLK_CLKSEL1_TMR1SEL_Pos)         /*!< Select TMR1 clock source from PCLK0 */
#define CLK_CLKSEL1_TMR1SEL_EXT            (0x3UL<<CLK_CLKSEL1_TMR1SEL_Pos)         /*!< Select TMR1 clock source from external trigger */
#define CLK_CLKSEL1_TMR2SEL_HXT            (0x0UL<<CLK_CLKSEL1_TMR2SEL_Pos)         /*!< Select TMR2 clock source from high speed crystal */
#define CLK_CLKSEL1_TMR2SEL_LXT            (0x1UL<<CLK_CLKSEL1_TMR2SEL_Pos)         /*!< Select TMR2 clock source from low speed crystal */
#define CLK_CLKSEL1_TMR2SEL_LIRC           (0x5UL<<CLK_CLKSEL1_TMR2SEL_Pos)         /*!< Select TMR2 clock source from low speed oscillator */
#define CLK_CLKSEL1_TMR2SEL_HIRC           (0x7UL<<CLK_CLKSEL1_TMR2SEL_Pos)         /*!< Select TMR2 clock source from high speed oscillator */
#define CLK_CLKSEL1_TMR2SEL_PCLK1          (0x2UL<<CLK_CLKSEL1_TMR2SEL_Pos)         /*!< Select TMR2 clock source from PCLK1 */
#define CLK_CLKSEL1_TMR2SEL_EXT            (0x3UL<<CLK_CLKSEL1_TMR2SEL_Pos)         /*!< Select TMR2 clock source from external trigger */
#define CLK_CLKSEL1_TMR3SEL_HXT            (0x0UL<<CLK_CLKSEL1_TMR3SEL_Pos)         /*!< Select TMR3 clock source from high speed crystal */
#define CLK_CLKSEL1_TMR3SEL_LXT            (0x1UL<<CLK_CLKSEL1_TMR3SEL_Pos)         /*!< Select TMR3 clock source from low speed crystal */
#define CLK_CLKSEL1_TMR3SEL_LIRC           (0x5UL<<CLK_CLKSEL1_TMR3SEL_Pos)         /*!< Select TMR3 clock source from low speed oscillator */
#define CLK_CLKSEL1_TMR3SEL_HIRC           (0x7UL<<CLK_CLKSEL1_TMR3SEL_Pos)         /*!< Select TMR3 clock source from high speed oscillator */
#define CLK_CLKSEL1_TMR3SEL_PCLK1          (0x2UL<<CLK_CLKSEL1_TMR3SEL_Pos)         /*!< Select TMR3 clock source from PCLK1 */
#define CLK_CLKSEL1_TMR3SEL_EXT            (0x3UL<<CLK_CLKSEL1_TMR3SEL_Pos)         /*!< Select TMR3 clock source from external trigger */
#define CLK_CLKSEL1_TMR4SEL_HXT            (0x0UL<<CLK_CLKSEL1_TMR4SEL_Pos)         /*!< Select TMR4 clock source from high speed crystal */
#define CLK_CLKSEL1_TMR4SEL_LXT            (0x1UL<<CLK_CLKSEL1_TMR4SEL_Pos)         /*!< Select TMR4 clock source from low speed crystal */
#define CLK_CLKSEL1_TMR4SEL_LIRC           (0x5UL<<CLK_CLKSEL1_TMR4SEL_Pos)         /*!< Select TMR4 clock source from low speed oscillator */
#define CLK_CLKSEL1_TMR4SEL_PCLK2          (0x2UL<<CLK_CLKSEL1_TMR4SEL_Pos)         /*!< Select TMR4 clock source from PCLK2 */
#define CLK_CLKSEL1_TMR4SEL_HIRC           (0x7UL<<CLK_CLKSEL1_TMR4SEL_Pos)         /*!< Select TMR4 clock source from high speed oscillator */
#define CLK_CLKSEL1_TMR4SEL_EXT            (0x3UL<<CLK_CLKSEL1_TMR4SEL_Pos)         /*!< Select TMR4 clock source from external trigger */
#define CLK_CLKSEL1_TMR5SEL_HXT            (0x0UL<<CLK_CLKSEL1_TMR5SEL_Pos)         /*!< Select TMR5 clock source from high speed crystal */
#define CLK_CLKSEL1_TMR5SEL_LXT            (0x1UL<<CLK_CLKSEL1_TMR5SEL_Pos)         /*!< Select TMR5 clock source from low speed crystal */
#define CLK_CLKSEL1_TMR5SEL_PCLK2          (0x2UL<<CLK_CLKSEL1_TMR5SEL_Pos)         /*!< Select TMR5 clock source from PCLK2 */
#define CLK_CLKSEL1_TMR5SEL_LIRC           (0x5UL<<CLK_CLKSEL1_TMR5SEL_Pos)         /*!< Select TMR5 clock source from low speed oscillator */
#define CLK_CLKSEL1_TMR5SEL_HIRC           (0x7UL<<CLK_CLKSEL1_TMR5SEL_Pos)         /*!< Select TMR5 clock source from high speed oscillator */
#define CLK_CLKSEL1_TMR5SEL_EXT            (0x3UL<<CLK_CLKSEL1_TMR5SEL_Pos)         /*!< Select TMR5 clock source from external trigger */
#define CLK_CLKSEL1_TMR6SEL_HXT            (0x0UL<<CLK_CLKSEL1_TMR6SEL_Pos)         /*!< Select TMR6 clock source from high speed crystal */
#define CLK_CLKSEL1_TMR6SEL_LXT            (0x1UL<<CLK_CLKSEL1_TMR6SEL_Pos)         /*!< Select TMR6 clock source from low speed crystal */
#define CLK_CLKSEL1_TMR6SEL_LIRC           (0x5UL<<CLK_CLKSEL1_TMR6SEL_Pos)         /*!< Select TMR6 clock source from low speed oscillator */
#define CLK_CLKSEL1_TMR6SEL_HIRC           (0x7UL<<CLK_CLKSEL1_TMR6SEL_Pos)         /*!< Select TMR6 clock source from high speed oscillator */
#define CLK_CLKSEL1_TMR6SEL_PCLK0          (0x2UL<<CLK_CLKSEL1_TMR6SEL_Pos)         /*!< Select TMR6 clock source from PCLK0 */
#define CLK_CLKSEL1_TMR6SEL_EXT            (0x3UL<<CLK_CLKSEL1_TMR6SEL_Pos)         /*!< Select TMR6 clock source from external trigger */
#define CLK_CLKSEL1_TMR7SEL_HXT            (0x0UL<<CLK_CLKSEL1_TMR7SEL_Pos)         /*!< Select TMR7 clock source from high speed crystal */
#define CLK_CLKSEL1_TMR7SEL_LXT            (0x1UL<<CLK_CLKSEL1_TMR7SEL_Pos)         /*!< Select TMR7 clock source from low speed crystal */
#define CLK_CLKSEL1_TMR7SEL_LIRC           (0x5UL<<CLK_CLKSEL1_TMR7SEL_Pos)         /*!< Select TMR7 clock source from low speed oscillator */
#define CLK_CLKSEL1_TMR7SEL_HIRC           (0x7UL<<CLK_CLKSEL1_TMR7SEL_Pos)         /*!< Select TMR7 clock source from high speed oscillator */
#define CLK_CLKSEL1_TMR7SEL_PCLK0          (0x2UL<<CLK_CLKSEL1_TMR7SEL_Pos)         /*!< Select TMR7 clock source from PCLK0 */
#define CLK_CLKSEL1_TMR7SEL_EXT            (0x3UL<<CLK_CLKSEL1_TMR7SEL_Pos)         /*!< Select TMR7 clock source from external trigger */
/********************* Bit definition of CLKSEL2 register **********************/
#define CLK_CLKSEL2_TMR8SEL_HXT            (0x0UL<<CLK_CLKSEL2_TMR8SEL_Pos)         /*!< Select TMR8 clock source from high speed crystal */
#define CLK_CLKSEL2_TMR8SEL_LXT            (0x1UL<<CLK_CLKSEL2_TMR8SEL_Pos)         /*!< Select TMR8 clock source from low speed crystal */
#define CLK_CLKSEL2_TMR8SEL_LIRC           (0x5UL<<CLK_CLKSEL2_TMR8SEL_Pos)         /*!< Select TMR8 clock source from low speed oscillator */
#define CLK_CLKSEL2_TMR8SEL_HIRC           (0x7UL<<CLK_CLKSEL2_TMR8SEL_Pos)         /*!< Select TMR8 clock source from high speed oscillator */
#define CLK_CLKSEL2_TMR8SEL_PCLK1          (0x2UL<<CLK_CLKSEL2_TMR8SEL_Pos)         /*!< Select TMR8 clock source from PCLK1 */
#define CLK_CLKSEL2_TMR8SEL_EXT            (0x3UL<<CLK_CLKSEL2_TMR8SEL_Pos)         /*!< Select TMR8 clock source from external trigger */
#define CLK_CLKSEL2_TMR9SEL_HXT            (0x0UL<<CLK_CLKSEL2_TMR9SEL_Pos)         /*!< Select TMR9 clock source from high speed crystal */
#define CLK_CLKSEL2_TMR9SEL_LXT            (0x1UL<<CLK_CLKSEL2_TMR9SEL_Pos)         /*!< Select TMR9 clock source from low speed crystal */
#define CLK_CLKSEL2_TMR9SEL_LIRC           (0x5UL<<CLK_CLKSEL2_TMR9SEL_Pos)         /*!< Select TMR9 clock source from low speed oscillator */
#define CLK_CLKSEL2_TMR9SEL_HIRC           (0x7UL<<CLK_CLKSEL2_TMR9SEL_Pos)         /*!< Select TMR9 clock source from high speed oscillator */
#define CLK_CLKSEL2_TMR9SEL_PCLK1          (0x2UL<<CLK_CLKSEL2_TMR9SEL_Pos)         /*!< Select TMR9 clock source from PCLK1 */
#define CLK_CLKSEL2_TMR9SEL_EXT            (0x3UL<<CLK_CLKSEL2_TMR9SEL_Pos)         /*!< Select TMR9 clock source from external trigger */
#define CLK_CLKSEL2_TMR10SEL_HXT           (0x0UL<<CLK_CLKSEL2_TMR10SEL_Pos)        /*!< Select TMR10 clock source from high speed crystal */
#define CLK_CLKSEL2_TMR10SEL_LXT           (0x1UL<<CLK_CLKSEL2_TMR10SEL_Pos)        /*!< Select TMR10 clock source from low speed crystal */
#define CLK_CLKSEL2_TMR10SEL_LIRC          (0x5UL<<CLK_CLKSEL2_TMR10SEL_Pos)        /*!< Select TMR10 clock source from low speed oscillator */
#define CLK_CLKSEL2_TMR10SEL_HIRC          (0x7UL<<CLK_CLKSEL2_TMR10SEL_Pos)        /*!< Select TMR10 clock source from high speed oscillator */
#define CLK_CLKSEL2_TMR10SEL_EXT           (0x3UL<<CLK_CLKSEL2_TMR10SEL_Pos)        /*!< Select TMR10 clock source from external trigger */
#define CLK_CLKSEL2_TMR11SEL_HXT           (0x0UL<<CLK_CLKSEL2_TMR11SEL_Pos)        /*!< Select TMR11 clock source from high speed crystal */
#define CLK_CLKSEL2_TMR11SEL_LXT           (0x1UL<<CLK_CLKSEL2_TMR11SEL_Pos)        /*!< Select TMR11 clock source from low speed crystal */
#define CLK_CLKSEL2_TMR11SEL_LIRC          (0x5UL<<CLK_CLKSEL2_TMR11SEL_Pos)        /*!< Select TMR11 clock source from low speed oscillator */
#define CLK_CLKSEL2_TMR11SEL_HIRC          (0x7UL<<CLK_CLKSEL2_TMR11SEL_Pos)        /*!< Select TMR11 clock source from high speed oscillator */
#define CLK_CLKSEL2_TMR11SEL_EXT           (0x3UL<<CLK_CLKSEL2_TMR11SEL_Pos)        /*!< Select TMR11 clock source from external trigger */
#define CLK_CLKSEL2_UART0SEL_HXT           (0x0UL<<CLK_CLKSEL2_UART0SEL_Pos)        /*!< Select UART0 clock source from high speed crystal */
#define CLK_CLKSEL2_UART0SEL_LXT           (0x2UL<<CLK_CLKSEL2_UART0SEL_Pos)        /*!< Select UART0 clock source from low speed crystal */
#define CLK_CLKSEL2_UART0SEL_HIRC          (0x3UL<<CLK_CLKSEL2_UART0SEL_Pos)        /*!< Select UART0 clock source from high speed oscillator */
#define CLK_CLKSEL2_UART1SEL_HXT           (0x0UL<<CLK_CLKSEL2_UART1SEL_Pos)        /*!< Select UART1 clock source from high speed crystal */
#define CLK_CLKSEL2_UART1SEL_LXT           (0x2UL<<CLK_CLKSEL2_UART1SEL_Pos)        /*!< Select UART1 clock source from low speed crystal */
#define CLK_CLKSEL2_UART1SEL_HIRC          (0x3UL<<CLK_CLKSEL2_UART1SEL_Pos)        /*!< Select UART1 clock source from high speed oscillator */
#define CLK_CLKSEL2_UART1SEL_PCLK1         (0x1UL<<CLK_CLKSEL2_UART1SEL_Pos)        /*!< Select UART1 clock source from PCLK1 */
#define CLK_CLKSEL2_UART2SEL_HXT           (0x0UL<<CLK_CLKSEL2_UART2SEL_Pos)        /*!< Select UART2 clock source from high speed crystal */
#define CLK_CLKSEL2_UART2SEL_PCLK2         (0x1UL<<CLK_CLKSEL2_UART1SEL_Pos)        /*!< Select UART2 clock source from PCLK2 */
#define CLK_CLKSEL2_UART2SEL_LXT           (0x2UL<<CLK_CLKSEL2_UART2SEL_Pos)        /*!< Select UART2 clock source from low speed crystal */
#define CLK_CLKSEL2_UART2SEL_HIRC          (0x3UL<<CLK_CLKSEL2_UART2SEL_Pos)        /*!< Select UART2 clock source from high speed oscillator */
#define CLK_CLKSEL2_UART3SEL_HXT           (0x0UL<<CLK_CLKSEL2_UART3SEL_Pos)        /*!< Select UART3 clock source from high speed crystal */
#define CLK_CLKSEL2_UART3SEL_LXT           (0x2UL<<CLK_CLKSEL2_UART3SEL_Pos)        /*!< Select UART3 clock source from low speed crystal */
#define CLK_CLKSEL2_UART3SEL_HIRC          (0x3UL<<CLK_CLKSEL2_UART3SEL_Pos)        /*!< Select UART3 clock source from high speed oscillator */
#define CLK_CLKSEL2_UART3SEL_PCLK1         (0x1UL<<CLK_CLKSEL2_UART3SEL_Pos)        /*!< Select UART3 clock source from PCLK1 */
#define CLK_CLKSEL2_UART4SEL_HXT           (0x0UL<<CLK_CLKSEL2_UART4SEL_Pos)        /*!< Select UART4 clock source from high speed crystal */
#define CLK_CLKSEL2_UART4SEL_LXT           (0x2UL<<CLK_CLKSEL2_UART4SEL_Pos)        /*!< Select UART4 clock source from low speed crystal */
#define CLK_CLKSEL2_UART4SEL_HIRC          (0x3UL<<CLK_CLKSEL2_UART4SEL_Pos)        /*!< Select UART4 clock source from high speed oscillator */
#define CLK_CLKSEL2_UART4SEL_PCLK2         (0x1UL<<CLK_CLKSEL2_UART4SEL_Pos)        /*!< Select UART4 clock source from PCLK2 */
#define CLK_CLKSEL2_UART5SEL_HXT           (0x0UL<<CLK_CLKSEL2_UART5SEL_Pos)        /*!< Select UART5 clock source from high speed crystal */
#define CLK_CLKSEL2_UART5SEL_LXT           (0x2UL<<CLK_CLKSEL2_UART5SEL_Pos)        /*!< Select UART5 clock source from low speed crystal */
#define CLK_CLKSEL2_UART5SEL_HIRC          (0x3UL<<CLK_CLKSEL2_UART5SEL_Pos)        /*!< Select UART5 clock source from high speed oscillator */
#define CLK_CLKSEL2_UART5SEL_PCLK1         (0x1UL<<CLK_CLKSEL2_UART5SEL_Pos)        /*!< Select UART5 clock source from PCLK1 */
#define CLK_CLKSEL2_UART6SEL_HXT           (0x0UL<<CLK_CLKSEL2_UART6SEL_Pos)        /*!< Select UART6 clock source from high speed crystal */
#define CLK_CLKSEL2_UART6SEL_PCLK2         (0x1UL<<CLK_CLKSEL2_UART4SEL_Pos)        /*!< Select UART6 clock source from PCLK2 */
#define CLK_CLKSEL2_UART6SEL_LXT           (0x2UL<<CLK_CLKSEL2_UART6SEL_Pos)        /*!< Select UART6 clock source from low speed crystal */
#define CLK_CLKSEL2_UART6SEL_HIRC          (0x3UL<<CLK_CLKSEL2_UART6SEL_Pos)        /*!< Select UART6 clock source from high speed oscillator */
#define CLK_CLKSEL2_UART7SEL_HXT           (0x0UL<<CLK_CLKSEL2_UART7SEL_Pos)        /*!< Select UART7 clock source from high speed crystal */
#define CLK_CLKSEL2_UART7SEL_LXT           (0x2UL<<CLK_CLKSEL2_UART7SEL_Pos)        /*!< Select UART7 clock source from low speed crystal */
#define CLK_CLKSEL2_UART7SEL_HIRC          (0x3UL<<CLK_CLKSEL2_UART7SEL_Pos)        /*!< Select UART7 clock source from high speed oscillator */
#define CLK_CLKSEL2_UART7SEL_PCLK1         (0x1UL<<CLK_CLKSEL2_UART7SEL_Pos)        /*!< Select UART7 clock source from PCLK1 */
/********************* Bit definition of CLKSEL3 register **********************/
#define CLK_CLKSEL3_UART8SEL_HXT           (0x0UL<<CLK_CLKSEL3_UART8SEL_Pos)        /*!< Select UART8 clock source from high speed crystal */
#define CLK_CLKSEL3_UART8SEL_PCLK2         (0x1UL<<CLK_CLKSEL3_UART8SEL_Pos)        /*!< Select UART8 clock source from PCLK2 */
#define CLK_CLKSEL3_UART8SEL_LXT           (0x2UL<<CLK_CLKSEL3_UART8SEL_Pos)        /*!< Select UART8 clock source from low speed crystal */
#define CLK_CLKSEL3_UART8SEL_HIRC          (0x3UL<<CLK_CLKSEL3_UART8SEL_Pos)        /*!< Select UART8 clock source from high speed oscillator */
#define CLK_CLKSEL3_UART9SEL_HXT           (0x0UL<<CLK_CLKSEL3_UART9SEL_Pos)        /*!< Select UART9 clock source from high speed crystal */
#define CLK_CLKSEL3_UART9SEL_LXT           (0x2UL<<CLK_CLKSEL3_UART9SEL_Pos)        /*!< Select UART9 clock source from low speed crystal */
#define CLK_CLKSEL3_UART9SEL_HIRC          (0x3UL<<CLK_CLKSEL3_UART9SEL_Pos)        /*!< Select UART9 clock source from high speed oscillator */
#define CLK_CLKSEL3_UART9SEL_PCLK1         (0x1UL<<CLK_CLKSEL3_UART9SEL_Pos)        /*!< Select UART9 clock source from PCLK1 */
#define CLK_CLKSEL3_UART10SEL_HXT          (0x0UL<<CLK_CLKSEL3_UART10SEL_Pos)       /*!< Select UART10 clock source from high speed crystal */
#define CLK_CLKSEL3_UART10SEL_PCLK2        (0x1UL<<CLK_CLKSEL3_UART10SEL_Pos)       /*!< Select UART10 clock source from PCLK2 */
#define CLK_CLKSEL3_UART10SEL_LXT          (0x2UL<<CLK_CLKSEL3_UART10SEL_Pos)       /*!< Select UART10 clock source from low speed crystal */
#define CLK_CLKSEL3_UART10SEL_HIRC         (0x3UL<<CLK_CLKSEL3_UART10SEL_Pos)       /*!< Select UART10 clock source from high speed oscillator */
#define CLK_CLKSEL3_UART11SEL_HXT          (0x0UL<<CLK_CLKSEL3_UART11SEL_Pos)       /*!< Select UART11 clock source from high speed crystal */
#define CLK_CLKSEL3_UART11SEL_LXT          (0x2UL<<CLK_CLKSEL3_UART11SEL_Pos)       /*!< Select UART11 clock source from low speed crystal */
#define CLK_CLKSEL3_UART11SEL_HIRC         (0x3UL<<CLK_CLKSEL3_UART11SEL_Pos)       /*!< Select UART11 clock source from high speed oscillator */
#define CLK_CLKSEL3_UART11SEL_PCLK1        (0x1UL<<CLK_CLKSEL3_UART11SEL_Pos)       /*!< Select UART11 clock source from PCLK1 */
#define CLK_CLKSEL3_UART12SEL_HXT          (0x0UL<<CLK_CLKSEL3_UART12SEL_Pos)       /*!< Select UART12 clock source from high speed crystal */
#define CLK_CLKSEL3_UART12SEL_PCLK2        (0x1UL<<CLK_CLKSEL3_UART12SEL_Pos)       /*!< Select UART12 clock source from PCLK2 */
#define CLK_CLKSEL3_UART12SEL_LXT          (0x2UL<<CLK_CLKSEL3_UART12SEL_Pos)       /*!< Select UART12 clock source from low speed crystal */
#define CLK_CLKSEL3_UART12SEL_HIRC         (0x3UL<<CLK_CLKSEL3_UART12SEL_Pos)       /*!< Select UART12 clock source from high speed oscillator */
#define CLK_CLKSEL3_UART13SEL_HXT          (0x0UL<<CLK_CLKSEL3_UART13SEL_Pos)       /*!< Select UART13 clock source from high speed crystal */
#define CLK_CLKSEL3_UART13SEL_LXT          (0x2UL<<CLK_CLKSEL3_UART13SEL_Pos)       /*!< Select UART13 clock source from low speed crystal */
#define CLK_CLKSEL3_UART13SEL_HIRC         (0x3UL<<CLK_CLKSEL3_UART13SEL_Pos)       /*!< Select UART13 clock source from high speed oscillator */
#define CLK_CLKSEL3_UART13SEL_PCLK1        (0x1UL<<CLK_CLKSEL3_UART13SEL_Pos)       /*!< Select UART13 clock source from PCLK1 */
#define CLK_CLKSEL3_UART14SEL_HXT          (0x0UL<<CLK_CLKSEL3_UART14SEL_Pos)       /*!< Select UART14 clock source from high speed crystal */
#define CLK_CLKSEL3_UART14SEL_PCLK2        (0x1UL<<CLK_CLKSEL3_UART14SEL_Pos)       /*!< Select UART14 clock source from PCLK2 */
#define CLK_CLKSEL3_UART14SEL_LXT          (0x2UL<<CLK_CLKSEL3_UART14SEL_Pos)       /*!< Select UART14 clock source from low speed crystal */
#define CLK_CLKSEL3_UART14SEL_HIRC         (0x3UL<<CLK_CLKSEL3_UART14SEL_Pos)       /*!< Select UART14 clock source from high speed oscillator */
#define CLK_CLKSEL3_UART15SEL_HXT          (0x0UL<<CLK_CLKSEL3_UART15SEL_Pos)       /*!< Select UART15 clock source from high speed crystal */
#define CLK_CLKSEL3_UART15SEL_LXT          (0x2UL<<CLK_CLKSEL3_UART15SEL_Pos)       /*!< Select UART15 clock source from low speed crystal */
#define CLK_CLKSEL3_UART15SEL_HIRC         (0x3UL<<CLK_CLKSEL3_UART15SEL_Pos)       /*!< Select UART15 clock source from high speed oscillator */
#define CLK_CLKSEL3_UART15SEL_PCLK1        (0x1UL<<CLK_CLKSEL3_UART15SEL_Pos)       /*!< Select UART15 clock source from PCLK1 */
#define CLK_CLKSEL3_UART16SEL_HXT          (0x0UL<<CLK_CLKSEL3_UART16SEL_Pos)       /*!< Select UART16 clock source from high speed crystal */
#define CLK_CLKSEL3_UART16SEL_PCLK2        (0x1UL<<CLK_CLKSEL3_UART16SEL_Pos)       /*!< Select UART16 clock source from PCLK2 */
#define CLK_CLKSEL3_UART16SEL_LXT          (0x2UL<<CLK_CLKSEL3_UART16SEL_Pos)       /*!< Select UART16 clock source from low speed crystal */
#define CLK_CLKSEL3_UART16SEL_HIRC         (0x3UL<<CLK_CLKSEL3_UART16SEL_Pos)       /*!< Select UART16 clock source from high speed oscillator */
#define CLK_CLKSEL3_WDT0SEL_HXT            (0x0UL<<CLK_CLKSEL3_WDT0SEL_Pos)         /*!< Select WDT0 clock source from high speed crystal */
#define CLK_CLKSEL3_WDT0SEL_LXT            (0x1UL<<CLK_CLKSEL3_WDT0SEL_Pos)         /*!< Select WDT0 Clock source from 32.768 kHz external low speed crystal oscillator */
#define CLK_CLKSEL3_WDT0SEL_PCLK3_DIV4096  (0x2UL<<CLK_CLKSEL3_WDT0SEL_Pos)         /*!< Select WDT0 Clock source from PCLK3/4096 */
#define CLK_CLKSEL3_WDT0SEL_LIRC           (0x3UL<<CLK_CLKSEL3_WDT0SEL_Pos)         /*!< Select WDT0 clock source from low speed oscillator */
#define CLK_CLKSEL3_WWDT0SEL_HXT           (0x0UL<<CLK_CLKSEL3_WWDT0SEL_Pos)        /*!< Select WWDT0 clock source from high speed crystal */
#define CLK_CLKSEL3_WWDT0SEL_LXT           (0x1UL<<CLK_CLKSEL3_WWDT0SEL_Pos)        /*!< Select WWDT0 clock source from low speed crystal */
#define CLK_CLKSEL3_WWDT0SEL_PCLK3_DIV4096 (0x2UL<<CLK_CLKSEL3_WWDT0SEL_Pos)        /*!< Select WWDT0 Clock source from PCLK3/4096 */
#define CLK_CLKSEL3_WWDT0SEL_LIRC          (0x3UL<<CLK_CLKSEL3_WWDT0SEL_Pos)        /*!< Select WWDT0 clock source from low speed oscillator */
#define CLK_CLKSEL3_WDT1SEL_HXT            (0x0UL<<CLK_CLKSEL3_WDT1SEL_Pos)         /*!< Select WDT1 clock source from high speed crystal */
#define CLK_CLKSEL3_WDT1SEL_LXT            (0x1UL<<CLK_CLKSEL3_WDT1SEL_Pos)         /*!< Select WDT1 Clock source from 32.768 kHz external low speed crystal oscillator */
#define CLK_CLKSEL3_WDT1SEL_PCLK3_DIV4096  (0x2UL<<CLK_CLKSEL3_WDT1SEL_Pos)         /*!< Select WDT1 Clock source from PCLK3/4096 */
#define CLK_CLKSEL3_WDT1SEL_LIRC           (0x3UL<<CLK_CLKSEL3_WDT1SEL_Pos)         /*!< Select WDT1 clock source from low speed oscillator */
#define CLK_CLKSEL3_WWDT1SEL_HXT           (0x0UL<<CLK_CLKSEL3_WWDT1SEL_Pos)        /*!< Select WWDT1 clock source from high speed crystal */
#define CLK_CLKSEL3_WWDT1SEL_LXT           (0x1UL<<CLK_CLKSEL3_WWDT1SEL_Pos)        /*!< Select WWDT1 clock source from low speed crystal */
#define CLK_CLKSEL3_WWDT1SEL_PCLK3_DIV4096 (0x2UL<<CLK_CLKSEL3_WWDT1SEL_Pos)        /*!< Select WWDT1 Clock source from PCLK3/4096 */
#define CLK_CLKSEL3_WWDT1SEL_LIRC          (0x3UL<<CLK_CLKSEL3_WWDT1SEL_Pos)        /*!< Select WWDT1 clock source from low speed oscillator */
#define CLK_CLKSEL3_WDT2SEL_HXT            (0x0UL<<CLK_CLKSEL3_WDT2SEL_Pos)         /*!< Select WDT2 clock source from high speed crystal */
#define CLK_CLKSEL3_WDT2SEL_LXT            (0x1UL<<CLK_CLKSEL3_WDT2SEL_Pos)         /*!< Select WDT2 Clock source from 32.768 kHz external low speed crystal oscillator */
#define CLK_CLKSEL3_WDT2SEL_PCLK3_DIV4096  (0x2UL<<CLK_CLKSEL3_WDT2SEL_Pos)         /*!< Select WDT2 Clock source from PCLK3/4096 */
#define CLK_CLKSEL3_WDT2SEL_LIRC           (0x3UL<<CLK_CLKSEL3_WDT2SEL_Pos)         /*!< Select WDT2 clock source from low speed oscillator */
#define CLK_CLKSEL3_WWDT2SEL_HXT           (0x0UL<<CLK_CLKSEL3_WWDT2SEL_Pos)        /*!< Select WWDT2 clock source from high speed crystal */
#define CLK_CLKSEL3_WWDT2SEL_LXT           (0x1UL<<CLK_CLKSEL3_WWDT2SEL_Pos)        /*!< Select WWDT2 clock source from low speed crystal */
#define CLK_CLKSEL3_WWDT2SEL_PCLK3_DIV4096 (0x2UL<<CLK_CLKSEL3_WWDT2SEL_Pos)        /*!< Select WWDT2 Clock source from PCLK3/4096 */
#define CLK_CLKSEL3_WWDT2SEL_LIRC          (0x3UL<<CLK_CLKSEL3_WWDT2SEL_Pos)        /*!< Select WWDT2 clock source from low speed oscillator */


#define CLK_CLKSEL4_SPI0SEL_HXT            (0x0UL<<CLK_CLKSEL4_SPI0SEL_Pos)         /*!< Select SPI0 clock source from high speed crystal */
#define CLK_CLKSEL4_SPI0SEL_SYSPLL         (0x1UL<<CLK_CLKSEL4_SPI0SEL_Pos)         /*!< Select SPI0 Clock source from SYSTEM PLL */
#define CLK_CLKSEL4_SPI0SEL_PCLK1          (0x2UL<<CLK_CLKSEL4_SPI0SEL_Pos)         /*!< Select SPI0 Clock source from PCLK1 */
#define CLK_CLKSEL4_SPI0SEL_HIRC           (0x3UL<<CLK_CLKSEL4_SPI0SEL_Pos)         /*!< Select SPI0 clock source from 12 MHz internal high speed RC oscillator */
#define CLK_CLKSEL4_SPI1SEL_HXT            (0x0UL<<CLK_CLKSEL4_SPI1SEL_Pos)         /*!< Select SPI1 clock source from high speed crystal */
#define CLK_CLKSEL4_SPI1SEL_SYSPLL         (0x1UL<<CLK_CLKSEL4_SPI1SEL_Pos)         /*!< Select SPI1 Clock source from SYSTEM PLL */
#define CLK_CLKSEL4_SPI1SEL_PCLK2          (0x2UL<<CLK_CLKSEL4_SPI1SEL_Pos)         /*!< Select SPI1 Clock source from PCLK2 */
#define CLK_CLKSEL4_SPI1SEL_HIRC           (0x3UL<<CLK_CLKSEL4_SPI1SEL_Pos)         /*!< Select SPI1 clock source from 12 MHz internal high speed RC oscillator */
#define CLK_CLKSEL4_SPI2SEL_HXT            (0x0UL<<CLK_CLKSEL4_SPI2SEL_Pos)         /*!< Select SPI2 clock source from high speed crystal */
#define CLK_CLKSEL4_SPI2SEL_SYSPLL         (0x1UL<<CLK_CLKSEL4_SPI2SEL_Pos)         /*!< Select SPI2 Clock source from SYSTEM PLL */
#define CLK_CLKSEL4_SPI2SEL_PCLK1          (0x2UL<<CLK_CLKSEL4_SPI2SEL_Pos)         /*!< Select SPI2 Clock source from PCLK1 */
#define CLK_CLKSEL4_SPI2SEL_HIRC           (0x3UL<<CLK_CLKSEL4_SPI2SEL_Pos)         /*!< Select SPI2 clock source from 12 MHz internal high speed RC oscillator */
#define CLK_CLKSEL4_SPI3SEL_HXT            (0x0UL<<CLK_CLKSEL4_SPI3SEL_Pos)         /*!< Select SPI3 clock source from high speed crystal */
#define CLK_CLKSEL4_SPI3SEL_SYSPLL         (0x1UL<<CLK_CLKSEL4_SPI3SEL_Pos)         /*!< Select SPI3 Clock source from SYSTEM PLL */
#define CLK_CLKSEL4_SPI3SEL_PCLK2          (0x2UL<<CLK_CLKSEL4_SPI3SEL_Pos)         /*!< Select SPI3 Clock source from PCLK2 */
#define CLK_CLKSEL4_SPI3SEL_HIRC           (0x3UL<<CLK_CLKSEL4_SPI3SEL_Pos)         /*!< Select SPI3 clock source from 12 MHz internal high speed RC oscillator */
#define CLK_CLKSEL4_QSPI0SEL_HXT           (0x0UL<<CLK_CLKSEL4_QSPI0SEL_Pos)        /*!< Select QSPI0 clock source from high speed crystal */
#define CLK_CLKSEL4_QSPI0SEL_PLL           (0x1UL<<CLK_CLKSEL4_QSPI0SEL_Pos)        /*!< Select QSPI0 Clock source from PLL */
#define CLK_CLKSEL4_QSPI0SEL_PCLK0         (0x2UL<<CLK_CLKSEL4_QSPI0SEL_Pos)        /*!< Select QSPI0 Clock source from PCLK0 */
#define CLK_CLKSEL4_QSPI0SEL_HIRC          (0x3UL<<CLK_CLKSEL4_QSPI0SEL_Pos)        /*!< Select QSPI0 clock source from 12 MHz internal high speed RC oscillator */
#define CLK_CLKSEL4_QSPI1SEL_HXT           (0x0UL<<CLK_CLKSEL4_QSPI1SEL_Pos)        /*!< Select QSPI1 clock source from high speed crystal */
#define CLK_CLKSEL4_QSPI1SEL_PLL           (0x1UL<<CLK_CLKSEL4_QSPI1SEL_Pos)        /*!< Select QSPI1 Clock source from PLL */
#define CLK_CLKSEL4_QSPI1SEL_PCLK0         (0x2UL<<CLK_CLKSEL4_QSPI1SEL_Pos)        /*!< Select QSPI1 Clock source from PCLK0 */
#define CLK_CLKSEL4_QSPI1SEL_HIRC          (0x3UL<<CLK_CLKSEL4_QSPI1SEL_Pos)        /*!< Select QSPI1 clock source from 12 MHz internal high speed RC oscillator */
#define CLK_CLKSEL4_I2S0SEL_HXT            (0x0UL<<CLK_CLKSEL4_I2S0SEL_Pos)         /*!< Select I2S0 clock source from high speed crystal */
#define CLK_CLKSEL4_I2S0SEL_APLL           (0x1UL<<CLK_CLKSEL4_I2S0SEL_Pos)         /*!< Select I2S0 Clock source from APLL */
#define CLK_CLKSEL4_I2S0SEL_PCLK0          (0x2UL<<CLK_CLKSEL4_I2S0SEL_Pos)         /*!< Select I2S0 Clock source from PCLK0 */
#define CLK_CLKSEL4_I2S0SEL_HIRC           (0x3UL<<CLK_CLKSEL4_I2S0SEL_Pos)         /*!< Select I2S0 clock source from 12 MHz internal high speed RC oscillator */
#define CLK_CLKSEL4_I2S1SEL_HXT            (0x0UL<<CLK_CLKSEL4_I2S1SEL_Pos)         /*!< Select I2S1 clock source from high speed crystal */
#define CLK_CLKSEL4_I2S1SEL_APLL           (0x1UL<<CLK_CLKSEL4_I2S1SEL_Pos)         /*!< Select I2S1 Clock source from APLL */
#define CLK_CLKSEL4_I2S1SEL_PCLK2          (0x2UL<<CLK_CLKSEL4_I2S1SEL_Pos)         /*!< Select I2S1 Clock source from PCLK2 */
#define CLK_CLKSEL4_I2S1SEL_HIRC           (0x3UL<<CLK_CLKSEL4_I2S1SEL_Pos)         /*!< Select I2S1 clock source from 12 MHz internal high speed RC oscillator */
#define CLK_CLKSEL4_KPISEL_HXT             (0x0UL<<CLK_CLKSEL4_KPISEL_Pos)          /*!< Select KPI clock source from high speed crystal */
#define CLK_CLKSEL4_KPISEL_LXT             (0x1UL<<CLK_CLKSEL4_KPISEL_Pos)          /*!< Select KPI Clock source from low speed crystal */
#define CLK_CLKSEL4_CKOSEL_HXT             (0x0UL<<CLK_CLKSEL4_CKOSEL_Pos)          /*!< Select CLKO clock source from high speed crystal */
#define CLK_CLKSEL4_CKOSEL_LXT             (0x1UL<<CLK_CLKSEL4_CKOSEL_Pos)          /*!< Select CLKO Clock source from low speed crystal */
#define CLK_CLKSEL4_CKOSEL_HIRC            (0x2UL<<CLK_CLKSEL4_CKOSEL_Pos)          /*!< Select CLKO clock source from internal high speed RC oscillator */
#define CLK_CLKSEL4_CKOSEL_LIRC            (0x3UL<<CLK_CLKSEL4_CKOSEL_Pos)          /*!< Select CLKO Clock source from internal low speed RC oscillatorl */
#define CLK_CLKSEL4_CKOSEL_CAPLL           (0x4UL<<CLK_CLKSEL4_CKOSEL_Pos)          /*!< Select CLKO Clock source from CA-PLL */
#define CLK_CLKSEL4_CKOSEL_SYSPLL          (0x5UL<<CLK_CLKSEL4_CKOSEL_Pos)          /*!< Select CLKO Clock source from SYSTEM PLL */
#define CLK_CLKSEL4_CKOSEL_DDRPLL          (0x6UL<<CLK_CLKSEL4_CKOSEL_Pos)          /*!< Select CLKO Clock source from DDR PLL */
#define CLK_CLKSEL4_CKOSEL_EPLL            (0x7UL<<CLK_CLKSEL4_CKOSEL_Pos)          /*!< Select CLKO clock source from EPLL */
#define CLK_CLKSEL4_CKOSEL_APLL            (0x8UL<<CLK_CLKSEL4_CKOSEL_Pos)          /*!< Select CLKO Clock source from APLL */
#define CLK_CLKSEL4_CKOSEL_VPLL            (0x9UL<<CLK_CLKSEL4_CKOSEL_Pos)          /*!< Select CLKO Clock source from VIDEO PLL */
#define CLK_CLKSEL4_SC0SEL_HXT             (0x0UL<<CLK_CLKSEL4_SC0SEL_Pos)          /*!< Select SC0 clock source from high speed crystal */
#define CLK_CLKSEL4_SC0SEL_PCLK            (0x1UL<<CLK_CLKSEL4_SC0SEL_Pos)          /*!< Select SC0 Clock source from PCLK4 */
#define CLK_CLKSEL4_SC1SEL_HXT             (0x0UL<<CLK_CLKSEL4_SC1SEL_Pos)          /*!< Select SC1 clock source from high speed crystal */
#define CLK_CLKSEL4_SC1SEL_PCLK            (0x1UL<<CLK_CLKSEL4_SC1SEL_Pos)          /*!< Select SC1 Clock source from PCLK4 */
#define CLK_CLKSEL4_EPWM0_PCLK0            (0x1UL<<CLK_CLKSEL4_EPWM0SEL_Pos)        /*!< Select EPWM0 Clock source from PCLK0 */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV0 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKDIV0_HCLK(x)              (((x) - 1UL) << CLK_CLKDIV0_HCLKDIV_Pos)   /*!< CLKDIV0 Setting for HCLK clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV0_USB(x)               (((x) - 1UL) << CLK_CLKDIV0_USBDIV_Pos)    /*!< CLKDIV0 Setting for USB clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV0_SDH0(x)              (((x) - 1UL) << CLK_CLKDIV0_SDH0DIV_Pos)   /*!< CLKDIV0 Setting for SDH0 clock divider. It could be 1~256 \hideinitializer */
#define CLK_CLKDIV0_UART0(x)             (((x) - 1UL) << CLK_CLKDIV0_UART0DIV_Pos)  /*!< CLKDIV0 Setting for UART0 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV0_UART1(x)             (((x) - 1UL) << CLK_CLKDIV0_UART1DIV_Pos)  /*!< CLKDIV0 Setting for UART1 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV0_EADC(x)              (((x) - 1UL) << CLK_CLKDIV0_EADCDIV_Pos)   /*!< CLKDIV0 Setting for EADC clock divider. It could be 1~256 \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV1 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKDIV1_SC0(x)               (((x) - 1UL) << CLK_CLKDIV1_SC0DIV_Pos)    /*!< CLKDIV1 Setting for SC0 clock divider. It could be 1~256 \hideinitializer */
#define CLK_CLKDIV1_SC1(x)               (((x) - 1UL) << CLK_CLKDIV1_SC1DIV_Pos)    /*!< CLKDIV1 Setting for SC1 clock divider. It could be 1~256 \hideinitializer */
#define CLK_CLKDIV1_SC2(x)               (((x) - 1UL) << CLK_CLKDIV1_SC2DIV_Pos)    /*!< CLKDIV1 Setting for SC2 clock divider. It could be 1~256 \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV2 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKDIV2_I2S0(x)              (((x) - 1UL) << CLK_CLKDIV2_I2SDIV_Pos)    /*!< CLKDIV2 Setting for I2S0 clock divider. It could be 1~16 */
#define CLK_CLKDIV2_EADC1(x)             (((x) - 1UL) << CLK_CLKDIV2_EADC1DIV_Pos)  /*!< CLKDIV2 Setting for EADC1 clock divider. It could be 1~256 */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV3 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKDIV3_CCAP(x)              (((x) - 1UL) << CLK_CLKDIV3_CCAPDIV_Pos)   /*!< CLKDIV3 Setting for CCAP clock divider. It could be 1~256 */
#define CLK_CLKDIV3_VSENSE(x)            (((x) - 1UL) << CLK_CLKDIV3_VSENSEDIV_Pos) /*!< CLKDIV3 Setting for VSENSE clock divider. It could be 1~256 */
#define CLK_CLKDIV3_EMAC(x)              (((x) - 1UL) << CLK_CLKDIV3_EMACDIV_Pos)   /*!< CLKDIV3 Setting for EMAC clock divider. It could be 1~256 \hideinitializer */
#define CLK_CLKDIV3_SDH1(x)              (((x) - 1UL) << CLK_CLKDIV3_SDH1DIV_Pos)   /*!< CLKDIV3 Setting for SDH1 clock divider. It could be 1~256 \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV4 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKDIV4_UART2(x)             (((x) - 1UL) << CLK_CLKDIV4_UART2DIV_Pos)  /*!< CLKDIV4 Setting for UART2 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV4_UART3(x)             (((x) - 1UL) << CLK_CLKDIV4_UART3DIV_Pos)  /*!< CLKDIV4 Setting for UART3 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV4_UART4(x)             (((x) - 1UL) << CLK_CLKDIV4_UART4DIV_Pos)  /*!< CLKDIV4 Setting for UART4 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV4_UART5(x)             (((x) - 1UL) << CLK_CLKDIV4_UART5DIV_Pos)  /*!< CLKDIV4 Setting for UART5 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV4_UART6(x)             (((x) - 1UL) << CLK_CLKDIV4_UART6DIV_Pos)  /*!< CLKDIV4 Setting for UART6 clock divider. It could be 1~16 */
#define CLK_CLKDIV4_UART7(x)             (((x) - 1UL) << CLK_CLKDIV4_UART7DIV_Pos)  /*!< CLKDIV4 Setting for UART7 clock divider. It could be 1~16 */

/*---------------------------------------------------------------------------------------------------------*/
/*  PLLCTL constant definitions. PLL = FIN * 2 * NF / NR / NO                                              */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PLLCTL_PLLSRC_HXT   0x00000000UL    /*!< For PLL clock source is HXT.  4MHz < FIN/NR < 8MHz \hideinitializer */
#define CLK_PLLCTL_PLLSRC_HIRC  0x00080000UL    /*!< For PLL clock source is HIRC. 4MHz < FIN/NR < 8MHz \hideinitializer */

#define CLK_PLLCTL_NF(x)        (((x)-2UL))       /*!< x must be constant and 2 <= x <= 513. 200MHz < FIN*2*NF/NR < 500MHz. \hideinitializer */
#define CLK_PLLCTL_NR(x)        (((x)-1UL)<<9)    /*!< x must be constant and 1 <= x <= 32.  4MHz < FIN/NR < 8MHz \hideinitializer */

#define CLK_PLLCTL_NO_1         0x0000UL        /*!< For output divider is 1 \hideinitializer */
#define CLK_PLLCTL_NO_2         0x4000UL        /*!< For output divider is 2 \hideinitializer */
#define CLK_PLLCTL_NO_4         0xC000UL        /*!< For output divider is 4 \hideinitializer */

#define CLK_PLLCTL_72MHz_HXT    (CLK_PLLCTL_PLLSRC_HXT  | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 36UL) | CLK_PLLCTL_NO_4) /*!< Predefined PLLCTL setting for 72MHz PLL output with HXT(12MHz X'tal) \hideinitializer */
#define CLK_PLLCTL_80MHz_HXT    (CLK_PLLCTL_PLLSRC_HXT  | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 40UL) | CLK_PLLCTL_NO_4) /*!< Predefined PLLCTL setting for 80MHz PLL output with HXT(12MHz X'tal) \hideinitializer */
#define CLK_PLLCTL_144MHz_HXT   (CLK_PLLCTL_PLLSRC_HXT  | CLK_PLLCTL_NR(2UL) | CLK_PLLCTL_NF( 24UL) | CLK_PLLCTL_NO_2) /*!< Predefined PLLCTL setting for 144MHz PLL output with HXT(12MHz X'tal) \hideinitializer */
#define CLK_PLLCTL_160MHz_HXT   (CLK_PLLCTL_PLLSRC_HXT  | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 40UL) | CLK_PLLCTL_NO_2) /*!< Predefined PLLCTL setting for 160MHz PLL output with HXT(12MHz X'tal) \hideinitializer */
#define CLK_PLLCTL_192MHz_HXT   (CLK_PLLCTL_PLLSRC_HXT  | CLK_PLLCTL_NR(2UL) | CLK_PLLCTL_NF( 32UL) | CLK_PLLCTL_NO_2) /*!< Predefined PLLCTL setting for 192MHz PLL output with HXT(12MHz X'tal) \hideinitializer */

#define CLK_PLLCTL_72MHz_HIRC   (CLK_PLLCTL_PLLSRC_HIRC | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 36UL) | CLK_PLLCTL_NO_4) /*!< Predefined PLLCTL setting for 72MHz PLL output with HIRC(12MHz IRC) \hideinitializer */
#define CLK_PLLCTL_80MHz_HIRC   (CLK_PLLCTL_PLLSRC_HIRC | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 40UL) | CLK_PLLCTL_NO_4) /*!< Predefined PLLCTL setting for 80MHz PLL output with HIRC(12MHz IRC) \hideinitializer */
#define CLK_PLLCTL_144MHz_HIRC  (CLK_PLLCTL_PLLSRC_HIRC | CLK_PLLCTL_NR(2UL) | CLK_PLLCTL_NF( 24UL) | CLK_PLLCTL_NO_2) /*!< Predefined PLLCTL setting for 144MHz PLL output with HIRC(12MHz IRC) \hideinitializer */
#define CLK_PLLCTL_160MHz_HIRC  (CLK_PLLCTL_PLLSRC_HIRC | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 40UL) | CLK_PLLCTL_NO_2) /*!< Predefined PLLCTL setting for 160MHz PLL output with HIRC(12MHz IRC) \hideinitializer */
#define CLK_PLLCTL_192MHz_HIRC  (CLK_PLLCTL_PLLSRC_HIRC | CLK_PLLCTL_NR(2UL) | CLK_PLLCTL_NF( 32UL) | CLK_PLLCTL_NO_2) /*!< Predefined PLLCTL setting for 192MHz PLL output with HIRC(12MHz IRC) \hideinitializer */

/*@}*/ /* end of group CLK_EXPORTED_CONSTANTS */

/** @addtogroup CLK_EXPORTED_FUNCTIONS CLK Exported Functions
  @{
*/

/**
 * @brief       Set Wake-up Timer Time-out Interval
 *
 * @param[in]   u32Interval   The Wake-up Timer Time-out Interval selection. It could be
 *                             - \ref CLK_PMUCTL_WKTMRIS_128
 *                             - \ref CLK_PMUCTL_WKTMRIS_256
 *                             - \ref CLK_PMUCTL_WKTMRIS_512
 *                             - \ref CLK_PMUCTL_WKTMRIS_1024
 *                             - \ref CLK_PMUCTL_WKTMRIS_4096
 *                             - \ref CLK_PMUCTL_WKTMRIS_8192
 *                             - \ref CLK_PMUCTL_WKTMRIS_16384
 *                             - \ref CLK_PMUCTL_WKTMRIS_65536
 *                             - \ref CLK_PMUCTL_WKTMRIS_131072
 *                             - \ref CLK_PMUCTL_WKTMRIS_262144
 *                             - \ref CLK_PMUCTL_WKTMRIS_524288
 *                             - \ref CLK_PMUCTL_WKTMRIS_1048576
 *
 * @return      None
 *
 * @details     This function set Wake-up Timer Time-out Interval.
 *
 * \hideinitializer
 */
#define CLK_SET_WKTMR_INTERVAL(u32Interval)   (CLK->PMUCTL |= (u32Interval))

/**
 * @brief       Set De-bounce Sampling Cycle Time
 *
 * @param[in]   u32CycleSel   The de-bounce sampling cycle selection. It could be
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_1
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_2
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_4
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_8
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_16
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_32
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_64
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_128
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_256
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_2x256
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_4x256
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_8x256
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_16x256
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_32x256
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_64x256
 *                             - \ref CLK_SWKDBCTL_SWKDBCLKSEL_128x256
 *
 * @return      None
 *
 * @details     This function set Set De-bounce Sampling Cycle Time.
 *
 * \hideinitializer
 */
#define CLK_SET_SPDDEBOUNCETIME(u32CycleSel)    (CLK->SWKDBCTL = (u32CycleSel))

/*---------------------------------------------------------------------------------------------------------*/
/* static inline functions                                                                                 */
/*---------------------------------------------------------------------------------------------------------*/
/* Declare these inline functions here to avoid MISRA C 2004 rule 8.1 error */
__STATIC_INLINE void CLK_SysTickDelay(uint32_t us);
__STATIC_INLINE void CLK_SysTickLongDelay(uint32_t us);

/**
  * @brief      This function execute delay function.
  * @param[in]  us  Delay time. The Max value is 2^24 / CPU Clock(MHz). Ex:
  *                             72MHz => 233016us, 50MHz => 335544us,
  *                             48MHz => 349525us, 28MHz => 699050us ...
  * @return     None
  * @details    Use the SysTick to generate the delay time and the unit is in us.
  *             The SysTick clock source is from HCLK, i.e the same as system core clock.
  */
__STATIC_INLINE void CLK_SysTickDelay(uint32_t us)
{
    SysTick->LOAD = us * CyclesPerUs;
    SysTick->VAL  = 0x0UL;
    SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;

    /* Waiting for down-count to zero */
    while((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) == 0UL)
    {
    }

    /* Disable SysTick counter */
    SysTick->CTRL = 0UL;
}

/**
  * @brief      This function execute long delay function.
  * @param[in]  us  Delay time.
  * @return     None
  * @details    Use the SysTick to generate the long delay time and the UNIT is in us.
  *             The SysTick clock source is from HCLK, i.e the same as system core clock.
  *             User can use SystemCoreClockUpdate() to calculate CyclesPerUs automatically before using this function.
  */
__STATIC_INLINE void CLK_SysTickLongDelay(uint32_t us)
{
    uint32_t delay;

    /* It should <= 349525us for each delay loop */
    delay = 349525UL;

    do
    {
        if(us > delay)
        {
            us -= delay;
        }
        else
        {
            delay = us;
            us = 0UL;
        }

        SysTick->LOAD = delay * CyclesPerUs;
        SysTick->VAL  = (0x0UL);
        SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;

        /* Waiting for down-count to zero */
        while((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) == 0UL);

        /* Disable SysTick counter */
        SysTick->CTRL = 0UL;

    }
    while(us > 0UL);

}


void CLK_DisableCKO(void);
void CLK_EnableCKO(uint32_t u32ClkSrc, uint32_t u32ClkDiv, uint32_t u32ClkDivBy1En);
void CLK_PowerDown(void);
void CLK_Idle(void);
uint32_t CLK_GetHXTFreq(void);
uint32_t CLK_GetLXTFreq(void);
uint32_t CLK_GetHCLKFreq(void);
uint32_t CLK_GetPCLK0Freq(void);
uint32_t CLK_GetPCLK1Freq(void);
uint32_t CLK_GetCPUFreq(void);
uint32_t CLK_SetCoreClock(uint32_t u32Hclk);
void CLK_SetHCLK(uint32_t u32ClkSrc, uint32_t u32ClkDiv);
void CLK_SetModuleClock(uint32_t u32ModuleIdx, uint32_t u32ClkSrc, uint32_t u32ClkDiv);
void CLK_SetSysTickClockSrc(uint32_t u32ClkSrc);
void CLK_EnableXtalRC(uint32_t u32ClkMask);
void CLK_DisableXtalRC(uint32_t u32ClkMask);
void CLK_EnableModuleClock(uint32_t u32ModuleIdx);
void CLK_DisableModuleClock(uint32_t u32ModuleIdx);
uint32_t CLK_EnablePLL(uint32_t u32PllClkSrc, uint32_t u32PllFreq);
void CLK_DisablePLL(void);
uint32_t CLK_WaitClockReady(uint32_t u32ClkMask);
void CLK_EnableSysTick(uint32_t u32ClkSrc, uint32_t u32Count);
void CLK_DisableSysTick(void);
void CLK_SetPowerDownMode(uint32_t u32PDMode);
void CLK_EnableDPDWKPin(uint32_t u32TriggerType);
uint32_t CLK_GetPMUWKSrc(void);
void CLK_EnableSPDWKPin(uint32_t u32Port, uint32_t u32Pin, uint32_t u32TriggerType, uint32_t u32DebounceEn);
uint32_t CLK_GetPLLClockFreq(void);
uint32_t CLK_GetModuleClockSource(uint32_t u32ModuleIdx);
uint32_t CLK_GetModuleClockDivider(uint32_t u32ModuleIdx);

/*@}*/ /* end of group CLK_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group CLK_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif  /* __CLK_H__ */

/*** (C) COPYRIGHT 2016 Nuvoton Technology Corp. ***/
