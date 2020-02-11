/**************************************************************************//**
 * @file     timer.h
 * @version  V3.00
 * $Revision: 4 $
 * $Date: 17/03/01 11:12a $
 * @brief    M0564 series Timer Controller(Timer) driver header file
 *
 * @note
 * Copyright (C) 2016 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __TIMER_H__
#define __TIMER_H__

#ifdef __cplusplus
extern "C"
{
#endif


/*---------------------- Timer Controller -------------------------*/
/**
    @addtogroup TIMER Timer Controller(TIMER)
    Memory Mapped Structure for TIMER Controller
@{ */

typedef struct
{
    __IO uint32_t CTL;                   /*!< [0x0000] Timer Control Register                                           */
    __IO uint32_t CMP;                   /*!< [0x0004] Timer Comparator Register                                        */
    __IO uint32_t INTSTS;                /*!< [0x0008] Timer Interrupt Status Register                                  */
    __IO uint32_t CNT;                   /*!< [0x000c] Timer Data Register                                              */
    __I  uint32_t CAP;                   /*!< [0x0010] Timer Capture Data Register                                      */
    __IO uint32_t EXTCTL;                /*!< [0x0014] Timer External Control Register                                  */
    __IO uint32_t EINTSTS;               /*!< [0x0018] Timer External Interrupt Status Register                         */
    __IO uint32_t TRGCTL;                /*!< [0x001c] Timer Trigger Control Register                                   */
    __IO uint32_t ALTCTL;                /*!< [0x0020] Timer Alternative Control Register                               */
    __I  uint32_t RESERVE0[7];
    __IO uint32_t PWMCTL;                /*!< [0x0040] Timer PWM Control Register                                       */
    __IO uint32_t PWMCLKSRC;             /*!< [0x0044] Timer PWM Counter Clock Source Register                          */
    __IO uint32_t PWMCLKPSC;             /*!< [0x0048] Timer PWM Counter Clock Pre-scale Register                       */
    __IO uint32_t PWMCNTCLR;             /*!< [0x004c] Timer PWM Clear Counter Register                                 */
    __IO uint32_t PWMPERIOD;             /*!< [0x0050] Timer PWM Period Register                                        */
    __IO uint32_t PWMCMPDAT;             /*!< [0x0054] Timer PWM Comparator Register                                    */
    __IO uint32_t PWMDTCTL;              /*!< [0x0058] Timer PWM Dead-Time Control Register                             */
    __I  uint32_t PWMCNT;                /*!< [0x005c] Timer PWM Counter Register                                       */
    __IO uint32_t PWMMSKEN;              /*!< [0x0060] Timer PWM Output Mask Enable Register                            */
    __IO uint32_t PWMMSKDAT;             /*!< [0x0064] Timer PWM Output Mask Data Control Register                      */
    __IO uint32_t PWMBKPDB;              /*!< [0x0068] Timer PWM Brake Pin De-Bounce Register                           */
    __IO uint32_t PWMSFCTL;              /*!< [0x006c] Timer PWM System Fail Brake Control Register                     */
    __IO uint32_t PWMBRKCTL;             /*!< [0x0070] Timer PWM Brake Control Register                                 */
    __IO uint32_t PWMOPCTL;              /*!< [0x0074] Timer PWM Output Pin Control Register                            */
    __IO uint32_t PWMOPEN;               /*!< [0x0078] Timer PWM Output Pin Enable Register                             */
    __O  uint32_t PWMSWBRK;              /*!< [0x007c] Timer PWM Software Trigger Brake Control Register                */
    __IO uint32_t PWMINTEN0;             /*!< [0x0080] Timer PWM Interrupt Enable Register 0                            */
    __IO uint32_t PWMINTEN1;             /*!< [0x0084] Timer PWM Interrupt Enable Register 1                            */
    __IO uint32_t PWMINTSTS0;            /*!< [0x0088] Timer PWM Interrupt Status Register 0                            */
    __IO uint32_t PWMINTSTS1;            /*!< [0x008c] Timer PWM Interrupt Status Register 1                            */
    __IO uint32_t PWMTRGADC;             /*!< [0x0090] Timer PWM Trigger ADC Source Select Register                     */
    __IO uint32_t PWMSCTL;               /*!< [0x0094] Timer PWM Synchronous Control Register                           */
    __O  uint32_t PWMSTRG;               /*!< [0x0098] Timer PWM Synchronous Trigger Register                           */
    __IO uint32_t PWMSTATUS;             /*!< [0x009c] Timer PWM Status Register                                        */
    __I  uint32_t PWMPBUF;               /*!< [0x00a0] Timer PWM Period Buffer Register                                 */
    __I  uint32_t PWMCMPBUF;             /*!< [0x00a4] Timer PWM Comparator Buffer Register                             */

} TIMER_T;

/**
    @addtogroup TIMER_CONST TIMER Bit Field Definition
    Constant Definitions for TIMER Controller
@{ */

#define TIMER_CTL_PSC_Pos                (0)                                               /*!< TIMER_T::CTL: PSC Position             */
#define TIMER_CTL_PSC_Msk                (0xfful << TIMER_CTL_PSC_Pos)                     /*!< TIMER_T::CTL: PSC Mask                 */

#define TIMER_CTL_INTRGEN_Pos            (19)                                              /*!< TIMER_T::CTL: INTRGEN Position         */
#define TIMER_CTL_INTRGEN_Msk            (0x1ul << TIMER_CTL_INTRGEN_Pos)                  /*!< TIMER_T::CTL: INTRGEN Mask             */

#define TIMER_CTL_PERIOSEL_Pos           (20)                                              /*!< TIMER_T::CTL: PERIOSEL Position        */
#define TIMER_CTL_PERIOSEL_Msk           (0x1ul << TIMER_CTL_PERIOSEL_Pos)                 /*!< TIMER_T::CTL: PERIOSEL Mask            */

#define TIMER_CTL_TGLPINSEL_Pos          (21)                                              /*!< TIMER_T::CTL: TGLPINSEL Position       */
#define TIMER_CTL_TGLPINSEL_Msk          (0x1ul << TIMER_CTL_TGLPINSEL_Pos)                /*!< TIMER_T::CTL: TGLPINSEL Mask           */

#define TIMER_CTL_CAPSRC_Pos             (22)                                              /*!< TIMER_T::CTL: CAPSRC Position          */
#define TIMER_CTL_CAPSRC_Msk             (0x1ul << TIMER_CTL_CAPSRC_Pos)                   /*!< TIMER_T::CTL: CAPSRC Mask              */

#define TIMER_CTL_WKEN_Pos               (23)                                              /*!< TIMER_T::CTL: WKEN Position            */
#define TIMER_CTL_WKEN_Msk               (0x1ul << TIMER_CTL_WKEN_Pos)                     /*!< TIMER_T::CTL: WKEN Mask                */

#define TIMER_CTL_EXTCNTEN_Pos           (24)                                              /*!< TIMER_T::CTL: EXTCNTEN Position        */
#define TIMER_CTL_EXTCNTEN_Msk           (0x1ul << TIMER_CTL_EXTCNTEN_Pos)                 /*!< TIMER_T::CTL: EXTCNTEN Mask            */

#define TIMER_CTL_ACTSTS_Pos             (25)                                              /*!< TIMER_T::CTL: ACTSTS Position          */
#define TIMER_CTL_ACTSTS_Msk             (0x1ul << TIMER_CTL_ACTSTS_Pos)                   /*!< TIMER_T::CTL: ACTSTS Mask              */

