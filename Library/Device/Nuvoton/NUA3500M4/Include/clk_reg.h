/**************************************************************************//**
 * @file     uart_reg.h
 * @version  V1.00
 * @brief    UART register definition header file
 *
 * @copyright (C) 2017 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __CLK_REG_H__
#define __CLK_REG_H__

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

typedef struct
{
    __IO uint32_t PWRCTL;                /*!< [0x0000] System Power-down Control Register                               */
    __IO uint32_t SYSCLK0;               /*!< [0x0004] AXI and AHB Device Clock Enable Control Register 0               */
    __IO uint32_t SYSCLK1;               /*!< [0x0008] AXI and AHB Device Clock Enable Control Register 1               */
    __IO uint32_t APBCLK0;               /*!< [0x000c] APB Devices Clock Enable Control Register 0                      */
    __IO uint32_t APBCLK1;               /*!< [0x0010] APB Devices Clock Enable Control Register 1                      */
    __IO uint32_t APBCLK2;               /*!< [0x0014] APB Devices Clock Enable Control Register 2                      */
    __IO uint32_t CLKSEL0;               /*!< [0x0018] Clock Source Select Control Register 0                           */
    __IO uint32_t CLKSEL1;               /*!< [0x001c] Clock Source Select Control Register 1                           */
    __IO uint32_t CLKSEL2;               /*!< [0x0020] Clock Source Select Control Register 2                           */
    __IO uint32_t CLKSEL3;               /*!< [0x0024] Clock Source Select Control Register 3                           */
    __IO uint32_t CLKSEL4;               /*!< [0x0028] Clock Source Select Control Register 4                           */
    __IO uint32_t CLKDIV0;               /*!< [0x002c] Clock Divider Number Register 0                                  */
    __IO uint32_t CLKDIV1;               /*!< [0x0030] Clock Divider Number Register 1                                  */
    __IO uint32_t CLKDIV2;               /*!< [0x0034] Clock Divider Number Register 2                                  */
    __IO uint32_t CLKDIV3;               /*!< [0x0038] Clock Divider Number Register 3                                  */
    __IO uint32_t CLKDIV4;               /*!< [0x003c] Clock Divider Number Register 4                                  */
    __IO uint32_t CLKOCTL;               /*!< [0x0040] Clock Output Control Register                                    */
    /** @cond HIDDEN_SYMBOLS */
    __I  uint32_t RESERVE1[3];
    /** @endcond */
    __I  uint32_t STATUS;                /*!< [0x0050] Clock Status Monitor Register                                    */
    /** @cond HIDDEN_SYMBOLS */
    __I  uint32_t RESERVE2[3];
    /** @endcond */
    __IO uint32_t PLL0CTL0;              /*!< [0x0060] CA-PLL Control Register 0                                        */
    __IO uint32_t PLL0CTL1;              /*!< [0x0064] CA-PLL Control Register 1                                        */
    __IO uint32_t PLL0CTL2;              /*!< [0x0068] CA-PLL Control Register 2                                        */
    /** @cond HIDDEN_SYMBOLS */
    __I  uint32_t RESERVE3;
    /** @endcond */
    __IO uint32_t PLL1CTL0;              /*!< [0x0070] CA-PLL Control Register 0                                        */
    __IO uint32_t PLL1CTL1;              /*!< [0x0074] CA-PLL Control Register 1                                        */
    __IO uint32_t PLL1CTL2;              /*!< [0x0078] CA-PLL Control Register 2                                        */
    /** @cond HIDDEN_SYMBOLS */
    __I  uint32_t RESERVE4;
    /** @endcond */
    __IO uint32_t PLL2CTL0;              /*!< [0x0080] CA-PLL Control Register 0                                        */
    __IO uint32_t PLL2CTL1;              /*!< [0x0084] CA-PLL Control Register 1                                        */
    __IO uint32_t PLL2CTL2;              /*!< [0x0088] CA-PLL Control Register 2                                        */
    /** @cond HIDDEN_SYMBOLS */
    __I  uint32_t RESERVE5;
    /** @endcond */
    __IO uint32_t PLL3CTL0;              /*!< [0x0090] CA-PLL Control Register 0                                        */
    __IO uint32_t PLL3CTL1;              /*!< [0x0094] CA-PLL Control Register 1                                        */
    __IO uint32_t PLL3CTL2;              /*!< [0x0098] CA-PLL Control Register 2                                        */
    /** @cond HIDDEN_SYMBOLS */
    __I  uint32_t RESERVE6;
    /** @endcond */
    __IO uint32_t PLL4CTL0;              /*!< [0x00A0] CA-PLL Control Register 0                                        */
    __IO uint32_t PLL4CTL1;              /*!< [0x00A4] CA-PLL Control Register 1                                        */
    __IO uint32_t PLL4CTL2;              /*!< [0x00A8] CA-PLL Control Register 2                                        */
    /** @cond HIDDEN_SYMBOLS */
    __I  uint32_t RESERVE7;
    /** @endcond */
    __IO uint32_t PLL5CTL0;              /*!< [0x00B0] CA-PLL Control Register 0                                        */
    __IO uint32_t PLL5CTL1;              /*!< [0x00B4] CA-PLL Control Register 1                                        */
    __IO uint32_t PLL5CTL2;              /*!< [0x00B8] CA-PLL Control Register 2                                        */
    /** @cond HIDDEN_SYMBOLS */
    __I  uint32_t RESERVE8;
    /** @endcond */
    __IO uint32_t CLKDCTL;               /*!< [0x00C0] Clock Fail Detector Control Register                             */
    __IO uint32_t CLKDSTS;               /*!< [0x00C4] Clock Fail Detector Status Register                              */
    __IO uint32_t CDUPB;                 /*!< [0x00C8] Clock Frequency Range Detector Upper Boundary Register           */
    __IO uint32_t CDLOWB;                /*!< [0x00Cc] Clock Frequency Range Detector Lower Boundary Register           */
    __IO uint32_t HXTFSEL;               /*!< [0x00D0] HXT Filter Select Control Register                               */
    __I  uint32_t RESERVE9[7];
    __IO uint32_t TESTCLK;               /*!< [0x00F0] Test Clock Control Register                                      */


} CLK_T;




#define CLK_PWRCTL_HXTEN_Pos             (0)                                               /*!< CLK_T::PWRCTL: HXTEN Position          */
#define CLK_PWRCTL_HXTEN_Msk             (0x1ul << CLK_PWRCTL_HXTEN_Pos)                   /*!< CLK_T::PWRCTL: HXTEN Mask              */

#define CLK_PWRCTL_LXTEN_Pos             (1)                                               /*!< CLK_T::PWRCTL: LXTEN Position          */
#define CLK_PWRCTL_LXTEN_Msk             (0x1ul << CLK_PWRCTL_LXTEN_Pos)                   /*!< CLK_T::PWRCTL: LXTEN Mask              */

#define CLK_PWRCTL_HIRCEN_Pos            (2)                                               /*!< CLK_T::PWRCTL: HIRCEN Position         */
#define CLK_PWRCTL_HIRCEN_Msk            (0x1ul << CLK_PWRCTL_HIRCEN_Pos)                  /*!< CLK_T::PWRCTL: HIRCEN Mask             */

#define CLK_PWRCTL_LIRCEN_Pos            (3)                                               /*!< CLK_T::PWRCTL: LIRCEN Position         */
#define CLK_PWRCTL_LIRCEN_Msk            (0x1ul << CLK_PWRCTL_LIRCEN_Pos)                  /*!< CLK_T::PWRCTL: LIRCEN Mask             */

#define CLK_PWRCTL_PDWKDLY_Pos           (4)                                               /*!< CLK_T::PWRCTL: PDWKDLY Position        */
#define CLK_PWRCTL_PDWKDLY_Msk           (0x1ul << CLK_PWRCTL_PDWKDLY_Pos)                 /*!< CLK_T::PWRCTL: PDWKDLY Mask            */

#define CLK_PWRCTL_PDWKIEN_Pos           (5)                                               /*!< CLK_T::PWRCTL: PDWKIEN Position        */
#define CLK_PWRCTL_PDWKIEN_Msk           (0x1ul << CLK_PWRCTL_PDWKIEN_Pos)                 /*!< CLK_T::PWRCTL: PDWKIEN Mask            */

#define CLK_PWRCTL_PDWKIF_Pos            (6)                                               /*!< CLK_T::PWRCTL: PDWKIF Position         */
#define CLK_PWRCTL_PDWKIF_Msk            (0x1ul << CLK_PWRCTL_PDWKIF_Pos)                  /*!< CLK_T::PWRCTL: PDWKIF Mask             */

#define CLK_PWRCTL_PDEN_Pos              (7)                                               /*!< CLK_T::PWRCTL: PDEN Position           */
#define CLK_PWRCTL_PDEN_Msk              (0x1ul << CLK_PWRCTL_PDEN_Pos)                    /*!< CLK_T::PWRCTL: PDEN Mask               */

#define CLK_PWRCTL_HXTDS_Pos             (10)                                              /*!< CLK_T::PWRCTL: HXTDS Position          */
#define CLK_PWRCTL_HXTDS_Msk             (0x3ul << CLK_PWRCTL_HXTDS_Pos)                   /*!< CLK_T::PWRCTL: HXTDS Mask              */

#define CLK_PWRCTL_HIRCSTBS_Pos          (16)                                              /*!< CLK_T::PWRCTL: HIRCSTBS Position       */
#define CLK_PWRCTL_HIRCSTBS_Msk          (0x3ul << CLK_PWRCTL_HIRCSTBS_Pos)                /*!< CLK_T::PWRCTL: HIRCSTBS Mask           */

#define CLK_SYSCLK0_CA35CKEN_Pos         (0)                                               /*!< CLK_T::SYSCLK0: CA35CKEN Position      */
#define CLK_SYSCLK0_CA35CKEN_Msk         (0x1ul << CLK_SYSCLK0_CA35CKEN_Pos)               /*!< CLK_T::SYSCLK0: CA35CKEN Mask          */

#define CLK_SYSCLK0_CM4CKEN_Pos          (1)                                               /*!< CLK_T::SYSCLK0: CM4CKEN Position       */
#define CLK_SYSCLK0_CM4CKEN_Msk          (0x1ul << CLK_SYSCLK0_CM4CKEN_Pos)                /*!< CLK_T::SYSCLK0: CM4CKEN Mask           */

#define CLK_SYSCLK0_TAHBCKEN_Pos         (2)                                               /*!< CLK_T::SYSCLK0: TAHBCKEN Position      */
#define CLK_SYSCLK0_TAHBCKEN_Msk         (0x1ul << CLK_SYSCLK0_TAHBCKEN_Pos)               /*!< CLK_T::SYSCLK0: TAHBCKEN Mask          */

#define CLK_SYSCLK0_DDR5CKEN_Pos         (3)                                               /*!< CLK_T::SYSCLK0: DDR5CKEN Position      */
#define CLK_SYSCLK0_DDR5CKEN_Msk         (0x1ul << CLK_SYSCLK1_DDR5CKEN_Pos)               /*!< CLK_T::SYSCLK0: DDR5CKEN Mask          */

#define CLK_SYSCLK0_DDR6CKEN_Pos         (4)                                               /*!< CLK_T::SYSCLK0: DDR6CKEN Position      */
#define CLK_SYSCLK0_DDR6CKEN_Msk         (0x1ul << CLK_SYSCLK1_DDR6CKEN_Pos)               /*!< CLK_T::SYSCLK0: DDR6CKEN Mask          */

#define CLK_SYSCLK0_SDH0HCKEN_Pos        (16)                                              /*!< CLK_T::SYSCLK0: SDH0HCKEN Position     */
#define CLK_SYSCLK0_SDH0HCKEN_Msk        (0x1ul << CLK_SYSCLK0_SDH0HCKEN_Pos)              /*!< CLK_T::SYSCLK0: SDH0HCKEN Mask         */

#define CLK_SYSCLK0_SDH1HCKEN_Pos        (17)                                              /*!< CLK_T::SYSCLK0: SDH1HCKEN Position     */
#define CLK_SYSCLK0_SDH1HCKEN_Msk        (0x1ul << CLK_SYSCLK0_SDH1HCKEN_Pos)              /*!< CLK_T::SYSCLK0: SDH1HCKEN Mask         */

#define CLK_SYSCLK0_USBHCKEN_Pos         (18)                                              /*!< CLK_T::SYSCLK0: USBHCKEN Position      */
#define CLK_SYSCLK0_USBHCKEN_Msk         (0x1ul << CLK_SYSCLK0_USBHCKEN_Pos)               /*!< CLK_T::SYSCLK0: USBHCKEN Mask          */

#define CLK_SYSCLK0_USBDCKEN_Pos         (19)                                              /*!< CLK_T::SYSCLK0: USBDCKEN Position      */
#define CLK_SYSCLK0_USBDCKEN_Msk         (0x1ul << CLK_SYSCLK0_USBDCKEN_Pos)               /*!< CLK_T::SYSCLK0: USBDCKEN Mask          */

#define CLK_SYSCLK0_NANDCKEN_Pos         (20)                                              /*!< CLK_T::SYSCLK0: NANDCKEN Position      */
#define CLK_SYSCLK0_NANDCKEN_Msk         (0x1ul << CLK_SYSCLK0_NANDCKEN_Pos)               /*!< CLK_T::SYSCLK0: NANDCKEN Mask          */

#define CLK_SYSCLK0_GFXCKEN_Pos          (24)                                              /*!< CLK_T::SYSCLK0: GFXCKEN Position       */
#define CLK_SYSCLK0_GFXCKEN_Msk          (0x1ul << CLK_SYSCLK0_GFXCKEN_Pos)                /*!< CLK_T::SYSCLK0: GFXCKEN Mask           */

#define CLK_SYSCLK0_VC8KCKEN_Pos         (25)                                              /*!< CLK_T::SYSCLK0: VC8KCKEN Position     */
#define CLK_SYSCLK0_VC8KCKEN_Msk         (0x1ul << CLK_SYSCLK0_VC8KCKEN_Pos)               /*!< CLK_T::SYSCLK0: VC8KCKEN Mask         */

#define CLK_SYSCLK0_DCUCKEN_Pos          (26)                                              /*!< CLK_T::SYSCLK0: DCUCKEN Position      */
#define CLK_SYSCLK0_DCUCKEN_Msk          (0x1ul << CLK_SYSCLK0_DCUCKEN_Pos)                /*!< CLK_T::SYSCLK0: DCUCKEN Mask          */

#define CLK_SYSCLK0_GMAC0CKEN_Pos        (27)                                              /*!< CLK_T::SYSCLK0: GMAC0CKEN Position     */
#define CLK_SYSCLK0_GMAC0CKEN_Msk        (0x1ul << CLK_SYSCLK0_GMAC0CKEN_Pos)              /*!< CLK_T::SYSCLK0: GMAC0CKEN Mask         */

#define CLK_SYSCLK0_GMAC1CKEN_Pos        (28)                                              /*!< CLK_T::SYSCLK0: GMAC1CKEN Position     */
#define CLK_SYSCLK0_GMAC1CKEN_Msk        (0x1ul << CLK_SYSCLK0_GMAC1CKEN_Pos)              /*!< CLK_T::SYSCLK0: GMAC1CKEN Mask         */


#define CLK_SYSCLK0_CAP0HCKEN_Pos        (29)                                              /*!< CLK_T::SYSCLK0: CAP0HCKEN Position     */
#define CLK_SYSCLK0_CAP0HCKEN_Msk        (0x1ul << CLK_SYSCLK0_CAP0HCKEN_Pos)              /*!< CLK_T::SYSCLK0: CAP0HCKEN Mask         */

#define CLK_SYSCLK0_CAP1HCKEN_Pos        (30)                                              /*!< CLK_T::SYSCLK0: CAP1HCKEN Position     */
#define CLK_SYSCLK0_CAP1HCKEN_Msk        (0x1ul << CLK_SYSCLK0_CAP1HCKEN_Pos)              /*!< CLK_T::SYSCLK0: CAP1HCKEN Mask         */


#define CLK_SYSCLK1_PDMA0CKEN_Pos        (0)                                               /*!< CLK_T::SYSCLK1: PDMA0CKEN Position     */
#define CLK_SYSCLK1_PDMA0CKEN_Msk        (0x1ul << CLK_SYSCLK1_PDMA0CKEN_Pos)              /*!< CLK_T::SYSCLK1: PDMA0CKEN Mask         */

#define CLK_SYSCLK1_PDMA1CKEN_Pos        (1)                                               /*!< CLK_T::SYSCLK1: PDMA1CKEN Position     */
#define CLK_SYSCLK1_PDMA1CKEN_Msk        (0x1ul << CLK_SYSCLK1_PDMA1CKEN_Pos)              /*!< CLK_T::SYSCLK1: PDMA1CKEN Mask         */

#define CLK_SYSCLK1_PDMA2CKEN_Pos        (2)                                               /*!< CLK_T::SYSCLK1: PDMA2CKEN Position     */
#define CLK_SYSCLK1_PDMA2CKEN_Msk        (0x1ul << CLK_SYSCLK1_PDMA2CKEN_Pos)              /*!< CLK_T::SYSCLK1: PDMA2CKEN Mask         */

#define CLK_SYSCLK1_PDMA3CKEN_Pos        (3)                                               /*!< CLK_T::SYSCLK1: PDMA3CKEN Position     */
#define CLK_SYSCLK1_PDMA3CKEN_Msk        (0x1ul << CLK_SYSCLK1_PDMA3CKEN_Pos)              /*!< CLK_T::SYSCLK1: PDMA3CKEN Mask         */

#define CLK_SYSCLK1_WH0CKEN_Pos          (4)                                               /*!< CLK_T::SYSCLK1: WH0CKEN Position       */
#define CLK_SYSCLK1_WH0CKEN_Msk          (0x1ul << CLK_SYSCLK1_WH0CKEN_Pos)                /*!< CLK_T::SYSCLK1: WH0CKEN Mask           */

#define CLK_SYSCLK1_WH1CKEN_Pos          (5)                                               /*!< CLK_T::SYSCLK1: WH1CKEN Position       */
#define CLK_SYSCLK1_WH1CKEN_Msk          (0x1ul << CLK_SYSCLK1_WH1CKEN_Pos)                /*!< CLK_T::SYSCLK1: WH1CKEN Mask           */

#define CLK_SYSCLK1_HWSCKEN_Pos          (6)                                               /*!< CLK_T::SYSCLK1: HWSCKEN Position       */
#define CLK_SYSCLK1_HWSCKEN_Msk          (0x1ul << CLK_SYSCLK1_HWSCKEN_Pos)                /*!< CLK_T::SYSCLK1: HWSCKEN Mask           */

#define CLK_SYSCLK1_EBICKEN_Pos          (7)                                               /*!< CLK_T::SYSCLK1: EBICKEN Position       */
#define CLK_SYSCLK1_EBICKEN_Msk          (0x1ul << CLK_SYSCLK1_EBICKEN_Pos)                /*!< CLK_T::SYSCLK1: EBICKEN Mask           */

#define CLK_SYSCLK1_SRAM0CKEN_Pos        (8)                                               /*!< CLK_T::SYSCLK1: SRAM0CKEN Position     */
#define CLK_SYSCLK1_SRAM0CKEN_Msk        (0x1ul << CLK_SYSCLK1_SRAM0CKEN_Pos)              /*!< CLK_T::SYSCLK1: SRAM0CKEN Mask         */

#define CLK_SYSCLK1_SRAM1CKEN_Pos        (9)                                               /*!< CLK_T::SYSCLK1: SRAM1CKEN Position     */
#define CLK_SYSCLK1_SRAM1CKEN_Msk        (0x1ul << CLK_SYSCLK1_SRAM1CKEN_Pos)              /*!< CLK_T::SYSCLK1: SRAM1CKEN Mask         */

#define CLK_SYSCLK1_ROMCKEN_Pos          (10)                                              /*!< CLK_T::SYSCLK1: ROMCKEN Position       */
#define CLK_SYSCLK1_ROMCKEN_Msk          (0x1ul << CLK_SYSCLK1_ROMCKEN_Pos)                /*!< CLK_T::SYSCLK1: ROMCKEN Mask           */

#define CLK_SYSCLK1_SOC400EN_Pos         (11)                                              /*!< CLK_T::SYSCLK1: SOC400EN Position      */
#define CLK_SYSCLK1_SOC400EN_Msk         (0x1ul << CLK_SYSCLK1_SOC400EN_Pos)               /*!< CLK_T::SYSCLK1: SOC400EN Mask          */

#define CLK_SYSCLK1_AHBAPCKEN_Pos        (12)                                              /*!< CLK_T::SYSCLK1: AHBAPCKEN Position     */
#define CLK_SYSCLK1_AHBAPCKEN_Msk        (0x1ul << CLK_SYSCLK1_AHBAPCKEN_Pos)              /*!< CLK_T::SYSCLK1: AHBAPCKEN Mask         */

#define CLK_SYSCLK1_CLKOCKEN_Pos         (13)                                              /*!< CLK_T::SYSCLK1: CLKOCKEN Position      */
#define CLK_SYSCLK1_CLKOCKEN_Msk         (0x1ul << CLK_SYSCLK1_CLKOCKEN_Pos)               /*!< CLK_T::SYSCLK1: CLKOCKEN Mask          */

#define CLK_SYSCLK1_GTMRCKEN_Pos         (14)                                              /*!< CLK_T::SYSCLK1: GTMRCKEN Position      */
#define CLK_SYSCLK1_GTMRCKEN_Msk         (0x1ul << CLK_SYSCLK1_GTMRCKEN_Pos)               /*!< CLK_T::SYSCLK1: GTMRCKEN Mask          */

#define CLK_SYSCLK1_M4STCKEN_Pos         (15)                                              /*!< CLK_T::SYSCLK1: M4STCKEN Position      */
#define CLK_SYSCLK1_M4STCKEN_Msk         (0x1ul << CLK_SYSCLK1_M4STCKEN_Pos)               /*!< CLK_T::SYSCLK1: M4STCKEN Mask          */

#define CLK_SYSCLK1_GPACKEN_Pos          (16)                                              /*!< CLK_T::SYSCLK1: GPACKEN Position       */
#define CLK_SYSCLK1_GPACKEN_Msk          (0x1ul << CLK_SYSCLK1_GPACKEN_Pos)                /*!< CLK_T::SYSCLK1: GPACKEN Mask           */

#define CLK_SYSCLK1_GPBCKEN_Pos          (17)                                              /*!< CLK_T::SYSCLK1: GPBCKEN Position       */
#define CLK_SYSCLK1_GPBCKEN_Msk          (0x1ul << CLK_SYSCLK1_GPBCKEN_Pos)                /*!< CLK_T::SYSCLK1: GPBCKEN Mask           */

#define CLK_SYSCLK1_GPCCKEN_Pos          (18)                                              /*!< CLK_T::SYSCLK1: GPCCKEN Position       */
#define CLK_SYSCLK1_GPCCKEN_Msk          (0x1ul << CLK_SYSCLK1_GPCCKEN_Pos)                /*!< CLK_T::SYSCLK1: GPCCKEN Mask           */