#define TIMER_CTL_OPMODE_Pos             (27)                                              /*!< TIMER_T::CTL: OPMODE Position          */
#define TIMER_CTL_OPMODE_Msk             (0x3ul << TIMER_CTL_OPMODE_Pos)                   /*!< TIMER_T::CTL: OPMODE Mask              */

#define TIMER_CTL_INTEN_Pos              (29)                                              /*!< TIMER_T::CTL: INTEN Position           */
#define TIMER_CTL_INTEN_Msk              (0x1ul << TIMER_CTL_INTEN_Pos)                    /*!< TIMER_T::CTL: INTEN Mask               */

#define TIMER_CTL_CNTEN_Pos              (30)                                              /*!< TIMER_T::CTL: CNTEN Position           */
#define TIMER_CTL_CNTEN_Msk              (0x1ul << TIMER_CTL_CNTEN_Pos)                    /*!< TIMER_T::CTL: CNTEN Mask               */

#define TIMER_CTL_ICEDEBUG_Pos           (31)                                              /*!< TIMER_T::CTL: ICEDEBUG Position        */
#define TIMER_CTL_ICEDEBUG_Msk           (0x1ul << TIMER_CTL_ICEDEBUG_Pos)                 /*!< TIMER_T::CTL: ICEDEBUG Mask            */

#define TIMER_CMP_CMPDAT_Pos             (0)                                               /*!< TIMER_T::CMP: CMPDAT Position          */
#define TIMER_CMP_CMPDAT_Msk             (0xfffffful << TIMER_CMP_CMPDAT_Pos)              /*!< TIMER_T::CMP: CMPDAT Mask              */

#define TIMER_INTSTS_TIF_Pos             (0)                                               /*!< TIMER_T::INTSTS: TIF Position          */
#define TIMER_INTSTS_TIF_Msk             (0x1ul << TIMER_INTSTS_TIF_Pos)                   /*!< TIMER_T::INTSTS: TIF Mask              */

#define TIMER_INTSTS_TWKF_Pos            (1)                                               /*!< TIMER_T::INTSTS: TWKF Position         */
#define TIMER_INTSTS_TWKF_Msk            (0x1ul << TIMER_INTSTS_TWKF_Pos)                  /*!< TIMER_T::INTSTS: TWKF Mask             */

#define TIMER_CNT_CNT_Pos                (0)                                               /*!< TIMER_T::CNT: CNT Position             */
#define TIMER_CNT_CNT_Msk                (0xfffffful << TIMER_CNT_CNT_Pos)                 /*!< TIMER_T::CNT: CNT Mask                 */

#define TIMER_CNT_RSTACT_Pos             (31)                                              /*!< TIMER_T::CNT: RSTACT Position          */
#define TIMER_CNT_RSTACT_Msk             (0x1ul << TIMER_CNT_RSTACT_Pos)                   /*!< TIMER_T::CNT: RSTACT Mask              */

#define TIMER_CAP_CAPDAT_Pos             (0)                                               /*!< TIMER_T::CAP: CAPDAT Position          */
#define TIMER_CAP_CAPDAT_Msk             (0xfffffful << TIMER_CAP_CAPDAT_Pos)              /*!< TIMER_T::CAP: CAPDAT Mask              */

#define TIMER_EXTCTL_CNTPHASE_Pos        (0)                                               /*!< TIMER_T::EXTCTL: CNTPHASE Position     */
#define TIMER_EXTCTL_CNTPHASE_Msk        (0x1ul << TIMER_EXTCTL_CNTPHASE_Pos)              /*!< TIMER_T::EXTCTL: CNTPHASE Mask         */

#define TIMER_EXTCTL_CAPEN_Pos           (3)                                               /*!< TIMER_T::EXTCTL: CAPEN Position        */
#define TIMER_EXTCTL_CAPEN_Msk           (0x1ul << TIMER_EXTCTL_CAPEN_Pos)                 /*!< TIMER_T::EXTCTL: CAPEN Mask            */

#define TIMER_EXTCTL_CAPFUNCS_Pos        (4)                                               /*!< TIMER_T::EXTCTL: CAPFUNCS Position     */
#define TIMER_EXTCTL_CAPFUNCS_Msk        (0x1ul << TIMER_EXTCTL_CAPFUNCS_Pos)              /*!< TIMER_T::EXTCTL: CAPFUNCS Mask         */

#define TIMER_EXTCTL_CAPIEN_Pos          (5)                                               /*!< TIMER_T::EXTCTL: CAPIEN Position       */
#define TIMER_EXTCTL_CAPIEN_Msk          (0x1ul << TIMER_EXTCTL_CAPIEN_Pos)                /*!< TIMER_T::EXTCTL: CAPIEN Mask           */

#define TIMER_EXTCTL_CAPDBEN_Pos         (6)                                               /*!< TIMER_T::EXTCTL: CAPDBEN Position      */
#define TIMER_EXTCTL_CAPDBEN_Msk         (0x1ul << TIMER_EXTCTL_CAPDBEN_Pos)               /*!< TIMER_T::EXTCTL: CAPDBEN Mask          */

#define TIMER_EXTCTL_CNTDBEN_Pos         (7)                                               /*!< TIMER_T::EXTCTL: CNTDBEN Position      */
#define TIMER_EXTCTL_CNTDBEN_Msk         (0x1ul << TIMER_EXTCTL_CNTDBEN_Pos)               /*!< TIMER_T::EXTCTL: CNTDBEN Mask          */

#define TIMER_EXTCTL_ACMPSSEL_Pos        (8)                                               /*!< TIMER_T::EXTCTL: ACMPSSEL Position     */
#define TIMER_EXTCTL_ACMPSSEL_Msk        (0x1ul << TIMER_EXTCTL_ACMPSSEL_Pos)              /*!< TIMER_T::EXTCTL: ACMPSSEL Mask         */

#define TIMER_EXTCTL_CAPEDGE_Pos         (12)                                              /*!< TIMER_T::EXTCTL: CAPEDGE Position      */
#define TIMER_EXTCTL_CAPEDGE_Msk         (0x7ul << TIMER_EXTCTL_CAPEDGE_Pos)               /*!< TIMER_T::EXTCTL: CAPEDGE Mask          */

#define TIMER_EXTCTL_ECNTSSEL_Pos        (16)                                              /*!< TIMER_T::EXTCTL: ECNTSSEL Position     */
#define TIMER_EXTCTL_ECNTSSEL_Msk        (0x1ul << TIMER_EXTCTL_ECNTSSEL_Pos)              /*!< TIMER_T::EXTCTL: ECNTSSEL Mask         */

#define TIMER_EINTSTS_CAPIF_Pos          (0)                                               /*!< TIMER_T::EINTSTS: CAPIF Position       */
#define TIMER_EINTSTS_CAPIF_Msk          (0x1ul << TIMER_EINTSTS_CAPIF_Pos)                /*!< TIMER_T::EINTSTS: CAPIF Mask           */

#define TIMER_TRGCTL_TRGSSEL_Pos         (0)                                               /*!< TIMER_T::TRGCTL: TRGSSEL Position      */
#define TIMER_TRGCTL_TRGSSEL_Msk         (0x1ul << TIMER_TRGCTL_TRGSSEL_Pos)               /*!< TIMER_T::TRGCTL: TRGSSEL Mask          */

#define TIMER_TRGCTL_TRGPWM_Pos          (1)                                               /*!< TIMER_T::TRGCTL: TRGPWM Position       */
#define TIMER_TRGCTL_TRGPWM_Msk          (0x1ul << TIMER_TRGCTL_TRGPWM_Pos)                /*!< TIMER_T::TRGCTL: TRGPWM Mask           */