#define CLK_SYSCLK1_GPDCKEN_Pos          (19)                                              /*!< CLK_T::SYSCLK1: GPDCKEN Position       */
#define CLK_SYSCLK1_GPDCKEN_Msk          (0x1ul << CLK_SYSCLK1_GPDCKEN_Pos)                /*!< CLK_T::SYSCLK1: GPDCKEN Mask           */

#define CLK_SYSCLK1_GPECKEN_Pos          (20)                                              /*!< CLK_T::SYSCLK1: GPECKEN Position       */
#define CLK_SYSCLK1_GPECKEN_Msk          (0x1ul << CLK_SYSCLK1_GPECKEN_Pos)                /*!< CLK_T::SYSCLK1: GPECKEN Mask           */

#define CLK_SYSCLK1_GPFCKEN_Pos          (21)                                              /*!< CLK_T::SYSCLK1: GPFCKEN Position       */
#define CLK_SYSCLK1_GPFCKEN_Msk          (0x1ul << CLK_SYSCLK1_GPFCKEN_Pos)                /*!< CLK_T::SYSCLK1: GPFCKEN Mask           */

#define CLK_SYSCLK1_GPGCKEN_Pos          (22)                                              /*!< CLK_T::SYSCLK1: GPGCKEN Position       */
#define CLK_SYSCLK1_GPGCKEN_Msk          (0x1ul << CLK_SYSCLK1_GPGCKEN_Pos)                /*!< CLK_T::SYSCLK1: GPGCKEN Mask           */

#define CLK_SYSCLK1_GPHCKEN_Pos          (23)                                              /*!< CLK_T::SYSCLK1: GPHCKEN Position       */
#define CLK_SYSCLK1_GPHCKEN_Msk          (0x1ul << CLK_SYSCLK1_GPHCKEN_Pos)                /*!< CLK_T::SYSCLK1: GPHCKEN Mask           */

#define CLK_SYSCLK1_GPICKEN_Pos          (24)                                              /*!< CLK_T::SYSCLK1: GPICKEN Position       */
#define CLK_SYSCLK1_GPICKEN_Msk          (0x1ul << CLK_SYSCLK1_GPICKEN_Pos)                /*!< CLK_T::SYSCLK1: GPICKEN Mask           */

#define CLK_SYSCLK1_GPJCKEN_Pos          (25)                                              /*!< CLK_T::SYSCLK1: GPJCKEN Position       */
#define CLK_SYSCLK1_GPJCKEN_Msk          (0x1ul << CLK_SYSCLK1_GPJCKEN_Pos)                /*!< CLK_T::SYSCLK1: GPJCKEN Mask           */

#define CLK_SYSCLK1_GPKCKEN_Pos          (26)                                              /*!< CLK_T::SYSCLK1: GPKCKEN Position       */
#define CLK_SYSCLK1_GPKCKEN_Msk          (0x1ul << CLK_SYSCLK1_GPKCKEN_Pos)                /*!< CLK_T::SYSCLK1: GPKCKEN Mask           */

#define CLK_SYSCLK1_GPLCKEN_Pos          (27)                                              /*!< CLK_T::SYSCLK1: GPLCKEN Position       */
#define CLK_SYSCLK1_GPLCKEN_Msk          (0x1ul << CLK_SYSCLK1_GPLCKEN_Pos)                /*!< CLK_T::SYSCLK1: GPLCKEN Mask           */

#define CLK_SYSCLK1_GPMCKEN_Pos          (28)                                              /*!< CLK_T::SYSCLK1: GPMCKEN Position       */
#define CLK_SYSCLK1_GPMCKEN_Msk          (0x1ul << CLK_SYSCLK1_GPMCKEN_Pos)                /*!< CLK_T::SYSCLK1: GPMCKEN Mask           */

#define CLK_SYSCLK1_GPNCKEN_Pos          (29)                                              /*!< CLK_T::SYSCLK1: GPNCKEN Position       */
#define CLK_SYSCLK1_GPNCKEN_Msk          (0x1ul << CLK_SYSCLK1_GPNCKEN_Pos)                /*!< CLK_T::SYSCLK1: GPNCKEN Mask           */


#define CLK_APBCLK0_TMR0CKEN_Pos         (0)                                               /*!< CLK_T::APBCLK0: TMR0CKEN Position      */
#define CLK_APBCLK0_TMR0CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR0CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR0CKEN Mask          */

#define CLK_APBCLK0_TMR1CKEN_Pos         (1)                                               /*!< CLK_T::APBCLK0: TMR1CKEN Position      */
#define CLK_APBCLK0_TMR1CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR1CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR1CKEN Mask          */

#define CLK_APBCLK0_TMR2CKEN_Pos         (2)                                               /*!< CLK_T::APBCLK0: TMR2CKEN Position      */
#define CLK_APBCLK0_TMR2CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR2CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR2CKEN Mask          */

#define CLK_APBCLK0_TMR3CKEN_Pos         (3)                                               /*!< CLK_T::APBCLK0: TMR3CKEN Position      */
#define CLK_APBCLK0_TMR3CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR3CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR3CKEN Mask          */

#define CLK_APBCLK0_TMR4CKEN_Pos         (4)                                               /*!< CLK_T::APBCLK0: TMR4CKEN Position      */
#define CLK_APBCLK0_TMR4CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR4CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR4CKEN Mask          */

#define CLK_APBCLK0_TMR5CKEN_Pos         (5)                                               /*!< CLK_T::APBCLK0: TMR5CKEN Position      */
#define CLK_APBCLK0_TMR5CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR5CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR5CKEN Mask          */

#define CLK_APBCLK0_TMR6CKEN_Pos         (6)                                               /*!< CLK_T::APBCLK0: TMR6CKEN Position      */
#define CLK_APBCLK0_TMR6CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR6CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR6CKEN Mask          */

#define CLK_APBCLK0_TMR7CKEN_Pos         (7)                                               /*!< CLK_T::APBCLK0: TMR7CKEN Position      */
#define CLK_APBCLK0_TMR7CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR7CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR7CKEN Mask          */

#define CLK_APBCLK0_TMR8CKEN_Pos         (8)                                               /*!< CLK_T::APBCLK0: TMR8CKEN Position      */
#define CLK_APBCLK0_TMR8CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR8CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR8CKEN Mask          */

#define CLK_APBCLK0_TMR9CKEN_Pos         (9)                                               /*!< CLK_T::APBCLK0: TMR9CKEN Position      */
#define CLK_APBCLK0_TMR9CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR9CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR9CKEN Mask          */

#define CLK_APBCLK0_TMR10CKEN_Pos        (10)                                              /*!< CLK_T::APBCLK0: TMR10CKEN Position      */
#define CLK_APBCLK0_TMR10CKEN_Msk        (0x1ul << CLK_APBCLK0_TMR10CKEN_Pos)              /*!< CLK_T::APBCLK0: TMR10CKEN Mask          */

#define CLK_APBCLK0_TMR11CKEN_Pos        (11)                                              /*!< CLK_T::APBCLK0: TMR11CKEN Position      */
#define CLK_APBCLK0_TMR11CKEN_Msk        (0x1ul << CLK_APBCLK0_TMR11CKEN_Pos)              /*!< CLK_T::APBCLK0: TMR11CKEN Mask          */

#define CLK_APBCLK0_UART0CKEN_Pos        (12)                                              /*!< CLK_T::APBCLK0: UART0CKEN Position     */
#define CLK_APBCLK0_UART0CKEN_Msk        (0x1ul << CLK_APBCLK0_UART0CKEN_Pos)              /*!< CLK_T::APBCLK0: UART0CKEN Mask         */

#define CLK_APBCLK0_UART1CKEN_Pos        (13)                                              /*!< CLK_T::APBCLK0: UART1CKEN Position     */
#define CLK_APBCLK0_UART1CKEN_Msk        (0x1ul << CLK_APBCLK0_UART1CKEN_Pos)              /*!< CLK_T::APBCLK0: UART1CKEN Mask         */

#define CLK_APBCLK0_UART2CKEN_Pos        (14)                                              /*!< CLK_T::APBCLK0: UART2CKEN Position     */
#define CLK_APBCLK0_UART2CKEN_Msk        (0x1ul << CLK_APBCLK0_UART2CKEN_Pos)              /*!< CLK_T::APBCLK0: UART2CKEN Mask         */

#define CLK_APBCLK0_UART3CKEN_Pos        (15)                                              /*!< CLK_T::APBCLK0: UART3CKEN Position     */
#define CLK_APBCLK0_UART3CKEN_Msk        (0x1ul << CLK_APBCLK0_UART3CKEN_Pos)              /*!< CLK_T::APBCLK0: UART3CKEN Mask         */

#define CLK_APBCLK0_UART4CKEN_Pos        (16)                                              /*!< CLK_T::APBCLK0: UART4CKEN Position     */
#define CLK_APBCLK0_UART4CKEN_Msk        (0x1ul << CLK_APBCLK0_UART4CKEN_Pos)              /*!< CLK_T::APBCLK0: UART4CKEN Mask         */

#define CLK_APBCLK0_UART5CKEN_Pos        (17)                                              /*!< CLK_T::APBCLK0: UART5CKEN Position     */
#define CLK_APBCLK0_UART5CKEN_Msk        (0x1ul << CLK_APBCLK0_UART5CKEN_Pos)              /*!< CLK_T::APBCLK0: UART5CKEN Mask         */

#define CLK_APBCLK0_UART6CKEN_Pos        (18)                                              /*!< CLK_T::APBCLK0: UART6CKEN Position     */
#define CLK_APBCLK0_UART6CKEN_Msk        (0x1ul << CLK_APBCLK0_UART6CKEN_Pos)              /*!< CLK_T::APBCLK0: UART6CKEN Mask         */

#define CLK_APBCLK0_UART7CKEN_Pos        (19)                                              /*!< CLK_T::APBCLK0: UART7CKEN Position     */
#define CLK_APBCLK0_UART7CKEN_Msk        (0x1ul << CLK_APBCLK0_UART7CKEN_Pos)              /*!< CLK_T::APBCLK0: UART7CKEN Mask         */

#define CLK_APBCLK0_UART8CKEN_Pos        (20)                                              /*!< CLK_T::APBCLK0: UART8CKEN Position     */
#define CLK_APBCLK0_UART8CKEN_Msk        (0x1ul << CLK_APBCLK0_UART8CKEN_Pos)              /*!< CLK_T::APBCLK0: UART8CKEN Mask         */

#define CLK_APBCLK0_UART9CKEN_Pos        (21)                                              /*!< CLK_T::APBCLK0: UART9CKEN Position     */
#define CLK_APBCLK0_UART9CKEN_Msk        (0x1ul << CLK_APBCLK0_UART9CKEN_Pos)              /*!< CLK_T::APBCLK0: UART9CKEN Mask         */

#define CLK_APBCLK0_UART10CKEN_Pos       (22)                                              /*!< CLK_T::APBCLK0: UART10CKEN Position    */
#define CLK_APBCLK0_UART10CKEN_Msk       (0x1ul << CLK_APBCLK0_UART10CKEN_Pos)             /*!< CLK_T::APBCLK0: UART10CKEN Mask        */

#define CLK_APBCLK0_UART11CKEN_Pos       (23)                                              /*!< CLK_T::APBCLK0: UART11CKEN Position    */
#define CLK_APBCLK0_UART11CKEN_Msk       (0x1ul << CLK_APBCLK0_UART11CKEN_Pos)             /*!< CLK_T::APBCLK0: UART11CKEN Mask        */

#define CLK_APBCLK0_UART12CKEN_Pos       (24)                                              /*!< CLK_T::APBCLK0: UART12CKEN Position    */
#define CLK_APBCLK0_UART12CKEN_Msk       (0x1ul << CLK_APBCLK0_UART12CKEN_Pos)             /*!< CLK_T::APBCLK0: UART12CKEN Mask        */

#define CLK_APBCLK0_UART13CKEN_Pos       (25)                                              /*!< CLK_T::APBCLK0: UART13CKEN Position    */
#define CLK_APBCLK0_UART13CKEN_Msk       (0x1ul << CLK_APBCLK0_UART13CKEN_Pos)             /*!< CLK_T::APBCLK0: UART13CKEN Mask        */

#define CLK_APBCLK0_UART14CKEN_Pos       (26)                                              /*!< CLK_T::APBCLK0: UART14CKEN Position    */
#define CLK_APBCLK0_UART14CKEN_Msk       (0x1ul << CLK_APBCLK0_UART14CKEN_Pos)             /*!< CLK_T::APBCLK0: UART14CKEN Mask        */

#define CLK_APBCLK0_UART15CKEN_Pos       (27)                                              /*!< CLK_T::APBCLK0: UART15CKEN Position    */
#define CLK_APBCLK0_UART15CKEN_Msk       (0x1ul << CLK_APBCLK0_UART15CKEN_Pos)             /*!< CLK_T::APBCLK0: UART15CKEN Mask        */

#define CLK_APBCLK0_UART16CKEN_Pos       (28)                                              /*!< CLK_T::APBCLK0: UART16CKEN Position    */
#define CLK_APBCLK0_UART16CKEN_Msk       (0x1ul << CLK_APBCLK0_UART16CKEN_Pos)             /*!< CLK_T::APBCLK0: UART16CKEN Mask        */

#define CLK_APBCLK0_RTCCKEN_Pos          (29)                                              /*!< CLK_T::APBCLK0: RTCCKEN Position       */
#define CLK_APBCLK0_RTCCKEN_Msk          (0x1ul << CLK_APBCLK0_RTCCKEN_Pos)                /*!< CLK_T::APBCLK0: RTCCKEN Mask           */

#define CLK_APBCLK0_DDRPCKEN_Pos         (30)                                              /*!< CLK_T::APBCLK0: DDRPCKEN Position      */
#define CLK_APBCLK0_DDRPCKEN_Msk         (0x1ul << CLK_APBCLK0_DDRPCKEN_Pos)               /*!< CLK_T::APBCLK0: DDRPCKEN Mask          */

#define CLK_APBCLK0_KPICKEN_Pos          (31)                                              /*!< CLK_T::APBCLK0: KPICKEN Position       */
#define CLK_APBCLK0_KPICKEN_Msk          (0x1ul << CLK_APBCLK0_KPICKEN_Pos)                /*!< CLK_T::APBCLK0: KPICKEN Mask           */

#define CLK_APBCLK1_I2C0CKEN_Pos         (0)                                               /*!< CLK_T::APBCLK1: I2C0CKEN Position      */
#define CLK_APBCLK1_I2C0CKEN_Msk         (0x1ul << CLK_APBCLK1_I2C0CKEN_Pos)               /*!< CLK_T::APBCLK1: I2C0CKEN Mask          */

#define CLK_APBCLK1_I2C1CKEN_Pos         (1)                                               /*!< CLK_T::APBCLK1: I2C1CKEN Position      */
#define CLK_APBCLK1_I2C1CKEN_Msk         (0x1ul << CLK_APBCLK1_I2C1CKEN_Pos)               /*!< CLK_T::APBCLK1: I2C1CKEN Mask          */

#define CLK_APBCLK1_I2C2CKEN_Pos         (2)                                               /*!< CLK_T::APBCLK1: I2C2CKEN Position      */
#define CLK_APBCLK1_I2C2CKEN_Msk         (0x1ul << CLK_APBCLK1_I2C2CKEN_Pos)               /*!< CLK_T::APBCLK1: I2C2CKEN Mask          */

#define CLK_APBCLK1_I2C3CKEN_Pos         (3)                                               /*!< CLK_T::APBCLK1: I2C3CKEN Position      */
#define CLK_APBCLK1_I2C3CKEN_Msk         (0x1ul << CLK_APBCLK1_I2C3CKEN_Pos)               /*!< CLK_T::APBCLK1: I2C3CKEN Mask          */

#define CLK_APBCLK1_I2C4CKEN_Pos         (4)                                               /*!< CLK_T::APBCLK1: I2C4CKEN Position      */
#define CLK_APBCLK1_I2C4CKEN_Msk         (0x1ul << CLK_APBCLK1_I2C4CKEN_Pos)               /*!< CLK_T::APBCLK1: I2C4CKEN Mask          */

#define CLK_APBCLK1_I2C5CKEN_Pos         (5)                                               /*!< CLK_T::APBCLK1: I2C5CKEN Position      */
#define CLK_APBCLK1_I2C5CKEN_Msk         (0x1ul << CLK_APBCLK1_I2C5CKEN_Pos)               /*!< CLK_T::APBCLK1: I2C5CKEN Mask          */

#define CLK_APBCLK1_QSPI0CKEN_Pos        (6)                                               /*!< CLK_T::APBCLK1: QSPI0CKEN Position     */
#define CLK_APBCLK1_QSPI0CKEN_Msk        (0x1ul << CLK_APBCLK1_QSPI0CKEN_Pos)              /*!< CLK_T::APBCLK1: QSPI0CKEN Mask         */

#define CLK_APBCLK1_QSPI1CKEN_Pos        (7)                                               /*!< CLK_T::APBCLK1: QSPI1CKEN Position     */
#define CLK_APBCLK1_QSPI1CKEN_Msk        (0x1ul << CLK_APBCLK1_QSPI1CKEN_Pos)              /*!< CLK_T::APBCLK1: QSPI1CKEN Mask         */

#define CLK_APBCLK1_CAN0CKEN_Pos         (8)                                               /*!< CLK_T::APBCLK1: CAN0CKEN Position      */
#define CLK_APBCLK1_CAN0CKEN_Msk         (0x1ul << CLK_APBCLK1_CAN0CKEN_Pos)               /*!< CLK_T::APBCLK1: CAN0CKEN Mask          */

#define CLK_APBCLK1_CAN1CKEN_Pos         (9)                                               /*!< CLK_T::APBCLK1: CAN1CKEN Position      */
#define CLK_APBCLK1_CAN1CKEN_Msk         (0x1ul << CLK_APBCLK1_CAN1CKEN_Pos)               /*!< CLK_T::APBCLK1: CAN1CKEN Mask          */

#define CLK_APBCLK1_CAN2CKEN_Pos         (10)                                              /*!< CLK_T::APBCLK1: CAN2CKEN Position      */
#define CLK_APBCLK1_CAN2CKEN_Msk         (0x1ul << CLK_APBCLK1_CAN2CKEN_Pos)               /*!< CLK_T::APBCLK1: CAN2CKEN Mask          */

#define CLK_APBCLK1_CAN3CKEN_Pos         (11)                                              /*!< CLK_T::APBCLK1: CAN3CKEN Position      */
#define CLK_APBCLK1_CAN3CKEN_Msk         (0x1ul << CLK_APBCLK1_CAN3CKEN_Pos)               /*!< CLK_T::APBCLK1: CAN3CKEN Mask          */

#define CLK_APBCLK1_SMC0CKEN_Pos         (12)                                              /*!< CLK_T::APBCLK1: SMC0CKEN Position      */
#define CLK_APBCLK1_SMC0CKEN_Msk         (0x1ul << CLK_APBCLK1_SMC0CKEN_Pos)               /*!< CLK_T::APBCLK1: SMC0CKEN Mask          */

#define CLK_APBCLK1_SMC1CKEN_Pos         (13)                                              /*!< CLK_T::APBCLK1: SMC1CKEN Position      */
#define CLK_APBCLK1_SMC1CKEN_Msk         (0x1ul << CLK_APBCLK1_SMC1CKEN_Pos)               /*!< CLK_T::APBCLK1: SMC1CKEN Mask          */

#define CLK_APBCLK1_WDT0CKEN_Pos         (16)                                              /*!< CLK_T::APBCLK1: WDT0CKEN Position      */
#define CLK_APBCLK1_WDT0CKEN_Msk         (0x1ul << CLK_APBCLK1_WDT0CKEN_Pos)               /*!< CLK_T::APBCLK1: WDT0CKEN Mask          */

#define CLK_APBCLK1_WDT1CKEN_Pos         (17)                                              /*!< CLK_T::APBCLK1: WDT1CKEN Position      */
#define CLK_APBCLK1_WDT1CKEN_Msk         (0x1ul << CLK_APBCLK1_WDT1CKEN_Pos)               /*!< CLK_T::APBCLK1: WDT1CKEN Mask          */

#define CLK_APBCLK1_WDT2CKEN_Pos         (18)                                              /*!< CLK_T::APBCLK1: WDT2CKEN Position      */
#define CLK_APBCLK1_WDT2CKEN_Msk         (0x1ul << CLK_APBCLK1_WDT2CKEN_Pos)               /*!< CLK_T::APBCLK1: WDT2CKEN Mask          */

#define CLK_APBCLK1_EPWM0CKEN_Pos        (24)                                              /*!< CLK_T::APBCLK1: EPWM0CKEN Position      */
#define CLK_APBCLK1_EPWM0CKEN_Msk        (0x1ul << CLK_APBCLK1_EPWM0CKEN_Pos)              /*!< CLK_T::APBCLK1: EPWM0CKEN Mask          */

#define CLK_APBCLK1_EPWM1CKEN_Pos        (25)                                              /*!< CLK_T::APBCLK1: EPWM1CKEN Position      */
#define CLK_APBCLK1_EPWM1CKEN_Msk        (0x1ul << CLK_APBCLK1_EPWM1CKEN_Pos)              /*!< CLK_T::APBCLK1: EPWM1CKEN Mask          */

#define CLK_APBCLK1_EPWM2CKEN_Pos        (26)                                              /*!< CLK_T::APBCLK1: EPWM2CKEN Position      */
#define CLK_APBCLK1_EPWM2CKEN_Msk        (0x1ul << CLK_APBCLK1_EPWM2CKEN_Pos)              /*!< CLK_T::APBCLK1: EPWM2CKEN Mask          */

#define CLK_APBCLK2_I2S0CKEN_Pos         (0)                                               /*!< CLK_T::APBCLK2: I2S0CKEN Position      */
#define CLK_APBCLK2_I2S0CKEN_Msk         (0x1ul << CLK_APBCLK2_I2S0CKEN_Pos)               /*!< CLK_T::APBCLK2: I2S0CKEN Mask          */

#define CLK_APBCLK2_I2S1CKEN_Pos         (1)                                               /*!< CLK_T::APBCLK2: I2S1CKEN Position      */
#define CLK_APBCLK2_I2S1CKEN_Msk         (0x1ul << CLK_APBCLK2_I2S1CKEN_Pos)               /*!< CLK_T::APBCLK2: I2S1CKEN Mask          */

#define CLK_APBCLK2_SPI0CKEN_Pos         (4)                                               /*!< CLK_T::APBCLK2: SPI0CKEN Position      */
#define CLK_APBCLK2_SPI0CKEN_Msk         (0x1ul << CLK_APBCLK2_SPI0CKEN_Pos)               /*!< CLK_T::APBCLK2: SPI0CKEN Mask          */

#define CLK_APBCLK2_SPI1CKEN_Pos         (5)                                               /*!< CLK_T::APBCLK2: SPI1CKEN Position      */
#define CLK_APBCLK2_SPI1CKEN_Msk         (0x1ul << CLK_APBCLK2_SPI1CKEN_Pos)               /*!< CLK_T::APBCLK2: SPI1CKEN Mask          */

#define CLK_APBCLK2_SPI2CKEN_Pos         (6)                                               /*!< CLK_T::APBCLK2: SPI0CKEN Position      */
#define CLK_APBCLK2_SPI2CKEN_Msk         (0x1ul << CLK_APBCLK2_SPI2CKEN_Pos)               /*!< CLK_T::APBCLK2: SPI0CKEN Mask          */