#define TIMER_TRGCTL_TRGADC_Pos          (2)                                               /*!< TIMER_T::TRGCTL: TRGADC Position       */
#define TIMER_TRGCTL_TRGADC_Msk          (0x1ul << TIMER_TRGCTL_TRGADC_Pos)                /*!< TIMER_T::TRGCTL: TRGADC Mask           */

#define TIMER_TRGCTL_TRGDAC_Pos          (3)                                               /*!< TIMER_T::TRGCTL: TRGDAC Position       */
#define TIMER_TRGCTL_TRGDAC_Msk          (0x1ul << TIMER_TRGCTL_TRGDAC_Pos)                /*!< TIMER_T::TRGCTL: TRGDAC Mask           */

#define TIMER_TRGCTL_TRGPDMA_Pos         (4)                                               /*!< TIMER_T::TRGCTL: TRGPDMA Position      */
#define TIMER_TRGCTL_TRGPDMA_Msk         (0x1ul << TIMER_TRGCTL_TRGPDMA_Pos)               /*!< TIMER_T::TRGCTL: TRGPDMA Mask          */

#define TIMER_ALTCTL_FUNCSEL_Pos         (0)                                               /*!< TIMER_T::ALTCTL: FUNCSEL Position      */
#define TIMER_ALTCTL_FUNCSEL_Msk         (0x1ul << TIMER_ALTCTL_FUNCSEL_Pos)               /*!< TIMER_T::ALTCTL: FUNCSEL Mask          */

#define TIMER_PWMCTL_CNTEN_Pos           (0)                                               /*!< TIMER_T::PWMCTL: CNTEN Position        */
#define TIMER_PWMCTL_CNTEN_Msk           (0x1ul << TIMER_PWMCTL_CNTEN_Pos)                 /*!< TIMER_T::PWMCTL: CNTEN Mask            */

#define TIMER_PWMCTL_CNTTYPE_Pos         (1)                                               /*!< TIMER_T::PWMCTL: CNTTYPE Position      */
#define TIMER_PWMCTL_CNTTYPE_Msk         (0x3ul << TIMER_PWMCTL_CNTTYPE_Pos)               /*!< TIMER_T::PWMCTL: CNTTYPE Mask          */

#define TIMER_PWMCTL_CNTMODE_Pos         (3)                                               /*!< TIMER_T::PWMCTL: CNTMODE Position      */
#define TIMER_PWMCTL_CNTMODE_Msk         (0x1ul << TIMER_PWMCTL_CNTMODE_Pos)               /*!< TIMER_T::PWMCTL: CNTMODE Mask          */

#define TIMER_PWMCTL_CTRLD_Pos           (8)                                               /*!< TIMER_T::PWMCTL: CTRLD Position        */
#define TIMER_PWMCTL_CTRLD_Msk           (0x1ul << TIMER_PWMCTL_CTRLD_Pos)                 /*!< TIMER_T::PWMCTL: CTRLD Mask            */

#define TIMER_PWMCTL_IMMLDEN_Pos         (9)                                               /*!< TIMER_T::PWMCTL: IMMLDEN Position      */
#define TIMER_PWMCTL_IMMLDEN_Msk         (0x1ul << TIMER_PWMCTL_IMMLDEN_Pos)               /*!< TIMER_T::PWMCTL: IMMLDEN Mask          */

#define TIMER_PWMCTL_PWMMODE_Pos         (16)                                              /*!< TIMER_T::PWMCTL: PWMMODE Position      */
#define TIMER_PWMCTL_PWMMODE_Msk         (0x1ul << TIMER_PWMCTL_PWMMODE_Pos)               /*!< TIMER_T::PWMCTL: PWMMODE Mask          */

#define TIMER_PWMCTL_DBGHALT_Pos         (30)                                              /*!< TIMER_T::PWMCTL: DBGHALT Position      */
#define TIMER_PWMCTL_DBGHALT_Msk         (0x1ul << TIMER_PWMCTL_DBGHALT_Pos)               /*!< TIMER_T::PWMCTL: DBGHALT Mask          */

#define TIMER_PWMCTL_DBGTRIOFF_Pos       (31)                                              /*!< TIMER_T::PWMCTL: DBGTRIOFF Position    */
#define TIMER_PWMCTL_DBGTRIOFF_Msk       (0x1ul << TIMER_PWMCTL_DBGTRIOFF_Pos)             /*!< TIMER_T::PWMCTL: DBGTRIOFF Mask        */

#define TIMER_PWMCLKSRC_CLKSRC_Pos       (0)                                               /*!< TIMER_T::PWMCLKSRC: CLKSRC Position    */
#define TIMER_PWMCLKSRC_CLKSRC_Msk       (0x7ul << TIMER_PWMCLKSRC_CLKSRC_Pos)             /*!< TIMER_T::PWMCLKSRC: CLKSRC Mask        */

#define TIMER_PWMCLKPSC_CLKPSC_Pos       (0)                                               /*!< TIMER_T::PWMCLKPSC: CLKPSC Position    */
#define TIMER_PWMCLKPSC_CLKPSC_Msk       (0xffful << TIMER_PWMCLKPSC_CLKPSC_Pos)           /*!< TIMER_T::PWMCLKPSC: CLKPSC Mask        */

#define TIMER_PWMCNTCLR_CNTCLR_Pos       (0)                                               /*!< TIMER_T::PWMCNTCLR: CNTCLR Position    */
#define TIMER_PWMCNTCLR_CNTCLR_Msk       (0x1ul << TIMER_PWMCNTCLR_CNTCLR_Pos)             /*!< TIMER_T::PWMCNTCLR: CNTCLR Mask        */

#define TIMER_PWMPERIOD_PERIOD_Pos       (0)                                               /*!< TIMER_T::PWMPERIOD: PERIOD Position    */
#define TIMER_PWMPERIOD_PERIOD_Msk       (0xfffful << TIMER_PWMPERIOD_PERIOD_Pos)          /*!< TIMER_T::PWMPERIOD: PERIOD Mask        */

#define TIMER_PWMCMPDAT_CMPDAT_Pos       (0)                                               /*!< TIMER_T::PWMCMPDAT: CMPDAT Position    */
#define TIMER_PWMCMPDAT_CMPDAT_Msk       (0xfffful << TIMER_PWMCMPDAT_CMPDAT_Pos)          /*!< TIMER_T::PWMCMPDAT: CMPDAT Mask        */

#define TIMER_PWMDTCTL_DTCNT_Pos         (0)                                               /*!< TIMER_T::PWMDTCTL: DTCNT Position      */
#define TIMER_PWMDTCTL_DTCNT_Msk         (0xffful << TIMER_PWMDTCTL_DTCNT_Pos)             /*!< TIMER_T::PWMDTCTL: DTCNT Mask          */

#define TIMER_PWMDTCTL_DTEN_Pos          (16)                                              /*!< TIMER_T::PWMDTCTL: DTEN Position       */
#define TIMER_PWMDTCTL_DTEN_Msk          (0x1ul << TIMER_PWMDTCTL_DTEN_Pos)                /*!< TIMER_T::PWMDTCTL: DTEN Mask           */

#define TIMER_PWMDTCTL_DTCKSEL_Pos       (24)                                              /*!< TIMER_T::PWMDTCTL: DTCKSEL Position    */
#define TIMER_PWMDTCTL_DTCKSEL_Msk       (0x1ul << TIMER_PWMDTCTL_DTCKSEL_Pos)             /*!< TIMER_T::PWMDTCTL: DTCKSEL Mask        */

#define TIMER_PWMCNT_CNT_Pos             (0)                                               /*!< TIMER_T::PWMCNT: CNT Position          */
#define TIMER_PWMCNT_CNT_Msk             (0xfffful << TIMER_PWMCNT_CNT_Pos)                /*!< TIMER_T::PWMCNT: CNT Mask              */