#define CLK_APBCLK2_SPI3CKEN_Pos         (7)                                               /*!< CLK_T::APBCLK2: SPI1CKEN Position      */
#define CLK_APBCLK2_SPI3CKEN_Msk         (0x1ul << CLK_APBCLK2_SPI3CKEN_Pos)               /*!< CLK_T::APBCLK2: SPI1CKEN Mask          */

#define CLK_APBCLK2_ECAP0CKEN_Pos        (8)                                               /*!< CLK_T::APBCLK2: ECAP0CKEN Position     */
#define CLK_APBCLK2_ECAP0CKEN_Msk        (0x1ul << CLK_APBCLK2_ECAP0CKEN_Pos)              /*!< CLK_T::APBCLK2: ECAP0CKEN Mask         */

#define CLK_APBCLK2_ECAP1CKEN_Pos        (9)                                               /*!< CLK_T::APBCLK2: ECAP1CKEN Position     */
#define CLK_APBCLK2_ECAP1CKEN_Msk        (0x1ul << CLK_APBCLK2_ECAP1CKEN_Pos)              /*!< CLK_T::APBCLK2: ECAP1CKEN Mask         */

#define CLK_APBCLK2_ECAP2CKEN_Pos        (10)                                              /*!< CLK_T::APBCLK2: ECAP2CKEN Position     */
#define CLK_APBCLK2_ECAP2CKEN_Msk        (0x1ul << CLK_APBCLK2_ECAP2CKEN_Pos)              /*!< CLK_T::APBCLK2: ECAP2CKEN Mask         */

#define CLK_APBCLK2_QEI0CKEN_Pos         (12)                                              /*!< CLK_T::APBCLK2: QEI0CKEN Position     */
#define CLK_APBCLK2_QEI0CKEN_Msk         (0x1ul << CLK_APBCLK2_QEI0CKEN_Pos)               /*!< CLK_T::APBCLK2: QEI0CKEN Mask         */

#define CLK_APBCLK2_QEI1CKEN_Pos         (13)                                              /*!< CLK_T::APBCLK2: QEI1CKEN Position     */
#define CLK_APBCLK2_QEI1CKEN_Msk         (0x1ul << CLK_APBCLK2_QEI1CKEN_Pos)               /*!< CLK_T::APBCLK2: QEI1CKEN Mask         */

#define CLK_APBCLK2_QEI2CKEN_Pos         (14)                                              /*!< CLK_T::APBCLK2: QEI2CKEN Position     */
#define CLK_APBCLK2_QEI2CKEN_Msk         (0x1ul << CLK_APBCLK2_QEI2CKEN_Pos)               /*!< CLK_T::APBCLK2: QEI2CKEN Mask         */

#define CLK_APBCLK2_ADCCKEN_Pos          (24)                                              /*!< CLK_T::APBCLK2: ADCCKEN Position      */
#define CLK_APBCLK2_ADCCKEN_Msk          (0x1ul << CLK_APBCLK2_ADCCKEN_Pos)                /*!< CLK_T::APBCLK2: ADCCKEN Mask          */

#define CLK_APBCLK2_EADCCKEN_Pos         (25)                                              /*!< CLK_T::APBCLK2: EADCCKEN Position     */
#define CLK_APBCLK2_EADCCKEN_Msk         (0x1ul << CLK_APBCLK2_EADCCKEN_Pos)               /*!< CLK_T::APBCLK2: EADCCKEN Mask         */

#define CLK_CLKSEL0_CA35CKSEL_Pos        (0)                                               /*!< CLK_T::CLKSEL0: CA35CKSEL Position    */
#define CLK_CLKSEL0_CA35CKSEL_Msk        (0x3ul << CLK_CLKSEL0_CA35CKSEL_Pos)              /*!< CLK_T::CLKSEL0: CA35CKSEL Mask        */

#define CLK_CLKSEL0_SYSCK0SEL_Pos        (2)                                               /*!< CLK_T::CLKSEL0: SYSCK0SEL Position    */
#define CLK_CLKSEL0_SYSCK0SEL_Msk        (0x1ul << CLK_CLKSEL0_SYSCK0SEL_Pos)              /*!< CLK_T::CLKSEL0: SYSCK0SEL Mask        */

#define CLK_CLKSEL0_SYSCK1SEL_Pos        (4)                                               /*!< CLK_T::CLKSEL0: SYSCK1SEL Position    */
#define CLK_CLKSEL0_SYSCK1SEL_Msk        (0x3ul << CLK_CLKSEL0_SYSCK1SEL_Pos)              /*!< CLK_T::CLKSEL0: SYSCK1SEL Mask        */

#define CLK_CLKSEL0_M4STSEL_Pos          (8)                                               /*!< CLK_T::CLKSEL0: M4STSEL Position      */
#define CLK_CLKSEL0_M4STSEL_Msk          (0x7ul << CLK_CLKSEL0_M4STSEL_Pos)                /*!< CLK_T::CLKSEL0: M4STSEL Mask          */

#define CLK_CLKSEL0_CCAP0SEL_Pos         (12)                                              /*!< CLK_T::CLKSEL0: CCAP0SEL Position     */
#define CLK_CLKSEL0_CCAP0SEL_Msk         (0x3ul << CLK_CLKSEL0_CCAP0SEL_Pos)               /*!< CLK_T::CLKSEL0: CCAP0SEL Mask         */

#define CLK_CLKSEL0_CCAP1SEL_Pos         (14)                                              /*!< CLK_T::CLKSEL0: CCAP1SEL Position     */
#define CLK_CLKSEL0_CCAP1SEL_Msk         (0x3ul << CLK_CLKSEL0_CCAP1SEL_Pos)               /*!< CLK_T::CLKSEL0: CCAP1SEL Mask         */

#define CLK_CLKSEL0_SD0SEL_Pos           (16)                                              /*!< CLK_T::CLKSEL0: SD0SEL Position       */
#define CLK_CLKSEL0_SD0SEL_Msk           (0x3ul << CLK_CLKSEL0_SD0SEL_Pos)                 /*!< CLK_T::CLKSEL0: SD0SEL Mask           */

#define CLK_CLKSEL0_SD0TMSEL_Pos         (18)                                              /*!< CLK_T::CLKSEL0: SD0TMSEL Position     */
#define CLK_CLKSEL0_SD0TMSEL_Msk         (0x3ul << CLK_CLKSEL0_SD0TMSEL_Pos)               /*!< CLK_T::CLKSEL0: SD0TMSEL Mask         */

#define CLK_CLKSEL0_SD1SEL_Pos           (20)                                              /*!< CLK_T::CLKSEL0: SD1SEL Position       */
#define CLK_CLKSEL0_SD1SEL_Msk           (0x3ul << CLK_CLKSEL0_SD1SEL_Pos)                 /*!< CLK_T::CLKSEL0: SD1SEL Mask           */

#define CLK_CLKSEL0_SD1TMSEL_Pos         (22)                                              /*!< CLK_T::CLKSEL0: SD1TMSEL Position     */
#define CLK_CLKSEL0_SD1TMSEL_Msk         (0x3ul << CLK_CLKSEL0_SD1TMSEL_Pos)               /*!< CLK_T::CLKSEL0: SD1TMSEL Mask         */

#define CLK_CLKSEL0_DCUSEL_Pos           (24)                                              /*!< CLK_T::CLKSEL0: DCUSEL Position       */
#define CLK_CLKSEL0_DCUSEL_Msk           (0x1ul << CLK_CLKSEL0_DCUSEL_Pos)                 /*!< CLK_T::CLKSEL0: DCUSEL Mask           */

#define CLK_CLKSEL0_GFXSEL_Pos           (25)                                              /*!< CLK_T::CLKSEL0: GFXSEL Position       */
#define CLK_CLKSEL0_GFXSEL_Msk           (0x1ul << CLK_CLKSEL0_GFXSEL_Pos)                 /*!< CLK_T::CLKSEL0: GFXSEL Mask           */

#define CLK_CLKSEL1_TMR0SEL_Pos          (0)                                               /*!< CLK_T::CLKSEL1: TMR0SEL Position       */
#define CLK_CLKSEL1_TMR0SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR0SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR0SEL Mask           */

#define CLK_CLKSEL1_TMR1SEL_Pos          (4)                                               /*!< CLK_T::CLKSEL1: TMR1SEL Position       */
#define CLK_CLKSEL1_TMR1SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR1SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR1SEL Mask           */

#define CLK_CLKSEL1_TMR2SEL_Pos          (8)                                               /*!< CLK_T::CLKSEL1: TMR2SEL Position       */
#define CLK_CLKSEL1_TMR2SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR2SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR2SEL Mask           */

#define CLK_CLKSEL1_TMR3SEL_Pos          (12)                                              /*!< CLK_T::CLKSEL1: TMR3SEL Position       */
#define CLK_CLKSEL1_TMR3SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR3SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR3SEL Mask           */

#define CLK_CLKSEL1_TMR4SEL_Pos          (16)                                              /*!< CLK_T::CLKSEL1: TMR4SEL Position       */
#define CLK_CLKSEL1_TMR4SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR4SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR4SEL Mask           */

#define CLK_CLKSEL1_TMR5SEL_Pos          (20)                                              /*!< CLK_T::CLKSEL1: TMR5SEL Position       */
#define CLK_CLKSEL1_TMR5SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR5SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR5SEL Mask           */

#define CLK_CLKSEL1_TMR6SEL_Pos          (24)                                              /*!< CLK_T::CLKSEL1: TMR6SEL Position       */
#define CLK_CLKSEL1_TMR6SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR6SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR6SEL Mask           */

#define CLK_CLKSEL1_TMR7SEL_Pos          (28)                                              /*!< CLK_T::CLKSEL1: TMR7SEL Position       */
#define CLK_CLKSEL1_TMR7SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR7SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR7SEL Mask           */

#define CLK_CLKSEL2_TMR8SEL_Pos          (0)                                               /*!< CLK_T::CLKSEL2: TMR8SEL Position       */
#define CLK_CLKSEL2_TMR8SEL_Msk          (0x7ul << CLK_CLKSEL2_TMR8SEL_Pos)                /*!< CLK_T::CLKSEL2: TMR8SEL Mask           */

#define CLK_CLKSEL2_TMR9SEL_Pos          (4)                                               /*!< CLK_T::CLKSEL2: TMR9SEL Position       */
#define CLK_CLKSEL2_TMR9SEL_Msk          (0x7ul << CLK_CLKSEL2_TMR9SEL_Pos)                /*!< CLK_T::CLKSEL2: TMR9SEL Mask           */

#define CLK_CLKSEL2_TMR10SEL_Pos         (8)                                               /*!< CLK_T::CLKSEL2: TMR10SEL Position      */
#define CLK_CLKSEL2_TMR10SEL_Msk         (0x7ul << CLK_CLKSEL2_TMR10SEL_Pos)               /*!< CLK_T::CLKSEL2: TMR10SEL Mask          */

#define CLK_CLKSEL2_TMR11SEL_Pos         (12)                                              /*!< CLK_T::CLKSEL2: TMR11SEL Position      */
#define CLK_CLKSEL2_TMR11SEL_Msk         (0x7ul << CLK_CLKSEL2_TMR11SEL_Pos)               /*!< CLK_T::CLKSEL2: TMR11SEL Mask          */

#define CLK_CLKSEL2_UART0SEL_Pos         (16)                                              /*!< CLK_T::CLKSEL2: UART0SEL Position      */
#define CLK_CLKSEL2_UART0SEL_Msk         (0x3ul << CLK_CLKSEL2_UART0SEL_Pos)               /*!< CLK_T::CLKSEL2: UART0SEL Mask          */

#define CLK_CLKSEL2_UART1SEL_Pos         (18)                                              /*!< CLK_T::CLKSEL2: UART1SEL Position      */
#define CLK_CLKSEL2_UART1SEL_Msk         (0x3ul << CLK_CLKSEL2_UART1SEL_Pos)               /*!< CLK_T::CLKSEL2: UART1SEL Mask          */

#define CLK_CLKSEL2_UART2SEL_Pos         (20)                                              /*!< CLK_T::CLKSEL2: UART2SEL Position      */
#define CLK_CLKSEL2_UART2SEL_Msk         (0x3ul << CLK_CLKSEL2_UART2SEL_Pos)               /*!< CLK_T::CLKSEL2: UART2SEL Mask          */

#define CLK_CLKSEL2_UART3SEL_Pos         (22)                                              /*!< CLK_T::CLKSEL2: UART3SEL Position      */
#define CLK_CLKSEL2_UART3SEL_Msk         (0x3ul << CLK_CLKSEL2_UART3SEL_Pos)               /*!< CLK_T::CLKSEL2: UART3SEL Mask          */

#define CLK_CLKSEL2_UART4SEL_Pos         (24)                                              /*!< CLK_T::CLKSEL2: UART4SEL Position      */
#define CLK_CLKSEL2_UART4SEL_Msk         (0x3ul << CLK_CLKSEL2_UART4SEL_Pos)               /*!< CLK_T::CLKSEL2: UART4SEL Mask          */

#define CLK_CLKSEL2_UART5SEL_Pos         (26)                                              /*!< CLK_T::CLKSEL2: UART5SEL Position      */
#define CLK_CLKSEL2_UART5SEL_Msk         (0x3ul << CLK_CLKSEL2_UART5SEL_Pos)               /*!< CLK_T::CLKSEL2: UART5SEL Mask          */

#define CLK_CLKSEL2_UART6SEL_Pos         (28)                                              /*!< CLK_T::CLKSEL2: UART6SEL Position      */
#define CLK_CLKSEL2_UART6SEL_Msk         (0x3ul << CLK_CLKSEL2_UART6SEL_Pos)               /*!< CLK_T::CLKSEL2: UART6SEL Mask          */

#define CLK_CLKSEL2_UART7SEL_Pos         (30)                                              /*!< CLK_T::CLKSEL2: UART7SEL Position      */
#define CLK_CLKSEL2_UART7SEL_Msk         (0x3ul << CLK_CLKSEL2_UART7SEL_Pos)               /*!< CLK_T::CLKSEL2: UART7SEL Mask          */

#define CLK_CLKSEL3_UART8SEL_Pos         (0)                                               /*!< CLK_T::CLKSEL3: UART8SEL Position      */
#define CLK_CLKSEL3_UART8SEL_Msk         (0x3ul << CLK_CLKSEL3_UART8SEL_Pos)               /*!< CLK_T::CLKSEL3: UART8SEL Mask          */

#define CLK_CLKSEL3_UART9SEL_Pos         (2)                                               /*!< CLK_T::CLKSEL3: UART9SEL Position      */
#define CLK_CLKSEL3_UART9SEL_Msk         (0x3ul << CLK_CLKSEL3_UART9SEL_Pos)               /*!< CLK_T::CLKSEL3: UART9SEL Mask          */

#define CLK_CLKSEL3_UART10SEL_Pos        (4)                                               /*!< CLK_T::CLKSEL3: UART10SEL Position     */
#define CLK_CLKSEL3_UART10SEL_Msk        (0x3ul << CLK_CLKSEL3_UART10SEL_Pos)              /*!< CLK_T::CLKSEL3: UART10SEL Mask         */

#define CLK_CLKSEL3_UART11SEL_Pos        (6)                                               /*!< CLK_T::CLKSEL3: UART11SEL Position     */
#define CLK_CLKSEL3_UART11SEL_Msk        (0x3ul << CLK_CLKSEL3_UART11SEL_Pos)              /*!< CLK_T::CLKSEL3: UART11SEL Mask         */

#define CLK_CLKSEL3_UART12SEL_Pos        (8)                                               /*!< CLK_T::CLKSEL3: UART12SEL Position     */
#define CLK_CLKSEL3_UART12SEL_Msk        (0x3ul << CLK_CLKSEL3_UART12SEL_Pos)              /*!< CLK_T::CLKSEL3: UART12SEL Mask         */

#define CLK_CLKSEL3_UART13SEL_Pos        (10)                                              /*!< CLK_T::CLKSEL3: UART13SEL Position     */
#define CLK_CLKSEL3_UART13SEL_Msk        (0x3ul << CLK_CLKSEL3_UART13SEL_Pos)              /*!< CLK_T::CLKSEL3: UART13SEL Mask         */

#define CLK_CLKSEL3_UART14SEL_Pos        (12)                                              /*!< CLK_T::CLKSEL3: UART14SEL Position     */
#define CLK_CLKSEL3_UART14SEL_Msk        (0x3ul << CLK_CLKSEL3_UART14SEL_Pos)              /*!< CLK_T::CLKSEL3: UART14SEL Mask         */

#define CLK_CLKSEL3_UART15SEL_Pos        (14)                                              /*!< CLK_T::CLKSEL3: UART15SEL Position     */
#define CLK_CLKSEL3_UART15SEL_Msk        (0x3ul << CLK_CLKSEL3_UART15SEL_Pos)              /*!< CLK_T::CLKSEL3: UART15SEL Mask         */

#define CLK_CLKSEL3_UART16SEL_Pos        (16)                                              /*!< CLK_T::CLKSEL3: UART16SEL Position     */
#define CLK_CLKSEL3_UART16SEL_Msk        (0x3ul << CLK_CLKSEL3_UART16SEL_Pos)              /*!< CLK_T::CLKSEL3: UART16SEL Mask         */

#define CLK_CLKSEL3_WDT0SEL_Pos          (20)                                              /*!< CLK_T::CLKSEL3: WDT0SEL Position       */
#define CLK_CLKSEL3_WDT0SEL_Msk          (0x3ul << CLK_CLKSEL3_WDT0SEL_Pos)                /*!< CLK_T::CLKSEL3: WDT0SEL Mask           */

#define CLK_CLKSEL3_WWDT0SEL_Pos         (22)                                              /*!< CLK_T::CLKSEL3: WWDT0SEL Position      */
#define CLK_CLKSEL3_WWDT0SEL_Msk         (0x3ul << CLK_CLKSEL3_WWDT0SEL_Pos)               /*!< CLK_T::CLKSEL3: WWDT0SEL Mask          */

#define CLK_CLKSEL3_WDT1SEL_Pos          (24)                                              /*!< CLK_T::CLKSEL3: WDT1SEL Position       */
#define CLK_CLKSEL3_WDT1SEL_Msk          (0x3ul << CLK_CLKSEL3_WDT1SEL_Pos)                /*!< CLK_T::CLKSEL3: WDT1SEL Mask           */

#define CLK_CLKSEL3_WWDT1SEL_Pos         (26)                                              /*!< CLK_T::CLKSEL3: WWDT1SEL Position      */
#define CLK_CLKSEL3_WWDT1SEL_Msk         (0x3ul << CLK_CLKSEL3_WWDT1SEL_Pos)               /*!< CLK_T::CLKSEL3: WWDT1SEL Mask          */

#define CLK_CLKSEL3_WDT2SEL_Pos          (28)                                              /*!< CLK_T::CLKSEL3: WDT2SEL Position       */
#define CLK_CLKSEL3_WDT2SEL_Msk          (0x3ul << CLK_CLKSEL3_WDT2SEL_Pos)                /*!< CLK_T::CLKSEL3: WDT2SEL Mask           */

#define CLK_CLKSEL3_WWDT2SEL_Pos         (30)                                              /*!< CLK_T::CLKSEL3: WWDT2SEL Position      */
#define CLK_CLKSEL3_WWDT2SEL_Msk         (0x3ul << CLK_CLKSEL3_WWDT2SEL_Pos)               /*!< CLK_T::CLKSEL3: WWDT2SEL Mask          */

#define CLK_CLKSEL4_SPI0SEL_Pos          (0)                                               /*!< CLK_T::CLKSEL4: SPI0SEL Position       */
#define CLK_CLKSEL4_SPI0SEL_Msk          (0x3ul << CLK_CLKSEL4_SPI0SEL_Pos)                /*!< CLK_T::CLKSEL4: SPI0SEL Mask           */

#define CLK_CLKSEL4_SPI1SEL_Pos          (2)                                               /*!< CLK_T::CLKSEL4: SPI1SEL Position       */
#define CLK_CLKSEL4_SPI1SEL_Msk          (0x3ul << CLK_CLKSEL4_SPI1SEL_Pos)                /*!< CLK_T::CLKSEL4: SPI1SEL Mask           */

#define CLK_CLKSEL4_SPI2SEL_Pos          (4)                                               /*!< CLK_T::CLKSEL4: SPI2SEL Position       */
#define CLK_CLKSEL4_SPI2SEL_Msk          (0x3ul << CLK_CLKSEL4_SPI2SEL_Pos)                /*!< CLK_T::CLKSEL4: SPI2SEL Mask           */

#define CLK_CLKSEL4_SPI3SEL_Pos          (6)                                               /*!< CLK_T::CLKSEL4: SPI3SEL Position       */
#define CLK_CLKSEL4_SPI3SEL_Msk          (0x3ul << CLK_CLKSEL4_SPI3SEL_Pos)                /*!< CLK_T::CLKSEL4: SPI3SEL Mask           */

#define CLK_CLKSEL4_QSPI0SEL_Pos         (8)                                               /*!< CLK_T::CLKSEL4: QSPI0SEL Position      */
#define CLK_CLKSEL4_QSPI0SEL_Msk         (0x3ul << CLK_CLKSEL4_QSPI0SEL_Pos)               /*!< CLK_T::CLKSEL4: QSPI0SEL Mask          */

#define CLK_CLKSEL4_QSPI1SEL_Pos         (10)                                              /*!< CLK_T::CLKSEL4: QSPI1SEL Position      */
#define CLK_CLKSEL4_QSPI1SEL_Msk         (0x3ul << CLK_CLKSEL4_QSPI1SEL_Pos)               /*!< CLK_T::CLKSEL4: QSPI1SEL Mask          */

#define CLK_CLKSEL4_I2S0SEL_Pos          (12)                                              /*!< CLK_T::CLKSEL4: I2S0SEL Position       */
#define CLK_CLKSEL4_I2S0SEL_Msk          (0x3ul << CLK_CLKSEL4_I2S0SEL_Pos)                /*!< CLK_T::CLKSEL4: I2S0SEL Mask           */

#define CLK_CLKSEL4_I2S1SEL_Pos          (14)                                              /*!< CLK_T::CLKSEL4: I2S1SEL Position       */
#define CLK_CLKSEL4_I2S1SEL_Msk          (0x3ul << CLK_CLKSEL4_I2S1SEL_Pos)                /*!< CLK_T::CLKSEL4: I2S1SEL Mask           */

#define CLK_CLKSEL4_EPWM0SEL_Pos         (16)                                              /*!< CLK_T::CLKSEL4: EPWM0SEL Position      */
#define CLK_CLKSEL4_EPWM0SEL_Msk         (0x3ul << CLK_CLKSEL4_EPWM0SEL_Pos)               /*!< CLK_T::CLKSEL4: EPWM0SEL Mask          */

#define CLK_CLKSEL4_EPWM1SEL_Pos         (18)                                              /*!< CLK_T::CLKSEL4: EPWM1SEL Position      */
#define CLK_CLKSEL4_EPWM1SEL_Msk         (0x3ul << CLK_CLKSEL4_EPWM1SEL_Pos)               /*!< CLK_T::CLKSEL4: EPWM1SEL Mask          */