#define TIMER_PWMCNT_DIRF_Pos            (16)                                              /*!< TIMER_T::PWMCNT: DIRF Position         */
#define TIMER_PWMCNT_DIRF_Msk            (0x1ul << TIMER_PWMCNT_DIRF_Pos)                  /*!< TIMER_T::PWMCNT: DIRF Mask             */

#define TIMER_PWMMSKEN_MSKEN0_Pos        (0)                                               /*!< TIMER_T::PWMMSKEN: MSKEN0 Position     */
#define TIMER_PWMMSKEN_MSKEN0_Msk        (0x1ul << TIMER_PWMMSKEN_MSKEN0_Pos)              /*!< TIMER_T::PWMMSKEN: MSKEN0 Mask         */

#define TIMER_PWMMSKEN_MSKEN1_Pos        (1)                                               /*!< TIMER_T::PWMMSKEN: MSKEN1 Position     */
#define TIMER_PWMMSKEN_MSKEN1_Msk        (0x1ul << TIMER_PWMMSKEN_MSKEN1_Pos)              /*!< TIMER_T::PWMMSKEN: MSKEN1 Mask         */

#define TIMER_PWMMSKDAT_MSKDAT0_Pos      (0)                                               /*!< TIMER_T::PWMMSKDAT: MSKDAT0 Position      */
#define TIMER_PWMMSKDAT_MSKDAT0_Msk      (0x1ul << TIMER_PWMMSKDAT_MSKDAT0_Pos)            /*!< TIMER_T::PWMMSKDAT: MSKDAT0 Mask          */

#define TIMER_PWMMSKDAT_MSKDAT1_Pos      (1)                                               /*!< TIMER_T::PWMMSKDAT: MSKDAT1 Position      */
#define TIMER_PWMMSKDAT_MSKDAT1_Msk      (0x1ul << TIMER_PWMMSKDAT_MSKDAT1_Pos)            /*!< TIMER_T::PWMMSKDAT: MSKDAT1 Mask          */

#define TIMER_PWMBKPDB_BKPDBEN_Pos       (0)                                               /*!< TIMER_T::PWMBKPDB: BKPDBEN Position    */
#define TIMER_PWMBKPDB_BKPDBEN_Msk       (0x1ul << TIMER_PWMBKPDB_BKPDBEN_Pos)             /*!< TIMER_T::PWMBKPDB: BKPDBEN Mask        */

#define TIMER_PWMBKPDB_BKPDBCS_Pos       (1)                                               /*!< TIMER_T::PWMBKPDB: BKPDBCS Position    */
#define TIMER_PWMBKPDB_BKPDBCS_Msk       (0x7ul << TIMER_PWMBKPDB_BKPDBCS_Pos)             /*!< TIMER_T::PWMBKPDB: BKPDBCS Mask        */

#define TIMER_PWMBKPDB_BKPDBCNT_Pos      (4)                                               /*!< TIMER_T::PWMBKPDB: BKPDBCNT Position   */
#define TIMER_PWMBKPDB_BKPDBCNT_Msk      (0x7ul << TIMER_PWMBKPDB_BKPDBCNT_Pos)            /*!< TIMER_T::PWMBKPDB: BKPDBCNT Mask       */

#define TIMER_PWMBKPDB_BKPINDC_Pos       (7)                                               /*!< TIMER_T::PWMBKPDB: BKPINDC Position    */
#define TIMER_PWMBKPDB_BKPINDC_Msk       (0x1ul << TIMER_PWMBKPDB_BKPINDC_Pos)             /*!< TIMER_T::PWMBKPDB: BKPINDC Mask        */

#define TIMER_PWMBKPDB_BKPINSRC_Pos      (16)                                              /*!< TIMER_T::PWMBKPDB: BKPINSRC Position   */
#define TIMER_PWMBKPDB_BKPINSRC_Msk      (0x3ul << TIMER_PWMBKPDB_BKPINSRC_Pos)            /*!< TIMER_T::PWMBKPDB: BKPINSRC Mask       */

#define TIMER_PWMSFCTL_CSSBRKEN_Pos      (0)                                               /*!< TIMER_T::PWMSFCTL: CSSBRKEN Position   */
#define TIMER_PWMSFCTL_CSSBRKEN_Msk      (0x1ul << TIMER_PWMSFCTL_CSSBRKEN_Pos)            /*!< TIMER_T::PWMSFCTL: CSSBRKEN Mask       */

#define TIMER_PWMSFCTL_BODBRKEN_Pos      (1)                                               /*!< TIMER_T::PWMSFCTL: BODBRKEN Position   */
#define TIMER_PWMSFCTL_BODBRKEN_Msk      (0x1ul << TIMER_PWMSFCTL_BODBRKEN_Pos)            /*!< TIMER_T::PWMSFCTL: BODBRKEN Mask       */

#define TIMER_PWMSFBK_RAMBKEN_Pos        (2)
#define TIMER_PWMSFBK_RAMBKEN_Msk        (0x1ul << TIMER_PWMSFBK_RAMBKEN_Pos)

#define TIMER_PWMSFCTL_CORBRKEN_Pos      (3)                                               /*!< TIMER_T::PWMSFCTL: CORBRKEN Position   */
#define TIMER_PWMSFCTL_CORBRKEN_Msk      (0x1ul << TIMER_PWMSFCTL_CORBRKEN_Pos)            /*!< TIMER_T::PWMSFCTL: CORBRKEN Mask       */

#define TIMER_PWMBRKCTL_CPO0EBEN_Pos     (0)                                               /*!< TIMER_T::PWMBRKCTL: CPO0EBEN Position  */
#define TIMER_PWMBRKCTL_CPO0EBEN_Msk     (0x1ul << TIMER_PWMBRKCTL_CPO0EBEN_Pos)           /*!< TIMER_T::PWMBRKCTL: CPO0EBEN Mask      */

#define TIMER_PWMBRKCTL_CPO1EBEN_Pos     (1)                                               /*!< TIMER_T::PWMBRKCTL: CPO1EBEN Position  */
#define TIMER_PWMBRKCTL_CPO1EBEN_Msk     (0x1ul << TIMER_PWMBRKCTL_CPO1EBEN_Pos)           /*!< TIMER_T::PWMBRKCTL: CPO1EBEN Mask      */

#define TIMER_PWMBRKCTL_BKPEBEN_Pos      (4)                                               /*!< TIMER_T::PWMBRKCTL: BKPEBEN Position   */
#define TIMER_PWMBRKCTL_BKPEBEN_Msk      (0x1ul << TIMER_PWMBRKCTL_BKPEBEN_Pos)            /*!< TIMER_T::PWMBRKCTL: BKPEBEN Mask       */

#define TIMER_PWMBRKCTL_SYSFEBEN_Pos     (7)                                               /*!< TIMER_T::PWMBRKCTL: SYSFEBEN Position  */
#define TIMER_PWMBRKCTL_SYSFEBEN_Msk     (0x1ul << TIMER_PWMBRKCTL_SYSFEBEN_Pos)           /*!< TIMER_T::PWMBRKCTL: SYSFEBEN Mask      */

#define TIMER_PWMBRKCTL_CPO0LBEN_Pos     (8)                                               /*!< TIMER_T::PWMBRKCTL: CPO0LBEN Position  */
#define TIMER_PWMBRKCTL_CPO0LBEN_Msk     (0x1ul << TIMER_PWMBRKCTL_CPO0LBEN_Pos)           /*!< TIMER_T::PWMBRKCTL: CPO0LBEN Mask      */