#define CLK_CLKSEL4_CLKOSEL_Pos          (24)                                              /*!< CLK_T::CLKSEL4: CLKOSEL Position       */
#define CLK_CLKSEL4_CLKOSEL_Msk          (0xFul << CLK_CLKSEL4_CLKOSEL_Pos)                /*!< CLK_T::CLKSEL4: CLKOSEL Mask           */

#define CLK_CLKSEL4_SC0SEL_Pos           (28)                                              /*!< CLK_T::CLKSEL4: SC0SEL Position        */
#define CLK_CLKSEL4_SC0SEL_Msk           (0x1ul << CLK_CLKSEL4_SC0SEL_Pos)                 /*!< CLK_T::CLKSEL4: SC0SEL Mask            */

#define CLK_CLKSEL4_SC1SEL_Pos           (29)                                              /*!< CLK_T::CLKSEL4: SC1SEL Position        */
#define CLK_CLKSEL4_SC1SEL_Msk           (0x1ul << CLK_CLKSEL4_SC1SEL_Pos)                 /*!< CLK_T::CLKSEL4: SC1SEL Mask            */

#define CLK_CLKDIV0_SDH0DIV_Pos          (0)                                               /*!< CLK_T::CLKDIV0: SDH0DIV Position       */
#define CLK_CLKDIV0_SDH0DIV_Msk          (0xfful << CLK_CLKDIV0_SDH0DIV_Pos)               /*!< CLK_T::CLKDIV0: SDH0DIV Mask           */

#define CLK_CLKDIV0_SDH0TMDIV_Pos        (8)                                               /*!< CLK_T::CLKDIV0: SDH0TMDIV Position     */
#define CLK_CLKDIV0_SDH0TMDIV_Msk        (0xfful << CLK_CLKDIV0_SDH0TMDIV_Pos)             /*!< CLK_T::CLKDIV0: SDH0TMDIV Mask         */

#define CLK_CLKDIV0_SDH1DIV_Pos          (16)                                              /*!< CLK_T::CLKDIV0: SDH1DIV Position       */
#define CLK_CLKDIV0_SDH1DIV_Msk          (0xfful << CLK_CLKDIV0_SDH1DIV_Pos)               /*!< CLK_T::CLKDIV0: SDH1DIV Mask           */

#define CLK_CLKDIV0_SDH1TMDIV_Pos        (24)                                              /*!< CLK_T::CLKDIV0: SDH1TMDIV Position     */
#define CLK_CLKDIV0_SDH1TMDIV_Msk        (0xfful << CLK_CLKDIV0_SDH1TMDIV_Pos)             /*!< CLK_T::CLKDIV0: SDH1TMDIV Mask         */

#define CLK_CLKDIV1_SC0DIV_Pos           (0)                                               /*!< CLK_T::CLKDIV1: SC0DIV Position        */
#define CLK_CLKDIV1_SC0DIV_Msk           (0xful << CLK_CLKDIV1_SC0DIV_Pos)                 /*!< CLK_T::CLKDIV1: SC0DIV Mask            */

#define CLK_CLKDIV1_SC1DIV_Pos           (4)                                               /*!< CLK_T::CLKDIV1: SC1DIV Position        */
#define CLK_CLKDIV1_SC1DIV_Msk           (0xful << CLK_CLKDIV1_SC1DIV_Pos)                 /*!< CLK_T::CLKDIV1: SC1DIV Mask            */

#define CLK_CLKDIV1_CCAP0DIV_Pos         (8)                                               /*!< CLK_T::CLKDIV1: CCAP0DIV Position      */
#define CLK_CLKDIV1_CCAP0DIV_Msk         (0xfful << CLK_CLKDIV1_CCAP0DIV_Pos)              /*!< CLK_T::CLKDIV1: CCAP0DIV Mask          */

#define CLK_CLKDIV1_CCAP1DIV_Pos         (12)                                              /*!< CLK_T::CLKDIV1: CCAP1DIV Position      */
#define CLK_CLKDIV1_CCAP1DIV_Msk         (0xfful << CLK_CLKDIV1_CCAP1DIV_Pos)              /*!< CLK_T::CLKDIV1: CCAP1DIV Mask          */

#define CLK_CLKDIV1_UART0DIV_Pos         (16)                                              /*!< CLK_T::CLKDIV1: UART0DIV Position      */
#define CLK_CLKDIV1_UART0DIV_Msk         (0xful << CLK_CLKDIV1_UART0DIV_Pos)               /*!< CLK_T::CLKDIV1: UART0DIV Mask          */

#define CLK_CLKDIV1_UART1DIV_Pos         (20)                                              /*!< CLK_T::CLKDIV1: UART1DIV Position      */
#define CLK_CLKDIV1_UART1DIV_Msk         (0xful << CLK_CLKDIV1_UART1DIV_Pos)               /*!< CLK_T::CLKDIV1: UART1DIV Mask          */

#define CLK_CLKDIV1_UART2DIV_Pos         (24)                                              /*!< CLK_T::CLKDIV1: UART2DIV Position      */
#define CLK_CLKDIV1_UART2DIV_Msk         (0xful << CLK_CLKDIV1_UART2DIV_Pos)               /*!< CLK_T::CLKDIV1: UART2DIV Mask          */

#define CLK_CLKDIV1_UART3DIV_Pos         (28)                                              /*!< CLK_T::CLKDIV1: UART3DIV Position      */
#define CLK_CLKDIV1_UART3DIV_Msk         (0xful << CLK_CLKDIV1_UART3DIV_Pos)               /*!< CLK_T::CLKDIV1: UART3DIV Mask          */


#define CLK_CLKDIV2_UART4DIV_Pos         (0)                                               /*!< CLK_T::CLKDIV2: UART4DIV Position      */
#define CLK_CLKDIV2_UART4DIV_Msk         (0xful << CLK_CLKDIV2_UART4DIV_Pos)               /*!< CLK_T::CLKDIV2: UART4DIV Mask          */

#define CLK_CLKDIV2_UART5DIV_Pos         (4)                                               /*!< CLK_T::CLKDIV2: UART5DIV Position      */
#define CLK_CLKDIV2_UART5DIV_Msk         (0xful << CLK_CLKDIV2_UART5DIV_Pos)               /*!< CLK_T::CLKDIV2: UART5DIV Mask          */

#define CLK_CLKDIV2_UART6DIV_Pos         (8)                                               /*!< CLK_T::CLKDIV2: UART6DIV Position      */
#define CLK_CLKDIV2_UART6DIV_Msk         (0xful << CLK_CLKDIV2_UART6DIV_Pos)               /*!< CLK_T::CLKDIV2: UART6DIV Mask          */

#define CLK_CLKDIV2_UART7DIV_Pos         (12)                                              /*!< CLK_T::CLKDIV2: UART7DIV Position      */
#define CLK_CLKDIV2_UART7DIV_Msk         (0xful << CLK_CLKDIV2_UART7DIV_Pos)               /*!< CLK_T::CLKDIV2: UART7DIV Mask          */

#define CLK_CLKDIV2_UART8DIV_Pos         (16)                                              /*!< CLK_T::CLKDIV2: UART8DIV Position      */
#define CLK_CLKDIV2_UART8DIV_Msk         (0xful << CLK_CLKDIV2_UART8DIV_Pos)               /*!< CLK_T::CLKDIV2: UART8DIV Mask          */

#define CLK_CLKDIV2_UART9DIV_Pos         (20)                                              /*!< CLK_T::CLKDIV2: UART9DIV Position      */
#define CLK_CLKDIV2_UART9DIV_Msk         (0xful << CLK_CLKDIV2_UART9DIV_Pos)               /*!< CLK_T::CLKDIV2: UART9DIV Mask          */

#define CLK_CLKDIV2_UART10DIV_Pos        (24)                                              /*!< CLK_T::CLKDIV2: UART10DIV Position     */
#define CLK_CLKDIV2_UART10DIV_Msk        (0xful << CLK_CLKDIV2_UART10DIV_Pos)              /*!< CLK_T::CLKDIV2: UART10DIV Mask         */

#define CLK_CLKDIV2_UART11DIV_Pos        (28)                                              /*!< CLK_T::CLKDIV2: UART11DIV Position     */
#define CLK_CLKDIV2_UART11DIV_Msk        (0xful << CLK_CLKDIV2_UART11DIV_Pos)              /*!< CLK_T::CLKDIV2: UART11DIV Mask         */

#define CLK_CLKDIV3_UART12DIV_Pos        (0)                                               /*!< CLK_T::CLKDIV3: UART12DIV Position      */
#define CLK_CLKDIV3_UART12DIV_Msk        (0xful << CLK_CLKDIV3_UART12DIV_Pos)              /*!< CLK_T::CLKDIV3: UART12DIV Mask          */

#define CLK_CLKDIV3_UART13DIV_Pos        (4)                                               /*!< CLK_T::CLKDIV3: UART13DIV Position      */
#define CLK_CLKDIV3_UART13DIV_Msk        (0xful << CLK_CLKDIV3_UART13DIV_Pos)              /*!< CLK_T::CLKDIV3: UART13DIV Mask          */

#define CLK_CLKDIV3_UART14DIV_Pos        (8)                                               /*!< CLK_T::CLKDIV3: UART14DIV Position      */
#define CLK_CLKDIV3_UART14DIV_Msk        (0xful << CLK_CLKDIV3_UART14DIV_Pos)              /*!< CLK_T::CLKDIV3: UART14DIV Mask          */

#define CLK_CLKDIV3_UART15DIV_Pos        (12)                                              /*!< CLK_T::CLKDIV3: UART15DIV Position      */
#define CLK_CLKDIV3_UART15DIV_Msk        (0xful << CLK_CLKDIV3_UART15DIV_Pos)              /*!< CLK_T::CLKDIV3: UART15DIV Mask          */

#define CLK_CLKDIV3_UART16DIV_Pos        (16)                                              /*!< CLK_T::CLKDIV3: UART16DIV Position      */
#define CLK_CLKDIV3_UART16DIV_Msk        (0xful << CLK_CLKDIV3_UART16DIV_Pos)              /*!< CLK_T::CLKDIV3: UART16DIV Mask          */

#define CLK_CLKDIV4_EADCDIV_Pos          (0)                                               /*!< CLK_T::CLKDIV4: EADCDIV Position        */
#define CLK_CLKDIV4_EADCDIV_Msk          (0xful << CLK_CLKDIV4_EADCDIV_Pos)                /*!< CLK_T::CLKDIV4: EADCDIV Mask            */

#define CLK_CLKDIV4_ADCDIV_Pos           (4)                                               /*!< CLK_T::CLKDIV4: ADCDIV Position         */
#define CLK_CLKDIV4_ADCDIV_Msk           (0x1fffful << CLK_CLKDIV4_ADCDIV_Pos)             /*!< CLK_T::CLKDIV4: ADCDIV Mask             */

#define CLK_CLKDIV4_KPIDIV_Pos           (24)                                              /*!< CLK_T::CLKDIV4: KPIDIV Position         */
#define CLK_CLKDIV4_KPIDIV_Msk           (0x3ful << CLK_CLKDIV4_KPIDIV_Pos)                /*!< CLK_T::CLKDIV4: KPIDIV Mask             */

#define CLK_CLKOCTL_FREQSEL_Pos          (0)                                               /*!< CLK_T::CLKOCTL: FREQSEL Position       */
#define CLK_CLKOCTL_FREQSEL_Msk          (0xful << CLK_CLKOCTL_FREQSEL_Pos)                /*!< CLK_T::CLKOCTL: FREQSEL Mask           */

#define CLK_CLKOCTL_CLKOEN_Pos           (4)                                               /*!< CLK_T::CLKOCTL: CLKOEN Position        */
#define CLK_CLKOCTL_CLKOEN_Msk           (0x1ul << CLK_CLKOCTL_CLKOEN_Pos)                 /*!< CLK_T::CLKOCTL: CLKOEN Mask            */

#define CLK_CLKOCTL_DIV1EN_Pos           (5)                                               /*!< CLK_T::CLKOCTL: DIV1EN Position        */
#define CLK_CLKOCTL_DIV1EN_Msk           (0x1ul << CLK_CLKOCTL_DIV1EN_Pos)                 /*!< CLK_T::CLKOCTL: DIV1EN Mask            */

#define CLK_STATUS_HXTSTB_Pos            (0)                                               /*!< CLK_T::STATUS: HXTSTB Position         */
#define CLK_STATUS_HXTSTB_Msk            (0x1ul << CLK_STATUS_HXTSTB_Pos)                  /*!< CLK_T::STATUS: HXTSTB Mask             */

#define CLK_STATUS_LXTSTB_Pos            (1)                                               /*!< CLK_T::STATUS: LXTSTB Position         */
#define CLK_STATUS_LXTSTB_Msk            (0x1ul << CLK_STATUS_LXTSTB_Pos)                  /*!< CLK_T::STATUS: LXTSTB Mask             */

#define CLK_STATUS_SYSPLLSTB_Pos         (2)                                               /*!< CLK_T::STATUS: SYSPLLSTB Position      */
#define CLK_STATUS_SYSPLLSTB_Msk         (0x1ul << CLK_STATUS_SYSPLLSTB_Pos)               /*!< CLK_T::STATUS: SYSPLLSTB Mask          */

#define CLK_STATUS_LIRCSTB_Pos           (3)                                               /*!< CLK_T::STATUS: LIRCSTB Position        */
#define CLK_STATUS_LIRCSTB_Msk           (0x1ul << CLK_STATUS_LIRCSTB_Pos)                 /*!< CLK_T::STATUS: LIRCSTB Mask            */

#define CLK_STATUS_HIRCSTB_Pos           (4)                                               /*!< CLK_T::STATUS: HIRCSTB Position        */
#define CLK_STATUS_HIRCSTB_Msk           (0x1ul << CLK_STATUS_HIRCSTB_Pos)                 /*!< CLK_T::STATUS: HIRCSTB Mask            */

#define CLK_STATUS_CAPLLSTB_Pos          (6)                                               /*!< CLK_T::STATUS: CAPLLSTB Position       */
#define CLK_STATUS_CAPLLSTB_Msk          (0x1ul << CLK_STATUS_CAPLLSTB_Pos)                /*!< CLK_T::STATUS: CAPLLSTB Mask           */

#define CLK_STATUS_CLKSFAIL_Pos          (7)                                               /*!< CLK_T::STATUS: CLKSFAIL Position       */
#define CLK_STATUS_CLKSFAIL_Msk          (0x1ul << CLK_STATUS_CLKSFAIL_Pos)                /*!< CLK_T::STATUS: CLKSFAIL Mask           */

#define CLK_STATUS_DDRPLLSTB_Pos         (8)                                               /*!< CLK_T::STATUS: DDRPLLSTB Position      */
#define CLK_STATUS_DDRPLLSTB_Msk         (0x1ul << CLK_STATUS_DDRPLLSTB_Pos)               /*!< CLK_T::STATUS: DDRPLLSTB Mask          */

#define CLK_STATUS_EPLLSTB_Pos           (9)                                               /*!< CLK_T::STATUS: EPLLSTB Position        */
#define CLK_STATUS_EPLLSTB_Msk           (0x1ul << CLK_STATUS_EPLLSTB_Pos)                 /*!< CLK_T::STATUS: EPLLSTB Mask            */

#define CLK_STATUS_APLLSTB_Pos           (10)                                              /*!< CLK_T::STATUS: APLLSTB Position        */
#define CLK_STATUS_APLLSTB_Msk           (0x1ul << CLK_STATUS_APLLSTB_Pos)                 /*!< CLK_T::STATUS: APLLSTB Mask            */

#define CLK_STATUS_VPLLSTB_Pos           (11)                                              /*!< CLK_T::STATUS: VPLLSTB Position        */
#define CLK_STATUS_VPLLSTB_Msk           (0x1ul << CLK_STATUS_VPLLSTB_Pos)                 /*!< CLK_T::STATUS: VPLLSTB Mask            */

#define CLK_PLL0CTL0_FBDIV_Pos           (0)                                               /*!< CLK_T::PLL0CTL0: FBDIV Position        */
#define CLK_PLL0CTL0_FBDIV_Msk           (0x7fful << CLK_PLL0CTL0_FBDIV_Pos)               /*!< CLK_T::PLL0CTL0: FBDIV Mask            */

#define CLK_PLL0CTL0_INDIV_Pos           (12)                                              /*!< CLK_T::PLL0CTL0: INDIV Position        */
#define CLK_PLL0CTL0_INDIV_Msk           (0x1ful << CLK_PLL0CTL0_INDIV_Pos)                /*!< CLK_T::PLL0CTL0: INDIV Mask            */

#define CLK_PLL0CTL0_SSRATE_Pos          (20)                                              /*!< CLK_T::PLL0CTL0: SSRATE Position       */
#define CLK_PLL0CTL0_SSRATE_Msk          (0x7fful << CLK_PLL0CTL0_SSRATE_Pos)              /*!< CLK_T::PLL0CTL0: SSRATE Mask           */

#define CLK_PLL0CTL1_PD_Pos              (0)                                               /*!< CLK_T::PLL0CTL1: PD Position           */
#define CLK_PLL0CTL1_PD_Msk              (0x1ul << CLK_PLL0CTL1_PD_Pos)                    /*!< CLK_T::PLL0CTL1: PD Mask               */

#define CLK_PLL0CTL1_BP_Pos              (1)                                               /*!< CLK_T::PLL0CTL1: BP Position           */
#define CLK_PLL0CTL1_BP_Msk              (0x1ul << CLK_PLL0CTL1_BP_Pos)                    /*!< CLK_T::PLL0CTL1: BP Mask               */

#define CLK_PLL0CTL1_MODE_Pos            (2)                                               /*!< CLK_T::PLL0CTL1: MODE Position         */
#define CLK_PLL0CTL1_MODE_Msk            (0x3ul << CLK_PLL0CTL1_MODE_Pos)                  /*!< CLK_T::PLL0CTL1: MODE Mask             */

#define CLK_PLL0CTL1_OUTDIV_Pos          (4)                                               /*!< CLK_T::PLL0CTL1: OUTDIV Position       */
#define CLK_PLL0CTL1_OUTDIV_Msk          (0x7ul << CLK_PLL0CTL1_OUTDIV_Pos)                /*!< CLK_T::PLL0CTL1: OUTDIV Mask           */

#define CLK_PLL0CTL1_RSTN_Pos            (7)                                               /*!< CLK_T::PLL0CTL1: RSTN Position         */
#define CLK_PLL0CTL1_RSTN_Msk            (0x1ul << CLK_PLL0CTL1_RSTN_Pos)                  /*!< CLK_T::PLL0CTL1: RSTN Mask             */

#define CLK_PLL0CTL1_FRAC_Pos            (8)                                               /*!< CLK_T::PLL0CTL1: FRAC Position         */
#define CLK_PLL0CTL1_FRAC_Msk            (0xfffffful << CLK_PLL0CTL1_FRAC_Pos)             /*!< CLK_T::PLL0CTL1: FRAC Mask             */

#define CLK_PLL0CTL2_SLOPE_Pos           (0)                                               /*!< CLK_T::PLL0CTL2: SLOPE Position         */
#define CLK_PLL0CTL2_SLOPE_Msk           (0xfffffful << CLK_PLL0CTL2_SLOPE_Pos)            /*!< CLK_T::PLL0CTL2: SLOPE Mask             */

#define CLK_CLKDCTL_HXTFDEN_Pos          (4)                                               /*!< CLK_T::CLKDCTL: HXTFDEN Position       */
#define CLK_CLKDCTL_HXTFDEN_Msk          (0x1ul << CLK_CLKDCTL_HXTFDEN_Pos)                /*!< CLK_T::CLKDCTL: HXTFDEN Mask           */

#define CLK_CLKDCTL_HXTFIEN_Pos          (5)                                               /*!< CLK_T::CLKDCTL: HXTFIEN Position       */
#define CLK_CLKDCTL_HXTFIEN_Msk          (0x1ul << CLK_CLKDCTL_HXTFIEN_Pos)                /*!< CLK_T::CLKDCTL: HXTFIEN Mask           */

#define CLK_CLKDCTL_LXTFDEN_Pos          (12)                                              /*!< CLK_T::CLKDCTL: LXTFDEN Position       */
#define CLK_CLKDCTL_LXTFDEN_Msk          (0x1ul << CLK_CLKDCTL_LXTFDEN_Pos)                /*!< CLK_T::CLKDCTL: LXTFDEN Mask           */

#define CLK_CLKDCTL_LXTFIEN_Pos          (13)                                              /*!< CLK_T::CLKDCTL: LXTFIEN Position       */
#define CLK_CLKDCTL_LXTFIEN_Msk          (0x1ul << CLK_CLKDCTL_LXTFIEN_Pos)                /*!< CLK_T::CLKDCTL: LXTFIEN Mask           */

#define CLK_CLKDCTL_HXTFQDEN_Pos         (16)                                              /*!< CLK_T::CLKDCTL: HXTFQDEN Position      */
#define CLK_CLKDCTL_HXTFQDEN_Msk         (0x1ul << CLK_CLKDCTL_HXTFQDEN_Pos)               /*!< CLK_T::CLKDCTL: HXTFQDEN Mask          */

#define CLK_CLKDCTL_HXTFQIEN_Pos         (17)                                              /*!< CLK_T::CLKDCTL: HXTFQIEN Position      */
#define CLK_CLKDCTL_HXTFQIEN_Msk         (0x1ul << CLK_CLKDCTL_HXTFQIEN_Pos)               /*!< CLK_T::CLKDCTL: HXTFQIEN Mask          */

#define CLK_CLKDSTS_HXTFIF_Pos           (0)                                               /*!< CLK_T::CLKDSTS: HXTFIF Position        */
#define CLK_CLKDSTS_HXTFIF_Msk           (0x1ul << CLK_CLKDSTS_HXTFIF_Pos)                 /*!< CLK_T::CLKDSTS: HXTFIF Mask            */

#define CLK_CLKDSTS_LXTFIF_Pos           (1)                                               /*!< CLK_T::CLKDSTS: LXTFIF Position        */
#define CLK_CLKDSTS_LXTFIF_Msk           (0x1ul << CLK_CLKDSTS_LXTFIF_Pos)                 /*!< CLK_T::CLKDSTS: LXTFIF Mask            */

#define CLK_CLKDSTS_HXTFQIF_Pos          (8)                                               /*!< CLK_T::CLKDSTS: HXTFQIF Position       */
#define CLK_CLKDSTS_HXTFQIF_Msk          (0x1ul << CLK_CLKDSTS_HXTFQIF_Pos)                /*!< CLK_T::CLKDSTS: HXTFQIF Mask           */

#define CLK_CDUPB_UPERBD_Pos             (0)                                               /*!< CLK_T::CDUPB: UPERBD Position          */
#define CLK_CDUPB_UPERBD_Msk             (0x3fful << CLK_CDUPB_UPERBD_Pos)                 /*!< CLK_T::CDUPB: UPERBD Mask              */

#define CLK_CDLOWB_LOWERBD_Pos           (0)                                               /*!< CLK_T::CDLOWB: LOWERBD Position        */
#define CLK_CDLOWB_LOWERBD_Msk           (0x3fful << CLK_CDLOWB_LOWERBD_Pos)               /*!< CLK_T::CDLOWB: LOWERBD Mask            */

#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

#endif