#define TIMER_PWMBRKCTL_CPO1LBEN_Pos     (9)                                               /*!< TIMER_T::PWMBRKCTL: CPO1LBEN Position  */
#define TIMER_PWMBRKCTL_CPO1LBEN_Msk     (0x1ul << TIMER_PWMBRKCTL_CPO1LBEN_Pos)           /*!< TIMER_T::PWMBRKCTL: CPO1LBEN Mask      */

#define TIMER_PWMBRKCTL_BKPLBEN_Pos      (12)                                              /*!< TIMER_T::PWMBRKCTL: BKPLBEN Position   */
#define TIMER_PWMBRKCTL_BKPLBEN_Msk      (0x1ul << TIMER_PWMBRKCTL_BKPLBEN_Pos)            /*!< TIMER_T::PWMBRKCTL: BKPLBEN Mask       */

#define TIMER_PWMBRKCTL_SYSFLBEN_Pos     (15)                                              /*!< TIMER_T::PWMBRKCTL: SYSFLBEN Position  */
#define TIMER_PWMBRKCTL_SYSFLBEN_Msk     (0x1ul << TIMER_PWMBRKCTL_SYSFLBEN_Pos)           /*!< TIMER_T::PWMBRKCTL: SYSFLBEN Mask      */

#define TIMER_PWMBRKCTL_BRKACT0_Pos      (16)                                              /*!< TIMER_T::PWMBRKCTL: BRKACT0 Position   */
#define TIMER_PWMBRKCTL_BRKACT0_Msk      (0x3ul << TIMER_PWMBRKCTL_BRKACT0_Pos)            /*!< TIMER_T::PWMBRKCTL: BRKACT0 Mask       */

#define TIMER_PWMBRKCTL_BRKACT1_Pos      (18)                                              /*!< TIMER_T::PWMBRKCTL: BRKACT1 Position   */
#define TIMER_PWMBRKCTL_BRKACT1_Msk      (0x3ul << TIMER_PWMBRKCTL_BRKACT1_Pos)            /*!< TIMER_T::PWMBRKCTL: BRKACT1 Mask       */

#define TIMER_PWMOPCTL_OPINV0_Pos        (0)                                               /*!< TIMER_T::PWMOPCTL: OPINV0 Position     */
#define TIMER_PWMOPCTL_OPINV0_Msk        (0x1ul << TIMER_PWMOPCTL_OPINV0_Pos)              /*!< TIMER_T::PWMOPCTL: OPINV0 Mask         */

#define TIMER_PWMOPCTL_OPINV1_Pos        (1)                                               /*!< TIMER_T::PWMOPCTL: OPINV1 Position     */
#define TIMER_PWMOPCTL_OPINV1_Msk        (0x1ul << TIMER_PWMOPCTL_OPINV1_Pos)              /*!< TIMER_T::PWMOPCTL: OPINV1 Mask         */

#define TIMER_PWMOPEN_OPEN0_Pos          (0)                                               /*!< TIMER_T::PWMOPEN: OPEN0 Position       */
#define TIMER_PWMOPEN_OPEN0_Msk          (0x1ul << TIMER_PWMOPEN_OPEN0_Pos)                /*!< TIMER_T::PWMOPEN: OPEN0 Mask           */

#define TIMER_PWMOPEN_OPEN1_Pos          (1)                                               /*!< TIMER_T::PWMOPEN: OPEN1 Position       */
#define TIMER_PWMOPEN_OPEN1_Msk          (0x1ul << TIMER_PWMOPEN_OPEN1_Pos)                /*!< TIMER_T::PWMOPEN: OPEN1 Mask           */

#define TIMER_PWMSWBRK_BRKETRG_Pos       (0)                                               /*!< TIMER_T::PWMSWBRK: BRKETRG Position    */
#define TIMER_PWMSWBRK_BRKETRG_Msk       (0x1ul << TIMER_PWMSWBRK_BRKETRG_Pos)             /*!< TIMER_T::PWMSWBRK: BRKETRG Mask        */

#define TIMER_PWMSWBRK_BRKLTRG_Pos       (8)                                               /*!< TIMER_T::PWMSWBRK: BRKLTRG Position    */
#define TIMER_PWMSWBRK_BRKLTRG_Msk       (0x1ul << TIMER_PWMSWBRK_BRKLTRG_Pos)             /*!< TIMER_T::PWMSWBRK: BRKLTRG Mask        */

#define TIMER_PWMINTEN0_ZIEN_Pos         (0)                                               /*!< TIMER_T::PWMINTEN0: ZIEN Position      */
#define TIMER_PWMINTEN0_ZIEN_Msk         (0x1ul << TIMER_PWMINTEN0_ZIEN_Pos)               /*!< TIMER_T::PWMINTEN0: ZIEN Mask          */

#define TIMER_PWMINTEN0_PIEN_Pos         (1)                                               /*!< TIMER_T::PWMINTEN0: PIEN Position      */
#define TIMER_PWMINTEN0_PIEN_Msk         (0x1ul << TIMER_PWMINTEN0_PIEN_Pos)               /*!< TIMER_T::PWMINTEN0: PIEN Mask          */

#define TIMER_PWMINTEN0_CMPUIEN_Pos      (2)                                               /*!< TIMER_T::PWMINTEN0: CMPUIEN Position   */
#define TIMER_PWMINTEN0_CMPUIEN_Msk      (0x1ul << TIMER_PWMINTEN0_CMPUIEN_Pos)            /*!< TIMER_T::PWMINTEN0: CMPUIEN Mask       */

#define TIMER_PWMINTEN0_CMPDIEN_Pos      (3)                                               /*!< TIMER_T::PWMINTEN0: CMPDIEN Position   */
#define TIMER_PWMINTEN0_CMPDIEN_Msk      (0x1ul << TIMER_PWMINTEN0_CMPDIEN_Pos)            /*!< TIMER_T::PWMINTEN0: CMPDIEN Mask       */

#define TIMER_PWMINTEN1_BRKEIEN_Pos      (0)                                               /*!< TIMER_T::PWMINTEN1: BRKEIEN Position   */
#define TIMER_PWMINTEN1_BRKEIEN_Msk      (0x1ul << TIMER_PWMINTEN1_BRKEIEN_Pos)            /*!< TIMER_T::PWMINTEN1: BRKEIEN Mask       */

#define TIMER_PWMINTEN1_BRKLIEN_Pos      (8)                                               /*!< TIMER_T::PWMINTEN1: BRKLIEN Position   */
#define TIMER_PWMINTEN1_BRKLIEN_Msk      (0x1ul << TIMER_PWMINTEN1_BRKLIEN_Pos)            /*!< TIMER_T::PWMINTEN1: BRKLIEN Mask       */

#define TIMER_PWMINTSTS0_ZIF_Pos         (0)                                               /*!< TIMER_T::PWMINTSTS0: ZIF Position      */
#define TIMER_PWMINTSTS0_ZIF_Msk         (0x1ul << TIMER_PWMINTSTS0_ZIF_Pos)               /*!< TIMER_T::PWMINTSTS0: ZIF Mask          */

#define TIMER_PWMINTSTS0_PIF_Pos         (1)                                               /*!< TIMER_T::PWMINTSTS0: PIF Position      */
#define TIMER_PWMINTSTS0_PIF_Msk         (0x1ul << TIMER_PWMINTSTS0_PIF_Pos)               /*!< TIMER_T::PWMINTSTS0: PIF Mask          */

#define TIMER_PWMINTSTS0_CMPUIF_Pos      (2)                                               /*!< TIMER_T::PWMINTSTS0: CMPUIF Position   */
#define TIMER_PWMINTSTS0_CMPUIF_Msk      (0x1ul << TIMER_PWMINTSTS0_CMPUIF_Pos)            /*!< TIMER_T::PWMINTSTS0: CMPUIF Mask       */

#define TIMER_PWMINTSTS0_CMPDIF_Pos      (3)                                               /*!< TIMER_T::PWMINTSTS0: CMPDIF Position   */
#define TIMER_PWMINTSTS0_CMPDIF_Msk      (0x1ul << TIMER_PWMINTSTS0_CMPDIF_Pos)            /*!< TIMER_T::PWMINTSTS0: CMPDIF Mask       */

#define TIMER_PWMINTSTS1_BRKEIF0_Pos     (0)                                               /*!< TIMER_T::PWMINTSTS1: BRKEIF0 Position  */
#define TIMER_PWMINTSTS1_BRKEIF0_Msk     (0x1ul << TIMER_PWMINTSTS1_BRKEIF0_Pos)           /*!< TIMER_T::PWMINTSTS1: BRKEIF0 Mask      */

#define TIMER_PWMINTSTS1_BRKEIF1_Pos     (1)                                               /*!< TIMER_T::PWMINTSTS1: BRKEIF1 Position  */
#define TIMER_PWMINTSTS1_BRKEIF1_Msk     (0x1ul << TIMER_PWMINTSTS1_BRKEIF1_Pos)           /*!< TIMER_T::PWMINTSTS1: BRKEIF1 Mask      */

#define TIMER_PWMINTSTS1_BRKLIF0_Pos     (8)                                               /*!< TIMER_T::PWMINTSTS1: BRKLIF0 Position  */
#define TIMER_PWMINTSTS1_BRKLIF0_Msk     (0x1ul << TIMER_PWMINTSTS1_BRKLIF0_Pos)           /*!< TIMER_T::PWMINTSTS1: BRKLIF0 Mask      */

#define TIMER_PWMINTSTS1_BRKLIF1_Pos     (9)                                               /*!< TIMER_T::PWMINTSTS1: BRKLIF1 Position  */
#define TIMER_PWMINTSTS1_BRKLIF1_Msk     (0x1ul << TIMER_PWMINTSTS1_BRKLIF1_Pos)           /*!< TIMER_T::PWMINTSTS1: BRKLIF1 Mask      */

#define TIMER_PWMINTSTS1_BRKESTS0_Pos    (16)                                              /*!< TIMER_T::PWMINTSTS1: BRKESTS0 Position */
#define TIMER_PWMINTSTS1_BRKESTS0_Msk    (0x1ul << TIMER_PWMINTSTS1_BRKESTS0_Pos)          /*!< TIMER_T::PWMINTSTS1: BRKESTS0 Mask     */

#define TIMER_PWMINTSTS1_BRKESTS1_Pos    (17)                                              /*!< TIMER_T::PWMINTSTS1: BRKESTS1 Position */
#define TIMER_PWMINTSTS1_BRKESTS1_Msk    (0x1ul << TIMER_PWMINTSTS1_BRKESTS1_Pos)          /*!< TIMER_T::PWMINTSTS1: BRKESTS1 Mask     */

#define TIMER_PWMINTSTS1_BRKLSTS0_Pos    (24)                                              /*!< TIMER_T::PWMINTSTS1: BRKLSTS0 Position */
#define TIMER_PWMINTSTS1_BRKLSTS0_Msk    (0x1ul << TIMER_PWMINTSTS1_BRKLSTS0_Pos)          /*!< TIMER_T::PWMINTSTS1: BRKLSTS0 Mask     */

#define TIMER_PWMINTSTS1_BRKLSTS1_Pos    (25)                                              /*!< TIMER_T::PWMINTSTS1: BRKLSTS1 Position */
#define TIMER_PWMINTSTS1_BRKLSTS1_Msk    (0x1ul << TIMER_PWMINTSTS1_BRKLSTS1_Pos)          /*!< TIMER_T::PWMINTSTS1: BRKLSTS1 Mask     */

#define TIMER_PWMTRGADC_TRGSRC_Pos       (0)                                               /*!< TIMER_T::PWMTRGADC: TRGSRC Position     */
#define TIMER_PWMTRGADC_TRGSRC_Msk       (0x7ul << TIMER_PWMTRGADC_TRGSRC_Pos)             /*!< TIMER_T::PWMTRGADC: TRGSRC Mask         */

#define TIMER_PWMTRGADC_TRGEN_Pos        (7)                                               /*!< TIMER_T::PWMTRGADC: TRGEN Position      */
#define TIMER_PWMTRGADC_TRGEN_Msk        (0x1ul << TIMER_PWMTRGADC_TRGEN_Pos)              /*!< TIMER_T::PWMTRGADC: TRGEN Mask          */

#define TIMER_PWMSCTL_SYNCMODE_Pos       (0)                                               /*!< TIMER_T::PWMSCTL: SYNCMODE Position    */
#define TIMER_PWMSCTL_SYNCMODE_Msk       (0x3ul << TIMER_PWMSCTL_SYNCMODE_Pos)             /*!< TIMER_T::PWMSCTL: SYNCMODE Mask        */

#define TIMER_PWMSCTL_SYNCSRC_Pos        (8)                                               /*!< TIMER_T::PWMSCTL: SYNCSRC Position     */
#define TIMER_PWMSCTL_SYNCSRC_Msk        (0x1ul << TIMER_PWMSCTL_SYNCSRC_Pos)              /*!< TIMER_T::PWMSCTL: SYNCSRC Mask         */

#define TIMER_PWMSTRG_STRGEN_Pos         (0)                                               /*!< TIMER_T::PWMSTRG: STRGEN Position      */
#define TIMER_PWMSTRG_STRGEN_Msk         (0x1ul << TIMER_PWMSTRG_STRGEN_Pos)               /*!< TIMER_T::PWMSTRG: STRGEN Mask          */

#define TIMER_PWMSTATUS_CNTMAX_Pos       (0)                                               /*!< TIMER_T::PWMSTATUS: CNTMAX Position    */
#define TIMER_PWMSTATUS_CNTMAX_Msk       (0x1ul << TIMER_PWMSTATUS_CNTMAX_Pos)             /*!< TIMER_T::PWMSTATUS: CNTMAX Mask        */

#define TIMER_PWMSTATUS_ADCTRG_Pos       (16)                                              /*!< TIMER_T::PWMSTATUS: ADCTRG Position    */
#define TIMER_PWMSTATUS_ADCTRG_Msk       (0x1ul << TIMER_PWMSTATUS_ADCTRG_Pos)             /*!< TIMER_T::PWMSTATUS: ADCTRG Mask        */

#define TIMER_PWMPBUF_PBUF_Pos           (0)                                               /*!< TIMER_T::PWMPBUF: PBUF Position        */
#define TIMER_PWMPBUF_PBUF_Msk           (0xfffful << TIMER_PWMPBUF_PBUF_Pos)              /*!< TIMER_T::PWMPBUF: PBUF Mask            */

#define TIMER_PWMCMPBUF_CMPBUF_Pos       (0)                                               /*!< TIMER_T::PWMCMPBUF: CMPBUF Position    */
#define TIMER_PWMCMPBUF_CMPBUF_Msk       (0xfffful << TIMER_PWMCMPBUF_CMPBUF_Pos)          /*!< TIMER_T::PWMCMPBUF: CMPBUF Mask        */

/**@}*/ /* TIMER_CONST */
/**@}*/ /* end of TIMER register group */


//#define TIMER0		((TIMER_T *) ETIMER0_BASE)         /*!< TIMER0 Configuration Struct                      */
//#define TIMER1		((TIMER_T *) ETIMER1_BASE)         /*!< TIMER1 Configuration Struct                      */
#define TIMER2		((TIMER_T *) ETIMER2_BASE)         /*!< TIMER2 Configuration Struct                      */
#define TIMER3		((TIMER_T *) ETIMER3_BASE)         /*!< TIMER3 Configuration Struct                      */


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup TIMER_Driver TIMER Driver
  @{
*/

/** @addtogroup TIMER_EXPORTED_CONSTANTS TIMER Exported Constants
  @{
*/
/*---------------------------------------------------------------------------------------------------------*/
/*  TIMER Operation Mode, External Counter and Capture Mode Constant Definitions                           */
/*---------------------------------------------------------------------------------------------------------*/
#define TIMER_ONESHOT_MODE                      (0UL << TIMER_CTL_OPMODE_Pos)      /*!< Timer working in one-shot mode */
#define TIMER_PERIODIC_MODE                     (1UL << TIMER_CTL_OPMODE_Pos)      /*!< Timer working in periodic mode */
#define TIMER_TOGGLE_MODE                       (2UL << TIMER_CTL_OPMODE_Pos)      /*!< Timer working in toggle-output mode */
#define TIMER_CONTINUOUS_MODE                   (3UL << TIMER_CTL_OPMODE_Pos)      /*!< Timer working in continuous counting mode */
#define TIMER_TOUT_PIN_FROM_TX                  (0UL << TIMER_CTL_TGLPINSEL_Pos)   /*!< Timer toggle-output pin is from Tx pin */
#define TIMER_TOUT_PIN_FROM_TX_EXT              (1UL << TIMER_CTL_TGLPINSEL_Pos)   /*!< Timer toggle-output pin is from Tx_EXT pin */

#define TIMER_COUNTER_EVENT_FALLING             (0UL << TIMER_EXTCTL_CNTPHASE_Pos) /*!< Counter increase on falling edge detection */
#define TIMER_COUNTER_EVENT_RISING              (1UL << TIMER_EXTCTL_CNTPHASE_Pos) /*!< Counter increase on rising edge detection */
#define TIMER_CAPTURE_FREE_COUNTING_MODE        (0UL << TIMER_EXTCTL_CAPFUNCS_Pos) /*!< Timer capture event to get timer counter value */
#define TIMER_CAPTURE_COUNTER_RESET_MODE        (1UL << TIMER_EXTCTL_CAPFUNCS_Pos) /*!< Timer capture event to reset timer counter */

#define TIMER_CAPTURE_EVENT_FALLING       		(0UL << TIMER_EXTCTL_CAPEDGE_Pos)  /*!< Falling edge detection to trigger capture event */
#define TIMER_CAPTURE_EVENT_RISING         		(1UL << TIMER_EXTCTL_CAPEDGE_Pos)  /*!< Rising edge detection to trigger capture event */
#define TIMER_CAPTURE_EVENT_FALLING_RISING      (2UL << TIMER_EXTCTL_CAPEDGE_Pos)  /*!< Both falling and rising edge detection to trigger capture event, and first event at falling edge */
#define TIMER_CAPTURE_EVENT_RISING_FALLING      (3UL << TIMER_EXTCTL_CAPEDGE_Pos)  /*!< Both rising and falling edge detection to trigger capture event, and first event at rising edge */
#define TIMER_CAPTURE_EVENT_GET_LOW_PERIOD    	(6UL << TIMER_EXTCTL_CAPEDGE_Pos)  /*!< First capture event is at falling edge, follows are at at rising edge */
#define TIMER_CAPTURE_EVENT_GET_HIGH_PERIOD    	(7UL << TIMER_EXTCTL_CAPEDGE_Pos)  /*!< First capture event is at rising edge, follows are at at falling edge */

#define TIMER_TRGSRC_TIMEOUT_EVENT      		(0UL << TIMER_TRGCTL_TRGSSEL_Pos) /*!< Select internal trigger source from timer time-out event */
#define TIMER_TRGSRC_CAPTURE_EVENT      		(1UL << TIMER_TRGCTL_TRGSSEL_Pos) /*!< Select internal trigger source from timer capture event */
#define TIMER_TRG_TO_PWM                		(TIMER_TRGCTL_TRGPWM_Msk) 		  /*!< Each timer event as PWM counter clock source */
#define TIMER_TRG_TO_ADC               			(TIMER_TRGCTL_TRGADC_Msk)		  /*!< Each timer event to start ADC conversion */
#define TIMER_TRG_TO_PDMA               		(TIMER_TRGCTL_TRGPDMA_Msk)		  /*!< Each timer event to trigger PDMA transfer */
#define TIMER_TRG_TO_DAC               		    (TIMER_TRGCTL_TRGDAC_Msk)		  /*!< Each timer event to trigger DAC transfer */

/*@}*/ /* end of group TIMER_EXPORTED_CONSTANTS */


/** @addtogroup TIMER_EXPORTED_FUNCTIONS TIMER Exported Functions
  @{
*/

/**
  * @brief      Set Timer Compared Value
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  * @param[in]  u32Value    Timer compare value. Valid values are between 2 to 0xFFFFFF.
  *
  * @return     None
  *
  * @details    This macro is used to set timer compared value to adjust timer time-out interval.
  * @note       1. Never write 0x0 or 0x1 in this field, or the core will run into unknown state. \n
  *             2. If update timer compared value in continuous counting mode, timer counter value will keep counting continuously. \n
  *                But if timer is operating at other modes, the timer up counter will restart counting and start from 0.
  */
#define TIMER_SET_CMP_VALUE(timer, u32Value)        ((timer)->CMP = (u32Value))

/**
  * @brief      Set Timer Prescale Value
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  * @param[in]  u32Value    Timer prescale value. Valid values are between 0 to 0xFF.
  *
  * @return     None
  *
  * @details    This macro is used to set timer prescale value and timer source clock will be divided by (prescale + 1) \n
  *             before it is fed into timer.
  */
#define TIMER_SET_PRESCALE_VALUE(timer, u32Value)   ((timer)->CTL = ((timer)->CTL & ~TIMER_CTL_PSC_Msk) | (u32Value))

/**
  * @brief      Check specify Timer Status
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @retval     0   Timer 24-bit up counter is inactive
  * @retval     1   Timer 24-bit up counter is active
  *
  * @details    This macro is used to check if specify Timer counter is inactive or active.
  */
#define TIMER_IS_ACTIVE(timer)                      (((timer)->CTL & TIMER_CTL_ACTSTS_Msk)? 1 : 0)

/**
  * @brief      Select Toggle-output Pin
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  * @param[in]  u32ToutSel  Toggle-output pin selection, valid values are:
  *                         - \ref TIMER_TOUT_PIN_FROM_TX
  *                         - \ref TIMER_TOUT_PIN_FROM_TX_EXT
  *
  * @return     None
  *
  * @details    This macro is used to select timer toggle-output pin is output on Tx or Tx_EXT pin.
  */
#define TIMER_SELECT_TOUT_PIN(timer, u32ToutSel)    ((timer)->CTL = ((timer)->CTL & ~TIMER_CTL_TGLPINSEL_Msk) | (u32ToutSel))

/**
  * @brief      Start Timer Counting
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to start Timer counting.
  */
static __INLINE void TIMER_Start(TIMER_T *timer)
{
    timer->CTL |= TIMER_CTL_CNTEN_Msk;
}

/**
  * @brief      Stop Timer Counting
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to stop/suspend Timer counting.
  */
static __INLINE void TIMER_Stop(TIMER_T *timer)
{
    timer->CTL &= ~TIMER_CTL_CNTEN_Msk;
}

/**
  * @brief      Enable Timer Interrupt Wake-up Function
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to enable the timer interrupt wake-up function and interrupt source could be time-out interrupt, \n
  *             counter event interrupt or capture trigger interrupt.
  * @note       To wake the system from Power-down mode, timer clock source must be ether LXT or LIRC.
  */
static __INLINE void TIMER_EnableWakeup(TIMER_T *timer)
{
    timer->CTL |= TIMER_CTL_WKEN_Msk;
}

/**
  * @brief      Disable Timer Wake-up Function
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to disable the timer interrupt wake-up function.
  */
static __INLINE void TIMER_DisableWakeup(TIMER_T *timer)
{
    timer->CTL &= ~TIMER_CTL_WKEN_Msk;
}

/**
  * @brief      Start Timer Capture Function
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to start Timer capture function.
  */
static __INLINE void TIMER_StartCapture(TIMER_T *timer)
{
    timer->EXTCTL |= TIMER_EXTCTL_CAPEN_Msk;
}

/**
  * @brief      Stop Timer Capture Function
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to stop Timer capture function.
  */
static __INLINE void TIMER_StopCapture(TIMER_T *timer)
{
    timer->EXTCTL &= ~TIMER_EXTCTL_CAPEN_Msk;
}

/**
  * @brief      Enable Capture Pin De-bounce
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to enable the detect de-bounce function of capture pin.
  */
static __INLINE void TIMER_EnableCaptureDebounce(TIMER_T *timer)
{
    timer->EXTCTL |= TIMER_EXTCTL_CAPDBEN_Msk;
}

/**
  * @brief      Disable Capture Pin De-bounce
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to disable the detect de-bounce function of capture pin.
  */
static __INLINE void TIMER_DisableCaptureDebounce(TIMER_T *timer)
{
    timer->EXTCTL &= ~TIMER_EXTCTL_CAPDBEN_Msk;
}

/**
  * @brief      Enable Counter Pin De-bounce
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to enable the detect de-bounce function of counter pin.
  */
static __INLINE void TIMER_EnableEventCounterDebounce(TIMER_T *timer)
{
    timer->EXTCTL |= TIMER_EXTCTL_CNTDBEN_Msk;
}

/**
  * @brief      Disable Counter Pin De-bounce
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to disable the detect de-bounce function of counter pin.
  */
static __INLINE void TIMER_DisableEventCounterDebounce(TIMER_T *timer)
{
    timer->EXTCTL &= ~TIMER_EXTCTL_CNTDBEN_Msk;
}

/**
  * @brief      Enable Timer Time-out Interrupt
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to enable the timer time-out interrupt function.
  */
static __INLINE void TIMER_EnableInt(TIMER_T *timer)
{
    timer->CTL |= TIMER_CTL_INTEN_Msk;
}

/**
  * @brief      Disable Timer Time-out Interrupt
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to disable the timer time-out interrupt function.
  */
static __INLINE void TIMER_DisableInt(TIMER_T *timer)
{
    timer->CTL &= ~TIMER_CTL_INTEN_Msk;
}

/**
  * @brief      Enable Capture Trigger Interrupt
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to enable the timer capture trigger interrupt function.
  */
static __INLINE void TIMER_EnableCaptureInt(TIMER_T *timer)
{
    timer->EXTCTL |= TIMER_EXTCTL_CAPIEN_Msk;
}

/**
  * @brief      Disable Capture Trigger Interrupt
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is used to disable the timer capture trigger interrupt function.
  */
static __INLINE void TIMER_DisableCaptureInt(TIMER_T *timer)
{
    timer->EXTCTL &= ~TIMER_EXTCTL_CAPIEN_Msk;
}

/**
  * @brief      Get Timer Time-out Interrupt Flag
  *
  * @param[in]  timer   The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @retval     0   Timer time-out interrupt did not occur
  * @retval     1   Timer time-out interrupt occurred
  *
  * @details    This function indicates timer time-out interrupt occurred or not.
  */
static __INLINE uint32_t TIMER_GetIntFlag(TIMER_T *timer)
{
    return ((timer->INTSTS & TIMER_INTSTS_TIF_Msk) ? 1 : 0);
}

/**
  * @brief      Clear Timer Time-out Interrupt Flag
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function clears timer time-out interrupt flag to 0.
  */
static __INLINE void TIMER_ClearIntFlag(TIMER_T *timer)
{
    timer->INTSTS = TIMER_INTSTS_TIF_Msk;
}

/**
  * @brief      Get Timer Capture Interrupt Flag
  *
  * @param[in]  timer   The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @retval     0   Timer capture interrupt did not occur
  * @retval     1   Timer capture interrupt occurred
  *
  * @details    This function indicates timer capture trigger interrupt occurred or not.
  */
static __INLINE uint32_t TIMER_GetCaptureIntFlag(TIMER_T *timer)
{
    return timer->EINTSTS;
}

/**
  * @brief      Clear Timer Capture Interrupt Flag
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function clears timer capture trigger interrupt flag to 0.
  */
static __INLINE void TIMER_ClearCaptureIntFlag(TIMER_T *timer)
{
    timer->EINTSTS = TIMER_EINTSTS_CAPIF_Msk;
}

/**
  * @brief      Get Timer Wake-up Flag
  *
  * @param[in]  timer   The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @retval     0   Timer does not cause CPU wake-up
  * @retval     1   Timer interrupt event cause CPU wake-up
  *
  * @details    This function indicates timer interrupt event has waked up system or not.
  */
static __INLINE uint32_t TIMER_GetWakeupFlag(TIMER_T *timer)
{
    return (timer->INTSTS & TIMER_INTSTS_TWKF_Msk ? 1 : 0);
}

/**
  * @brief      Clear Timer Wake-up Flag
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function clears the timer wake-up system flag to 0.
  */
static __INLINE void TIMER_ClearWakeupFlag(TIMER_T *timer)
{
    timer->INTSTS = TIMER_INTSTS_TWKF_Msk;
}

/**
  * @brief      Get Capture value
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     24-bit Capture Value
  *
  * @details    This function reports the current 24-bit timer capture value.
  */
static __INLINE uint32_t TIMER_GetCaptureData(TIMER_T *timer)
{
    return timer->CAP;
}

/**
  * @brief      Get Counter value
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     24-bit Counter Value
  *
  * @details    This function reports the current 24-bit timer counter value.
  */
static __INLINE uint32_t TIMER_GetCounter(TIMER_T *timer)
{
    return timer->CNT;
}

/**
  * @brief      Reset Counter
  *
  * @param[in]  timer       The pointer of the specified Timer module. It could be TIMER0, TIMER1, TIMER2, TIMER3.
  *
  * @return     None
  *
  * @details    This function is usde to reset current counter value and internal prescale counter value.
  */
static __INLINE void TIMER_ResetCounter(TIMER_T *timer)
{
    timer->CNT = 0x0;
    while(timer->CNT);
}


uint32_t TIMER_Open(TIMER_T *timer, uint32_t u32Mode, uint32_t u32Freq);
void TIMER_Close(TIMER_T *timer);
void TIMER_Delay(TIMER_T *timer, uint32_t u32Usec);
void TIMER_EnableCapture(TIMER_T *timer, uint32_t u32CapMode, uint32_t u32Edge);
void TIMER_DisableCapture(TIMER_T *timer);
void TIMER_EnableEventCounter(TIMER_T *timer, uint32_t u32Edge);
void TIMER_DisableEventCounter(TIMER_T *timer);
uint32_t TIMER_GetModuleClock(TIMER_T *timer);

/*@}*/ /* end of group TIMER_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group TIMER_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif /* __TIMER_H__ */

/*** (C) COPYRIGHT 2016 Nuvoton Technology Corp. ***/
