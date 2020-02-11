/**************************************************************************//**
 * @file     sys.h
 * @version  V1.00
 * @brief    M480 series SYS driver header file
 *
 * @copyright (C) 2016 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __SYS_H__
#define __SYS_H__

#ifdef __cplusplus
extern "C"
{
#endif

#define   __I     volatile const       /*!< Defines 'read only' permissions */
#define   __O     volatile             /*!< Defines 'write only' permissions */
#define   __IO    volatile             /*!< Defines 'read / write' permissions */

/*---------------------- System Manger Controller -------------------------*/
/**
    @addtogroup SYS System Manger Controller(SYS)
    Memory Mapped Structure for SYS Controller
@{ */


typedef struct
{
    __I  uint32_t PDID;          /* Offset: 0x00  */
    __IO uint32_t PWRONOTP;      /* Offset: 0x04  */
    __IO uint32_t PWRONPIN;      /* Offset: 0x08  */
    __I  uint32_t RESERVE0;
    __IO uint32_t RSTSTS;        /* Offset: 0x10  */
    __IO uint32_t MISCRFCR;      /* Offset: 0x14  */
    __IO uint32_t RSTDEBCTL;     /* Offset: 0x18  */
    __IO uint32_t LVRDCR;        /* Offset: 0x1C  */
    __IO uint32_t IPRST0;        /* Offset: 0x20  */
    __IO uint32_t IPRST1;        /* Offset: 0x24  */
    __IO uint32_t IPRST2;        /* Offset: 0x28  */
    __IO uint32_t IPRST3;        /* Offset: 0x2C  */
    __IO uint32_t PMUCR;         /* Offset: 0x30  */
    __IO uint32_t DDRCQCSR;      /* Offset: 0x34  */
    __IO uint32_t PMUSTS;        /* Offset: 0x38  */
    __I  uint32_t RESERVE1;
    __IO uint32_t CA35WRBADR1;   /* Offset: 0x40  */
    __IO uint32_t CA35WRBPAR1;   /* Offset: 0x44  */
    __IO uint32_t CA35WRBADR2;   /* Offset: 0x48  */
    __IO uint32_t CA35WRBPAR2;   /* Offset: 0x4C  */
    __I  uint32_t RESERVE2[4];
    __IO uint32_t USBPMISCR;     /* Offset: 0x60  */
    __IO uint32_t USBP0PCR;      /* Offset: 0x64  */
    __IO uint32_t USBP1PCR;      /* Offset: 0x68  */
    __I  uint32_t RESERVE3;
    __IO uint32_t MISCFCR;       /* Offset: 0x70  */
    __I  uint32_t RESERVE4;
    __IO uint32_t MISCIER;       /* Offset: 0x78  */
    __IO uint32_t MISCISR;       /* Offset: 0x7C  */
    __IO uint32_t GPA_MFPL;      /* Offset: 0x80  */
    __IO uint32_t GPA_MFPH;      /* Offset: 0x84  */
    __IO uint32_t GPB_MFPL;      /* Offset: 0x88  */
    __IO uint32_t GPB_MFPH;      /* Offset: 0x8C  */
    __IO uint32_t GPC_MFPL;      /* Offset: 0x90  */
    __IO uint32_t GPC_MFPH;      /* Offset: 0x94  */
    __IO uint32_t GPD_MFPL;      /* Offset: 0x98  */
    __IO uint32_t GPD_MFPH;      /* Offset: 0x9C  */
    __IO uint32_t GPE_MFPL;      /* Offset: 0xA0  */
    __IO uint32_t GPE_MFPH;      /* Offset: 0xA4  */
    __IO uint32_t GPF_MFPL;      /* Offset: 0xA8  */
    __IO uint32_t GPF_MFPH;      /* Offset: 0xAC  */
    __IO uint32_t GPG_MFPL;      /* Offset: 0xB0  */
    __IO uint32_t GPG_MFPH;      /* Offset: 0xB4  */
    __IO uint32_t GPH_MFPL;      /* Offset: 0xB8  */
    __IO uint32_t GPH_MFPH;      /* Offset: 0xBC  */
    __IO uint32_t GPI_MFPL;      /* Offset: 0xC0  */
    __IO uint32_t GPI_MFPH;      /* Offset: 0xC4  */
    __IO uint32_t GPJ_MFPL;      /* Offset: 0xC8  */
    __IO uint32_t GPJ_MFPH;      /* Offset: 0xCC  */
    __IO uint32_t GPK_MFPL;      /* Offset: 0xD0  */
    __IO uint32_t GPK_MFPH;      /* Offset: 0xD4  */
    __IO uint32_t GPL_MFPL;      /* Offset: 0xD8  */
    __IO uint32_t GPL_MFPH;      /* Offset: 0xDC  */
    __IO uint32_t GPM_MFPL;      /* Offset: 0xE0  */
    __IO uint32_t GPM_MFPH;      /* Offset: 0xE4  */
    __IO uint32_t GPN_MFPL;      /* Offset: 0xE8  */
    __IO uint32_t GPN_MFPH;      /* Offset: 0xEC  */
    __I  uint32_t RESERVE5[4];
    __IO uint32_t HIRCFTRIM;     /* Offset: 0x100 */
    __IO uint32_t TSENSRREF;     /* Offset: 0x104 */
    __IO uint32_t GMAC0MISCR;    /* Offset: 0x108  */
    __IO uint32_t GMAC1MISCR;    /* Offset: 0x10C  */
    __IO uint32_t MACAD0LSR;     /* Offset: 0x110 */
    __IO uint32_t MACAD0HSR;     /* Offset: 0x114 */
    __IO uint32_t MACAD1LSR;     /* Offset: 0x118 */
    __IO uint32_t MACAD1HSR;     /* Offset: 0x11C */
    __IO uint32_t CSDBGCTL;      /* Offset: 0x120 */
    __I  uint32_t RESERVE6[23];
    __I  uint32_t UID[3];        /* Offset: 0x180 */
    __I  uint32_t RESERVE7;
    __I  uint32_t UCID[3];       /* Offset: 0x190 */
    __I  uint32_t RESERVE8;
    __IO uint32_t REGWPCTL;      /* Offset: 0x1A0 */


} SYS_T;

#define SYS                  ((SYS_T *)   SYS_BASE)

/**
    @addtogroup SYS_CONST SYS Bit Field Definition
    Constant Definitions for SYS Controller
@{ */

#define SYS_PDID_PDID_Pos                (0)                                               /*!< SYS_T::PDID: PDID Position             */
#define SYS_PDID_PDID_Msk                (0xfffffffful << SYS_PDID_PDID_Pos)               /*!< SYS_T::PDID: PDID Mask                 */

#define SYS_PWRON_PWRONSRC_Pos           (0)                                               /*!< SYS_T::PWRON: PWRONSRC Position        */
#define SYS_PWRON_PWRONSRC_Msk           (0x1ul << SYS_PWRON_PWRONSRC_Pos)                 /*!< SYS_T::PWRON: PWRONSRC Mask            */

#define SYS_PWRON_QSPI0CKSEL_Pos         (1)                                               /*!< SYS_T::PWRON: QSPI0CKSEL Position      */
#define SYS_PWRON_QSPI0CKSEL_Msk         (0x1ul << SYS_PWRON_QSPI0CKSEL_Pos)               /*!< SYS_T::PWRON: QSPI0CKSEL Mask          */

#define SYS_PWRON_WDT0EN_Pos             (2)                                               /*!< SYS_T::PWRON: WDT0EN Position          */
#define SYS_PWRON_WDT0EN_Msk             (0x1ul << SYS_PWRON_QSPI0CKSEL_Pos)               /*!< SYS_T::PWRON: WDT0EN Mask              */

#define SYS_PWRON_UR0DBGON_Pos           (4)                                               /*!< SYS_T::PWRON: UR0DBGON Position        */
#define SYS_PWRON_UR0DBGON_Msk           (0x1ul << SYS_PWRON_UR0DBGON_Pos)                 /*!< SYS_T::PWRON: UR0DBGON Mask            */

#define SYS_PWRON_SD0BKEN_Pos            (5)                                               /*!< SYS_T::PWRON: SD0BKEN Position         */
#define SYS_PWRON_SD0BKEN_Msk            (0x1ul << SYS_PWRON_SD0BKEN_Pos)                  /*!< SYS_T::PWRON: SD0BKEN Mask             */

#define SYS_PWRON_TSISWDIS_Pos           (7)                                               /*!< SYS_T::PWRON: TSISWDIS Position        */
#define SYS_PWRON_TSISWDIS_Msk           (0x1ul << SYS_PWRON_TSISWDIS_Pos)                 /*!< SYS_T::PWRON: TSISWDIS Mask            */

#define SYS_PWRON_SECBTDIS_Pos           (8)                                               /*!< SYS_T::PWRON: SECBTDIS Position        */
#define SYS_PWRON_SECBTDIS_Msk           (0x1ul << SYS_PWRON_SECBTDIS_Pos)                 /*!< SYS_T::PWRON: SECBTDIS Mask            */

#define SYS_PWRON_BTSRCSEL_Pos           (10)                                              /*!< SYS_T::PWRON: NPAGESEL Position        */
#define SYS_PWRON_BTSRCSEL_Msk           (0x3ul << SYS_PWRON_BTSRCSEL_Pos)                 /*!< SYS_T::PWRON: NPAGESEL Mask            */

#define SYS_PWRON_NPAGESEL_Pos           (12)                                              /*!< SYS_T::PWRON: BTSRCSEL Position        */
#define SYS_PWRON_NPAGESEL_Msk           (0x3ul << SYS_PWRON_NPAGESEL_Pos)                 /*!< SYS_T::PWRON: BTSRCSEL Mask            */

#define SYS_PWRON_MISCCFG_Pos            (14)                                              /*!< SYS_T::PWRON: MISCCFG Position         */
#define SYS_PWRON_MISCCFG_Msk            (0x3ul << SYS_PWRON_MISCCFG_Pos)                  /*!< SYS_T::PWRON: MISCCFG Mask             */

#define SYS_PWRON_USBP0ID_Pos            (16)                                              /*!< SYS_T::PWRON: USBP0ID Position         */
#define SYS_PWRON_USBP0ID_Msk            (0x1ul << SYS_PWRON_QSPI0CKSEL_Pos)               /*!< SYS_T::PWRON: USBP0ID Mask             */

#define SYS_CA35WRBADR1_WRMBTADDR_Pos    (0)                                              /*!< SYS_T::CA35WRBADR1: WRMBTADDR Position  */
#define SYS_CA35WRBADR1_WRMBTADDR_Msk    (0xfffffffful << SYS_CA35WRBADR1_WRMBTADDR_Pos)  /*!< SYS_T::CA35WRBADR1: WRMBTADDR Mask      */

#define SYS_CA35WRBPAR1_WRMBTPARA_Pos    (0)                                              /*!< SYS_T::CA35WRBPAR1: WRMBTPARA Position  */
#define SYS_CA35WRBPAR1_WRMBTPARA_Msk    (0xfffffffful << SYS_CA35WRBPAR1_WRMBTPARA_Pos)  /*!< SYS_T::CA35WRBPAR1: WRMBTPARA Mask      */

#define SYS_CA35WRBADR2_WRMBTADDR_Pos    (0)                                              /*!< SYS_T::CA35WRBADR2: WRMBTADDR Position  */
#define SYS_CA35WRBADR2_WRMBTADDR_Msk    (0xfffffffful << SYS_CA35WRBADR2_WRMBTADDR_Pos)  /*!< SYS_T::CA35WRBADR2: WRMBTADDR Mask      */

#define SYS_CA35WRBPAR2_WRMBTPARA_Pos    (0)                                              /*!< SYS_T::CA35WRBPAR2: WRMBTPARA Position  */
#define SYS_CA35WRBPAR2_WRMBTPARA_Msk    (0xfffffffful << SYS_CA35WRBPAR2_WRMBTPARA_Pos)  /*!< SYS_T::CA35WRBPAR2: WRMBTPARA Mask      */

#define SYS_RSTSTS_PORF_Pos              (0)                                               /*!< SYS_T::RSTSTS: PORF Position           */
#define SYS_RSTSTS_PORF_Msk              (0x1ul << SYS_RSTSTS_PORF_Pos)                    /*!< SYS_T::RSTSTS: PORF Mask               */

#define SYS_RSTSTS_PINRF_Pos             (1)                                               /*!< SYS_T::RSTSTS: PINRF Position          */
#define SYS_RSTSTS_PINRF_Msk             (0x1ul << SYS_RSTSTS_PINRF_Pos)                   /*!< SYS_T::RSTSTS: PINRF Mask              */

#define SYS_RSTSTS_WDT0RF_Pos             (2)                                               /*!< SYS_T::RSTSTS: WDTRF Position          */
#define SYS_RSTSTS_WDT0RF_Msk             (0x1ul << SYS_RSTSTS_WDT0RF_Pos)                   /*!< SYS_T::RSTSTS: WDTRF Mask              */

#define SYS_RSTSTS_LVRF_Pos              (3)                                               /*!< SYS_T::RSTSTS: LVRF Position           */
#define SYS_RSTSTS_LVRF_Msk              (0x1ul << SYS_RSTSTS_LVRF_Pos)                    /*!< SYS_T::RSTSTS: LVRF Mask               */

#define SYS_RSTSTS_CPU0WARMRF_Pos             (5)                                               /*!< SYS_T::RSTSTS: WDTRF Position          */
#define SYS_RSTSTS_CPU0WARMRF_Msk             (0x1ul << SYS_RSTSTS_CPU0WARMRF_Pos)                   /*!< SYS_T::RSTSTS: WDTRF Mask              */

#define SYS_RSTSTS_CPU0RST_Pos            (7)                                               /*!< SYS_T::RSTSTS: CPURST Position         */
#define SYS_RSTSTS_CPU0RST_Msk            (0x1ul << SYS_RSTSTS_CPU0RST_Pos)                  /*!< SYS_T::RSTSTS: CPURST Mask             */

#define SYS_RSTSTS_WDT1RF_Pos             (10)                                               /*!< SYS_T::RSTSTS: WDTRF Position          */
#define SYS_RSTSTS_WDT1RF_Msk             (0x1ul << SYS_RSTSTS_WDT1RF_Pos)                   /*!< SYS_T::RSTSTS: WDTRF Mask              */

#define SYS_RSTSTS_WDT2RF_Pos             (11)                                               /*!< SYS_T::RSTSTS: WDTRF Position          */
#define SYS_RSTSTS_WDT2RF_Msk             (0x1ul << SYS_RSTSTS_WDT2RF_Pos)                   /*!< SYS_T::RSTSTS: WDTRF Mask              */

#define SYS_PORCTL_POROFF_Pos            (0)                                               /*!< SYS_T::PORCTL: POROFF Position         */
#define SYS_PORCTL_POROFF_Msk            (0xfffful << SYS_PORCTL_POROFF_Pos)               /*!< SYS_T::PORCTL: POROFF Mask             */

#define SYS_RSTDEBCTL_DEBCNT_Pos         (0)                                               /*!< SYS_T::RSTDEBCTL: DEBCNT Position      */
#define SYS_RSTDEBCTL_DEBCNT_Msk         (0xful << SYS_RSTDEBCTL_DEBCNT_Pos)               /*!< SYS_T::RSTDEBCTL: DEBCNT Mask          */

#define SYS_RSTDEBCTL_RSTDEBEN_Pos       (31)                                              /*!< SYS_T::RSTDEBCTL: RSTDEBEN Position    */
#define SYS_RSTDEBCTL_RSTDEBEN_Msk       (0x1ul << SYS_RSTDEBCTL_RSTDEBEN_Pos)             /*!< SYS_T::RSTDEBCTL: RSTDEBEN Mask        */

#define SYS_LVRDCR_LVREN_Pos             (0)                                               /*!< SYS_T::LVRDCR: LVREN Position          */
#define SYS_LVRDCR_LVREN_Msk             (0x1ul << SYS_LVRDCR_LVREN_Pos)                   /*!< SYS_T::LVRDCR: LVREN Mask              */

#define SYS_LVRDCR_LVDEN_Pos             (8)                                               /*!< SYS_T::LVRDCR: LVDEN Position          */
#define SYS_LVRDCR_LVDEN_Msk             (0x1ul << SYS_LVRDCR_LVDEN_Pos)                   /*!< SYS_T::LVRDCR: LVDEN Mask              */

#define SYS_LVRDCR_LVDSEL_Pos            (9)                                               /*!< SYS_T::LVRDCR: LVDSEL Position         */
#define SYS_LVRDCR_LVDSEL_Msk            (0x1ul << SYS_LVRDCR_LVDSEL_Pos)                  /*!< SYS_T::LVRDCR: LVDSEL Mask             */

#define SYS_IPRST0_CHIPRST_Pos           (0)                                               /*!< SYS_T::IPRST0: CHIPRST Position        */
#define SYS_IPRST0_CHIPRST_Msk           (0x1ul << SYS_IPRST0_CHIPRST_Pos)                 /*!< SYS_T::IPRST0: CHIPRST Mask            */

#define SYS_IPRST0_CPURST_Pos            (1)                                               /*!< SYS_T::IPRST0: CPURST Position         */
#define SYS_IPRST0_CPURST_Msk            (0x1ul << SYS_IPRST0_CPURST_Pos)                  /*!< SYS_T::IPRST0: CPURST Mask             */

#define SYS_IPRST0_GICRST_Pos            (2)                                               /*!< SYS_T::IPRST0: GICRST Position         */
#define SYS_IPRST0_GICRST_Msk            (0x1ul << SYS_IPRST0_GICRST_Pos)                  /*!< SYS_T::IPRST0: GICRST Mask             */

#define SYS_IPRST0_EBIRST_Pos            (3)                                               /*!< SYS_T::IPRST0: EBIRST Position         */
#define SYS_IPRST0_EBIRST_Msk            (0x1ul << SYS_IPRST0_EBIRST_Pos)                  /*!< SYS_T::IPRST0: EBIRST Mask             */

#define SYS_IPRST0_PDMA0RST_Pos          (4)                                               /*!< SYS_T::IPRST0: PDMA0RST Position       */
#define SYS_IPRST0_PDMA0RST_Msk          (0x1ul << SYS_IPRST0_PDMA0RST_Pos)                /*!< SYS_T::IPRST0: PDMA0RST Mask           */

#define SYS_IPRST0_PDMA1RST_Pos          (5)                                               /*!< SYS_T::IPRST0: PDMA1RST Position       */
#define SYS_IPRST0_PDMA1RST_Msk          (0x1ul << SYS_IPRST0_PDMA1RST_Pos)                /*!< SYS_T::IPRST0: PDMA1RST Mask           */

#define SYS_IPRST0_PDMA2RST_Pos          (6)                                               /*!< SYS_T::IPRST0: PDMA2RST Position       */
#define SYS_IPRST0_PDMA2RST_Msk          (0x1ul << SYS_IPRST0_PDMA2RST_Pos)                /*!< SYS_T::IPRST0: PDMA2RST Mask           */

#define SYS_IPRST0_PDMA3RST_Pos          (7)                                               /*!< SYS_T::IPRST0: PDMA3RST Position       */
#define SYS_IPRST0_PDMA3RST_Msk          (0x1ul << SYS_IPRST0_PDMA3RST_Pos)                /*!< SYS_T::IPRST0: PDMA3RST Mask           */

#define SYS_IPRST0_DISPCRST_Pos          (9)                                               /*!< SYS_T::IPRST0: DISPCRST Position       */
#define SYS_IPRST0_DISPCRST_Msk          (0x1ul << SYS_IPRST0_DISPCRST_Pos)                /*!< SYS_T::IPRST0: DISPCRST Mask           */

#define SYS_IPRST0_VCAP0RST_Pos          (10)                                               /*!< SYS_T::IPRST0: VCAP0RST Position      */
#define SYS_IPRST0_VCAP0RST_Msk          (0x1ul << SYS_IPRST0_VCAP0RST_Pos)                 /*!< SYS_T::IPRST0: VCAP0RST Mask          */

#define SYS_IPRST0_VCAP1RST_Pos          (11)                                               /*!< SYS_T::IPRST0: VCAP1RST Position      */
#define SYS_IPRST0_VCAP1RST_Msk          (0x1ul << SYS_IPRST0_VCAP1RST_Pos)                 /*!< SYS_T::IPRST0: VCAP1RST Mask          */

#define SYS_IPRST0_GFXRST_Pos            (12)                                               /*!< SYS_T::IPRST0: GFXRST Position        */
#define SYS_IPRST0_GFXRST_Msk            (0x1ul << SYS_IPRST0_GFXRST_Pos)                   /*!< SYS_T::IPRST0: GFXRST Mask            */

#define SYS_IPRST0_VDECRST_Pos           (13)                                               /*!< SYS_T::IPRST0: VDECRST Position       */
#define SYS_IPRST0_VDECRST_Msk           (0x1ul << SYS_IPRST0_VDECRST_Pos)                  /*!< SYS_T::IPRST0: VDECRST Mask           */

#define SYS_IPRST0_WRHO0RST_Pos          (14)                                               /*!< SYS_T::IPRST0: WRHO0RST Position      */
#define SYS_IPRST0_WRHO0RST_Msk          (0x1ul << SYS_IPRST0_WRHO0RST_Pos)                 /*!< SYS_T::IPRST0: WRHO0RST Mask          */

#define SYS_IPRST0_WRHO1RST_Pos          (15)                                               /*!< SYS_T::IPRST0: WRHO1RST Position      */
#define SYS_IPRST0_WRHO1RST_Msk          (0x1ul << SYS_IPRST0_WRHO1RST_Pos)                 /*!< SYS_T::IPRST0: WRHO1RST Mask          */

#define SYS_IPRST0_GMAC0RST_Pos          (16)                                               /*!< SYS_T::IPRST0: GMAC0RST Position      */
#define SYS_IPRST0_GMAC0RST_Msk          (0x1ul << SYS_IPRST0_GMAC0RST_Pos)                 /*!< SYS_T::IPRST0: GMAC0RST Mask          */

#define SYS_IPRST0_GMAC1RST_Pos          (17)                                               /*!< SYS_T::IPRST0: GMAC1RST Position      */
#define SYS_IPRST0_GMAC1RST_Msk          (0x1ul << SYS_IPRST0_GMAC1RST_Pos)                 /*!< SYS_T::IPRST0: GMAC1RST Mask          */

#define SYS_IPRST0_HSUSBH0RST_Pos        (20)                                               /*!< SYS_T::IPRST0: HSUSBH0RST Position    */
#define SYS_IPRST0_HSUSBH0RST_Msk        (0x1ul << SYS_IPRST0_HSUSBH0RST_Pos)               /*!< SYS_T::IPRST0: HSUSBH0RST Mask        */

#define SYS_IPRST0_HSUSBH1RST_Pos        (21)                                               /*!< SYS_T::IPRST0: HSUSBH1RST Position    */
#define SYS_IPRST0_HSUSBH1RST_Msk        (0x1ul << SYS_IPRST0_HSUSBH1RST_Pos)               /*!< SYS_T::IPRST0: HSUSBH1RST Mask        */

#define SYS_IPRST0_HSUSBDRST_Pos         (22)                                               /*!< SYS_T::IPRST0: HSUSBDRST Position     */
#define SYS_IPRST0_HSUSBDRST_Msk         (0x1ul << SYS_IPRST0_HSUSBDRST_Pos)                /*!< SYS_T::IPRST0: HSUSBDRST Mask         */

#define SYS_IPRST0_USBHLRST_Pos          (23)                                               /*!< SYS_T::IPRST0: USBHLRST Position      */
#define SYS_IPRST0_USBHLRST_Msk          (0x1ul << SYS_IPRST0_USBHLRST_Pos)                 /*!< SYS_T::IPRST0: USBHLRST Mask          */

#define SYS_IPRST0_SDH0RST_Pos           (24)                                               /*!< SYS_T::IPRST0: SDH0RST Position       */
#define SYS_IPRST0_SDH0RST_Msk           (0x1ul << SYS_IPRST0_SDH0RST_Pos)                  /*!< SYS_T::IPRST0: SDH0RST Mask           */

#define SYS_IPRST0_SDH1RST_Pos           (25)                                               /*!< SYS_T::IPRST0: SDH1RST Position       */
#define SYS_IPRST0_SDH1RST_Msk           (0x1ul << SYS_IPRST0_SDH1RST_Pos)                  /*!< SYS_T::IPRST0: SDH1RST Mask           */

#define SYS_IPRST0_NANDRST_Pos           (26)                                               /*!< SYS_T::IPRST0: NANDRST Position       */
#define SYS_IPRST0_NANDRST_Msk           (0x1ul << SYS_IPRST0_SDH1RST_Pos)                  /*!< SYS_T::IPRST0: NANDRST Mask           */

#define SYS_IPRST0_GPIORST_Pos           (27)                                               /*!< SYS_T::IPRST0: GPIORST Position       */
#define SYS_IPRST0_GPIORST_Msk           (0x1ul << SYS_IPRST0_GPIORST_Pos)                  /*!< SYS_T::IPRST0: GPIORST Mask           */

#define SYS_IPRST0_MCTLRST_Pos           (28)                                               /*!< SYS_T::IPRST0: MCTLRST Position       */
#define SYS_IPRST0_MCTLRST_Msk           (0x1ul << SYS_IPRST0_MCTLRST_Pos)                  /*!< SYS_T::IPRST0: MCTLRST Mask           */

#define SYS_IPRST0_DDRPUBRST_Pos         (29)                                               /*!< SYS_T::IPRST0: DDRPUBRST Position     */
#define SYS_IPRST0_DDRPUBRST_Msk         (0x1ul << SYS_IPRST0_DDRPUBRST_Pos)                /*!< SYS_T::IPRST0: DDRPUBRST Mask         */

#define SYS_IPRST0_HWSEMRST_Pos          (30)                                               /*!< SYS_T::IPRST0: HWSEMRST Position      */
#define SYS_IPRST0_HWSEMRST_Msk          (0x1ul << SYS_IPRST0_HWSEMRST_Pos)                 /*!< SYS_T::IPRST0: HWSEMRST Mask          */

#define SYS_IPRST0_TZPCCRST_Pos          (31)                                               /*!< SYS_T::IPRST0: TZPCCRST Position      */
#define SYS_IPRST0_TZPCCRST_Msk          (0x1ul << SYS_IPRST0_TZPCCRST_Pos)                 /*!< SYS_T::IPRST0: TZPCCRST Mask          */

#define SYS_IPRST1_TMR0RST_Pos           (2)                                               /*!< SYS_T::IPRST1: TMR0RST Position        */
#define SYS_IPRST1_TMR0RST_Msk           (0x1ul << SYS_IPRST1_TMR0RST_Pos)                 /*!< SYS_T::IPRST1: TMR0RST Mask            */

#define SYS_IPRST1_TMR1RST_Pos           (3)                                               /*!< SYS_T::IPRST1: TMR1RST Position        */
#define SYS_IPRST1_TMR1RST_Msk           (0x1ul << SYS_IPRST1_TMR1RST_Pos)                 /*!< SYS_T::IPRST1: TMR1RST Mask            */

#define SYS_IPRST1_TMR2RST_Pos           (4)                                               /*!< SYS_T::IPRST1: TMR2RST Position        */
#define SYS_IPRST1_TMR2RST_Msk           (0x1ul << SYS_IPRST1_TMR2RST_Pos)                 /*!< SYS_T::IPRST1: TMR2RST Mask            */

#define SYS_IPRST1_TMR3RST_Pos           (5)                                               /*!< SYS_T::IPRST1: TMR3RST Position        */
#define SYS_IPRST1_TMR3RST_Msk           (0x1ul << SYS_IPRST1_TMR3RST_Pos)                 /*!< SYS_T::IPRST1: TMR3RST Mask            */

#define SYS_IPRST1_I2C0RST_Pos           (8)                                               /*!< SYS_T::IPRST1: I2C0RST Position        */
#define SYS_IPRST1_I2C0RST_Msk           (0x1ul << SYS_IPRST1_I2C0RST_Pos)                 /*!< SYS_T::IPRST1: I2C0RST Mask            */

#define SYS_IPRST1_I2C1RST_Pos           (9)                                               /*!< SYS_T::IPRST1: I2C1RST Position        */
#define SYS_IPRST1_I2C1RST_Msk           (0x1ul << SYS_IPRST1_I2C1RST_Pos)                 /*!< SYS_T::IPRST1: I2C1RST Mask            */

#define SYS_IPRST1_I2C2RST_Pos           (10)                                              /*!< SYS_T::IPRST1: I2C2RST Position        */
#define SYS_IPRST1_I2C2RST_Msk           (0x1ul << SYS_IPRST1_I2C2RST_Pos)                 /*!< SYS_T::IPRST1: I2C2RST Mask            */

#define SYS_IPRST1_I2C3RST_Pos           (11)                                              /*!< SYS_T::IPRST1: I2C3RST Position        */
#define SYS_IPRST1_I2C3RST_Msk           (0x1ul << SYS_IPRST1_I2C3RST_Pos)                 /*!< SYS_T::IPRST1: I2C3RST Mask            */

#define SYS_IPRST1_QSPI0RST_Pos          (12)                                              /*!< SYS_T::IPRST1: QSPI0RST Position       */
#define SYS_IPRST1_QSPI0RST_Msk          (0x1ul << SYS_IPRST1_QSPI0RST_Pos)                /*!< SYS_T::IPRST1: QSPI0RST Mask           */

#define SYS_IPRST1_SPI0RST_Pos           (13)                                              /*!< SYS_T::IPRST1: SPI0RST Position        */
#define SYS_IPRST1_SPI0RST_Msk           (0x1ul << SYS_IPRST1_SPI0RST_Pos)                 /*!< SYS_T::IPRST1: SPI0RST Mask            */

#define SYS_IPRST1_SPI1RST_Pos           (14)                                              /*!< SYS_T::IPRST1: SPI1RST Position        */
#define SYS_IPRST1_SPI1RST_Msk           (0x1ul << SYS_IPRST1_SPI1RST_Pos)                 /*!< SYS_T::IPRST1: SPI1RST Mask            */

#define SYS_IPRST1_SPI2RST_Pos           (15)                                              /*!< SYS_T::IPRST1: SPI2RST Position        */
#define SYS_IPRST1_SPI2RST_Msk           (0x1ul << SYS_IPRST1_SPI2RST_Pos)                 /*!< SYS_T::IPRST1: SPI2RST Mask            */

#define SYS_IPRST1_UART0RST_Pos          (16)                                              /*!< SYS_T::IPRST1: UART0RST Position       */
#define SYS_IPRST1_UART0RST_Msk          (0x1ul << SYS_IPRST1_UART0RST_Pos)                /*!< SYS_T::IPRST1: UART0RST Mask           */

#define SYS_IPRST1_UART1RST_Pos          (17)                                              /*!< SYS_T::IPRST1: UART1RST Position       */
#define SYS_IPRST1_UART1RST_Msk          (0x1ul << SYS_IPRST1_UART1RST_Pos)                /*!< SYS_T::IPRST1: UART1RST Mask           */

#define SYS_IPRST1_UART2RST_Pos          (18)                                              /*!< SYS_T::IPRST1: UART2RST Position       */
#define SYS_IPRST1_UART2RST_Msk          (0x1ul << SYS_IPRST1_UART2RST_Pos)                /*!< SYS_T::IPRST1: UART2RST Mask           */

#define SYS_IPRST1_UART3RST_Pos          (19)                                              /*!< SYS_T::IPRST1: UART3RST Position       */
#define SYS_IPRST1_UART3RST_Msk          (0x1ul << SYS_IPRST1_UART3RST_Pos)                /*!< SYS_T::IPRST1: UART3RST Mask           */

#define SYS_IPRST1_UART4RST_Pos          (20)                                              /*!< SYS_T::IPRST1: UART4RST Position       */
#define SYS_IPRST1_UART4RST_Msk          (0x1ul << SYS_IPRST1_UART4RST_Pos)                /*!< SYS_T::IPRST1: UART4RST Mask           */

#define SYS_IPRST1_UART5RST_Pos          (21)                                              /*!< SYS_T::IPRST1: UART5RST Position       */
#define SYS_IPRST1_UART5RST_Msk          (0x1ul << SYS_IPRST1_UART5RST_Pos)                /*!< SYS_T::IPRST1: UART5RST Mask           */

#define SYS_IPRST1_UART6RST_Pos          (22)                                              /*!< SYS_T::IPRST1: UART6RST Position       */
#define SYS_IPRST1_UART6RST_Msk          (0x1ul << SYS_IPRST1_UART6RST_Pos)                /*!< SYS_T::IPRST1: UART6RST Mask           */

#define SYS_IPRST1_UART7RST_Pos          (23)                                              /*!< SYS_T::IPRST1: UART7RST Position       */
#define SYS_IPRST1_UART7RST_Msk          (0x1ul << SYS_IPRST1_UART7RST_Pos)                /*!< SYS_T::IPRST1: UART7RST Mask           */

#define SYS_IPRST1_CANFD0RST_Pos         (24)                                              /*!< SYS_T::IPRST1: CANFD0RST Position      */
#define SYS_IPRST1_CANFD0RST_Msk         (0x1ul << SYS_IPRST1_CANFD0RST_Pos)               /*!< SYS_T::IPRST1: CANFD0RST Mask          */

#define SYS_IPRST1_CANFD1RST_Pos         (25)                                              /*!< SYS_T::IPRST1: CANFD1RST Position      */
#define SYS_IPRST1_CANFD1RST_Msk         (0x1ul << SYS_IPRST1_CANFD1RST_Pos)               /*!< SYS_T::IPRST1: CANFD1RST Mask          */

#define SYS_IPRST1_EADCRST_Pos           (28)                                              /*!< SYS_T::IPRST1: EADCRST Position        */
#define SYS_IPRST1_EADCRST_Msk           (0x1ul << SYS_IPRST1_EADCRST_Pos)                 /*!< SYS_T::IPRST1: EADCRST Mask            */

#define SYS_IPRST1_I2S0RST_Pos           (29)                                              /*!< SYS_T::IPRST1: I2S0RST Position        */
#define SYS_IPRST1_I2S0RST_Msk           (0x1ul << SYS_IPRST1_I2S0RST_Pos)                 /*!< SYS_T::IPRST1: I2S0RST Mask            */

#define SYS_IPRST2_SC0RST_Pos            (0)                                               /*!< SYS_T::IPRST2: SC0RST Position         */
#define SYS_IPRST2_SC0RST_Msk            (0x1ul << SYS_IPRST2_SC0RST_Pos)                  /*!< SYS_T::IPRST2: SC0RST Mask             */

#define SYS_IPRST2_SC1RST_Pos            (1)                                               /*!< SYS_T::IPRST2: SC1RST Position         */
#define SYS_IPRST2_SC1RST_Msk            (0x1ul << SYS_IPRST2_SC1RST_Pos)                  /*!< SYS_T::IPRST2: SC1RST Mask             */

#define SYS_IPRST2_SC2RST_Pos            (2)                                               /*!< SYS_T::IPRST2: SC2RST Position         */
#define SYS_IPRST2_SC2RST_Msk            (0x1ul << SYS_IPRST2_SC2RST_Pos)                  /*!< SYS_T::IPRST2: SC2RST Mask             */

#define SYS_IPRST2_QSPI1RST_Pos          (4)                                               /*!< SYS_T::IPRST1: QSPI1RST Position       */
#define SYS_IPRST2_QSPI1RST_Msk          (0x1ul << SYS_IPRST2_QSPI1RST_Pos)                /*!< SYS_T::IPRST1: QSPI1RST Mask           */

#define SYS_IPRST2_SPI3RST_Pos           (6)                                               /*!< SYS_T::IPRST1: SPI3RST Position        */
#define SYS_IPRST2_SPI3RST_Msk           (0x1ul << SYS_IPRST2_SPI3RST_Pos)                 /*!< SYS_T::IPRST1: SPI3RST Mask            */

#define SYS_IPRST2_EPWM0RST_Pos          (16)                                              /*!< SYS_T::IPRST2: EPWM0RST Position       */
#define SYS_IPRST2_EPWM0RST_Msk          (0x1ul << SYS_IPRST2_EPWM0RST_Pos)                /*!< SYS_T::IPRST2: EPWM0RST Mask           */

#define SYS_IPRST2_EPWM1RST_Pos          (17)                                              /*!< SYS_T::IPRST2: EPWM1RST Position       */
#define SYS_IPRST2_EPWM1RST_Msk          (0x1ul << SYS_IPRST2_EPWM1RST_Pos)                /*!< SYS_T::IPRST2: EPWM1RST Mask           */

#define SYS_IPRST2_QEI0RST_Pos           (22)                                              /*!< SYS_T::IPRST2: QEI0RST Position        */
#define SYS_IPRST2_QEI0RST_Msk           (0x1ul << SYS_IPRST2_QEI0RST_Pos)                 /*!< SYS_T::IPRST2: QEI0RST Mask            */

#define SYS_IPRST2_QEI1RST_Pos           (23)                                              /*!< SYS_T::IPRST2: QEI1RST Position        */
#define SYS_IPRST2_QEI1RST_Msk           (0x1ul << SYS_IPRST2_QEI1RST_Pos)                 /*!< SYS_T::IPRST2: QEI1RST Mask            */

#define SYS_IPRST2_ECAP0RST_Pos          (26)                                              /*!< SYS_T::IPRST2: ECAP0RST Position       */
#define SYS_IPRST2_ECAP0RST_Msk          (0x1ul << SYS_IPRST2_ECAP0RST_Pos)                /*!< SYS_T::IPRST2: ECAP0RST Mask           */

#define SYS_IPRST2_ECAP1RST_Pos          (27)                                              /*!< SYS_T::IPRST2: ECAP1RST Position       */
#define SYS_IPRST2_ECAP1RST_Msk          (0x1ul << SYS_IPRST2_ECAP1RST_Pos)                /*!< SYS_T::IPRST2: ECAP1RST Mask           */

#define SYS_IPRST2_CANFD2RST_Pos         (28)                                              /*!< SYS_T::IPRST2: CANFD2RST Position      */
#define SYS_IPRST2_CANFD2RST_Msk         (0x1ul << SYS_IPRST2_CANFD2RST_Pos)               /*!< SYS_T::IPRST2: CANFD2RST Mask          */

#define SYS_IPRST2_ADC0RST_Pos           (31)                                              /*!< SYS_T::IPRST2: ADC0RST Position        */
#define SYS_IPRST2_ADC0RST_Msk           (0x1ul << SYS_IPRST2_ADC0RST_Pos)                 /*!< SYS_T::IPRST2: ADC0RST Mask            */

#define SYS_IPRST3_TMR4RST_Pos           (0)                                               /*!< SYS_T::IPRST3: TMR4RST Position        */
#define SYS_IPRST3_TMR4RST_Msk           (0x1ul << SYS_IPRST3_TMR4RST_Pos)                 /*!< SYS_T::IPRST3: TMR4RST Mask            */

#define SYS_IPRST3_TMR5RST_Pos           (1)                                               /*!< SYS_T::IPRST3: TMR5RST Position        */
#define SYS_IPRST3_TMR5RST_Msk           (0x1ul << SYS_IPRST3_TMR5RST_Pos)                 /*!< SYS_T::IPRST3: TMR5RST Mask            */

#define SYS_IPRST3_TMR6RST_Pos           (2)                                               /*!< SYS_T::IPRST3: TMR6RST Position        */
#define SYS_IPRST3_TMR6RST_Msk           (0x1ul << SYS_IPRST3_TMR6RST_Pos)                 /*!< SYS_T::IPRST3: TMR6RST Mask            */

#define SYS_IPRST3_TMR7RST_Pos           (3)                                               /*!< SYS_T::IPRST3: TMR7RST Position        */
#define SYS_IPRST3_TMR7RST_Msk           (0x1ul << SYS_IPRST3_TMR7RST_Pos)                 /*!< SYS_T::IPRST3: TMR7RST Mask            */

#define SYS_IPRST3_TMR8RST_Pos           (4)                                               /*!< SYS_T::IPRST3: TMR8RST Position        */
#define SYS_IPRST3_TMR8RST_Msk           (0x1ul << SYS_IPRST3_TMR8RST_Pos)                 /*!< SYS_T::IPRST3: TMR8RST Mask            */

#define SYS_IPRST3_TMR9RST_Pos           (5)                                               /*!< SYS_T::IPRST3: TMR9RST Position        */
#define SYS_IPRST3_TMR9RST_Msk           (0x1ul << SYS_IPRST3_TMR9RST_Pos)                 /*!< SYS_T::IPRST3: TMR9RST Mask            */

#define SYS_IPRST3_TMR10RST_Pos          (6)                                               /*!< SYS_T::IPRST3: TMR10RST Position       */
#define SYS_IPRST3_TMR10RST_Msk          (0x1ul << SYS_IPRST3_TMR10RST_Pos)                /*!< SYS_T::IPRST3: TMR10RST Mask           */

#define SYS_IPRST3_TMR11RST_Pos          (7)                                               /*!< SYS_T::IPRST3: TMR11RST Position       */
#define SYS_IPRST3_TMR11RST_Msk          (0x1ul << SYS_IPRST3_TMR11RST_Pos)                /*!< SYS_T::IPRST3: TMR11RST Mask           */

#define SYS_IPRST3_UART8RST_Pos          (8)                                               /*!< SYS_T::IPRST3: UART8RST Position       */
#define SYS_IPRST3_UART8RST_Msk          (0x1ul << SYS_IPRST3_UART8RST_Pos)                /*!< SYS_T::IPRST3: UART8RST Mask           */

#define SYS_IPRST3_UART9RST_Pos          (9)                                               /*!< SYS_T::IPRST3: UART9RST Position       */
#define SYS_IPRST3_UART9RST_Msk          (0x1ul << SYS_IPRST3_UART9RST_Pos)                /*!< SYS_T::IPRST3: UART9RST Mask           */

#define SYS_IPRST3_UART10RST_Pos         (10)                                              /*!< SYS_T::IPRST3: UART10RST Position      */
#define SYS_IPRST3_UART10RST_Msk         (0x1ul << SYS_IPRST3_UART10RST_Pos)               /*!< SYS_T::IPRST3: UART10RST Mask          */

#define SYS_IPRST3_UART11RST_Pos         (11)                                              /*!< SYS_T::IPRST3: UART11RST Position      */
#define SYS_IPRST3_UART11RST_Msk         (0x1ul << SYS_IPRST3_UART11RST_Pos)               /*!< SYS_T::IPRST3: UART11RST Mask          */

#define SYS_IPRST3_UART12RST_Pos         (12)                                              /*!< SYS_T::IPRST3: UART12RST Position      */
#define SYS_IPRST3_UART12RST_Msk         (0x1ul << SYS_IPRST3_UART12RST_Pos)               /*!< SYS_T::IPRST3: UART12RST Mask          */

#define SYS_IPRST3_UART13RST_Pos         (13)                                              /*!< SYS_T::IPRST3: UART13RST Position      */
#define SYS_IPRST3_UART13RST_Msk         (0x1ul << SYS_IPRST3_UART13RST_Pos)               /*!< SYS_T::IPRST3: UART13RST Mask          */

#define SYS_IPRST3_UART14RST_Pos         (14)                                              /*!< SYS_T::IPRST3: UART14RST Position      */
#define SYS_IPRST3_UART14RST_Msk         (0x1ul << SYS_IPRST3_UART14RST_Pos)               /*!< SYS_T::IPRST3: UART14RST Mask          */

#define SYS_IPRST3_UART15RST_Pos         (15)                                              /*!< SYS_T::IPRST3: UART15RST Position      */
#define SYS_IPRST3_UART15RST_Msk         (0x1ul << SYS_IPRST3_UART15RST_Pos)               /*!< SYS_T::IPRST3: UART15RST Mask          */

#define SYS_IPRST3_UART16RST_Pos         (16)                                              /*!< SYS_T::IPRST3: UART16RST Position      */
#define SYS_IPRST3_UART16RST_Msk         (0x1ul << SYS_IPRST3_UART16RST_Pos)               /*!< SYS_T::IPRST3: UART16RST Mask          */

#define SYS_IPRST3_I2S1RST_Pos           (17)                                              /*!< SYS_T::IPRST3:I2S1RST Position         */
#define SYS_IPRST3_I2S1RST_Msk           (0x1ul << SYS_IPRST3_I2S1RST_Pos)                 /*!< SYS_T::IPRST3:I2S1RST Mask             */

#define SYS_IPRST3_I2C4RST_Pos           (18)                                              /*!< SYS_T::IPRST3: I2C4RST Position        */
#define SYS_IPRST3_I2C4RST_Msk           (0x1ul << SYS_IPRST3_I2C4RST_Pos)                 /*!< SYS_T::IPRST3: I2C4RST Mask            */
 
#define SYS_IPRST3_I2C5RST_Pos           (19)                                              /*!< SYS_T::IPRST3: I2C5RST Position        */
#define SYS_IPRST3_I2C5RST_Msk           (0x1ul << SYS_IPRST3_I2C5RST_Pos)                 /*!< SYS_T::IPRST3: I2C5RST Mask            */

#define SYS_IPRST3_EPWM2RST_Pos          (20)                                              /*!< SYS_T::IPRST3: EPWM2RST Position       */
#define SYS_IPRST3_EPWM2RST_Msk          (0x1ul << SYS_IPRST3_EPWM2RST_Pos)                /*!< SYS_T::IPRST3: EPWM2RST Mask           */

#define SYS_IPRST3_ECAP2RST_Pos          (21)                                              /*!< SYS_T::IPRST3: ECAP2RST Position       */
#define SYS_IPRST3_ECAP2RST_Msk          (0x1ul << SYS_IPRST3_ECAP2RST_Pos)                /*!< SYS_T::IPRST3: ECAP2RST Mask           */

#define SYS_IPRST3_QEI2RST_Pos           (22)                                              /*!< SYS_T::IPRST3: QEI2RST Position        */
#define SYS_IPRST3_QEI2RST_Msk           (0x1ul << SYS_IPRST3_QEI2RST_Pos)                 /*!< SYS_T::IPRST3: QEI2RST Mask            */

#define SYS_IPRST3_CANFD3RST_Pos         (23)                                              /*!< SYS_T::IPRST3: CANFD3RST Position      */
#define SYS_IPRST3_CANFD3RST_Msk         (0x1ul << SYS_IPRST3_CANFD3RST_Pos)               /*!< SYS_T::IPRST3: CANFD3RST Mask          */

#define SYS_IPRST3_KPIRST_Pos            (24)                                              /*!< SYS_T::IPRST3: KPIRST Position         */
#define SYS_IPRST3_KPIRST_Msk            (0x1ul << SYS_IPRST3_KPIRST_Pos)                  /*!< SYS_T::IPRST3: KPIRST Mask             */

#define SYS_WKUPSER0_WDTWKEN_Pos         (0)                                               /*!< SYS_T::WKUPSER0: WDTWKEN Position      */
#define SYS_WKUPSER0_WDTWKEN_Msk         (0x1ul << SYS_WKUPSER0_WDTWKEN_Pos)               /*!< SYS_T::WKUPSER0: WDTWKEN Mask          */

#define SYS_WKUPSER0_GPIOWKEN_Pos        (3)                                               /*!< SYS_T::WKUPSER0: GPIOWKEN Position     */
#define SYS_WKUPSER0_GPIOWKEN_Msk        (0x1ul << SYS_WKUPSER0_GPIOWKEN_Pos)              /*!< SYS_T::WKUPSER0: GPIOWKEN Mask         */

#define SYS_WKUPSER0_EINT0WKEN_Pos       (4)                                               /*!< SYS_T::WKUPSER0: EINT0WKEN Position    */
#define SYS_WKUPSER0_EINT0WKEN_Msk       (0x1ul << SYS_WKUPSER0_EINT0WKEN_Pos)             /*!< SYS_T::WKUPSER0: EINT0WKEN Mask        */

#define SYS_WKUPSER0_EINT1WKEN_Pos       (5)                                               /*!< SYS_T::WKUPSER0: EINT1WKEN Position    */
#define SYS_WKUPSER0_EINT1WKEN_Msk       (0x1ul << SYS_WKUPSER0_EINT1WKEN_Pos)             /*!< SYS_T::WKUPSER0: EINT1WKEN Mask        */

#define SYS_WKUPSER0_EINT2WKEN_Pos       (6)                                               /*!< SYS_T::WKUPSER0: EINT2WKEN Position    */
#define SYS_WKUPSER0_EINT2WKEN_Msk       (0x1ul << SYS_WKUPSER0_EINT2WKEN_Pos)             /*!< SYS_T::WKUPSER0: EINT2WKEN Mask        */

#define SYS_WKUPSER0_EINT3WKEN_Pos       (7)                                               /*!< SYS_T::WKUPSER0: EINT3WKEN Position    */
#define SYS_WKUPSER0_EINT3WKEN_Msk       (0x1ul << SYS_WKUPSER0_EINT3WKEN_Pos)             /*!< SYS_T::WKUPSER0: EINT3WKEN Mask        */

#define SYS_WKUPSER0_TMR0WKEN_Pos        (8)                                               /*!< SYS_T::WKUPSER0: TMR0WKEN Position     */
#define SYS_WKUPSER0_TMR0WKEN_Msk        (0x1ul << SYS_WKUPSER0_TMR0WKEN_Pos)              /*!< SYS_T::WKUPSER0: TMR0WKEN Mask         */

#define SYS_WKUPSER0_TMR1WKEN_Pos        (9)                                               /*!< SYS_T::WKUPSER0: TMR1WKEN Position     */
#define SYS_WKUPSER0_TMR1WKEN_Msk        (0x1ul << SYS_WKUPSER0_TMR1WKEN_Pos)              /*!< SYS_T::WKUPSER0: TMR1WKEN Mask         */

#define SYS_WKUPSER0_TMR2WKEN_Pos        (10)                                              /*!< SYS_T::WKUPSER0: TMR2WKEN Position     */
#define SYS_WKUPSER0_TMR2WKEN_Msk        (0x1ul << SYS_WKUPSER0_TMR2WKEN_Pos)              /*!< SYS_T::WKUPSER0: TMR2WKEN Mask         */

#define SYS_WKUPSER0_TMR3WKEN_Pos        (11)                                              /*!< SYS_T::WKUPSER0: TMR3WKEN Position     */
#define SYS_WKUPSER0_TMR3WKEN_Msk        (0x1ul << SYS_WKUPSER0_TMR3WKEN_Pos)              /*!< SYS_T::WKUPSER0: TMR3WKEN Mask         */

#define SYS_WKUPSER0_TMR4WKEN_Pos        (12)                                              /*!< SYS_T::WKUPSER0: TMR4WKEN Position     */
#define SYS_WKUPSER0_TMR4WKEN_Msk        (0x1ul << SYS_WKUPSER0_TMR4WKEN_Pos)              /*!< SYS_T::WKUPSER0: TMR4WKEN Mask         */

#define SYS_WKUPSER0_TMR5WKEN_Pos        (13)                                              /*!< SYS_T::WKUPSER0: TMR5WKEN Position     */
#define SYS_WKUPSER0_TMR5WKEN_Msk        (0x1ul << SYS_WKUPSER0_TMR5WKEN_Pos)              /*!< SYS_T::WKUPSER0: TMR5WKEN Mask         */

#define SYS_WKUPSER0_UART0WKEN_Pos       (16)                                              /*!< SYS_T::WKUPSER0: UART0WKEN Position    */
#define SYS_WKUPSER0_UART0WKEN_Msk       (0x1ul << SYS_WKUPSER0_UART0WKEN_Pos)             /*!< SYS_T::WKUPSER0: UART0WKEN Mask        */

#define SYS_WKUPSER0_UART1WKEN_Pos       (17)                                              /*!< SYS_T::WKUPSER0: UART1WKEN Position    */
#define SYS_WKUPSER0_UART1WKEN_Msk       (0x1ul << SYS_WKUPSER0_UART1WKEN_Pos)             /*!< SYS_T::WKUPSER0: UART1WKEN Mask        */

#define SYS_WKUPSER0_UART2WKEN_Pos       (18)                                              /*!< SYS_T::WKUPSER0: UART2WKEN Position    */
#define SYS_WKUPSER0_UART2WKEN_Msk       (0x1ul << SYS_WKUPSER0_UART2WKEN_Pos)             /*!< SYS_T::WKUPSER0: UART2WKEN Mask        */

#define SYS_WKUPSER0_UART3WKEN_Pos       (19)                                              /*!< SYS_T::WKUPSER0: UART3WKEN Position    */
#define SYS_WKUPSER0_UART3WKEN_Msk       (0x1ul << SYS_WKUPSER0_UART3WKEN_Pos)             /*!< SYS_T::WKUPSER0: UART3WKEN Mask        */

#define SYS_WKUPSER0_UART4WKEN_Pos       (20)                                              /*!< SYS_T::WKUPSER0: UART4WKEN Position    */
#define SYS_WKUPSER0_UART4WKEN_Msk       (0x1ul << SYS_WKUPSER0_UART4WKEN_Pos)             /*!< SYS_T::WKUPSER0: UART4WKEN Mask        */

#define SYS_WKUPSER0_UART5WKEN_Pos       (21)                                              /*!< SYS_T::WKUPSER0: UART5WKEN Position    */
#define SYS_WKUPSER0_UART5WKEN_Msk       (0x1ul << SYS_WKUPSER0_UART5WKEN_Pos)             /*!< SYS_T::WKUPSER0: UART5WKEN Mask        */

#define SYS_WKUPSER0_UART6WKEN_Pos       (22)                                              /*!< SYS_T::WKUPSER0: UART6WKEN Position    */
#define SYS_WKUPSER0_UART6WKEN_Msk       (0x1ul << SYS_WKUPSER0_UART6WKEN_Pos)             /*!< SYS_T::WKUPSER0: UART6WKEN Mask        */

#define SYS_WKUPSER0_UART7WKEN_Pos       (23)                                              /*!< SYS_T::WKUPSER0: UART7WKEN Position    */
#define SYS_WKUPSER0_UART7WKEN_Msk       (0x1ul << SYS_WKUPSER0_UART7WKEN_Pos)             /*!< SYS_T::WKUPSER0: UART7WKEN Mask        */

#define SYS_WKUPSER0_UART8WKEN_Pos       (24)                                              /*!< SYS_T::WKUPSER0: UART8WKEN Position    */
#define SYS_WKUPSER0_UART8WKEN_Msk       (0x1ul << SYS_WKUPSER0_UART8WKEN_Pos)             /*!< SYS_T::WKUPSER0: UART8WKEN Mask        */

#define SYS_WKUPSER0_UART9WKEN_Pos       (25)                                              /*!< SYS_T::WKUPSER0: UART9WKEN Position    */
#define SYS_WKUPSER0_UART9WKEN_Msk       (0x1ul << SYS_WKUPSER0_UART9WKEN_Pos)             /*!< SYS_T::WKUPSER0: UART9WKEN Mask        */

#define SYS_WKUPSER1_I2C0WKEN_Pos        (0)                                               /*!< SYS_T::WKUPSER1: I2C0WKEN Position     */
#define SYS_WKUPSER1_I2C0WKEN_Msk        (0x1ul << SYS_WKUPSER1_I2C0WKEN_Pos)              /*!< SYS_T::WKUPSER1: I2C0WKEN Mask         */

#define SYS_WKUPSER1_I2C1WKEN_Pos        (1)                                               /*!< SYS_T::WKUPSER1: I2C1WKEN Position     */
#define SYS_WKUPSER1_I2C1WKEN_Msk        (0x1ul << SYS_WKUPSER1_I2C1WKEN_Pos)              /*!< SYS_T::WKUPSER1: I2C1WKEN Mask         */

#define SYS_WKUPSER1_I2C2WKEN_Pos        (2)                                               /*!< SYS_T::WKUPSER1: I2C2WKEN Position     */
#define SYS_WKUPSER1_I2C2WKEN_Msk        (0x1ul << SYS_WKUPSER1_I2C2WKEN_Pos)              /*!< SYS_T::WKUPSER1: I2C2WKEN Mask         */

#define SYS_WKUPSER1_I2C3WKEN_Pos        (3)                                               /*!< SYS_T::WKUPSER1: I2C3WKEN Position     */
#define SYS_WKUPSER1_I2C3WKEN_Msk        (0x1ul << SYS_WKUPSER1_I2C3WKEN_Pos)              /*!< SYS_T::WKUPSER1: I2C3WKEN Mask         */

#define SYS_WKUPSER1_RTCWKEN_Pos         (7)                                               /*!< SYS_T::WKUPSER1: RTCWKEN Position      */
#define SYS_WKUPSER1_RTCWKEN_Msk         (0x1ul << SYS_WKUPSER1_RTCWKEN_Pos)               /*!< SYS_T::WKUPSER1: RTCWKEN Mask          */

#define SYS_WKUPSER1_CAN0WKEN_Pos        (8)                                               /*!< SYS_T::WKUPSER1: CAN0WKEN Position     */
#define SYS_WKUPSER1_CAN0WKEN_Msk        (0x1ul << SYS_WKUPSER1_CAN0WKEN_Pos)              /*!< SYS_T::WKUPSER1: CAN0WKEN Mask         */

#define SYS_WKUPSER1_CAN1WKEN_Pos        (9)                                               /*!< SYS_T::WKUPSER1: CAN1WKEN Position     */
#define SYS_WKUPSER1_CAN1WKEN_Msk        (0x1ul << SYS_WKUPSER1_CAN1WKEN_Pos)              /*!< SYS_T::WKUPSER1: CAN1WKEN Mask         */

#define SYS_WKUPSER1_CAN2WKEN_Pos        (10)                                              /*!< SYS_T::WKUPSER1: CAN2WKEN Position     */
#define SYS_WKUPSER1_CAN2WKEN_Msk        (0x1ul << SYS_WKUPSER1_CAN2WKEN_Pos)              /*!< SYS_T::WKUPSER1: CAN2WKEN Mask         */

#define SYS_WKUPSER1_CAN3WKEN_Pos        (11)                                              /*!< SYS_T::WKUPSER1: CAN3WKEN Position     */
#define SYS_WKUPSER1_CAN3WKEN_Msk        (0x1ul << SYS_WKUPSER1_CAN3WKEN_Pos)              /*!< SYS_T::WKUPSER1: CAN3WKEN Mask         */

#define SYS_WKUPSER1_LVDWKEN_Pos         (15)                                              /*!< SYS_T::WKUPSER1: LVDWKEN Position      */
#define SYS_WKUPSER1_LVDWKEN_Msk         (0x1ul << SYS_WKUPSER1_LVDWKEN_Pos)               /*!< SYS_T::WKUPSER1: LVDWKEN Mask          */

#define SYS_WKUPSER1_EMAC0WKEN_Pos       (16)                                              /*!< SYS_T::WKUPSER1: EMAC0WKEN Position    */
#define SYS_WKUPSER1_EMAC0WKEN_Msk       (0x1ul << SYS_WKUPSER1_EMAC0WKEN_Pos)             /*!< SYS_T::WKUPSER1: EMAC0WKEN Mask        */

#define SYS_WKUPSER1_EMAC1WKEN_Pos       (17)                                              /*!< SYS_T::WKUPSER1: EMAC1WKEN Position    */
#define SYS_WKUPSER1_EMAC1WKEN_Msk       (0x1ul << SYS_WKUPSER1_EMAC1WKEN_Pos)             /*!< SYS_T::WKUPSER1: EMAC1WKEN Mask        */

#define SYS_WKUPSER1_USBHWKEN_Pos        (18)                                              /*!< SYS_T::WKUPSER1: USBHWKEN Position     */
#define SYS_WKUPSER1_USBHWKEN_Msk        (0x1ul << SYS_WKUPSER1_LVDWKEN_Pos)               /*!< SYS_T::WKUPSER1: USBHWKEN Mask         */

#define SYS_WKUPSER1_USBDWKEN_Pos        (19)                                              /*!< SYS_T::WKUPSER1: USBDWKEN Position     */
#define SYS_WKUPSER1_USBDWKEN_Msk        (0x1ul << SYS_WKUPSER1_USBDWKEN_Pos)              /*!< SYS_T::WKUPSER1: USBDWKEN Mask         */

#define SYS_WKUPSER1_SDHWKEN_Pos         (20)                                              /*!< SYS_T::WKUPSER1: SDHWKEN Position      */
#define SYS_WKUPSER1_SDHWKEN_Msk         (0x1ul << SYS_WKUPSER1_SDHWKEN_Pos)               /*!< SYS_T::WKUPSER1: SDHWKEN Mask          */

#define SYS_WKUPSER1_ADCWKEN_Pos         (24)                                              /*!< SYS_T::WKUPSER1: ADCWKEN Position      */
#define SYS_WKUPSER1_ADCWKEN_Msk         (0x1ul << SYS_WKUPSER1_ADCWKEN_Pos)               /*!< SYS_T::WKUPSER1: ADCWKEN Mask          */

#define SYS_WKUPSSR0_WDTWKST_Pos         (0)                                               /*!< SYS_T::WKUPSSR0: WDTWKST Position      */
#define SYS_WKUPSSR0_WDTWKST_Msk         (0x1ul << SYS_WKUPSSR0_WDTWKST_Pos)               /*!< SYS_T::WKUPSSR0: WDTWKST Mask          */

#define SYS_WKUPSSR0_GPIOWKST_Pos        (3)                                               /*!< SYS_T::WKUPSSR0: GPIOWKST Position     */
#define SYS_WKUPSSR0_GPIOWKST_Msk        (0x1ul << SYS_WKUPSSR0_GPIOWKST_Pos)              /*!< SYS_T::WKUPSSR0: GPIOWKST Mask         */

#define SYS_WKUPSSR0_EINT0WKST_Pos       (4)                                               /*!< SYS_T::WKUPSSR0: EINT0WKST Position    */
#define SYS_WKUPSSR0_EINT0WKST_Msk       (0x1ul << SYS_WKUPSER0_EINT0WKST_Pos)             /*!< SYS_T::WKUPSSR0: EINT0WKST Mask        */

#define SYS_WKUPSSR0_EINT1WKST_Pos       (5)                                               /*!< SYS_T::WKUPSSR0: EINT1WKST Position    */
#define SYS_WKUPSSR0_EINT1WKST_Msk       (0x1ul << SYS_WKUPSER0_EINT1WKST_Pos)             /*!< SYS_T::WKUPSSR0: EINT1WKST Mask        */

#define SYS_WKUPSSR0_EINT2WKST_Pos       (6)                                               /*!< SYS_T::WKUPSSR0: EINT2WKST Position    */
#define SYS_WKUPSSR0_EINT2WKST_Msk       (0x1ul << SYS_WKUPSER0_EINT2WKST_Pos)             /*!< SYS_T::WKUPSSR0: EINT2WKST Mask        */

#define SYS_WKUPSSR0_EINT3WKST_Pos       (7)                                               /*!< SYS_T::WKUPSSR0: EINT3WKST Position    */
#define SYS_WKUPSSR0_EINT3WKST_Msk       (0x1ul << SYS_WKUPSER0_EINT3WKST_Pos)             /*!< SYS_T::WKUPSSR0: EINT3WKST Mask        */

#define SYS_WKUPSSR0_TMR0WKST_Pos        (8)                                               /*!< SYS_T::WKUPSSR0: TMR0WKST Position     */
#define SYS_WKUPSSR0_TMR0WKST_Msk        (0x1ul << SYS_WKUPSER0_TMR0WKST_Pos)              /*!< SYS_T::WKUPSSR0: TMR0WKST Mask         */

#define SYS_WKUPSSR0_TMR1WKST_Pos        (9)                                               /*!< SYS_T::WKUPSSR0: TMR1WKST Position     */
#define SYS_WKUPSSR0_TMR1WKST_Msk        (0x1ul << SYS_WKUPSER0_TMR1WKST_Pos)              /*!< SYS_T::WKUPSSR0: TMR1WKST Mask         */

#define SYS_WKUPSSR0_TMR2WKST_Pos        (10)                                              /*!< SYS_T::WKUPSSR0: TMR2WKST Position     */
#define SYS_WKUPSSR0_TMR2WKST_Msk        (0x1ul << SYS_WKUPSER0_TMR2WKST_Pos)              /*!< SYS_T::WKUPSSR0: TMR2WKST Mask         */

#define SYS_WKUPSSR0_TMR3WKST_Pos        (11)                                              /*!< SYS_T::WKUPSSR0: TMR3WKST Position     */
#define SYS_WKUPSSR0_TMR3WKST_Msk        (0x1ul << SYS_WKUPSER0_TMR3WKST_Pos)              /*!< SYS_T::WKUPSSR0: TMR3WKST Mask         */

#define SYS_WKUPSSR0_TMR4WKST_Pos        (12)                                              /*!< SYS_T::WKUPSSR0: TMR4WKST Position     */
#define SYS_WKUPSSR0_TMR4WKST_Msk        (0x1ul << SYS_WKUPSER0_TMR4WKST_Pos)              /*!< SYS_T::WKUPSSR0: TMR4WKST Mask         */

#define SYS_WKUPSSR0_TMR5WKST_Pos        (13)                                              /*!< SYS_T::WKUPSSR0: TMR5WKST Position     */
#define SYS_WKUPSSR0_TMR5WKST_Msk        (0x1ul << SYS_WKUPSER0_TMR5WKST_Pos)              /*!< SYS_T::WKUPSSR0: TMR5WKST Mask         */

#define SYS_WKUPSSR0_UART0WKST_Pos       (16)                                              /*!< SYS_T::WKUPSSR0: UART0WKST Position    */
#define SYS_WKUPSSR0_UART0WKST_Msk       (0x1ul << SYS_WKUPSER0_UART0WKST_Pos)             /*!< SYS_T::WKUPSSR0: UART0WKST Mask        */

#define SYS_WKUPSSR0_UART1WKST_Pos       (17)                                              /*!< SYS_T::WKUPSSR0: UART1WKST Position    */
#define SYS_WKUPSSR0_UART1WKST_Msk       (0x1ul << SYS_WKUPSER0_UART1WKST_Pos)             /*!< SYS_T::WKUPSSR0: UART1WKST Mask        */

#define SYS_WKUPSSR0_UART2WKST_Pos       (18)                                              /*!< SYS_T::WKUPSSR0: UART2WKST Position    */
#define SYS_WKUPSSR0_UART2WKST_Msk       (0x1ul << SYS_WKUPSER0_UART2WKST_Pos)             /*!< SYS_T::WKUPSSR0: UART2WKST Mask        */

#define SYS_WKUPSSR0_UART3WKST_Pos       (19)                                              /*!< SYS_T::WKUPSSR0: UART3WKST Position    */
#define SYS_WKUPSSR0_UART3WKST_Msk       (0x1ul << SYS_WKUPSER0_UART3WKST_Pos)             /*!< SYS_T::WKUPSSR0: UART3WKST Mask        */

#define SYS_WKUPSSR0_UART4WKST_Pos       (20)                                              /*!< SYS_T::WKUPSSR0: UART4WKST Position    */
#define SYS_WKUPSSR0_UART4WKST_Msk       (0x1ul << SYS_WKUPSER0_UART4WKST_Pos)             /*!< SYS_T::WKUPSSR0: UART4WKST Mask        */

#define SYS_WKUPSSR0_UART5WKST_Pos       (21)                                              /*!< SYS_T::WKUPSSR0: UART5WKST Position    */
#define SYS_WKUPSSR0_UART5WKST_Msk       (0x1ul << SYS_WKUPSER0_UART5WKST_Pos)             /*!< SYS_T::WKUPSSR0: UART5WKST Mask        */

#define SYS_WKUPSSR0_UART6WKST_Pos       (22)                                              /*!< SYS_T::WKUPSSR0: UART6WKST Position    */
#define SYS_WKUPSSR0_UART6WKST_Msk       (0x1ul << SYS_WKUPSER0_UART6WKST_Pos)             /*!< SYS_T::WKUPSSR0: UART6WKST Mask        */

#define SYS_WKUPSSR0_UART7WKST_Pos       (23)                                              /*!< SYS_T::WKUPSSR0: UART7WKST Position    */
#define SYS_WKUPSSR0_UART7WKST_Msk       (0x1ul << SYS_WKUPSER0_UART7WKST_Pos)             /*!< SYS_T::WKUPSSR0: UART7WKST Mask        */

#define SYS_WKUPSSR0_UART8WKST_Pos       (24)                                              /*!< SYS_T::WKUPSSR0: UART8WKST Position    */
#define SYS_WKUPSSR0_UART8WKST_Msk       (0x1ul << SYS_WKUPSER0_UART8WKST_Pos)             /*!< SYS_T::WKUPSSR0: UART8WKST Mask        */

#define SYS_WKUPSSR0_UART9WKST_Pos       (25)                                              /*!< SYS_T::WKUPSSR0: UART9WKST Position    */
#define SYS_WKUPSSR0_UART9WKST_Msk       (0x1ul << SYS_WKUPSER0_UART9WKST_Pos)             /*!< SYS_T::WKUPSSR0: UART9WKST Mask        */

#define SYS_WKUPSSR1_I2C0WKST_Pos        (0)                                               /*!< SYS_T::WKUPSSR1: I2C0WKST Position     */
#define SYS_WKUPSSR1_I2C0WKST_Msk        (0x1ul << SYS_WKUPSER1_I2C0WKST_Pos)              /*!< SYS_T::WKUPSSR1: I2C0WKST Mask         */

#define SYS_WKUPSSR1_I2C1WKST_Pos        (1)                                               /*!< SYS_T::WKUPSSR1: I2C1WKST Position     */
#define SYS_WKUPSSR1_I2C1WKST_Msk        (0x1ul << SYS_WKUPSER1_I2C1WKST_Pos)              /*!< SYS_T::WKUPSSR1: I2C1WKST Mask         */

#define SYS_WKUPSSR1_I2C2WKST_Pos        (2)                                               /*!< SYS_T::WKUPSSR1: I2C2WKST Position     */
#define SYS_WKUPSSR1_I2C2WKST_Msk        (0x1ul << SYS_WKUPSER1_I2C2WKST_Pos)              /*!< SYS_T::WKUPSSR1: I2C2WKST Mask         */

#define SYS_WKUPSSR1_I2C3WKST_Pos        (3)                                               /*!< SYS_T::WKUPSSR1: I2C3WKST Position     */
#define SYS_WKUPSSR1_I2C3WKST_Msk        (0x1ul << SYS_WKUPSER1_I2C3WKST_Pos)              /*!< SYS_T::WKUPSSR1: I2C3WKST Mask         */

#define SYS_WKUPSSR1_RTCWKST_Pos         (7)                                               /*!< SYS_T::WKUPSSR1: RTCWKST Position      */
#define SYS_WKUPSSR1_RTCWKST_Msk         (0x1ul << SYS_WKUPSER1_RTCWKST_Pos)               /*!< SYS_T::WKUPSSR1: RTCWKST Mask          */

#define SYS_WKUPSSR1_CAN0WKST_Pos        (8)                                               /*!< SYS_T::WKUPSSR1: CAN0WKST Position     */
#define SYS_WKUPSSR1_CAN0WKST_Msk        (0x1ul << SYS_WKUPSER1_CAN0WKST_Pos)              /*!< SYS_T::WKUPSSR1: CAN0WKST Mask         */

#define SYS_WKUPSSR1_CAN1WKST_Pos        (9)                                               /*!< SYS_T::WKUPSSR1: CAN1WKST Position     */
#define SYS_WKUPSSR1_CAN1WKST_Msk        (0x1ul << SYS_WKUPSER1_CAN1WKST_Pos)              /*!< SYS_T::WKUPSSR1: CAN1WKST Mask         */

#define SYS_WKUPSSR1_CAN2WKST_Pos        (10)                                              /*!< SYS_T::WKUPSSR1: CAN2WKST Position     */
#define SYS_WKUPSSR1_CAN2WKST_Msk        (0x1ul << SYS_WKUPSER1_CAN2WKST_Pos)              /*!< SYS_T::WKUPSSR1: CAN2WKST Mask         */

#define SYS_WKUPSSR1_CAN3WKST_Pos        (11)                                              /*!< SYS_T::WKUPSSR1: CAN3WKST Position     */
#define SYS_WKUPSSR1_CAN3WKST_Msk        (0x1ul << SYS_WKUPSER1_CAN3WKST_Pos)              /*!< SYS_T::WKUPSSR1: CAN3WKST Mask         */

#define SYS_WKUPSSR1_LVDWKST_Pos         (15)                                              /*!< SYS_T::WKUPSSR1: LVDWKST Position      */
#define SYS_WKUPSSR1_LVDWKST_Msk         (0x1ul << SYS_WKUPSER1_LVDWKST_Pos)               /*!< SYS_T::WKUPSSR1: LVDWKST Mask          */

#define SYS_WKUPSSR1_EMAC0WKST_Pos       (16)                                              /*!< SYS_T::WKUPSER1: EMAC0WKST Position    */
#define SYS_WKUPSSR1_EMAC0WKST_Msk       (0x1ul << SYS_WKUPSER1_EMAC0WKST_Pos)             /*!< SYS_T::WKUPSER1: EMAC0WKST Mask        */

#define SYS_WKUPSSR1_EMAC1WKST_Pos       (17)                                              /*!< SYS_T::WKUPSSR1: EMAC1WKST Position    */
#define SYS_WKUPSSR1_EMAC1WKST_Msk       (0x1ul << SYS_WKUPSER1_EMAC1WKST_Pos)             /*!< SYS_T::WKUPSSR1: EMAC1WKST Mask        */

#define SYS_WKUPSSR1_USBHWKST_Pos        (18)                                              /*!< SYS_T::WKUPSSR1: USBHWKST Position     */
#define SYS_WKUPSSR1_USBHWKST_Msk        (0x1ul << SYS_WKUPSER1_LVDWKST_Pos)               /*!< SYS_T::WKUPSSR1: USBHWKST Mask         */

#define SYS_WKUPSSR1_USBDWKST_Pos        (19)                                              /*!< SYS_T::WKUPSSR1: USBDWKST Position     */
#define SYS_WKUPSSR1_USBDWKST_Msk        (0x1ul << SYS_WKUPSER1_USBDWKST_Pos)              /*!< SYS_T::WKUPSSR1: USBDWKST Mask         */

#define SYS_WKUPSSR1_SDHWKST_Pos         (20)                                              /*!< SYS_T::WKUPSSR1: SDHWKST Position      */
#define SYS_WKUPSSR1_SDHWKST_Msk         (0x1ul << SYS_WKUPSER1_SDHWKST_Pos)               /*!< SYS_T::WKUPSSR1: SDHWKST Mask          */

#define SYS_WKUPSSR1_ADCWKST_Pos         (24)                                              /*!< SYS_T::WKUPSSR1: ADCWKST Position      */
#define SYS_WKUPSSR1_ADCWKST_Msk         (0x1ul << SYS_WKUPSER1_ADCWKST_Pos)               /*!< SYS_T::WKUPSSR1: ADCWKST Mask          */

#define SYS_MISCFCR_WDTRSTEN_Pos         (8)                                               /*!< SYS_T::MISCFCR: WDTRSTEN Position      */
#define SYS_MISCFCR_WDTRSTEN_Msk         (0x1ul << SYS_MISCFCR_WDTRSTEN_Pos)               /*!< SYS_T::MISCFCR: WDTRSTEN Mask          */

#define SYS_MISCFCR_HDSPUEN_Pos          (9)                                               /*!< SYS_T::MISCFCR: HDSPUEN Position       */
#define SYS_MISCFCR_HDSPUEN_Msk          (0x1ul << SYS_MISCFCR_HDSPUEN_Pos)                /*!< SYS_T::MISCFCR: HDSPUEN Mask           */

#define SYS_MISCFCR_USRHDSEN_Pos         (11)                                              /*!< SYS_T::MISCFCR: USRHDSEN Position      */
#define SYS_MISCFCR_USRHDSEN_Msk         (0x1ul << SYS_MISCFCR_USRHDSEN_Pos)               /*!< SYS_T::MISCFCR: USRHDSEN Mask          */

#define SYS_MISCFCR_GPIOLBEN_Pos         (12)                                              /*!< SYS_T::MISCFCR: GPIOLBEN Position      */
#define SYS_MISCFCR_GPIOLBEN_Msk         (0x1ul << SYS_MISCFCR_GPIOLBEN_Pos)               /*!< SYS_T::MISCFCR: GPIOLBEN Mask          */

#define SYS_MISCFCR_SELFTEST_Pos         (13)                                              /*!< SYS_T::MISCFCR: SELFTEST Position      */
#define SYS_MISCFCR_SELFTEST_Msk         (0x1ul << SYS_MISCFCR_SELFTEST_Pos)               /*!< SYS_T::MISCFCR: SELFTEST Mask          */

#define SYS_MISCIER_LVDIEN_Pos           (0)                                               /*!< SYS_T::MISCIER: LVDIEN Position        */
#define SYS_MISCIER_LVDIEN_Msk           (0x1ul << SYS_MISCIER_LVDIEN_Pos)                 /*!< SYS_T::MISCIER: LVDIEN Mask            */

#define SYS_MISCIER_USBIDCIEN_Pos        (1)                                               /*!< SYS_T::MISCIER: USBIDCIEN Position     */
#define SYS_MISCIER_USBIDCIEN_Msk        (0x1ul << SYS_MISCIER_USBIDCIEN_Pos)              /*!< SYS_T::MISCIER: USBIDCIEN Mask         */

#define SYS_MISCISR_LVDIS_Pos            (0)                                               /*!< SYS_T::MISCISR: LVDIS Position         */
#define SYS_MISCISR_LVDIS_Msk            (0x1ul << SYS_MISCISR_LVDIS_Pos)                  /*!< SYS_T::MISCISR: LVDIS Mask             */

#define SYS_MISCISR_USBIDCIS_Pos         (1)                                               /*!< SYS_T::MISCISR: USBIDCIS Position      */
#define SYS_MISCISR_USBIDCIS_Msk         (0x1ul << SYS_MISCISR_USBIDCIS_Pos)               /*!< SYS_T::MISCISR: USBIDCIS Mask          */

#define SYS_MISCISR_IBRRUNF_Pos          (16)                                              /*!< SYS_T::MISCISR: IBRRUNF Position       */
#define SYS_MISCISR_IBRRUNF_Msk          (0x1ul << SYS_MISCISR_IBRRUNF_Pos)                /*!< SYS_T::MISCISR: IBRRUNF Mask           */

#define SYS_MISCISR_USB0IDS_Pos          (17)                                              /*!< SYS_T::MISCISR: USB0IDS Position       */
#define SYS_MISCISR_USB0IDS_Msk          (0x1ul << SYS_MISCISR_USB0IDS_Pos)                /*!< SYS_T::MISCISR: USB0IDS Mask           */

#define SYS_REGWPCTL_REGWPCTL_Pos        (0)                                               /*!< SYS_T::REGWPCT: REGWPCT Position       */
#define SYS_REGWPCTL_REGWPCTL_Msk        (0xfful << SYS_REGWPCTL_REGWPCTL_Pos)             /*!< SYS_T::REGWPCT: REGWPCT Mask           */


/* SYS GPA_MFPL Bit Field Definitions */
#define SYS_GPA_MFPL_PA0MFP_Pos          (0)                                               /*!< SYS_T::GPA_MFPL: PA0MFP Position          */
#define SYS_GPA_MFPL_PA0MFP_Msk          (0xful << SYS_GPA_MFPL_PA0MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA0MFP Mask              */

#define SYS_GPA_MFPL_PA1MFP_Pos          (4)                                               /*!< SYS_T::GPA_MFPL: PA1MFP Position          */
#define SYS_GPA_MFPL_PA1MFP_Msk          (0xful << SYS_GPA_MFPL_PA1MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA1MFP Mask              */

#define SYS_GPA_MFPL_PA2MFP_Pos          (8)                                               /*!< SYS_T::GPA_MFPL: PA2MFP Position          */
#define SYS_GPA_MFPL_PA2MFP_Msk          (0xful << SYS_GPA_MFPL_PA2MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA2MFP Mask              */

#define SYS_GPA_MFPL_PA3MFP_Pos          (12)                                              /*!< SYS_T::GPA_MFPL: PA3MFP Position          */
#define SYS_GPA_MFPL_PA3MFP_Msk          (0xful << SYS_GPA_MFPL_PA3MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA3MFP Mask              */

#define SYS_GPA_MFPL_PA4MFP_Pos          (16)                                              /*!< SYS_T::GPA_MFPL: PA4MFP Position          */
#define SYS_GPA_MFPL_PA4MFP_Msk          (0xful << SYS_GPA_MFPL_PA4MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA4MFP Mask              */

#define SYS_GPA_MFPL_PA5MFP_Pos          (20)                                              /*!< SYS_T::GPA_MFPL: PA5MFP Position          */
#define SYS_GPA_MFPL_PA5MFP_Msk          (0xful << SYS_GPA_MFPL_PA5MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA5MFP Mask              */

#define SYS_GPA_MFPL_PA6MFP_Pos          (24)                                              /*!< SYS_T::GPA_MFPL: PA6MFP Position          */
#define SYS_GPA_MFPL_PA6MFP_Msk          (0xful << SYS_GPA_MFPL_PA6MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA6MFP Mask              */

#define SYS_GPA_MFPL_PA7MFP_Pos          (28)                                              /*!< SYS_T::GPA_MFPL: PA7MFP Position          */
#define SYS_GPA_MFPL_PA7MFP_Msk          (0xful << SYS_GPA_MFPL_PA7MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA7MFP Mask              */

/* SYS GPA_MFPH Bit Field Definitions */
#define SYS_GPA_MFPH_PA8MFP_Pos          (0)                                               /*!< SYS_T::GPA_MFPH: PA8MFP Position          */
#define SYS_GPA_MFPH_PA8MFP_Msk          (0xful << SYS_GPA_MFPH_PA8MFP_Pos)                /*!< SYS_T::GPA_MFPH: PA8MFP Mask              */

#define SYS_GPA_MFPH_PA9MFP_Pos          (4)                                               /*!< SYS_T::GPA_MFPH: PA9MFP Position          */
#define SYS_GPA_MFPH_PA9MFP_Msk          (0xful << SYS_GPA_MFPH_PA9MFP_Pos)                /*!< SYS_T::GPA_MFPH: PA9MFP Mask              */

#define SYS_GPA_MFPH_PA10MFP_Pos         (8)                                               /*!< SYS_T::GPA_MFPH: PA10MFP Position         */
#define SYS_GPA_MFPH_PA10MFP_Msk         (0xful << SYS_GPA_MFPH_PA10MFP_Pos)               /*!< SYS_T::GPA_MFPH: PA10MFP Mask             */

#define SYS_GPA_MFPH_PA11MFP_Pos         (12)                                              /*!< SYS_T::GPA_MFPH: PA11MFP Position         */
#define SYS_GPA_MFPH_PA11MFP_Msk         (0xful << SYS_GPA_MFPH_PA11MFP_Pos)               /*!< SYS_T::GPA_MFPH: PA11MFP Mask             */

#define SYS_GPA_MFPH_PA12MFP_Pos         (16)                                              /*!< SYS_T::GPA_MFPH: PA12MFP Position         */
#define SYS_GPA_MFPH_PA12MFP_Msk         (0xful << SYS_GPA_MFPH_PA12MFP_Pos)               /*!< SYS_T::GPA_MFPH: PA12MFP Mask             */

#define SYS_GPA_MFPH_PA13MFP_Pos         (20)                                              /*!< SYS_T::GPA_MFPH: PA13MFP Position         */
#define SYS_GPA_MFPH_PA13MFP_Msk         (0xful << SYS_GPA_MFPH_PA13MFP_Pos)               /*!< SYS_T::GPA_MFPH: PA13MFP Mask             */

#define SYS_GPA_MFPH_PA14MFP_Pos         (24)                                              /*!< SYS_T::GPA_MFPH: PA14MFP Position         */
#define SYS_GPA_MFPH_PA14MFP_Msk         (0xful << SYS_GPA_MFPH_PA14MFP_Pos)               /*!< SYS_T::GPA_MFPH: PA14MFP Mask             */

#define SYS_GPA_MFPH_PA15MFP_Pos         (28)                                              /*!< SYS_T::GPA_MFPH: PA15MFP Position         */
#define SYS_GPA_MFPH_PA15MFP_Msk         (0xful << SYS_GPA_MFPH_PA15MFP_Pos)               /*!< SYS_T::GPA_MFPH: PA15MFP Mask             */

/* SYS GPB_MFPL Bit Field Definitions */
#define SYS_GPB_MFPL_PB0MFP_Pos          (0)                                               /*!< SYS_T::GPB_MFPL: PB0MFP Position          */
#define SYS_GPB_MFPL_PB0MFP_Msk          (0xful << SYS_GPB_MFPL_PB0MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB0MFP Mask              */

#define SYS_GPB_MFPL_PB1MFP_Pos          (4)                                               /*!< SYS_T::GPB_MFPL: PB1MFP Position          */
#define SYS_GPB_MFPL_PB1MFP_Msk          (0xful << SYS_GPB_MFPL_PB1MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB1MFP Mask              */

#define SYS_GPB_MFPL_PB2MFP_Pos          (8)                                               /*!< SYS_T::GPB_MFPL: PB2MFP Position          */
#define SYS_GPB_MFPL_PB2MFP_Msk          (0xful << SYS_GPB_MFPL_PB2MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB2MFP Mask              */

#define SYS_GPB_MFPL_PB3MFP_Pos          (12)                                              /*!< SYS_T::GPB_MFPL: PB3MFP Position          */
#define SYS_GPB_MFPL_PB3MFP_Msk          (0xful << SYS_GPB_MFPL_PB3MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB3MFP Mask              */

#define SYS_GPB_MFPL_PB4MFP_Pos          (16)                                              /*!< SYS_T::GPB_MFPL: PB4MFP Position          */
#define SYS_GPB_MFPL_PB4MFP_Msk          (0xful << SYS_GPB_MFPL_PB4MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB4MFP Mask              */

#define SYS_GPB_MFPL_PB5MFP_Pos          (20)                                              /*!< SYS_T::GPB_MFPL: PB5MFP Position          */
#define SYS_GPB_MFPL_PB5MFP_Msk          (0xful << SYS_GPB_MFPL_PB5MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB5MFP Mask              */

#define SYS_GPB_MFPL_PB6MFP_Pos          (24)                                              /*!< SYS_T::GPB_MFPL: PB6MFP Position          */
#define SYS_GPB_MFPL_PB6MFP_Msk          (0xful << SYS_GPB_MFPL_PB6MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB6MFP Mask              */

#define SYS_GPB_MFPL_PB7MFP_Pos          (28)                                              /*!< SYS_T::GPB_MFPL: PB7MFP Position          */
#define SYS_GPB_MFPL_PB7MFP_Msk          (0xful << SYS_GPB_MFPL_PB7MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB7MFP Mask              */

/* SYS GPB_MFPH Bit Field Definitions */
#define SYS_GPB_MFPH_PB8MFP_Pos          (0)                                               /*!< SYS_T::GPB_MFPH: PB8MFP Position          */
#define SYS_GPB_MFPH_PB8MFP_Msk          (0xful << SYS_GPB_MFPH_PB8MFP_Pos)                /*!< SYS_T::GPB_MFPH: PB8MFP Mask              */

#define SYS_GPB_MFPH_PB9MFP_Pos          (4)                                               /*!< SYS_T::GPB_MFPH: PB9MFP Position          */
#define SYS_GPB_MFPH_PB9MFP_Msk          (0xful << SYS_GPB_MFPH_PB9MFP_Pos)                /*!< SYS_T::GPB_MFPH: PB9MFP Mask              */

#define SYS_GPB_MFPH_PB10MFP_Pos         (8)                                               /*!< SYS_T::GPB_MFPH: PB10MFP Position         */
#define SYS_GPB_MFPH_PB10MFP_Msk         (0xful << SYS_GPB_MFPH_PB10MFP_Pos)               /*!< SYS_T::GPB_MFPH: PB10MFP Mask             */

#define SYS_GPB_MFPH_PB11MFP_Pos         (12)                                              /*!< SYS_T::GPB_MFPH: PB11MFP Position         */
#define SYS_GPB_MFPH_PB11MFP_Msk         (0xful << SYS_GPB_MFPH_PB11MFP_Pos)               /*!< SYS_T::GPB_MFPH: PB11MFP Mask             */

#define SYS_GPB_MFPH_PB12MFP_Pos         (16)                                              /*!< SYS_T::GPB_MFPH: PB12MFP Position         */
#define SYS_GPB_MFPH_PB12MFP_Msk         (0xful << SYS_GPB_MFPH_PB12MFP_Pos)               /*!< SYS_T::GPB_MFPH: PB12MFP Mask             */

#define SYS_GPB_MFPH_PB13MFP_Pos         (20)                                              /*!< SYS_T::GPB_MFPH: PB13MFP Position         */
#define SYS_GPB_MFPH_PB13MFP_Msk         (0xful << SYS_GPB_MFPH_PB13MFP_Pos)               /*!< SYS_T::GPB_MFPH: PB13MFP Mask             */

#define SYS_GPB_MFPH_PB14MFP_Pos         (24)                                              /*!< SYS_T::GPB_MFPH: PB14MFP Position         */
#define SYS_GPB_MFPH_PB14MFP_Msk         (0xful << SYS_GPB_MFPH_PB14MFP_Pos)               /*!< SYS_T::GPB_MFPH: PB14MFP Mask             */

#define SYS_GPB_MFPH_PB15MFP_Pos         (28)                                              /*!< SYS_T::GPB_MFPH: PB15MFP Position         */
#define SYS_GPB_MFPH_PB15MFP_Msk         (0xful << SYS_GPB_MFPH_PB15MFP_Pos)               /*!< SYS_T::GPB_MFPH: PB15MFP Mask             */

/* SYS GPC_MFPL Bit Field Definitions */
#define SYS_GPC_MFPL_PC0MFP_Pos          (0)                                               /*!< SYS_T::GPC_MFPL: PC0MFP Position          */
#define SYS_GPC_MFPL_PC0MFP_Msk          (0xful << SYS_GPC_MFPL_PC0MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC0MFP Mask              */

#define SYS_GPC_MFPL_PC1MFP_Pos          (4)                                               /*!< SYS_T::GPC_MFPL: PC1MFP Position          */
#define SYS_GPC_MFPL_PC1MFP_Msk          (0xful << SYS_GPC_MFPL_PC1MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC1MFP Mask              */

#define SYS_GPC_MFPL_PC2MFP_Pos          (8)                                               /*!< SYS_T::GPC_MFPL: PC2MFP Position          */
#define SYS_GPC_MFPL_PC2MFP_Msk          (0xful << SYS_GPC_MFPL_PC2MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC2MFP Mask              */

#define SYS_GPC_MFPL_PC3MFP_Pos          (12)                                              /*!< SYS_T::GPC_MFPL: PC3MFP Position          */
#define SYS_GPC_MFPL_PC3MFP_Msk          (0xful << SYS_GPC_MFPL_PC3MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC3MFP Mask              */

#define SYS_GPC_MFPL_PC4MFP_Pos          (16)                                              /*!< SYS_T::GPC_MFPL: PC4MFP Position          */
#define SYS_GPC_MFPL_PC4MFP_Msk          (0xful << SYS_GPC_MFPL_PC4MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC4MFP Mask              */

#define SYS_GPC_MFPL_PC5MFP_Pos          (20)                                              /*!< SYS_T::GPC_MFPL: PC5MFP Position          */
#define SYS_GPC_MFPL_PC5MFP_Msk          (0xful << SYS_GPC_MFPL_PC5MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC5MFP Mask              */

#define SYS_GPC_MFPL_PC6MFP_Pos          (24)                                              /*!< SYS_T::GPC_MFPL: PC6MFP Position          */
#define SYS_GPC_MFPL_PC6MFP_Msk          (0xful << SYS_GPC_MFPL_PC6MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC6MFP Mask              */

#define SYS_GPC_MFPL_PC7MFP_Pos          (28)                                              /*!< SYS_T::GPC_MFPL: PC7MFP Position          */
#define SYS_GPC_MFPL_PC7MFP_Msk          (0xful << SYS_GPC_MFPL_PC7MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC7MFP Mask              */

/* SYS GPC_MFPH Bit Field Definitions */
#define SYS_GPC_MFPH_PC8MFP_Pos          (0)                                               /*!< SYS_T::GPC_MFPH: PC8MFP Position          */
#define SYS_GPC_MFPH_PC8MFP_Msk          (0xful << SYS_GPC_MFPH_PC8MFP_Pos)                /*!< SYS_T::GPC_MFPH: PC8MFP Mask              */

#define SYS_GPC_MFPH_PC9MFP_Pos          (4)                                               /*!< SYS_T::GPC_MFPH: PC9MFP Position          */
#define SYS_GPC_MFPH_PC9MFP_Msk          (0xful << SYS_GPC_MFPH_PC9MFP_Pos)                /*!< SYS_T::GPC_MFPH: PC9MFP Mask              */

#define SYS_GPC_MFPH_PC10MFP_Pos         (8)                                               /*!< SYS_T::GPC_MFPH: PC10MFP Position         */
#define SYS_GPC_MFPH_PC10MFP_Msk         (0xful << SYS_GPC_MFPH_PC10MFP_Pos)               /*!< SYS_T::GPC_MFPH: PC10MFP Mask             */

#define SYS_GPC_MFPH_PC11MFP_Pos         (12)                                              /*!< SYS_T::GPC_MFPH: PC11MFP Position         */
#define SYS_GPC_MFPH_PC11MFP_Msk         (0xful << SYS_GPC_MFPH_PC11MFP_Pos)               /*!< SYS_T::GPC_MFPH: PC11MFP Mask             */

#define SYS_GPC_MFPH_PC12MFP_Pos         (16)                                              /*!< SYS_T::GPC_MFPH: PC12MFP Position         */
#define SYS_GPC_MFPH_PC12MFP_Msk         (0xful << SYS_GPC_MFPH_PC12MFP_Pos)               /*!< SYS_T::GPC_MFPH: PC12MFP Mask             */

#define SYS_GPC_MFPH_PC13MFP_Pos         (20)                                              /*!< SYS_T::GPC_MFPH: PC13MFP Position         */
#define SYS_GPC_MFPH_PC13MFP_Msk         (0xful << SYS_GPC_MFPH_PC13MFP_Pos)               /*!< SYS_T::GPC_MFPH: PC13MFP Mask             */

#define SYS_GPC_MFPH_PC14MFP_Pos         (24)                                              /*!< SYS_T::GPC_MFPH: PC14MFP Position         */
#define SYS_GPC_MFPH_PC14MFP_Msk         (0xful << SYS_GPC_MFPH_PC14MFP_Pos)               /*!< SYS_T::GPC_MFPH: PC14MFP Mask             */

#define SYS_GPC_MFPH_PC15MFP_Pos         (28)                                              /*!< SYS_T::GPC_MFPH: PC15MFP Position         */
#define SYS_GPC_MFPH_PC15MFP_Msk         (0xful << SYS_GPC_MFPH_PC15MFP_Pos)               /*!< SYS_T::GPC_MFPH: PC15MFP Mask             */

/* SYS GPD_MFPL Bit Field Definitions */
#define SYS_GPD_MFPL_PD0MFP_Pos          (0)                                               /*!< SYS_T::GPD_MFPL: PD0MFP Position          */
#define SYS_GPD_MFPL_PD0MFP_Msk          (0xful << SYS_GPD_MFPL_PD0MFP_Pos)                /*!< SYS_T::GPD_MFPL: PD0MFP Mask              */

#define SYS_GPD_MFPL_PD1MFP_Pos          (4)                                               /*!< SYS_T::GPD_MFPL: PD1MFP Position          */
#define SYS_GPD_MFPL_PD1MFP_Msk          (0xful << SYS_GPD_MFPL_PD1MFP_Pos)                /*!< SYS_T::GPD_MFPL: PD1MFP Mask              */

#define SYS_GPD_MFPL_PD2MFP_Pos          (8)                                               /*!< SYS_T::GPD_MFPL: PD2MFP Position          */
#define SYS_GPD_MFPL_PD2MFP_Msk          (0xful << SYS_GPD_MFPL_PD2MFP_Pos)                /*!< SYS_T::GPD_MFPL: PD2MFP Mask              */

#define SYS_GPD_MFPL_PD3MFP_Pos          (12)                                              /*!< SYS_T::GPD_MFPL: PD3MFP Position          */
#define SYS_GPD_MFPL_PD3MFP_Msk          (0xful << SYS_GPD_MFPL_PD3MFP_Pos)                /*!< SYS_T::GPD_MFPL: PD3MFP Mask              */

#define SYS_GPD_MFPL_PD4MFP_Pos          (16)                                              /*!< SYS_T::GPD_MFPL: PD4MFP Position          */
#define SYS_GPD_MFPL_PD4MFP_Msk          (0xful << SYS_GPD_MFPL_PD4MFP_Pos)                /*!< SYS_T::GPD_MFPL: PD4MFP Mask              */

#define SYS_GPD_MFPL_PD5MFP_Pos          (20)                                              /*!< SYS_T::GPD_MFPL: PD5MFP Position          */
#define SYS_GPD_MFPL_PD5MFP_Msk          (0xful << SYS_GPD_MFPL_PD5MFP_Pos)                /*!< SYS_T::GPD_MFPL: PD5MFP Mask              */

#define SYS_GPD_MFPL_PD6MFP_Pos          (24)                                              /*!< SYS_T::GPD_MFPL: PD6MFP Position          */
#define SYS_GPD_MFPL_PD6MFP_Msk          (0xful << SYS_GPD_MFPL_PD6MFP_Pos)                /*!< SYS_T::GPD_MFPL: PD6MFP Mask              */

#define SYS_GPD_MFPL_PD7MFP_Pos          (28)                                              /*!< SYS_T::GPD_MFPL: PD7MFP Position          */
#define SYS_GPD_MFPL_PD7MFP_Msk          (0xful << SYS_GPD_MFPL_PD7MFP_Pos)                /*!< SYS_T::GPD_MFPL: PD7MFP Mask              */

/* SYS GPD_MFPH Bit Field Definitions */
#define SYS_GPD_MFPH_PD8MFP_Pos          (0)                                               /*!< SYS_T::GPD_MFPH: PD8MFP Position          */
#define SYS_GPD_MFPH_PD8MFP_Msk          (0xful << SYS_GPD_MFPH_PD8MFP_Pos)                /*!< SYS_T::GPD_MFPH: PD8MFP Mask              */

#define SYS_GPD_MFPH_PD9MFP_Pos          (4)                                               /*!< SYS_T::GPD_MFPH: PD9MFP Position          */
#define SYS_GPD_MFPH_PD9MFP_Msk          (0xful << SYS_GPD_MFPH_PD9MFP_Pos)                /*!< SYS_T::GPD_MFPH: PD9MFP Mask              */

#define SYS_GPD_MFPH_PD10MFP_Pos         (8)                                               /*!< SYS_T::GPD_MFPH: PD10MFP Position         */
#define SYS_GPD_MFPH_PD10MFP_Msk         (0xful << SYS_GPD_MFPH_PD10MFP_Pos)              /*!< SYS_T::GPD_MFPH: PD10MFP Mask              */

#define SYS_GPD_MFPH_PD11MFP_Pos         (12)                                              /*!< SYS_T::GPD_MFPH: PD11MFP Position         */
#define SYS_GPD_MFPH_PD11MFP_Msk         (0xful << SYS_GPD_MFPH_PD11MFP_Pos)               /*!< SYS_T::GPD_MFPH: PD11MFP Mask             */

#define SYS_GPD_MFPH_PD12MFP_Pos         (16)                                              /*!< SYS_T::GPD_MFPH: PD12MFP Position         */
#define SYS_GPD_MFPH_PD12MFP_Msk         (0xful << SYS_GPD_MFPH_PD12MFP_Pos)               /*!< SYS_T::GPD_MFPH: PD12MFP Mask             */

#define SYS_GPD_MFPH_PD13MFP_Pos         (20)                                              /*!< SYS_T::GPD_MFPH: PD13MFP Position         */
#define SYS_GPD_MFPH_PD13MFP_Msk         (0xful << SYS_GPD_MFPH_PD13MFP_Pos)               /*!< SYS_T::GPD_MFPH: PD13MFP Mask             */

#define SYS_GPD_MFPH_PD14MFP_Pos         (24)                                              /*!< SYS_T::GPD_MFPH: PD14MFP Position         */
#define SYS_GPD_MFPH_PD14MFP_Msk         (0xful << SYS_GPD_MFPH_PD14MFP_Pos)               /*!< SYS_T::GPD_MFPH: PD14MFP Mask             */

#define SYS_GPD_MFPH_PD15MFP_Pos         (28)                                              /*!< SYS_T::GPD_MFPH: PD15MFP Position         */
#define SYS_GPD_MFPH_PD15MFP_Msk         (0xful << SYS_GPD_MFPH_PD15MFP_Pos)               /*!< SYS_T::GPD_MFPH: PD15MFP Mask             */

/* SYS GPE_MFPL Bit Field Definitions */
#define SYS_GPE_MFPL_PE0MFP_Pos          (0)                                               /*!< SYS_T::GPE_MFPL: PE0MFP Position          */
#define SYS_GPE_MFPL_PE0MFP_Msk          (0xful << SYS_GPE_MFPL_PE0MFP_Pos)                /*!< SYS_T::GPE_MFPL: PE0MFP Mask              */

#define SYS_GPE_MFPL_PE1MFP_Pos          (4)                                               /*!< SYS_T::GPE_MFPL: PE1MFP Position          */
#define SYS_GPE_MFPL_PE1MFP_Msk          (0xful << SYS_GPE_MFPL_PE1MFP_Pos)                /*!< SYS_T::GPE_MFPL: PE1MFP Mask              */

#define SYS_GPE_MFPL_PE2MFP_Pos          (8)                                               /*!< SYS_T::GPE_MFPL: PE2MFP Position          */
#define SYS_GPE_MFPL_PE2MFP_Msk          (0xful << SYS_GPE_MFPL_PE2MFP_Pos)                /*!< SYS_T::GPE_MFPL: PE2MFP Mask              */

#define SYS_GPE_MFPL_PE3MFP_Pos          (12)                                              /*!< SYS_T::GPE_MFPL: PE3MFP Position          */
#define SYS_GPE_MFPL_PE3MFP_Msk          (0xful << SYS_GPE_MFPL_PE3MFP_Pos)                /*!< SYS_T::GPE_MFPL: PE3MFP Mask              */

#define SYS_GPE_MFPL_PE4MFP_Pos          (16)                                              /*!< SYS_T::GPE_MFPL: PE4MFP Position          */
#define SYS_GPE_MFPL_PE4MFP_Msk          (0xful << SYS_GPE_MFPL_PE4MFP_Pos)                /*!< SYS_T::GPE_MFPL: PE4MFP Mask              */

#define SYS_GPE_MFPL_PE5MFP_Pos          (20)                                              /*!< SYS_T::GPE_MFPL: PE5MFP Position          */
#define SYS_GPE_MFPL_PE5MFP_Msk          (0xful << SYS_GPE_MFPL_PE5MFP_Pos)                /*!< SYS_T::GPE_MFPL: PE5MFP Mask              */

#define SYS_GPE_MFPL_PE6MFP_Pos          (24)                                              /*!< SYS_T::GPE_MFPL: PE6MFP Position          */
#define SYS_GPE_MFPL_PE6MFP_Msk          (0xful << SYS_GPE_MFPL_PE6MFP_Pos)                /*!< SYS_T::GPE_MFPL: PE6MFP Mask              */

#define SYS_GPE_MFPL_PE7MFP_Pos          (28)                                              /*!< SYS_T::GPE_MFPL: PE7MFP Position          */
#define SYS_GPE_MFPL_PE7MFP_Msk          (0xful << SYS_GPE_MFPL_PE7MFP_Pos)                /*!< SYS_T::GPE_MFPL: PE7MFP Mask              */

/* SYS GPE_MFPH Bit Field Definitions */
#define SYS_GPE_MFPH_PE8MFP_Pos          (0)                                               /*!< SYS_T::GPE_MFPH: PE8MFP Position          */
#define SYS_GPE_MFPH_PE8MFP_Msk          (0xful << SYS_GPE_MFPH_PE8MFP_Pos)                /*!< SYS_T::GPE_MFPH: PE8MFP Mask              */

#define SYS_GPE_MFPH_PE9MFP_Pos          (4)                                               /*!< SYS_T::GPE_MFPH: PE9MFP Position          */
#define SYS_GPE_MFPH_PE9MFP_Msk          (0xful << SYS_GPE_MFPH_PE9MFP_Pos)                /*!< SYS_T::GPE_MFPH: PE9MFP Mask              */

#define SYS_GPE_MFPH_PE10MFP_Pos         (8)                                               /*!< SYS_T::GPE_MFPH: PE10MFP Position         */
#define SYS_GPE_MFPH_PE10MFP_Msk         (0xful << SYS_GPE_MFPH_PE10MFP_Pos)               /*!< SYS_T::GPE_MFPH: PE10MFP Mask             */

#define SYS_GPE_MFPH_PE11MFP_Pos         (12)                                              /*!< SYS_T::GPE_MFPH: PE11MFP Position         */
#define SYS_GPE_MFPH_PE11MFP_Msk         (0xful << SYS_GPE_MFPH_PE11MFP_Pos)               /*!< SYS_T::GPE_MFPH: PE11MFP Mask             */

#define SYS_GPE_MFPH_PE12MFP_Pos         (16)                                              /*!< SYS_T::GPE_MFPH: PE12MFP Position         */
#define SYS_GPE_MFPH_PE12MFP_Msk         (0xful << SYS_GPE_MFPH_PE12MFP_Pos)               /*!< SYS_T::GPE_MFPH: PE12MFP Mask             */

#define SYS_GPE_MFPH_PE13MFP_Pos         (20)                                              /*!< SYS_T::GPE_MFPH: PE13MFP Position         */
#define SYS_GPE_MFPH_PE13MFP_Msk         (0xful << SYS_GPE_MFPH_PE13MFP_Pos)               /*!< SYS_T::GPE_MFPH: PE13MFP Mask             */

#define SYS_GPE_MFPH_PE14MFP_Pos         (24)                                              /*!< SYS_T::GPE_MFPH: PE14MFP Position         */
#define SYS_GPE_MFPH_PE14MFP_Msk         (0xful << SYS_GPE_MFPH_PE14MFP_Pos)               /*!< SYS_T::GPE_MFPH: PE14MFP Mask             */

#define SYS_GPE_MFPH_PE15MFP_Pos         (28)                                              /*!< SYS_T::GPE_MFPH: PE15MFP Position         */
#define SYS_GPE_MFPH_PE15MFP_Msk         (0xful << SYS_GPE_MFPH_PE15MFP_Pos)               /*!< SYS_T::GPE_MFPH: PE15MFP Mask             */

/* SYS GPF_MFPL Bit Field Definitions */
#define SYS_GPF_MFPL_PF0MFP_Pos          (0)                                               /*!< SYS_T::GPF_MFPL: PF0MFP Position          */
#define SYS_GPF_MFPL_PF0MFP_Msk          (0xful << SYS_GPF_MFPL_PF0MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF0MFP Mask              */

#define SYS_GPF_MFPL_PF1MFP_Pos          (4)                                               /*!< SYS_T::GPF_MFPL: PF1MFP Position          */
#define SYS_GPF_MFPL_PF1MFP_Msk          (0xful << SYS_GPF_MFPL_PF1MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF1MFP Mask              */

#define SYS_GPF_MFPL_PF2MFP_Pos          (8)                                               /*!< SYS_T::GPF_MFPL: PF2MFP Position          */
#define SYS_GPF_MFPL_PF2MFP_Msk          (0xful << SYS_GPF_MFPL_PF2MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF2MFP Mask              */

#define SYS_GPF_MFPL_PF3MFP_Pos          (12)                                              /*!< SYS_T::GPF_MFPL: PF3MFP Position          */
#define SYS_GPF_MFPL_PF3MFP_Msk          (0xful << SYS_GPF_MFPL_PF3MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF3MFP Mask              */

#define SYS_GPF_MFPL_PF4MFP_Pos          (16)                                              /*!< SYS_T::GPF_MFPL: PF4MFP Position          */
#define SYS_GPF_MFPL_PF4MFP_Msk          (0xful << SYS_GPF_MFPL_PF4MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF4MFP Mask              */

#define SYS_GPF_MFPL_PF5MFP_Pos          (20)                                              /*!< SYS_T::GPF_MFPL: PF5MFP Position          */
#define SYS_GPF_MFPL_PF5MFP_Msk          (0xful << SYS_GPF_MFPL_PF5MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF5MFP Mask              */

#define SYS_GPF_MFPL_PF6MFP_Pos          (24)                                              /*!< SYS_T::GPF_MFPL: PF6MFP Position          */
#define SYS_GPF_MFPL_PF6MFP_Msk          (0xful << SYS_GPF_MFPL_PF6MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF6MFP Mask              */

#define SYS_GPF_MFPL_PF7MFP_Pos          (28)                                              /*!< SYS_T::GPF_MFPL: PF7MFP Position          */
#define SYS_GPF_MFPL_PF7MFP_Msk          (0xful << SYS_GPF_MFPL_PF7MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF7MFP Mask              */

/* SYS GPF_MFPH Bit Field Definitions */
#define SYS_GPF_MFPH_PF8MFP_Pos          (0)                                               /*!< SYS_T::GPF_MFPH: PF8MFP Position          */
#define SYS_GPF_MFPH_PF8MFP_Msk          (0xful << SYS_GPF_MFPH_PF8MFP_Pos)                /*!< SYS_T::GPF_MFPH: PF8MFP Mask              */

#define SYS_GPF_MFPH_PF9MFP_Pos          (4)                                               /*!< SYS_T::GPF_MFPH: PF9MFP Position          */
#define SYS_GPF_MFPH_PF9MFP_Msk          (0xful << SYS_GPF_MFPH_PF9MFP_Pos)                /*!< SYS_T::GPF_MFPH: PF9MFP Mask              */

#define SYS_GPF_MFPH_PF10MFP_Pos         (8)                                               /*!< SYS_T::GPF_MFPH: PF10MFP Position         */
#define SYS_GPF_MFPH_PF10MFP_Msk         (0xful << SYS_GPF_MFPH_PF10MFP_Pos)               /*!< SYS_T::GPF_MFPH: PF10MFP Mask             */

#define SYS_GPF_MFPH_PF11MFP_Pos         (12)                                              /*!< SYS_T::GPF_MFPH: PF11MFP Position         */
#define SYS_GPF_MFPH_PF11MFP_Msk         (0xful << SYS_GPF_MFPH_PF11MFP_Pos)               /*!< SYS_T::GPF_MFPH: PF11MFP Mask             */

#define SYS_GPF_MFPH_PF12MFP_Pos         (16)                                              /*!< SYS_T::GPF_MFPH: PF12MFP Position         */
#define SYS_GPF_MFPH_PF12MFP_Msk         (0xful << SYS_GPF_MFPH_PF12MFP_Pos)               /*!< SYS_T::GPF_MFPH: PF12MFP Mask             */

#define SYS_GPF_MFPH_PF13MFP_Pos         (20)                                              /*!< SYS_T::GPF_MFPH: PF13MFP Position         */
#define SYS_GPF_MFPH_PF13MFP_Msk         (0xful << SYS_GPF_MFPH_PF13MFP_Pos)               /*!< SYS_T::GPF_MFPH: PF13MFP Mask             */

#define SYS_GPF_MFPH_PF14MFP_Pos         (24)                                              /*!< SYS_T::GPF_MFPH: PF14MFP Position         */
#define SYS_GPF_MFPH_PF14MFP_Msk         (0xful << SYS_GPF_MFPH_PF14MFP_Pos)               /*!< SYS_T::GPF_MFPH: PF14MFP Mask             */

#define SYS_GPF_MFPH_PF15MFP_Pos         (28)                                              /*!< SYS_T::GPF_MFPH: PF15MFP Position         */
#define SYS_GPF_MFPH_PF15MFP_Msk         (0xful << SYS_GPF_MFPH_PF15MFP_Pos)               /*!< SYS_T::GPF_MFPH: PF15MFP Mask             */

/* SYS GPG_MFPL Bit Field Definitions */
#define SYS_GPG_MFPL_PG0MFP_Pos          (0)                                               /*!< SYS_T::GPG_MFPL: PG0MFP Position          */
#define SYS_GPG_MFPL_PG0MFP_Msk          (0xful << SYS_GPG_MFPL_PG0MFP_Pos)                /*!< SYS_T::GPG_MFPL: PG0MFP Mask              */

#define SYS_GPG_MFPL_PG1MFP_Pos          (4)                                               /*!< SYS_T::GPG_MFPL: PG1MFP Position          */
#define SYS_GPG_MFPL_PG1MFP_Msk          (0xful << SYS_GPG_MFPL_PG1MFP_Pos)                /*!< SYS_T::GPG_MFPL: PG1MFP Mask              */

#define SYS_GPG_MFPL_PG2MFP_Pos          (8)                                               /*!< SYS_T::GPG_MFPL: PG2MFP Position          */
#define SYS_GPG_MFPL_PG2MFP_Msk          (0xful << SYS_GPG_MFPL_PG2MFP_Pos)                /*!< SYS_T::GPG_MFPL: PG2MFP Mask              */

#define SYS_GPG_MFPL_PG3MFP_Pos          (12)                                              /*!< SYS_T::GPG_MFPL: PG3MFP Position          */
#define SYS_GPG_MFPL_PG3MFP_Msk          (0xful << SYS_GPG_MFPL_PG3MFP_Pos)                /*!< SYS_T::GPG_MFPL: PG3MFP Mask              */

#define SYS_GPG_MFPL_PG4MFP_Pos          (16)                                              /*!< SYS_T::GPG_MFPL: PG4MFP Position          */
#define SYS_GPG_MFPL_PG4MFP_Msk          (0xful << SYS_GPG_MFPL_PG4MFP_Pos)                /*!< SYS_T::GPG_MFPL: PG4MFP Mask              */

#define SYS_GPG_MFPL_PG5MFP_Pos          (20)                                              /*!< SYS_T::GPG_MFPL: PG5MFP Position          */
#define SYS_GPG_MFPL_PG5MFP_Msk          (0xful << SYS_GPG_MFPL_PG5MFP_Pos)                /*!< SYS_T::GPG_MFPL: PG5MFP Mask              */

#define SYS_GPG_MFPL_PG6MFP_Pos          (24)                                              /*!< SYS_T::GPG_MFPL: PG6MFP Position          */
#define SYS_GPG_MFPL_PG6MFP_Msk          (0xful << SYS_GPG_MFPL_PG6MFP_Pos)                /*!< SYS_T::GPG_MFPL: PG6MFP Mask              */

#define SYS_GPG_MFPL_PG7MFP_Pos          (28)                                              /*!< SYS_T::GPG_MFPL: PG7MFP Position          */
#define SYS_GPG_MFPL_PG7MFP_Msk          (0xful << SYS_GPG_MFPL_PG7MFP_Pos)                /*!< SYS_T::GPG_MFPL: PG7MFP Mask              */

/* SYS GPG_MFPH Bit Field Definitions */
#define SYS_GPG_MFPH_PG8MFP_Pos          (0)                                               /*!< SYS_T::GPG_MFPH: PG8MFP Position          */
#define SYS_GPG_MFPH_PG8MFP_Msk          (0xful << SYS_GPG_MFPH_PG8MFP_Pos)                /*!< SYS_T::GPG_MFPH: PG8MFP Mask              */

#define SYS_GPG_MFPH_PG9MFP_Pos          (4)                                               /*!< SYS_T::GPG_MFPH: PG9MFP Position          */
#define SYS_GPG_MFPH_PG9MFP_Msk          (0xful << SYS_GPG_MFPH_PG9MFP_Pos)                /*!< SYS_T::GPG_MFPH: PG9MFP Mask              */

#define SYS_GPG_MFPH_PG10MFP_Pos         (8)                                               /*!< SYS_T::GPG_MFPH: PG10MFP Position         */
#define SYS_GPG_MFPH_PG10MFP_Msk         (0xful << SYS_GPG_MFPH_PG10MFP_Pos)               /*!< SYS_T::GPG_MFPH: PG10MFP Mask             */

#define SYS_GPG_MFPH_PG11MFP_Pos         (12)                                              /*!< SYS_T::GPG_MFPH: PG11MFP Position         */
#define SYS_GPG_MFPH_PG11MFP_Msk         (0xful << SYS_GPG_MFPH_PG11MFP_Pos)               /*!< SYS_T::GPG_MFPH: PG11MFP Mask             */

#define SYS_GPG_MFPH_PG12MFP_Pos         (16)                                              /*!< SYS_T::GPG_MFPH: PG12MFP Position         */
#define SYS_GPG_MFPH_PG12MFP_Msk         (0xful << SYS_GPG_MFPH_PG12MFP_Pos)               /*!< SYS_T::GPG_MFPH: PG12MFP Mask             */

#define SYS_GPG_MFPH_PG13MFP_Pos         (20)                                              /*!< SYS_T::GPG_MFPH: PG13MFP Position         */
#define SYS_GPG_MFPH_PG13MFP_Msk         (0xful << SYS_GPG_MFPH_PG13MFP_Pos)               /*!< SYS_T::GPG_MFPH: PG13MFP Mask             */

#define SYS_GPG_MFPH_PG14MFP_Pos         (24)                                              /*!< SYS_T::GPG_MFPH: PG14MFP Position         */
#define SYS_GPG_MFPH_PG14MFP_Msk         (0xful << SYS_GPG_MFPH_PG14MFP_Pos)               /*!< SYS_T::GPG_MFPH: PG14MFP Mask             */

#define SYS_GPG_MFPH_PG15MFP_Pos         (28)                                              /*!< SYS_T::GPG_MFPH: PG15MFP Position         */
#define SYS_GPG_MFPH_PG15MFP_Msk         (0xful << SYS_GPG_MFPH_PG15MFP_Pos)               /*!< SYS_T::GPG_MFPH: PG15MFP Mask             */

/* SYS GPH_MFPL Bit Field Definitions */
#define SYS_GPH_MFPL_PH0MFP_Pos          (0)                                               /*!< SYS_T::GPH_MFPL: PH0MFP Position          */
#define SYS_GPH_MFPL_PH0MFP_Msk          (0xful << SYS_GPH_MFPL_PH0MFP_Pos)                /*!< SYS_T::GPH_MFPL: PH0MFP Mask              */

#define SYS_GPH_MFPL_PH1MFP_Pos          (4)                                               /*!< SYS_T::GPH_MFPL: PH1MFP Position          */
#define SYS_GPH_MFPL_PH1MFP_Msk          (0xful << SYS_GPH_MFPL_PH1MFP_Pos)                /*!< SYS_T::GPH_MFPL: PH1MFP Mask              */

#define SYS_GPH_MFPL_PH2MFP_Pos          (8)                                               /*!< SYS_T::GPH_MFPL: PH2MFP Position          */
#define SYS_GPH_MFPL_PH2MFP_Msk          (0xful << SYS_GPH_MFPL_PH2MFP_Pos)                /*!< SYS_T::GPH_MFPL: PH2MFP Mask              */

#define SYS_GPH_MFPL_PH3MFP_Pos          (12)                                              /*!< SYS_T::GPH_MFPL: PH3MFP Position          */
#define SYS_GPH_MFPL_PH3MFP_Msk          (0xful << SYS_GPH_MFPL_PH3MFP_Pos)                /*!< SYS_T::GPH_MFPL: PH3MFP Mask              */

#define SYS_GPH_MFPL_PH4MFP_Pos          (16)                                              /*!< SYS_T::GPH_MFPL: PH4MFP Position          */
#define SYS_GPH_MFPL_PH4MFP_Msk          (0xful << SYS_GPH_MFPL_PH4MFP_Pos)                /*!< SYS_T::GPH_MFPL: PH4MFP Mask              */

#define SYS_GPH_MFPL_PH5MFP_Pos          (20)                                              /*!< SYS_T::GPH_MFPL: PH5MFP Position          */
#define SYS_GPH_MFPL_PH5MFP_Msk          (0xful << SYS_GPH_MFPL_PH5MFP_Pos)                /*!< SYS_T::GPH_MFPL: PH5MFP Mask              */

#define SYS_GPH_MFPL_PH6MFP_Pos          (24)                                              /*!< SYS_T::GPH_MFPL: PH6MFP Position          */
#define SYS_GPH_MFPL_PH6MFP_Msk          (0xful << SYS_GPH_MFPL_PH6MFP_Pos)                /*!< SYS_T::GPH_MFPL: PH6MFP Mask              */

#define SYS_GPH_MFPL_PH7MFP_Pos          (28)                                              /*!< SYS_T::GPH_MFPL: PH7MFP Position          */
#define SYS_GPH_MFPL_PH7MFP_Msk          (0xful << SYS_GPH_MFPL_PH7MFP_Pos)                /*!< SYS_T::GPH_MFPL: PH7MFP Mask              */

/* SYS GPH_MFPH Bit Field Definitions */
#define SYS_GPH_MFPH_PH8MFP_Pos          (0)                                               /*!< SYS_T::GPH_MFPH: PH8MFP Position          */
#define SYS_GPH_MFPH_PH8MFP_Msk          (0xful << SYS_GPH_MFPH_PH8MFP_Pos)                /*!< SYS_T::GPH_MFPH: PH8MFP Mask              */

#define SYS_GPH_MFPH_PH9MFP_Pos          (4)                                               /*!< SYS_T::GPH_MFPH: PH9MFP Position          */
#define SYS_GPH_MFPH_PH9MFP_Msk          (0xful << SYS_GPH_MFPH_PH9MFP_Pos)                /*!< SYS_T::GPH_MFPH: PH9MFP Mask              */

#define SYS_GPH_MFPH_PH10MFP_Pos         (8)                                               /*!< SYS_T::GPH_MFPH: PH10MFP Position         */
#define SYS_GPH_MFPH_PH10MFP_Msk         (0xful << SYS_GPH_MFPH_PH10MFP_Pos)               /*!< SYS_T::GPH_MFPH: PH10MFP Mask             */

#define SYS_GPH_MFPH_PH11MFP_Pos         (12)                                              /*!< SYS_T::GPH_MFPH: PH11MFP Position         */
#define SYS_GPH_MFPH_PH11MFP_Msk         (0xful << SYS_GPH_MFPH_PH11MFP_Pos)               /*!< SYS_T::GPH_MFPH: PH11MFP Mask             */

#define SYS_GPH_MFPH_PH12MFP_Pos         (16)                                              /*!< SYS_T::GPH_MFPH: PH12MFP Position         */
#define SYS_GPH_MFPH_PH12MFP_Msk         (0xful << SYS_GPH_MFPH_PH12MFP_Pos)               /*!< SYS_T::GPH_MFPH: PH12MFP Mask             */

#define SYS_GPH_MFPH_PH13MFP_Pos         (20)                                              /*!< SYS_T::GPH_MFPH: PH13MFP Position         */
#define SYS_GPH_MFPH_PH13MFP_Msk         (0xful << SYS_GPH_MFPH_PH13MFP_Pos)               /*!< SYS_T::GPH_MFPH: PH13MFP Mask             */

#define SYS_GPH_MFPH_PH14MFP_Pos         (24)                                              /*!< SYS_T::GPH_MFPH: PH14MFP Position         */
#define SYS_GPH_MFPH_PH14MFP_Msk         (0xful << SYS_GPH_MFPH_PH14MFP_Pos)               /*!< SYS_T::GPH_MFPH: PH14MFP Mask             */

#define SYS_GPH_MFPH_PH15MFP_Pos         (28)                                              /*!< SYS_T::GPH_MFPH: PH15MFP Position         */
#define SYS_GPH_MFPH_PH15MFP_Msk         (0xful << SYS_GPH_MFPH_PH15MFP_Pos)               /*!< SYS_T::GPH_MFPH: PH15MFP Mask             */


/* SYS GPI_MFPL Bit Field Definitions */
#define SYS_GPI_MFPL_PI0MFP_Pos          (0)                                               /*!< SYS_T::GPI_MFPL: PI0MFP Position          */
#define SYS_GPI_MFPL_PI0MFP_Msk          (0xful << SYS_GPI_MFPL_PI0MFP_Pos)                /*!< SYS_T::GPI_MFPL: PI0MFP Mask              */

#define SYS_GPI_MFPL_PI1MFP_Pos          (4)                                               /*!< SYS_T::GPI_MFPL: PI1MFP Position          */
#define SYS_GPI_MFPL_PI1MFP_Msk          (0xful << SYS_GPI_MFPL_PI1MFP_Pos)                /*!< SYS_T::GPI_MFPL: PI1MFP Mask              */

#define SYS_GPI_MFPL_PI2MFP_Pos          (8)                                               /*!< SYS_T::GPI_MFPL: PI2MFP Position          */
#define SYS_GPI_MFPL_PI2MFP_Msk          (0xful << SYS_GPI_MFPL_PI2MFP_Pos)                /*!< SYS_T::GPI_MFPL: PI2MFP Mask              */

#define SYS_GPI_MFPL_PI3MFP_Pos          (12)                                              /*!< SYS_T::GPI_MFPL: PI3MFP Position          */
#define SYS_GPI_MFPL_PI3MFP_Msk          (0xful << SYS_GPI_MFPL_PI3MFP_Pos)                /*!< SYS_T::GPI_MFPL: PI3MFP Mask              */

#define SYS_GPI_MFPL_PI4MFP_Pos          (16)                                              /*!< SYS_T::GPI_MFPL: PI4MFP Position          */
#define SYS_GPI_MFPL_PI4MFP_Msk          (0xful << SYS_GPI_MFPL_PI4MFP_Pos)                /*!< SYS_T::GPI_MFPL: PI4MFP Mask              */

#define SYS_GPI_MFPL_PI5MFP_Pos          (20)                                              /*!< SYS_T::GPI_MFPL: PI5MFP Position          */
#define SYS_GPI_MFPL_PI5MFP_Msk          (0xful << SYS_GPI_MFPL_PI5MFP_Pos)                /*!< SYS_T::GPI_MFPL: PI5MFP Mask              */

#define SYS_GPI_MFPL_PI6MFP_Pos          (24)                                              /*!< SYS_T::GPI_MFPL: PI6MFP Position          */
#define SYS_GPI_MFPL_PI6MFP_Msk          (0xful << SYS_GPI_MFPL_PI6MFP_Pos)                /*!< SYS_T::GPI_MFPL: PI6MFP Mask              */

#define SYS_GPI_MFPL_PI7MFP_Pos          (28)                                              /*!< SYS_T::GPI_MFPL: PI7MFP Position          */
#define SYS_GPI_MFPL_PI7MFP_Msk          (0xful << SYS_GPI_MFPL_PI7MFP_Pos)                /*!< SYS_T::GPI_MFPL: PI7MFP Mask              */

/* SYS GPI_MFPH Bit Field Definitions */
#define SYS_GPI_MFPH_PI8MFP_Pos          (0)                                               /*!< SYS_T::GPI_MFPH: PI8MFP Position          */
#define SYS_GPI_MFPH_PI8MFP_Msk          (0xful << SYS_GPI_MFPH_PI8MFP_Pos)                /*!< SYS_T::GPI_MFPH: PI8MFP Mask              */

#define SYS_GPI_MFPH_PI9MFP_Pos          (4)                                               /*!< SYS_T::GPI_MFPH: PI9MFP Position          */
#define SYS_GPI_MFPH_PI9MFP_Msk          (0xful << SYS_GPI_MFPH_PI9MFP_Pos)                /*!< SYS_T::GPI_MFPH: PI9MFP Mask              */

#define SYS_GPI_MFPH_PI10MFP_Pos         (8)                                               /*!< SYS_T::GPI_MFPH: PI10MFP Position         */
#define SYS_GPI_MFPH_PI10MFP_Msk         (0xful << SYS_GPI_MFPH_PI10MFP_Pos)               /*!< SYS_T::GPI_MFPH: PI10MFP Mask             */

#define SYS_GPI_MFPH_PI11MFP_Pos         (12)                                              /*!< SYS_T::GPI_MFPH: PI11MFP Position         */
#define SYS_GPI_MFPH_PI11MFP_Msk         (0xful << SYS_GPI_MFPH_PI11MFP_Pos)               /*!< SYS_T::GPI_MFPH: PI11MFP Mask             */

#define SYS_GPI_MFPH_PI12MFP_Pos         (16)                                              /*!< SYS_T::GPI_MFPH: PI12MFP Position         */
#define SYS_GPI_MFPH_PI12MFP_Msk         (0xful << SYS_GPI_MFPH_PI12MFP_Pos)               /*!< SYS_T::GPI_MFPH: PI12MFP Mask             */

#define SYS_GPI_MFPH_PI13MFP_Pos         (20)                                              /*!< SYS_T::GPI_MFPH: PI13MFP Position         */
#define SYS_GPI_MFPH_PI13MFP_Msk         (0xful << SYS_GPI_MFPH_PI13MFP_Pos)               /*!< SYS_T::GPI_MFPH: PI13MFP Mask             */

#define SYS_GPI_MFPH_PI14MFP_Pos         (24)                                              /*!< SYS_T::GPI_MFPH: PI14MFP Position         */
#define SYS_GPI_MFPH_PI14MFP_Msk         (0xful << SYS_GPI_MFPH_PI14MFP_Pos)               /*!< SYS_T::GPI_MFPH: PI14MFP Mask             */

#define SYS_GPI_MFPH_PI15MFP_Pos         (28)                                              /*!< SYS_T::GPI_MFPH: PI15MFP Position         */
#define SYS_GPI_MFPH_PI15MFP_Msk         (0xful << SYS_GPI_MFPH_PI15MFP_Pos)               /*!< SYS_T::GPI_MFPH: PI15MFP Mask             */

/* SYS GPJ_MFPL Bit Field Definitions */
#define SYS_GPJ_MFPL_PJ0MFP_Pos          (0)                                               /*!< SYS_T::GPJ_MFPL: PJ0MFP Position          */
#define SYS_GPJ_MFPL_PJ0MFP_Msk          (0xful << SYS_GPJ_MFPL_PJ0MFP_Pos)                /*!< SYS_T::GPJ_MFPL: PJ0MFP Mask              */

#define SYS_GPJ_MFPL_PJ1MFP_Pos          (4)                                               /*!< SYS_T::GPJ_MFPL: PJ1MFP Position          */
#define SYS_GPJ_MFPL_PJ1MFP_Msk          (0xful << SYS_GPJ_MFPL_PJ1MFP_Pos)                /*!< SYS_T::GPJ_MFPL: PJ1MFP Mask              */

#define SYS_GPJ_MFPL_PJ2MFP_Pos          (8)                                               /*!< SYS_T::GPJ_MFPL: PJ2MFP Position          */
#define SYS_GPJ_MFPL_PJ2MFP_Msk          (0xful << SYS_GPJ_MFPL_PJ2MFP_Pos)                /*!< SYS_T::GPJ_MFPL: PJ2MFP Mask              */

#define SYS_GPJ_MFPL_PJ3MFP_Pos          (12)                                              /*!< SYS_T::GPJ_MFPL: PJ3MFP Position          */
#define SYS_GPJ_MFPL_PJ3MFP_Msk          (0xful << SYS_GPJ_MFPL_PJ3MFP_Pos)                /*!< SYS_T::GPJ_MFPL: PJ3MFP Mask              */

#define SYS_GPJ_MFPL_PJ4MFP_Pos          (16)                                              /*!< SYS_T::GPJ_MFPL: PJ4MFP Position          */
#define SYS_GPJ_MFPL_PJ4MFP_Msk          (0xful << SYS_GPJ_MFPL_PJ4MFP_Pos)                /*!< SYS_T::GPJ_MFPL: PJ4MFP Mask              */

#define SYS_GPJ_MFPL_PJ5MFP_Pos          (20)                                              /*!< SYS_T::GPI_MFPL: PJ5MFP Position          */
#define SYS_GPJ_MFPL_PJ5MFP_Msk          (0xful << SYS_GPJ_MFPL_PJ5MFP_Pos)                /*!< SYS_T::GPJ_MFPL: PJ5MFP Mask              */

#define SYS_GPJ_MFPL_PJ6MFP_Pos          (24)                                              /*!< SYS_T::GPJ_MFPL: PJ6MFP Position          */
#define SYS_GPJ_MFPL_PJ6MFP_Msk          (0xful << SYS_GPJ_MFPL_PJ6MFP_Pos)                /*!< SYS_T::GPJ_MFPL: PJ6MFP Mask              */

#define SYS_GPJ_MFPL_PJ7MFP_Pos          (28)                                              /*!< SYS_T::GPJ_MFPL: PJ7MFP Position          */
#define SYS_GPJ_MFPL_PJ7MFP_Msk          (0xful << SYS_GPJ_MFPL_PJ7MFP_Pos)                /*!< SYS_T::GPJ_MFPL: PJ7MFP Mask              */

/* SYS GPJ_MFPH Bit Field Definitions */
#define SYS_GPJ_MFPH_PJ8MFP_Pos          (0)                                               /*!< SYS_T::GPJ_MFPH: PJ8MFP Position          */
#define SYS_GPJ_MFPH_PJ8MFP_Msk          (0xful << SYS_GPJ_MFPH_PJ8MFP_Pos)                /*!< SYS_T::GPJ_MFPH: PJ8MFP Mask              */

#define SYS_GPJ_MFPH_PJ9MFP_Pos          (4)                                               /*!< SYS_T::GPJ_MFPH: PJ9MFP Position          */
#define SYS_GPJ_MFPH_PJ9MFP_Msk          (0xful << SYS_GPJ_MFPH_PJ9MFP_Pos)                /*!< SYS_T::GPJ_MFPH: PJ9MFP Mask              */

#define SYS_GPJ_MFPH_PJ10MFP_Pos         (8)                                               /*!< SYS_T::GPJ_MFPH: PJ10MFP Position         */
#define SYS_GPJ_MFPH_PJ10MFP_Msk         (0xful << SYS_GPJ_MFPH_PJ10MFP_Pos)               /*!< SYS_T::GPJ_MFPH: PJ10MFP Mask             */

#define SYS_GPJ_MFPH_PJ11MFP_Pos         (12)                                              /*!< SYS_T::GPJ_MFPH: PJ11MFP Position         */
#define SYS_GPJ_MFPH_PJ11MFP_Msk         (0xful << SYS_GPJ_MFPH_PJ11MFP_Pos)               /*!< SYS_T::GPJ_MFPH: PJ11MFP Mask             */

#define SYS_GPJ_MFPH_PJ12MFP_Pos         (16)                                              /*!< SYS_T::GPJ_MFPH: PJ12MFP Position         */
#define SYS_GPJ_MFPH_PJ12MFP_Msk         (0xful << SYS_GPJ_MFPH_PJ12MFP_Pos)               /*!< SYS_T::GPJ_MFPH: PJ12MFP Mask             */

#define SYS_GPJ_MFPH_PJ13MFP_Pos         (20)                                              /*!< SYS_T::GPJ_MFPH: PJ13MFP Position         */
#define SYS_GPJ_MFPH_PJ13MFP_Msk         (0xful << SYS_GPJ_MFPH_PJ13MFP_Pos)               /*!< SYS_T::GPJ_MFPH: PJ13MFP Mask             */

#define SYS_GPJ_MFPH_PJ14MFP_Pos         (24)                                              /*!< SYS_T::GPJ_MFPH: PJ14MFP Position         */
#define SYS_GPJ_MFPH_PJ14MFP_Msk         (0xful << SYS_GPJ_MFPH_PJ14MFP_Pos)               /*!< SYS_T::GPJ_MFPH: PJ14MFP Mask             */

#define SYS_GPJ_MFPH_PJ15MFP_Pos         (28)                                              /*!< SYS_T::GPJ_MFPH: PJ15MFP Position         */
#define SYS_GPJ_MFPH_PJ15MFP_Msk         (0xful << SYS_GPJ_MFPH_PJ15MFP_Pos)               /*!< SYS_T::GPJ_MFPH: PJ15MFP Mask   */

/* SYS GPK_MFPL Bit Field Definitions */
#define SYS_GPK_MFPL_PK0MFP_Pos          (0)                                               /*!< SYS_T::GPK_MFPL: PK0MFP Position          */
#define SYS_GPK_MFPL_PK0MFP_Msk          (0xful << SYS_GPK_MFPL_PK0MFP_Pos)                /*!< SYS_T::GPK_MFPL: PK0MFP Mask              */

#define SYS_GPK_MFPL_PK1MFP_Pos          (4)                                               /*!< SYS_T::GPK_MFPL: PK1MFP Position          */
#define SYS_GPK_MFPL_PK1MFP_Msk          (0xful << SYS_GPK_MFPL_PK1MFP_Pos)                /*!< SYS_T::GPK_MFPL: PK1MFP Mask              */

#define SYS_GPK_MFPL_PK2MFP_Pos          (8)                                               /*!< SYS_T::GPK_MFPL: PK2MFP Position          */
#define SYS_GPK_MFPL_PK2MFP_Msk          (0xful << SYS_GPK_MFPL_PK2MFP_Pos)                /*!< SYS_T::GPK_MFPL: PK2MFP Mask              */

#define SYS_GPK_MFPL_PK3MFP_Pos          (12)                                              /*!< SYS_T::GPK_MFPL: PK3MFP Position          */
#define SYS_GPK_MFPL_PK3MFP_Msk          (0xful << SYS_GPK_MFPL_PK3MFP_Pos)                /*!< SYS_T::GPK_MFPL: PK3MFP Mask              */

#define SYS_GPK_MFPL_PK4MFP_Pos          (16)                                              /*!< SYS_T::GPK_MFPL: PK4MFP Position          */
#define SYS_GPK_MFPL_PK4MFP_Msk          (0xful << SYS_GPK_MFPL_PK4MFP_Pos)                /*!< SYS_T::GPK_MFPL: PK4MFP Mask              */

#define SYS_GPK_MFPL_PK5MFP_Pos          (20)                                              /*!< SYS_T::GPK_MFPL: PK5MFP Position          */
#define SYS_GPK_MFPL_PK5MFP_Msk          (0xful << SYS_GPK_MFPL_PK5MFP_Pos)                /*!< SYS_T::GPK_MFPL: PK5MFP Mask              */

#define SYS_GPK_MFPL_PK6MFP_Pos          (24)                                              /*!< SYS_T::GPK_MFPL: PK6MFP Position          */
#define SYS_GPK_MFPL_PK6MFP_Msk          (0xful << SYS_GPK_MFPL_PK6MFP_Pos)                /*!< SYS_T::GPK_MFPL: PK6MFP Mask              */

#define SYS_GPK_MFPL_PK7MFP_Pos          (28)                                              /*!< SYS_T::GPK_MFPL: PK7MFP Position          */
#define SYS_GPK_MFPL_PK7MFP_Msk          (0xful << SYS_GPK_MFPL_PK7MFP_Pos)                /*!< SYS_T::GPK_MFPL: PK7MFP Mask              */

/* SYS GPK_MFPH Bit Field Definitions */
#define SYS_GPK_MFPH_PK8MFP_Pos          (0)                                               /*!< SYS_T::GPK_MFPH: PK8MFP Position          */
#define SYS_GPK_MFPH_PK8MFP_Msk          (0xful << SYS_GPK_MFPH_PK8MFP_Pos)                /*!< SYS_T::GPK_MFPH: PK8MFP Mask              */

#define SYS_GPK_MFPH_PK9MFP_Pos          (4)                                               /*!< SYS_T::GPK_MFPH: PK9MFP Position          */
#define SYS_GPK_MFPH_PK9MFP_Msk          (0xful << SYS_GPK_MFPH_PK9MFP_Pos)                /*!< SYS_T::GPK_MFPH: PK9MFP Mask              */

#define SYS_GPK_MFPH_PK10MFP_Pos         (8)                                               /*!< SYS_T::GPK_MFPH: PK10MFP Position         */
#define SYS_GPK_MFPH_PK10MFP_Msk         (0xful << SYS_GPK_MFPH_PK10MFP_Pos)               /*!< SYS_T::GPK_MFPH: PK10MFP Mask             */

#define SYS_GPK_MFPH_PK11MFP_Pos         (12)                                              /*!< SYS_T::GPK_MFPH: PK11MFP Position         */
#define SYS_GPK_MFPH_PK11MFP_Msk         (0xful << SYS_GPK_MFPH_PK11MFP_Pos)               /*!< SYS_T::GPK_MFPH: PK11MFP Mask             */

#define SYS_GPK_MFPH_PK12MFP_Pos         (16)                                              /*!< SYS_T::GPK_MFPH: PK12MFP Position         */
#define SYS_GPK_MFPH_PK12MFP_Msk         (0xful << SYS_GPK_MFPH_PK12MFP_Pos)               /*!< SYS_T::GPK_MFPH: PK12MFP Mask             */

#define SYS_GPK_MFPH_PK13MFP_Pos         (20)                                              /*!< SYS_T::GPK_MFPH: PK13MFP Position         */
#define SYS_GPK_MFPH_PK13MFP_Msk         (0xful << SYS_GPK_MFPH_PK13MFP_Pos)               /*!< SYS_T::GPK_MFPH: PK13MFP Mask             */

#define SYS_GPK_MFPH_PK14MFP_Pos         (24)                                              /*!< SYS_T::GPK_MFPH: PK14MFP Position         */
#define SYS_GPK_MFPH_PK14MFP_Msk         (0xful << SYS_GPK_MFPH_PK14MFP_Pos)               /*!< SYS_T::GPK_MFPH: PK14MFP Mask             */

#define SYS_GPK_MFPH_PK15MFP_Pos         (28)                                              /*!< SYS_T::GPK_MFPH: PK15MFP Position         */
#define SYS_GPK_MFPH_PK15MFP_Msk         (0xful << SYS_GPK_MFPH_PK15MFP_Pos)               /*!< SYS_T::GPK_MFPH: PK15MFP Mask   */

/* SYS GPL_MFPL Bit Field Definitions */
#define SYS_GPL_MFPL_PL0MFP_Pos          (0)                                               /*!< SYS_T::GPL_MFPL: PL0MFP Position          */
#define SYS_GPL_MFPL_PL0MFP_Msk          (0xful << SYS_GPL_MFPL_PL0MFP_Pos)                /*!< SYS_T::GPL_MFPL: PL0MFP Mask              */

#define SYS_GPL_MFPL_PL1MFP_Pos          (4)                                               /*!< SYS_T::GPL_MFPL: PL1MFP Position          */
#define SYS_GPL_MFPL_PL1MFP_Msk          (0xful << SYS_GPL_MFPL_PL1MFP_Pos)                /*!< SYS_T::GPL_MFPL: PL1MFP Mask              */

#define SYS_GPL_MFPL_PL2MFP_Pos          (8)                                               /*!< SYS_T::GPL_MFPL: PL2MFP Position          */
#define SYS_GPL_MFPL_PL2MFP_Msk          (0xful << SYS_GPL_MFPL_PL2MFP_Pos)                /*!< SYS_T::GPL_MFPL: PL2MFP Mask              */

#define SYS_GPL_MFPL_PL3MFP_Pos          (12)                                              /*!< SYS_T::GPL_MFPL: PL3MFP Position          */
#define SYS_GPL_MFPL_PL3MFP_Msk          (0xful << SYS_GPL_MFPL_PL3MFP_Pos)                /*!< SYS_T::GPL_MFPL: PL3MFP Mask              */

#define SYS_GPL_MFPL_PL4MFP_Pos          (16)                                              /*!< SYS_T::GPL_MFPL: PL4MFP Position          */
#define SYS_GPL_MFPL_PL4MFP_Msk          (0xful << SYS_GPL_MFPL_PL4MFP_Pos)                /*!< SYS_T::GPL_MFPL: PL4MFP Mask              */

#define SYS_GPL_MFPL_PL5MFP_Pos          (20)                                              /*!< SYS_T::GPL_MFPL: PL5MFP Position          */
#define SYS_GPL_MFPL_PL5MFP_Msk          (0xful << SYS_GPL_MFPL_PL5MFP_Pos)                /*!< SYS_T::GPL_MFPL: PL5MFP Mask              */

#define SYS_GPL_MFPL_PL6MFP_Pos          (24)                                              /*!< SYS_T::GPL_MFPL: PL6MFP Position          */
#define SYS_GPL_MFPL_PL6MFP_Msk          (0xful << SYS_GPL_MFPL_PL6MFP_Pos)                /*!< SYS_T::GPL_MFPL: PL6MFP Mask              */

#define SYS_GPL_MFPL_PL7MFP_Pos          (28)                                              /*!< SYS_T::GPL_MFPL: PL7MFP Position          */
#define SYS_GPL_MFPL_PL7MFP_Msk          (0xful << SYS_GPL_MFPL_PL7MFP_Pos)                /*!< SYS_T::GPL_MFPL: PL7MFP Mask              */

/* SYS GPL_MFPH Bit Field Definitions */
#define SYS_GPL_MFPH_PL8MFP_Pos          (0)                                               /*!< SYS_T::GPL_MFPH: PL8MFP Position          */
#define SYS_GPL_MFPH_PL8MFP_Msk          (0xful << SYS_GPL_MFPH_PL8MFP_Pos)                /*!< SYS_T::GPL_MFPH: PL8MFP Mask              */

#define SYS_GPL_MFPH_PL9MFP_Pos          (4)                                               /*!< SYS_T::GPL_MFPH: PL9MFP Position          */
#define SYS_GPL_MFPH_PL9MFP_Msk          (0xful << SYS_GPL_MFPH_PL9MFP_Pos)                /*!< SYS_T::GPL_MFPH: PL9MFP Mask              */

#define SYS_GPL_MFPH_PL10MFP_Pos         (8)                                               /*!< SYS_T::GPL_MFPH: PL10MFP Position         */
#define SYS_GPL_MFPH_PL10MFP_Msk         (0xful << SYS_GPL_MFPH_PL10MFP_Pos)               /*!< SYS_T::GPL_MFPH: PL10MFP Mask             */

#define SYS_GPL_MFPH_PL11MFP_Pos         (12)                                              /*!< SYS_T::GPL_MFPH: PL11MFP Position         */
#define SYS_GPL_MFPH_PL11MFP_Msk         (0xful << SYS_GPL_MFPH_PL11MFP_Pos)               /*!< SYS_T::GPL_MFPH: PL11MFP Mask             */

#define SYS_GPL_MFPH_PL12MFP_Pos         (16)                                              /*!< SYS_T::GPL_MFPH: PL12MFP Position         */
#define SYS_GPL_MFPH_PL12MFP_Msk         (0xful << SYS_GPL_MFPH_PL12MFP_Pos)               /*!< SYS_T::GPL_MFPH: PL12MFP Mask             */

#define SYS_GPL_MFPH_PL13MFP_Pos         (20)                                              /*!< SYS_T::GPL_MFPH: PL13MFP Position         */
#define SYS_GPL_MFPH_PL13MFP_Msk         (0xful << SYS_GPL_MFPH_PL13MFP_Pos)               /*!< SYS_T::GPL_MFPH: PL13MFP Mask             */

#define SYS_GPL_MFPH_PL14MFP_Pos         (24)                                              /*!< SYS_T::GPL_MFPH: PL14MFP Position         */
#define SYS_GPL_MFPH_PL14MFP_Msk         (0xful << SYS_GPL_MFPH_PL14MFP_Pos)               /*!< SYS_T::GPL_MFPH: PL14MFP Mask             */

#define SYS_GPL_MFPH_PIL5MFP_Pos         (28)                                              /*!< SYS_T::GPL_MFPH: PL15MFP Position         */
#define SYS_GPL_MFPH_PIL5MFP_Msk         (0xful << SYS_GPL_MFPH_PIL5MFP_Pos)               /*!< SYS_T::GPL_MFPH: PL15MFP Mask   */

/* SYS GPM_MFPL Bit Field Definitions */
#define SYS_GPM_MFPL_PM0MFP_Pos          (0)                                               /*!< SYS_T::GPM_MFPL: PM0MFP Position          */
#define SYS_GPM_MFPL_PM0MFP_Msk          (0xful << SYS_GPM_MFPL_PM0MFP_Pos)                /*!< SYS_T::GPM_MFPL: PM0MFP Mask              */

#define SYS_GPM_MFPL_PM1MFP_Pos          (4)                                               /*!< SYS_T::GPM_MFPL: PM1MFP Position          */
#define SYS_GPM_MFPL_PM1MFP_Msk          (0xful << SYS_GPM_MFPL_PM1MFP_Pos)                /*!< SYS_T::GPM_MFPL: PM1MFP Mask              */

#define SYS_GPM_MFPL_PM2MFP_Pos          (8)                                               /*!< SYS_T::GPM_MFPL: PM2MFP Position          */
#define SYS_GPM_MFPL_PM2MFP_Msk          (0xful << SYS_GPM_MFPL_PM2MFP_Pos)                /*!< SYS_T::GPM_MFPL: PM2MFP Mask              */

#define SYS_GPM_MFPL_PM3MFP_Pos          (12)                                              /*!< SYS_T::GPM_MFPL: PM3MFP Position          */
#define SYS_GPM_MFPL_PM3MFP_Msk          (0xful << SYS_GPM_MFPL_PM3MFP_Pos)                /*!< SYS_T::GPM_MFPL: PM3MFP Mask              */

#define SYS_GPM_MFPL_PM4MFP_Pos          (16)                                              /*!< SYS_T::GPM_MFPL: PM4MFP Position          */
#define SYS_GPM_MFPL_PM4MFP_Msk          (0xful << SYS_GPM_MFPL_PM4MFP_Pos)                /*!< SYS_T::GPM_MFPL: PM4MFP Mask              */

#define SYS_GPM_MFPL_PM5MFP_Pos          (20)                                              /*!< SYS_T::GPM_MFPL: PM5MFP Position          */
#define SYS_GPM_MFPL_PM5MFP_Msk          (0xful << SYS_GPM_MFPL_PM5MFP_Pos)                /*!< SYS_T::GPM_MFPL: PM5MFP Mask              */

#define SYS_GPM_MFPL_PM6MFP_Pos          (24)                                              /*!< SYS_T::GPM_MFPL: PM6MFP Position          */
#define SYS_GPM_MFPL_PM6MFP_Msk          (0xful << SYS_GPM_MFPL_PM6MFP_Pos)                /*!< SYS_T::GPM_MFPL: PM6MFP Mask              */

#define SYS_GPM_MFPL_PM7MFP_Pos          (28)                                              /*!< SYS_T::GPM_MFPL: PM7MFP Position          */
#define SYS_GPM_MFPL_PM7MFP_Msk          (0xful << SYS_GPM_MFPL_PM7MFP_Pos)                /*!< SYS_T::GPM_MFPL: PM7MFP Mask              */

/* SYS GPM_MFPH Bit Field Definitions */
#define SYS_GPM_MFPH_PM8MFP_Pos          (0)                                               /*!< SYS_T::GPM_MFPH: PM8MFP Position          */
#define SYS_GPM_MFPH_PM8MFP_Msk          (0xful << SYS_GPM_MFPH_PM8MFP_Pos)                /*!< SYS_T::GPM_MFPH: PM8MFP Mask              */

#define SYS_GPM_MFPH_PM9MFP_Pos          (4)                                               /*!< SYS_T::GPM_MFPH: PM9MFP Position          */
#define SYS_GPM_MFPH_PM9MFP_Msk          (0xful << SYS_GPM_MFPH_PM9MFP_Pos)                /*!< SYS_T::GPM_MFPH: PM9MFP Mask              */

#define SYS_GPM_MFPH_PM10MFP_Pos         (8)                                               /*!< SYS_T::GPM_MFPH: PM10MFP Position         */
#define SYS_GPM_MFPH_PM10MFP_Msk         (0xful << SYS_GPM_MFPH_PM10MFP_Pos)               /*!< SYS_T::GPM_MFPH: PM10MFP Mask             */

#define SYS_GPM_MFPH_PM11MFP_Pos         (12)                                              /*!< SYS_T::GPM_MFPH: PM11MFP Position         */
#define SYS_GPM_MFPH_PM11MFP_Msk         (0xful << SYS_GPM_MFPH_PM11MFP_Pos)               /*!< SYS_T::GPM_MFPH: PM11MFP Mask             */

#define SYS_GPM_MFPH_PM12MFP_Pos         (16)                                              /*!< SYS_T::GPM_MFPH: PM12MFP Position         */
#define SYS_GPM_MFPH_PM12MFP_Msk         (0xful << SYS_GPM_MFPH_PM12MFP_Pos)               /*!< SYS_T::GPM_MFPH: PM12MFP Mask             */

#define SYS_GPM_MFPH_PM13MFP_Pos         (20)                                              /*!< SYS_T::GPM_MFPH: PM13MFP Position         */
#define SYS_GPM_MFPH_PM13MFP_Msk         (0xful << SYS_GPM_MFPH_PM13MFP_Pos)               /*!< SYS_T::GPM_MFPH: PM13MFP Mask             */

#define SYS_GPM_MFPH_PM14MFP_Pos         (24)                                              /*!< SYS_T::GPM_MFPH: PM14MFP Position         */
#define SYS_GPM_MFPH_PM14MFP_Msk         (0xful << SYS_GPM_MFPH_PM14MFP_Pos)               /*!< SYS_T::GPM_MFPH: PM14MFP Mask             */

#define SYS_GPM_MFPH_PM15MFP_Pos         (28)                                              /*!< SYS_T::GPM_MFPH: PM15MFP Position         */
#define SYS_GPM_MFPH_PM15MFP_Msk         (0xful << SYS_GPM_MFPH_PM15MFP_Pos)               /*!< SYS_T::GPM_MFPH: PM15MFP Mask   */


/* SYS GPN_MFPL Bit Field Definitions */
#define SYS_GPN_MFPL_PN0MFP_Pos          (0)                                               /*!< SYS_T::GPN_MFPL: PN0MFP Position          */
#define SYS_GPN_MFPL_PN0MFP_Msk          (0xful << SYS_GPN_MFPL_PN0MFP_Pos)                /*!< SYS_T::GPN_MFPL: PN0MFP Mask              */

#define SYS_GPN_MFPL_PN1MFP_Pos          (4)                                               /*!< SYS_T::GPN_MFPL: PN1MFP Position          */
#define SYS_GPN_MFPL_PN1MFP_Msk          (0xful << SYS_GPN_MFPL_PN1MFP_Pos)                /*!< SYS_T::GPN_MFPL: PN1MFP Mask              */

#define SYS_GPN_MFPL_PN2MFP_Pos          (8)                                               /*!< SYS_T::GPN_MFPL: PN2MFP Position          */
#define SYS_GPN_MFPL_PN2MFP_Msk          (0xful << SYS_GPN_MFPL_PN2MFP_Pos)                /*!< SYS_T::GPN_MFPL: PN2MFP Mask              */

#define SYS_GPN_MFPL_PN3MFP_Pos          (12)                                              /*!< SYS_T::GPN_MFPL: PN3MFP Position          */
#define SYS_GPN_MFPL_PN3MFP_Msk          (0xful << SYS_GPN_MFPL_PN3MFP_Pos)                /*!< SYS_T::GPN_MFPL: PN3MFP Mask              */

#define SYS_GPN_MFPL_PN4MFP_Pos          (16)                                              /*!< SYS_T::GPN_MFPL: PN4MFP Position          */
#define SYS_GPN_MFPL_PN4MFP_Msk          (0xful << SYS_GPN_MFPL_PN4MFP_Pos)                /*!< SYS_T::GPN_MFPL: PN4MFP Mask              */

#define SYS_GPN_MFPL_PN5MFP_Pos          (20)                                              /*!< SYS_T::GPN_MFPL: PN5MFP Position          */
#define SYS_GPN_MFPL_PN5MFP_Msk          (0xful << SYS_GPN_MFPL_PN5MFP_Pos)                /*!< SYS_T::GPN_MFPL: PN5MFP Mask              */

#define SYS_GPN_MFPL_PN6MFP_Pos          (24)                                              /*!< SYS_T::GPN_MFPL: PN6MFP Position          */
#define SYS_GPN_MFPL_PN6MFP_Msk          (0xful << SYS_GPN_MFPL_PN6MFP_Pos)                /*!< SYS_T::GPN_MFPL: PN6MFP Mask              */

#define SYS_GPN_MFPL_PN7MFP_Pos          (28)                                              /*!< SYS_T::GPN_MFPL: PN7MFP Position          */
#define SYS_GPN_MFPL_PN7MFP_Msk          (0xful << SYS_GPN_MFPL_PN7MFP_Pos)                /*!< SYS_T::GPN_MFPL: PN7MFP Mask              */
 
/* SYS GPN_MFPH Bit Field Definitions */
#define SYS_GPN_MFPH_PN8MFP_Pos          (0)                                               /*!< SYS_T::GPN_MFPH: PN8MFP Position          */
#define SYS_GPN_MFPH_PN8MFP_Msk          (0xful << SYS_GPN_MFPH_PN8MFP_Pos)                /*!< SYS_T::GPN_MFPH: PN8MFP Mask              */

#define SYS_GPN_MFPH_PN9MFP_Pos          (4)                                               /*!< SYS_T::GPN_MFPH: PN9MFP Position          */
#define SYS_GPN_MFPH_PN9MFP_Msk          (0xful << SYS_GPN_MFPH_PN9MFP_Pos)                /*!< SYS_T::GPN_MFPH: PN9MFP Mask              */

#define SYS_GPN_MFPH_PN10MFP_Pos         (8)                                               /*!< SYS_T::GPN_MFPH: PN10MFP Position         */
#define SYS_GPN_MFPH_PN10MFP_Msk         (0xful << SYS_GPN_MFPH_PN10MFP_Pos)               /*!< SYS_T::GPN_MFPH: PN10MFP Mask             */

#define SYS_GPN_MFPH_PN11MFP_Pos         (12)                                              /*!< SYS_T::GPN_MFPH: PN11MFP Position         */
#define SYS_GPN_MFPH_PN11MFP_Msk         (0xful << SYS_GPN_MFPH_PN11MFP_Pos)               /*!< SYS_T::GPN_MFPH: PN11MFP Mask             */

#define SYS_GPN_MFPH_PN12MFP_Pos         (16)                                              /*!< SYS_T::GPN_MFPH: PN12MFP Position         */
#define SYS_GPN_MFPH_PN12MFP_Msk         (0xful << SYS_GPN_MFPH_PN12MFP_Pos)               /*!< SYS_T::GPN_MFPH: PN12MFP Mask             */

#define SYS_GPN_MFPH_PN13MFP_Pos         (20)                                              /*!< SYS_T::GPN_MFPH: PN13MFP Position         */
#define SYS_GPN_MFPH_PN13MFP_Msk         (0xful << SYS_GPN_MFPH_PN13MFP_Pos)               /*!< SYS_T::GPN_MFPH: PN13MFP Mask             */

#define SYS_GPN_MFPH_PN14MFP_Pos         (24)                                              /*!< SYS_T::GPN_MFPH: PN14MFP Position         */
#define SYS_GPN_MFPH_PN14MFP_Msk         (0xful << SYS_GPN_MFPH_PN14MFP_Pos)               /*!< SYS_T::GPN_MFPH: PN14MFP Mask             */

#define SYS_GPN_MFPH_PNL5MFP_Pos         (28)                                              /*!< SYS_T::GPN_MFPH: PN15MFP Position         */
#define SYS_GPN_MFPH_PNL5MFP_Msk         (0xful << SYS_GPN_MFPH_PNL5MFP_Pos)               /*!< SYS_T::GPN_MFPH: PN15MFP Mask */

/*@}*/ /* end of group SYS_EXPORTED_CONSTANTS */


/********************* Bit definition of GPA_MFPL register **********************/
#define SYS_GPA_MFPL_PA0MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPL_PA0MFP_EPWM1_CH4         (0x01UL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< EPWM1 channel4 output/capture input. */
#define SYS_GPA_MFPL_PA0MFP_UART1_nCTS        (0x02UL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< Clear to Send input pin for UART1. */
#define SYS_GPA_MFPL_PA0MFP_UART16_RXD        (0x03UL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< Data receiver input pin for UART16. */
#define SYS_GPA_MFPL_PA0MFP_I2C0_SDA          (0x04UL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< I2C0 data input/output pin. */
#define SYS_GPA_MFPL_PA0MFP_SPI0_SS0          (0x05UL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< 1st SPI0 slave select pin. */
#define SYS_GPA_MFPL_PA0MFP_EBI_AD0           (0x07UL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< EBI address/data bus bit0. */
#define SYS_GPA_MFPL_PA0MFP_NAND_DATA0        (0x08UL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< NAND Flash date bus bit 0. */
#define SYS_GPA_MFPL_PA0MFP_LCM_DATA15        (0x09UL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPA_MFPL_PA0MFP_TM0               (0x0BUL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< Timer0 event counter input / toggle output */
#define SYS_GPA_MFPL_PA1MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPL_PA1MFP_EPWM1_CH5         (0x01UL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< EPWM1 channel5 output/capture input. */
#define SYS_GPA_MFPL_PA1MFP_UART1_nRTS        (0x02UL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< Request to Send output pin for UART1. */
#define SYS_GPA_MFPL_PA1MFP_UART16_TXD        (0x03UL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< Data transmitter output pin for UART16. */
#define SYS_GPA_MFPL_PA1MFP_I2C0_SCL          (0x04UL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< I2C0 clock pin. */
#define SYS_GPA_MFPL_PA1MFP_SPI0_CLK          (0x05UL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< SPI0 serial clock pin. */
#define SYS_GPA_MFPL_PA1MFP_EBI_AD1           (0x07UL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< EBI address/data bus bit1. */
#define SYS_GPA_MFPL_PA1MFP_NAND_DATA1        (0x08UL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< NAND Flash date bus bit 1. */
#define SYS_GPA_MFPL_PA1MFP_LCM_DATA14        (0x09UL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPA_MFPL_PA1MFP_TM0_EXT           (0x0BUL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< Timer0 event counter input / toggle output */
#define SYS_GPA_MFPL_PA2MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPL_PA2MFP_QEI0_A            (0x01UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< Quadrature encoder phase A input of QEI Unit 0. */
#define SYS_GPA_MFPL_PA2MFP_UART1_RXD         (0x02UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< Data receiver input pin for UART1. */
#define SYS_GPA_MFPL_PA2MFP_CAN0_RXD          (0x03UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< CAN0 bus receiver input. */
#define SYS_GPA_MFPL_PA2MFP_USBHL0_DM         (0x04UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!<  */
#define SYS_GPA_MFPL_PA2MFP_SPI0_MOSI         (0x05UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. */
#define SYS_GPA_MFPL_PA2MFP_EBI_AD2           (0x07UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< EBI address/data bus bit2. */
#define SYS_GPA_MFPL_PA2MFP_NAND_DATA2        (0x08UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< NAND Flash date bus bit 2. */
#define SYS_GPA_MFPL_PA2MFP_LCM_DATA13        (0x09UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPA_MFPL_PA2MFP_TM2               (0x0BUL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< Timer2 event counter input / toggle output */
#define SYS_GPA_MFPL_PA3MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPL_PA3MFP_QEI0_B            (0x01UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< Quadrature encoder phase B input of QEI Unit 0. */
#define SYS_GPA_MFPL_PA3MFP_UART1_TXD         (0x02UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< Data transmitter output pin for UART1. */
#define SYS_GPA_MFPL_PA3MFP_CAN0_TXD          (0x03UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< CAN0 bus transmitter output. */
#define SYS_GPA_MFPL_PA3MFP_USBHL0_DP         (0x04UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!<  */
#define SYS_GPA_MFPL_PA3MFP_SPI0_MISO         (0x05UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< 1st SPI0 MISO (Master In, Slave Out) pin. */
#define SYS_GPA_MFPL_PA3MFP_EBI_AD3           (0x07UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< EBI address/data bus bit3. */
#define SYS_GPA_MFPL_PA3MFP_NAND_DATA3        (0x08UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< NAND Flash date bus bit 3. */
#define SYS_GPA_MFPL_PA3MFP_LCM_DATA12        (0x09UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPA_MFPL_PA3MFP_TM2_EXT           (0x0BUL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< Timer2 event counter input / toggle output */
#define SYS_GPA_MFPL_PA4MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPL_PA4MFP_QEI0_INDEX        (0x01UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< Quadrature encoder index input of QEI Unit 0. */
#define SYS_GPA_MFPL_PA4MFP_UART3_nCTS        (0x02UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< Clear to Send input pin for UART3. */
#define SYS_GPA_MFPL_PA4MFP_UART2_RXD         (0x03UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< Data receiver input pin for UART2. */
#define SYS_GPA_MFPL_PA4MFP_I2C1_SDA          (0x04UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< I2C1 data input/output pin. */
#define SYS_GPA_MFPL_PA4MFP_SPI1_SS0          (0x05UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< 1st SPI1 slave select pin. */
#define SYS_GPA_MFPL_PA4MFP_EBI_AD4           (0x07UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< EBI address/data bus bit4. */
#define SYS_GPA_MFPL_PA4MFP_NAND_DATA4        (0x08UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< NAND Flash date bus bit 4. */
#define SYS_GPA_MFPL_PA4MFP_LCM_DATA11        (0x09UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPA_MFPL_PA4MFP_TM4               (0x0BUL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< Timer4 event counter input / toggle output */
#define SYS_GPA_MFPL_PA5MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPL_PA5MFP_EPWM1_BRAKE0      (0x01UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< Brake input pin 0 of EPWM1. */
#define SYS_GPA_MFPL_PA5MFP_UART3_nRTS        (0x02UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< Request to Send output pin for UART3. */
#define SYS_GPA_MFPL_PA5MFP_UART2_TXD         (0x03UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< Data transmitter output pin for UART2. */
#define SYS_GPA_MFPL_PA5MFP_I2C1_SCL          (0x04UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< I2C1 clock pin. */
#define SYS_GPA_MFPL_PA5MFP_SPI1_CLK          (0x05UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< SPI1 serial clock pin. */
#define SYS_GPA_MFPL_PA5MFP_EBI_AD5           (0x07UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< EBI address/data bus bit5. */
#define SYS_GPA_MFPL_PA5MFP_NAND_DATA5        (0x08UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< NAND Flash date bus bit 5. */
#define SYS_GPA_MFPL_PA5MFP_LCM_DATA10        (0x09UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPA_MFPL_PA5MFP_TM4_EXT           (0x0BUL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< Timer4 event counter input / toggle output */
#define SYS_GPA_MFPL_PA6MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPL_PA6MFP_EPWM1_BRAKE1      (0x01UL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< Brake input pin 1 of EPWM1. */
#define SYS_GPA_MFPL_PA6MFP_UART3_RXD         (0x02UL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< Data receiver input pin for UART3. */
#define SYS_GPA_MFPL_PA6MFP_CAN1_RXD          (0x03UL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< CAN1 bus receiver input. */
#define SYS_GPA_MFPL_PA6MFP_USBHL1_DM         (0x04UL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!<  */
#define SYS_GPA_MFPL_PA6MFP_SPI1_MOSI         (0x05UL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. */
#define SYS_GPA_MFPL_PA6MFP_EBI_AD6           (0x07UL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< EBI address/data bus bit6. */
#define SYS_GPA_MFPL_PA6MFP_NAND_DATA6        (0x08UL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< NAND Flash date bus bit 6. */
#define SYS_GPA_MFPL_PA6MFP_LCM_DATA9         (0x09UL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 9. */
#define SYS_GPA_MFPL_PA6MFP_TM6               (0x0BUL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< Timer6 event counter input / toggle output */
#define SYS_GPA_MFPL_PA7MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPL_PA7MFP_EPWM1_CH0         (0x01UL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< EPWM1 channel0 output/capture input. */
#define SYS_GPA_MFPL_PA7MFP_UART3_TXD         (0x02UL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< Data transmitter output pin for UART3. */
#define SYS_GPA_MFPL_PA7MFP_CAN1_TXD          (0x03UL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< CAN1 bus transmitter output. */
#define SYS_GPA_MFPL_PA7MFP_USBHL1_DP         (0x04UL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!<  */
#define SYS_GPA_MFPL_PA7MFP_SPI1_MISO         (0x05UL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. */
#define SYS_GPA_MFPL_PA7MFP_EBI_AD7           (0x07UL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< EBI address/data bus bit7. */
#define SYS_GPA_MFPL_PA7MFP_NAND_DATA7        (0x08UL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< NAND Flash date bus bit 7. */
#define SYS_GPA_MFPL_PA7MFP_LCM_DATA8         (0x09UL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 8. */
#define SYS_GPA_MFPL_PA7MFP_TM6_EXT           (0x0BUL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< Timer6 event counter input / toggle output */
/********************* Bit definition of GPA_MFPH register **********************/
#define SYS_GPA_MFPH_PA8MFP_GPIO              (0x00UL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPH_PA8MFP_EPWM1_CH1         (0x01UL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< EPWM1 channel1 output/capture input. */
#define SYS_GPA_MFPH_PA8MFP_UART5_nCTS        (0x02UL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< Clear to Send input pin for UART5. */
#define SYS_GPA_MFPH_PA8MFP_UART4_RXD         (0x03UL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< Data receiver input pin for UART4. */
#define SYS_GPA_MFPH_PA8MFP_I2C2_SDA          (0x04UL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< I2C2 data input/output pin. */
#define SYS_GPA_MFPH_PA8MFP_SPI2_SS0          (0x05UL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< 1st SPI2 slave select pin. */
#define SYS_GPA_MFPH_PA8MFP_EBI_AD8           (0x07UL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< EBI address/data bus bit8. */
#define SYS_GPA_MFPH_PA8MFP_NAND_RDY          (0x08UL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< NAND Flash ready/busy input pin. */
#define SYS_GPA_MFPH_PA8MFP_LCM_DATA7         (0x09UL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 7. */
#define SYS_GPA_MFPH_PA8MFP_TM8               (0x0BUL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< Timer8 event counter input / toggle output */
#define SYS_GPA_MFPH_PA9MFP_GPIO              (0x00UL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPH_PA9MFP_EPWM1_CH2         (0x01UL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< EPWM1 channel2 output/capture input. */
#define SYS_GPA_MFPH_PA9MFP_UART5_nRTS        (0x02UL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< Request to Send output pin for UART5. */
#define SYS_GPA_MFPH_PA9MFP_UART4_TXD         (0x03UL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< Data transmitter output pin for UART4. */
#define SYS_GPA_MFPH_PA9MFP_I2C2_SCL          (0x04UL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< I2C2 clock pin. */
#define SYS_GPA_MFPH_PA9MFP_SPI2_CLK          (0x05UL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< SPI2 serial clock pin. */
#define SYS_GPA_MFPH_PA9MFP_EBI_AD9           (0x07UL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< EBI address/data bus bit9. */
#define SYS_GPA_MFPH_PA9MFP_NAND_nRE          (0x08UL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< NAND Flash read enable output pin. */
#define SYS_GPA_MFPH_PA9MFP_LCM_DATA6         (0x09UL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 6. */
#define SYS_GPA_MFPH_PA9MFP_TM8_EXT           (0x0BUL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< Timer8 event counter input / toggle output */
#define SYS_GPA_MFPH_PA10MFP_GPIO             (0x00UL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPH_PA10MFP_EPWM1_CH3        (0x01UL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< EPWM1 channel3 output/capture input. */
#define SYS_GPA_MFPH_PA10MFP_UART5_RXD        (0x02UL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< Data receiver input pin for UART5. */
#define SYS_GPA_MFPH_PA10MFP_CAN2_RXD         (0x03UL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< CAN2 bus receiver input. */
#define SYS_GPA_MFPH_PA10MFP_USBHL2_DM        (0x04UL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!<  */
#define SYS_GPA_MFPH_PA10MFP_SPI2_MOSI        (0x05UL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< 1st SPI2 MOSI (Master Out, Slave In) pin. */
#define SYS_GPA_MFPH_PA10MFP_EBI_AD10         (0x07UL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPA_MFPH_PA10MFP_NAND_nWE         (0x08UL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< NAND Flash write enable output pin. */
#define SYS_GPA_MFPH_PA10MFP_LCM_DATA5        (0x09UL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< TFT LCD Module Pixel Data output bit 5. */
#define SYS_GPA_MFPH_PA10MFP_TM10             (0x0BUL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPA_MFPH_PA11MFP_GPIO             (0x00UL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPH_PA11MFP_UART5_TXD        (0x02UL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< Data transmitter output pin for UART5. */
#define SYS_GPA_MFPH_PA11MFP_CAN2_TXD         (0x03UL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< CAN2 bus transmitter output. */
#define SYS_GPA_MFPH_PA11MFP_USBHL2_DP        (0x04UL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!<  */
#define SYS_GPA_MFPH_PA11MFP_SPI2_MISO        (0x05UL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< 1st SPI2 MISO (Master In, Slave Out) pin. */
#define SYS_GPA_MFPH_PA11MFP_EBI_AD11         (0x07UL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPA_MFPH_PA11MFP_NAND_CLE         (0x08UL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< NAND Flash command latch enable output pin. */
#define SYS_GPA_MFPH_PA11MFP_LCM_DATA4        (0x09UL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< TFT LCD Module Pixel Data output bit 4. */
#define SYS_GPA_MFPH_PA11MFP_TM10_EXT         (0x0BUL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPA_MFPH_PA12MFP_GPIO             (0x00UL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPH_PA12MFP_UART7_nCTS       (0x02UL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< Clear to Send input pin for UART7. */
#define SYS_GPA_MFPH_PA12MFP_UART6_RXD        (0x03UL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< Data receiver input pin for UART6. */
#define SYS_GPA_MFPH_PA12MFP_I2C3_SDA         (0x04UL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< I2C3 data input/output pin. */
#define SYS_GPA_MFPH_PA12MFP_SPI3_SS0         (0x05UL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< 1st SPI3 slave select pin. */
#define SYS_GPA_MFPH_PA12MFP_EADC0_ST         (0x06UL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< EADC external trigger input. */
#define SYS_GPA_MFPH_PA12MFP_EBI_AD12         (0x07UL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPA_MFPH_PA12MFP_NAND_ALE         (0x08UL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< NAND Flash address latch enable output pin. */
#define SYS_GPA_MFPH_PA12MFP_LCM_DATA3        (0x09UL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< TFT LCD Module Pixel Data output bit 3. */
#define SYS_GPA_MFPH_PA12MFP_TM1              (0x0BUL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPA_MFPH_PA13MFP_GPIO             (0x00UL<<SYS_GPA_MFPH_PA13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPH_PA13MFP_UART7_nRTS       (0x02UL<<SYS_GPA_MFPH_PA13MFP_Pos) /*!< Request to Send output pin for UART7. */
#define SYS_GPA_MFPH_PA13MFP_UART6_TXD        (0x03UL<<SYS_GPA_MFPH_PA13MFP_Pos) /*!< Data transmitter output pin for UART6. */
#define SYS_GPA_MFPH_PA13MFP_I2C3_SCL         (0x04UL<<SYS_GPA_MFPH_PA13MFP_Pos) /*!< I2C3 clock pin. */
#define SYS_GPA_MFPH_PA13MFP_SPI3_CLK         (0x05UL<<SYS_GPA_MFPH_PA13MFP_Pos) /*!< SPI3 serial clock pin. */
#define SYS_GPA_MFPH_PA13MFP_EBI_AD13         (0x07UL<<SYS_GPA_MFPH_PA13MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPA_MFPH_PA13MFP_NAND_nCS         (0x08UL<<SYS_GPA_MFPH_PA13MFP_Pos) /*!< NAND Flash chip select pin. */
#define SYS_GPA_MFPH_PA13MFP_LCM_DATA2        (0x09UL<<SYS_GPA_MFPH_PA13MFP_Pos) /*!< TFT LCD Module Pixel Data output bit 2. */
#define SYS_GPA_MFPH_PA13MFP_TM1_EXT          (0x0BUL<<SYS_GPA_MFPH_PA13MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPA_MFPH_PA14MFP_GPIO             (0x00UL<<SYS_GPA_MFPH_PA14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPH_PA14MFP_UART7_RXD        (0x02UL<<SYS_GPA_MFPH_PA14MFP_Pos) /*!< Data receiver input pin for UART7. */
#define SYS_GPA_MFPH_PA14MFP_CAN3_RXD         (0x03UL<<SYS_GPA_MFPH_PA14MFP_Pos) /*!< CAN3 bus receiver input. */
#define SYS_GPA_MFPH_PA14MFP_USBHL3_DM        (0x04UL<<SYS_GPA_MFPH_PA14MFP_Pos) /*!<  */
#define SYS_GPA_MFPH_PA14MFP_SPI3_MOSI        (0x05UL<<SYS_GPA_MFPH_PA14MFP_Pos) /*!< 1st SPI3 MOSI (Master Out, Slave In) pin. */
#define SYS_GPA_MFPH_PA14MFP_EBI_AD14         (0x07UL<<SYS_GPA_MFPH_PA14MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPA_MFPH_PA14MFP_NAND_nWP         (0x08UL<<SYS_GPA_MFPH_PA14MFP_Pos) /*!< NAND Flash write protect input pin. */
#define SYS_GPA_MFPH_PA14MFP_LCM_DATA1        (0x09UL<<SYS_GPA_MFPH_PA14MFP_Pos) /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPA_MFPH_PA14MFP_TM3              (0x0BUL<<SYS_GPA_MFPH_PA14MFP_Pos) /*!< Timer3 event counter input / toggle output */
#define SYS_GPA_MFPH_PA15MFP_GPIO             (0x00UL<<SYS_GPA_MFPH_PA15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPA_MFPH_PA15MFP_UART9_nCTS       (0x02UL<<SYS_GPA_MFPH_PA15MFP_Pos) /*!< Clear to Send input pin for UART*. */
#define SYS_GPA_MFPH_PA15MFP_UART8_RXD        (0x03UL<<SYS_GPA_MFPH_PA15MFP_Pos) /*!< Data receiver input pin for UART8. */
#define SYS_GPA_MFPH_PA15MFP_I2C4_SDA         (0x04UL<<SYS_GPA_MFPH_PA15MFP_Pos) /*!< I2C4 data input/output pin. */
#define SYS_GPA_MFPH_PA15MFP_SPI0_SS1         (0x05UL<<SYS_GPA_MFPH_PA15MFP_Pos) /*!< 1st SPI0 slave select pin. */
#define SYS_GPA_MFPH_PA15MFP_LCM_DATA1        (0x09UL<<SYS_GPA_MFPH_PA15MFP_Pos) /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPA_MFPH_PA15MFP_TM5              (0x0BUL<<SYS_GPA_MFPH_PA15MFP_Pos) /*!< Timer5 event counter input / toggle output */
/********************* Bit definition of GPB_MFPL register **********************/
#define SYS_GPB_MFPL_PB0MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPL_PB0MFP_QEI1_A            (0x01UL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< Quadrature encoder phase A input of QEI Unit 1. */
#define SYS_GPB_MFPL_PB0MFP_UART13_nCTS       (0x02UL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< Clear to Send input pin for UART13. */
#define SYS_GPB_MFPL_PB0MFP_UART12_RXD        (0x03UL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< Data receiver input pin for UART12. */
#define SYS_GPB_MFPL_PB0MFP_I2C0_SDA          (0x04UL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< I2C0 data input/output pin. */
#define SYS_GPB_MFPL_PB0MFP_EADC0_CH0         (0x08UL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< EADC0 channel0 analog input. */
#define SYS_GPB_MFPL_PB0MFP_KPI_COL4          (0x0AUL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< Keypad Interface Column 4 output pin. */
#define SYS_GPB_MFPL_PB0MFP_TM0               (0x0BUL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< Timer0 event counter input / toggle output */
#define SYS_GPB_MFPL_PB1MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPL_PB1MFP_QEI1_B            (0x01UL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< Quadrature encoder phase B input of QEI Unit 1. */
#define SYS_GPB_MFPL_PB1MFP_UART13_nRTS       (0x02UL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< Request to Send output pin for UART13. */
#define SYS_GPB_MFPL_PB1MFP_UART12_TXD        (0x03UL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< Data transmitter output pin for UART12. */
#define SYS_GPB_MFPL_PB1MFP_I2C0_SCL          (0x04UL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< I2C0 clock pin. */
#define SYS_GPB_MFPL_PB1MFP_EADC0_CH1         (0x08UL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< EADC0 channel1 analog input. */
#define SYS_GPB_MFPL_PB1MFP_KPI_COL5          (0x0AUL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< Keypad Interface Column 5 output pin. */
#define SYS_GPB_MFPL_PB2MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPL_PB2MFP_QEI1_INDEX        (0x01UL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< Quadrature encoder index input of QEI Unit 1. */
#define SYS_GPB_MFPL_PB2MFP_UART13_RXD        (0x02UL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< Data receiver input pin for UART13. */
#define SYS_GPB_MFPL_PB2MFP_CAN2_RXD          (0x03UL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< CAN2 bus receiver input. */
#define SYS_GPB_MFPL_PB2MFP_USBHL0_DM         (0x04UL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!<  */
#define SYS_GPB_MFPL_PB2MFP_EADC0_CH2         (0x08UL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< EADC0 channel2 analog input. */
#define SYS_GPB_MFPL_PB2MFP_TM1               (0x0BUL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< Timer1 event counter input / toggle output */
#define SYS_GPB_MFPL_PB3MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPL_PB3MFP_ECAP1_IC0         (0x01UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< Input 0 of enhanced capture unit 1. */
#define SYS_GPB_MFPL_PB3MFP_UART13_TXD        (0x02UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< Data transmitter output pin for UART13. */
#define SYS_GPB_MFPL_PB3MFP_CAN2_TXD          (0x03UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< CAN2 bus transmitter output. */
#define SYS_GPB_MFPL_PB3MFP_USBHL0_DP         (0x04UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!<  */
#define SYS_GPB_MFPL_PB3MFP_SPI0_SS1          (0x05UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< 1st SPI0 slave select pin. */
#define SYS_GPB_MFPL_PB3MFP_I2S0_MCLK         (0x06UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< I2S0 master clock output pin. */
#define SYS_GPB_MFPL_PB3MFP_EADC0_CH3         (0x08UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< EADC0 channel3 analog input. */
#define SYS_GPB_MFPL_PB4MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPL_PB4MFP_ECAP1_IC1         (0x01UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< Input 1 of enhanced capture unit 1. */
#define SYS_GPB_MFPL_PB4MFP_UART15_nCTS       (0x02UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< Clear to Send input pin for UART15. */
#define SYS_GPB_MFPL_PB4MFP_UART14_RXD        (0x03UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< Data receiver input pin for UART14. */
#define SYS_GPB_MFPL_PB4MFP_I2C1_SDA          (0x04UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< I2C1 data input/output pin. */
#define SYS_GPB_MFPL_PB4MFP_SPI0_SS0          (0x05UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< 1st SPI0 slave select pin. */
#define SYS_GPB_MFPL_PB4MFP_I2S0_LRCK         (0x06UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< I2S0 left right channel clock. */
#define SYS_GPB_MFPL_PB4MFP_EADC0_CH4         (0x08UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< EADC0 channel4 analog input. */
#define SYS_GPB_MFPL_PB4MFP_TM2               (0x0BUL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< Timer2 event counter input / toggle output */
#define SYS_GPB_MFPL_PB5MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPL_PB5MFP_ECAP1_IC2         (0x01UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< Input 1 of enhanced capture unit 2. */
#define SYS_GPB_MFPL_PB5MFP_UART15_nRTS       (0x02UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< Request to Send output pin for UART15. */
#define SYS_GPB_MFPL_PB5MFP_UART14_TXD        (0x03UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< Data transmitter output pin for UART14. */
#define SYS_GPB_MFPL_PB5MFP_I2C1_SCL          (0x04UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< I2C1 clock pin. */
#define SYS_GPB_MFPL_PB5MFP_SPI0_CLK          (0x05UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< SPI0 serial clock pin. */
#define SYS_GPB_MFPL_PB5MFP_I2S0_BCLK         (0x06UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< I2S0 bit clock pin. */
#define SYS_GPB_MFPL_PB5MFP_EADC0_CH5         (0x08UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< EADC0 channel5 analog input. */
#define SYS_GPB_MFPL_PB6MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPL_PB6MFP_EPWM0_SYNC_IN     (0x01UL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< EPWM0 counter synchronous trigger input pin. */
#define SYS_GPB_MFPL_PB6MFP_UART15_RXD        (0x02UL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< Data receiver input pin for UART15. */
#define SYS_GPB_MFPL_PB6MFP_CAN3_RXD          (0x03UL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< CAN3 bus receiver input. */
#define SYS_GPB_MFPL_PB6MFP_USBHL1_DM         (0x04UL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!<  */
#define SYS_GPB_MFPL_PB6MFP_SPI0_MOSI         (0x05UL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. */
#define SYS_GPB_MFPL_PB6MFP_I2S0_DI           (0x06UL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< I2S0 data input. */
#define SYS_GPB_MFPL_PB6MFP_EADC0_CH6         (0x08UL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< EADC0 channel6 analog input. */
#define SYS_GPB_MFPL_PB6MFP_INT2              (0x09UL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< External interrupt2 input pin. */
#define SYS_GPB_MFPL_PB6MFP_KPI_ROW6          (0x0AUL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< Keypad Interface Row 6 input pin. */
#define SYS_GPB_MFPL_PB6MFP_TM3               (0x0BUL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< Timer3 event counter input / toggle output */
#define SYS_GPB_MFPL_PB7MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPL_PB7MFP_EPWM0_SYNC_OUT    (0x01UL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< EPWM0 counter synchronous trigger output pin. */
#define SYS_GPB_MFPL_PB7MFP_UART15_TXD        (0x02UL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< Data transmitter output pin for UART15. */
#define SYS_GPB_MFPL_PB7MFP_CAN3_TXD          (0x03UL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< CAN3 bus transmitter output. */
#define SYS_GPB_MFPL_PB7MFP_USBHL1_DP         (0x04UL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!<  */
#define SYS_GPB_MFPL_PB7MFP_SPI0_MISO         (0x05UL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< 1st SPI0 MISO (Master In, Slave Out) pin. */
#define SYS_GPB_MFPL_PB7MFP_I2S0_DO           (0x06UL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< I2S0 data output. */
#define SYS_GPB_MFPL_PB7MFP_EBI_MCLK          (0x07UL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< EBI external clock output pin. */
#define SYS_GPB_MFPL_PB7MFP_EADC0_CH7         (0x08UL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< EADC0 channel7 analog input. */
#define SYS_GPB_MFPL_PB7MFP_KPI_ROW7          (0x0AUL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< Keypad Interface Row 7 input pin. */
/********************* Bit definition of GPB_MFPH register **********************/
#define SYS_GPB_MFPH_PB8MFP_GPIO              (0x00UL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPH_PB8MFP_EPWM0_CH0         (0x01UL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< EPWM0 channel0 output/capture input. */
#define SYS_GPB_MFPH_PB8MFP_UART2_nCTS        (0x02UL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< Clear to Send input pin for UART2. */
#define SYS_GPB_MFPH_PB8MFP_UART1_RXD         (0x03UL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< Data receiver input pin for UART1. */
#define SYS_GPB_MFPH_PB8MFP_I2C2_SDA          (0x04UL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< I2C2 data input/output pin. */
#define SYS_GPB_MFPH_PB8MFP_SPI1_SS0          (0x05UL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< 1st SPI1 slave select pin. */
#define SYS_GPB_MFPH_PB8MFP_EBI_ALE           (0x07UL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< EBI address latch enable output pin. */
#define SYS_GPB_MFPH_PB8MFP_KPI_COL2          (0x0AUL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< Keypad Interface Column 2 output pin. */
#define SYS_GPB_MFPH_PB8MFP_TM4               (0x0BUL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< Timer4 event counter input / toggle output */
#define SYS_GPB_MFPH_PB9MFP_GPIO              (0x00UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPH_PB9MFP_EPWM0_CH1         (0x01UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< EPWM0 channel1 output/capture input. */
#define SYS_GPB_MFPH_PB9MFP_UART2_nRTS        (0x02UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< Request to Send output pin for UART2. */
#define SYS_GPB_MFPH_PB9MFP_UART1_TXD         (0x03UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< Data transmitter output pin for UART1. */
#define SYS_GPB_MFPH_PB9MFP_I2C2_SCL          (0x04UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< I2C2 clock pin. */
#define SYS_GPB_MFPH_PB9MFP_SPI1_CLK          (0x05UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< SPI1 serial clock pin. */
#define SYS_GPB_MFPH_PB9MFP_EBI_nCS2          (0x07UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< EBI chip select enable output pin. */
#define SYS_GPB_MFPH_PB9MFP_ADC0_CH0          (0x08UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< ADC0 channel 0 analog input. */
#define SYS_GPB_MFPH_PB9MFP_KPI_COL3          (0x0AUL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< Keypad Interface Column 3 output pin. */
#define SYS_GPB_MFPH_PB9MFP_TM0_EXT           (0x0BUL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< Timer0 event counter input / toggle output */
#define SYS_GPB_MFPH_PB10MFP_GPIO             (0x00UL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPH_PB10MFP_EPWM0_CH2        (0x01UL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< EPWM0 channel2 output/capture input. */
#define SYS_GPB_MFPH_PB10MFP_UART2_RXD        (0x02UL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< Data receiver input pin for UART2. */
#define SYS_GPB_MFPH_PB10MFP_CAN0_RXD         (0x03UL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< CAN0 bus receiver input. */
#define SYS_GPB_MFPH_PB10MFP_USBHL2_DM        (0x04UL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!<  */
#define SYS_GPB_MFPH_PB10MFP_SPI1_MOSI        (0x05UL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. */
#define SYS_GPB_MFPH_PB10MFP_EBI_nCS1         (0x07UL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< EBI chip select enable output pin. */
#define SYS_GPB_MFPH_PB10MFP_ADC0_CH1         (0x08UL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< ADC0 channel 1 analog input. */
#define SYS_GPB_MFPH_PB10MFP_KPI_COL6         (0x0AUL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< Keypad Interface Column 6 output pin. */
#define SYS_GPB_MFPH_PB10MFP_TM0              (0x0BUL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< Timer0 event counter input / toggle output */
#define SYS_GPB_MFPH_PB11MFP_GPIO             (0x00UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPH_PB11MFP_EPWM0_CH3        (0x01UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< EPWM0 channel3 output/capture input. */
#define SYS_GPB_MFPH_PB11MFP_UART2_TXD        (0x02UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< Data transmitter output pin for UART2. */
#define SYS_GPB_MFPH_PB11MFP_CAN0_TXD         (0x03UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< CAN0 bus transmitter output. */
#define SYS_GPB_MFPH_PB11MFP_USBHL2_DP        (0x04UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!<  */
#define SYS_GPB_MFPH_PB11MFP_SPI1_MISO        (0x05UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< 1st SPI1 MISO (Master In, Slave Out) pin. */
#define SYS_GPB_MFPH_PB11MFP_EBI_nCS0         (0x07UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< EBI chip select enable output pin. */
#define SYS_GPB_MFPH_PB11MFP_ADC0_CH2         (0x08UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< ADC0 channel 2 analog input. */
#define SYS_GPB_MFPH_PB11MFP_KPI_COL7         (0x0AUL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< Keypad Interface Column 7 output pin. */
#define SYS_GPB_MFPH_PB11MFP_TM1_EXT          (0x0BUL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPB_MFPH_PB12MFP_GPIO             (0x00UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPH_PB12MFP_EPWM0_CH4        (0x01UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< EPWM0 channel4 output/capture input. */
#define SYS_GPB_MFPH_PB12MFP_UART4_nCTS       (0x02UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< Clear to Send input pin for UART4. */
#define SYS_GPB_MFPH_PB12MFP_UART3_RXD        (0x03UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< Data receiver input pin for UART3. */
#define SYS_GPB_MFPH_PB12MFP_I2C3_SDA         (0x04UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< I2C3 data input/output pin. */
#define SYS_GPB_MFPH_PB12MFP_SPI2_SS0         (0x05UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< 1st SPI2 slave select pin. */
#define SYS_GPB_MFPH_PB12MFP_I2C4_SDA         (0x06UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< I2C4 data input/output pin. */
#define SYS_GPB_MFPH_PB12MFP_EBI_nRD          (0x07UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< EBI read enable output pin. */
#define SYS_GPB_MFPH_PB12MFP_ADC0_CH3         (0x08UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< ADC0 channel 3 analog input. */
#define SYS_GPB_MFPH_PB12MFP_KPI_ROW0         (0x0AUL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< Keypad Interface Row 0 input pin. */
#define SYS_GPB_MFPH_PB12MFP_TM1              (0x0BUL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPB_MFPH_PB13MFP_GPIO             (0x00UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPH_PB13MFP_EPWM0_CH5        (0x01UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< EPWM0 channel5 output/capture input. */
#define SYS_GPB_MFPH_PB13MFP_UART4_nRTS       (0x02UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< Request to Send output pin for UART4. */
#define SYS_GPB_MFPH_PB13MFP_UART3_TXD        (0x03UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< Data transmitter output pin for UART3. */
#define SYS_GPB_MFPH_PB13MFP_I2C3_SCL         (0x04UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< I2C3 clock pin. */
#define SYS_GPB_MFPH_PB13MFP_SPI2_CLK         (0x05UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< SPI2 serial clock pin. */
#define SYS_GPB_MFPH_PB13MFP_I2C4_SCL         (0x06UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< I2C4 clock pin. */
#define SYS_GPB_MFPH_PB13MFP_EBI_nWR          (0x07UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< EBI write enable output pin. */
#define SYS_GPB_MFPH_PB13MFP_ADC0_CH4         (0x08UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< ADC0 channel 4 analog input. */
#define SYS_GPB_MFPH_PB13MFP_INT2             (0x09UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< External interrupt2 input pin. */
#define SYS_GPB_MFPH_PB13MFP_KPI_ROW1         (0x0AUL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< Keypad Interface Row 1 input pin. */
#define SYS_GPB_MFPH_PB13MFP_TM2_EXT          (0x0BUL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< Timer2 event counter input / toggle output */
#define SYS_GPB_MFPH_PB14MFP_GPIO             (0x00UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPH_PB14MFP_EPWM0_BRAKE0     (0x01UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< Brake input pin 0 of EPWM0. */
#define SYS_GPB_MFPH_PB14MFP_UART4_RXD        (0x02UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< Data receiver input pin for UART4. */
#define SYS_GPB_MFPH_PB14MFP_CAN1_RXD         (0x03UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< CAN1 bus receiver input. */
#define SYS_GPB_MFPH_PB14MFP_USBHL3_DM        (0x04UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!<  */
#define SYS_GPB_MFPH_PB14MFP_SPI2_MOSI        (0x05UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< 1st SPI2 MOSI (Master Out, Slave In) pin. */
#define SYS_GPB_MFPH_PB14MFP_I2C5_SDA         (0x06UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< I2C5 data input/output pin. */
#define SYS_GPB_MFPH_PB14MFP_EBI_ADR19        (0x07UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPB_MFPH_PB14MFP_ADC0_CH5         (0x08UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< ADC0 channel 5 analog input. */
#define SYS_GPB_MFPH_PB14MFP_KPI_ROW2         (0x0AUL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< Keypad Interface Row 2 input pin. */
#define SYS_GPB_MFPH_PB14MFP_TM2              (0x0BUL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< Timer2 event counter input / toggle output */
#define SYS_GPB_MFPH_PB15MFP_GPIO             (0x00UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPB_MFPH_PB15MFP_EPWM0_BRAKE1     (0x01UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< Brake input pin 1 of EPWM0. */
#define SYS_GPB_MFPH_PB15MFP_UART4_TXD        (0x02UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< Data transmitter output pin for UART4. */
#define SYS_GPB_MFPH_PB15MFP_CAN1_TXD         (0x03UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< CAN1 bus transmitter output. */
#define SYS_GPB_MFPH_PB15MFP_USBHL3_DP        (0x04UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!<  */
#define SYS_GPB_MFPH_PB15MFP_SPI2_MISO        (0x05UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< 1st SPI2 MISO (Master In, Slave Out) pin. */
#define SYS_GPB_MFPH_PB15MFP_I2C5_SCL         (0x06UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< I2C5 clock pin. */
#define SYS_GPB_MFPH_PB15MFP_EBI_ADR18        (0x07UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPB_MFPH_PB15MFP_ADC0_CH6         (0x08UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< ADC0 channel 6 analog input. */
#define SYS_GPB_MFPH_PB15MFP_KPI_ROW3         (0x0AUL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< Keypad Interface Row 3 input pin. */
#define SYS_GPB_MFPH_PB15MFP_TM3_EXT          (0x0BUL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< Timer3 event counter input / toggle output */
/********************* Bit definition of GPC_MFPL register **********************/
#define SYS_GPC_MFPL_PC0MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPL_PC0MFP_EPWM1_BRAKE0      (0x01UL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< Brake input pin 0 of EPWM1. */
#define SYS_GPC_MFPL_PC0MFP_UART6_nCTS        (0x02UL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< Clear to Send input pin for UART6. */
#define SYS_GPC_MFPL_PC0MFP_UART5_RXD         (0x03UL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< Data receiver input pin for UART5. */
#define SYS_GPC_MFPL_PC0MFP_I2C4_SDA          (0x04UL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< I2C4 data input/output pin. */
#define SYS_GPC_MFPL_PC0MFP_eMMC0_CMD         (0x06UL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< eMMC0 command/response. */
#define SYS_GPC_MFPL_PC0MFP_SD0_CMD           (0x06UL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< SD/SDIO0 command/response. */
#define SYS_GPC_MFPL_PC0MFP_VCAP0_DATA2       (0x08UL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< Camera capture 0 data input bus bit 2. */
#define SYS_GPC_MFPL_PC0MFP_KPI_ROW4          (0x0AUL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< Keypad Interface Row 4 input pin. */
#define SYS_GPC_MFPL_PC0MFP_TM3               (0x0BUL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< Timer3 event counter input / toggle output */
#define SYS_GPC_MFPL_PC1MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPL_PC1MFP_EPWM1_BRAKE1      (0x01UL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< Brake input pin 1 of EPWM1. */
#define SYS_GPC_MFPL_PC1MFP_UART6_nRTS        (0x02UL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< Request to Send output pin for UART6. */
#define SYS_GPC_MFPL_PC1MFP_UART5_TXD         (0x03UL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< Data transmitter output pin for UART5. */
#define SYS_GPC_MFPL_PC1MFP_I2C4_SCL          (0x04UL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< I2C4 clock pin. */
#define SYS_GPC_MFPL_PC1MFP_eMMC0_CLK         (0x06UL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< eMMC0 clock. */
#define SYS_GPC_MFPL_PC1MFP_SD0_CLK           (0x06UL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< SD/SDIO0 clock. */
#define SYS_GPC_MFPL_PC1MFP_VCAP0_DATA3       (0x08UL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< Camera capture 0 data input bus bit 3. */
#define SYS_GPC_MFPL_PC1MFP_KPI_ROW5          (0x0AUL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< Keypad Interface Row 5 input pin. */
#define SYS_GPC_MFPL_PC1MFP_TM4_EXT           (0x0BUL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< Timer4 event counter input / toggle output */
#define SYS_GPC_MFPL_PC2MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPL_PC2MFP_ECAP0_IC0         (0x01UL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< Input 0 of enhanced capture unit 0. */
#define SYS_GPC_MFPL_PC2MFP_UART6_RXD         (0x02UL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< Data receiver input pin for UART6. */
#define SYS_GPC_MFPL_PC2MFP_CAN0_RXD          (0x03UL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< CAN0 bus receiver input. */
#define SYS_GPC_MFPL_PC2MFP_USBHL4_DM         (0x04UL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!<  */
#define SYS_GPC_MFPL_PC2MFP_eMMC0_DAT0        (0x06UL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< eMMC0 data line bit 0. */
#define SYS_GPC_MFPL_PC2MFP_SD0_DAT0          (0x06UL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< SD/SDIO0 data line bit 0. */
#define SYS_GPC_MFPL_PC2MFP_VCAP0_DATA4       (0x08UL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< Camera capture 0 data input bus bit 4. */
#define SYS_GPC_MFPL_PC2MFP_KPI_ROW0          (0x0AUL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< Keypad Interface Row 0 input pin. */
#define SYS_GPC_MFPL_PC2MFP_TM4               (0x0BUL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< Timer4 event counter input / toggle output */
#define SYS_GPC_MFPL_PC3MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPL_PC3MFP_ECAP0_IC1         (0x01UL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< Input 1 of enhanced capture unit 0. */
#define SYS_GPC_MFPL_PC3MFP_UART6_TXD         (0x02UL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< Data transmitter output pin for UART6. */
#define SYS_GPC_MFPL_PC3MFP_CAN0_TXD          (0x03UL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< CAN0 bus transmitter output. */
#define SYS_GPC_MFPL_PC3MFP_USBHL4_DP         (0x04UL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!<  */
#define SYS_GPC_MFPL_PC3MFP_eMMC0_DAT1        (0x06UL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< eMMC0 data line bit 1. */
#define SYS_GPC_MFPL_PC3MFP_SD0_DAT1          (0x06UL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< SD/SDIO0 data line bit 1. */
#define SYS_GPC_MFPL_PC3MFP_VCAP0_DATA5       (0x08UL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< Camera capture 0 data input bus bit 5. */
#define SYS_GPC_MFPL_PC3MFP_KPI_ROW1          (0x0AUL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< Keypad Interface Row 1 input pin. */
#define SYS_GPC_MFPL_PC3MFP_TM5_EXT           (0x0BUL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< Timer5 event counter input / toggle output */
#define SYS_GPC_MFPL_PC4MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPL_PC4MFP_ECAP0_IC2         (0x01UL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< Input 0 of enhanced capture unit 2. */
#define SYS_GPC_MFPL_PC4MFP_UART8_nCTS        (0x02UL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< Clear to Send input pin for UART8. */
#define SYS_GPC_MFPL_PC4MFP_UART7_RXD         (0x03UL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< Data receiver input pin for UART7. */
#define SYS_GPC_MFPL_PC4MFP_I2C5_SDA          (0x04UL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< I2C5 data input/output pin. */
#define SYS_GPC_MFPL_PC4MFP_eMMC0_DAT2        (0x06UL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< eMMC0 data line bit 2. */
#define SYS_GPC_MFPL_PC4MFP_SD0_DAT2          (0x06UL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< SD/SDIO0 data line bit 2. */
#define SYS_GPC_MFPL_PC4MFP_VCAP0_DATA6       (0x08UL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< Camera capture 0 data input bus bit 6. */
#define SYS_GPC_MFPL_PC4MFP_KPI_ROW2          (0x0AUL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< Keypad Interface Row 2 input pin. */
#define SYS_GPC_MFPL_PC4MFP_TM5               (0x0BUL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< Timer5 event counter input / toggle output */
#define SYS_GPC_MFPL_PC5MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPL_PC5MFP_QEI0_A            (0x01UL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< Quadrature encoder phase A input of QEI Unit 0. */
#define SYS_GPC_MFPL_PC5MFP_UART8_nRTS        (0x02UL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< Request to Send output pin for UART8. */
#define SYS_GPC_MFPL_PC5MFP_UART7_TXD         (0x03UL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< Data transmitter output pin for UART7. */
#define SYS_GPC_MFPL_PC5MFP_I2C5_SCL          (0x04UL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< I2C5 clock pin. */
#define SYS_GPC_MFPL_PC5MFP_eMMC0_DAT3        (0x06UL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< eMMC0 data line bit 3. */
#define SYS_GPC_MFPL_PC5MFP_SD0_DAT3          (0x06UL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< SD/SDIO0 data line bit 3. */
#define SYS_GPC_MFPL_PC5MFP_VCAP0_DATA7       (0x08UL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< Camera capture 0 data input bus bit 7. */
#define SYS_GPC_MFPL_PC5MFP_KPI_ROW3          (0x0AUL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< Keypad Interface Row 3 input pin. */
#define SYS_GPC_MFPL_PC5MFP_TM6_EXT           (0x0BUL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< Timer6 event counter input / toggle output */
#define SYS_GPC_MFPL_PC6MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPL_PC6MFP_QEI0_B            (0x01UL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< Quadrature encoder phase B input of QEI Unit 0. */
#define SYS_GPC_MFPL_PC6MFP_UART8_RXD         (0x02UL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< Data receiver input pin for UART8. */
#define SYS_GPC_MFPL_PC6MFP_CAN1_RXD          (0x03UL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< CAN1 bus receiver input. */
#define SYS_GPC_MFPL_PC6MFP_USBHL5_DM         (0x04UL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!<  */
#define SYS_GPC_MFPL_PC6MFP_SD0_nCD           (0x06UL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< SD/SDIO0 card detect */
#define SYS_GPC_MFPL_PC6MFP_VCAP0_DATA8       (0x08UL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< Camera capture 0 data input bus bit 8. */
#define SYS_GPC_MFPL_PC6MFP_KPI_ROW6          (0x0AUL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< Keypad Interface Row 6 input pin. */
#define SYS_GPC_MFPL_PC6MFP_TM6               (0x0BUL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< Timer6 event counter input / toggle output */
#define SYS_GPC_MFPL_PC7MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPL_PC7MFP_QEI0_INDEX        (0x01UL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< Quadrature encoder index input of QEI Unit 0. */
#define SYS_GPC_MFPL_PC7MFP_UART8_TXD         (0x02UL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< Data transmitter output pin for UART8. */
#define SYS_GPC_MFPL_PC7MFP_CAN1_TXD          (0x03UL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< CAN1 bus transmitter output. */
#define SYS_GPC_MFPL_PC7MFP_USBHL5_DP         (0x04UL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!<  */
#define SYS_GPC_MFPL_PC7MFP_SD0_WP            (0x06UL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< SD/SDIO0 write protect input. */
#define SYS_GPC_MFPL_PC7MFP_VCAP0_DATA9       (0x08UL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< Camera capture 0 data input bus bit 9. */
#define SYS_GPC_MFPL_PC7MFP_KPI_ROW7          (0x0AUL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< Keypad Interface Row 7 input pin. */
#define SYS_GPC_MFPL_PC7MFP_TM7_EXT           (0x0BUL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< Timer7 event counter input / toggle output */
/********************* Bit definition of GPC_MFPH register **********************/
#define SYS_GPC_MFPH_PC8MFP_GPIO              (0x00UL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPH_PC8MFP_UART10_nCTS       (0x02UL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< Clear to Send input pin for UART10. */
#define SYS_GPC_MFPH_PC8MFP_UART9_RXD         (0x03UL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< Data receiver input pin for UART*. */
#define SYS_GPC_MFPH_PC8MFP_I2C0_SDA          (0x04UL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< I2C0 data input/output pin. */
#define SYS_GPC_MFPH_PC8MFP_SPI0_SS0          (0x05UL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< 1st SPI0 slave select pin. */
#define SYS_GPC_MFPH_PC8MFP_eMMC0_DAT4        (0x06UL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< eMMC0 data line bit 4. */
#define SYS_GPC_MFPH_PC8MFP_EBI_nRD           (0x07UL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< EBI read enable output pin. */
#define SYS_GPC_MFPH_PC8MFP_CLKO              (0x08UL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< Clock Output pin. */
#define SYS_GPC_MFPH_PC8MFP_KPI_COL0          (0x0AUL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< Keypad Interface Column 0 output pin. */
#define SYS_GPC_MFPH_PC8MFP_TM7               (0x0BUL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< Timer7 event counter input / toggle output */
#define SYS_GPC_MFPH_PC9MFP_GPIO              (0x00UL<<SYS_GPC_MFPH_PC9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPH_PC9MFP_UART10_nRTS       (0x02UL<<SYS_GPC_MFPH_PC9MFP_Pos)  /*!< Request to Send output pin for UART10. */
#define SYS_GPC_MFPH_PC9MFP_UART9_TXD         (0x03UL<<SYS_GPC_MFPH_PC9MFP_Pos)  /*!< Data transmitter output pin for UART*. */
#define SYS_GPC_MFPH_PC9MFP_I2C0_SCL          (0x04UL<<SYS_GPC_MFPH_PC9MFP_Pos)  /*!< I2C0 clock pin. */
#define SYS_GPC_MFPH_PC9MFP_SPI0_CLK          (0x05UL<<SYS_GPC_MFPH_PC9MFP_Pos)  /*!< SPI0 serial clock pin. */
#define SYS_GPC_MFPH_PC9MFP_eMMC0_DAT5        (0x06UL<<SYS_GPC_MFPH_PC9MFP_Pos)  /*!< eMMC0 data line bit 5. */
#define SYS_GPC_MFPH_PC9MFP_EBI_nWR           (0x07UL<<SYS_GPC_MFPH_PC9MFP_Pos)  /*!< EBI write enable output pin. */
#define SYS_GPC_MFPH_PC9MFP_KPI_COL1          (0x0AUL<<SYS_GPC_MFPH_PC9MFP_Pos)  /*!< Keypad Interface Column 1 output pin. */
#define SYS_GPC_MFPH_PC9MFP_TM8_EXT           (0x0BUL<<SYS_GPC_MFPH_PC9MFP_Pos)  /*!< Timer8 event counter input / toggle output */
#define SYS_GPC_MFPH_PC10MFP_GPIO             (0x00UL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPH_PC10MFP_EPWM1_CH0        (0x01UL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!< EPWM1 channel0 output/capture input. */
#define SYS_GPC_MFPH_PC10MFP_UART10_RXD       (0x02UL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!< Data receiver input pin for UART10. */
#define SYS_GPC_MFPH_PC10MFP_CAN2_RXD         (0x03UL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!< CAN2 bus receiver input. */
#define SYS_GPC_MFPH_PC10MFP_USBHL0_DM        (0x04UL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!<  */
#define SYS_GPC_MFPH_PC10MFP_SPI0_MOSI        (0x05UL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. */
#define SYS_GPC_MFPH_PC10MFP_eMMC0_DAT6       (0x06UL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!< eMMC0 data line bit 6. */
#define SYS_GPC_MFPH_PC10MFP_EBI_ADR19        (0x07UL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPC_MFPH_PC10MFP_SC1_RST          (0x08UL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!< SmartCard1 reset pin. */
#define SYS_GPC_MFPH_PC10MFP_KPI_COL2         (0x0AUL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!< Keypad Interface Column 2 output pin. */
#define SYS_GPC_MFPH_PC10MFP_TM8              (0x0BUL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!< Timer8 event counter input / toggle output */
#define SYS_GPC_MFPH_PC11MFP_GPIO             (0x00UL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPH_PC11MFP_EPWM1_CH1        (0x01UL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< EPWM1 channel1 output/capture input. */
#define SYS_GPC_MFPH_PC11MFP_UART10_TXD       (0x02UL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< Data transmitter output pin for UART10. */
#define SYS_GPC_MFPH_PC11MFP_CAN2_TXD         (0x03UL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< CAN2 bus transmitter output. */
#define SYS_GPC_MFPH_PC11MFP_USBHL0_DP        (0x04UL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!<  */
#define SYS_GPC_MFPH_PC11MFP_SPI0_MISO        (0x05UL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< 1st SPI0 MISO (Master In, Slave Out) pin. */
#define SYS_GPC_MFPH_PC11MFP_eMMC0_DAT7       (0x06UL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< eMMC0 data line bit 7. */
#define SYS_GPC_MFPH_PC11MFP_EBI_ADR18        (0x07UL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPC_MFPH_PC11MFP_SC1_CLK          (0x08UL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< SmartCard1 clock pin. */
#define SYS_GPC_MFPH_PC11MFP_KPI_COL3         (0x0AUL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< Keypad Interface Column 3 output pin. */
#define SYS_GPC_MFPH_PC11MFP_TM9_EXT          (0x0BUL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< Timer* event counter input / toggle output */
#define SYS_GPC_MFPH_PC12MFP_GPIO             (0x00UL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPH_PC12MFP_EPWM1_CH2        (0x01UL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< EPWM1 channel2 output/capture input. */
#define SYS_GPC_MFPH_PC12MFP_UART12_nCTS      (0x02UL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< Clear to Send input pin for UART12. */
#define SYS_GPC_MFPH_PC12MFP_UART11_RXD       (0x03UL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< Data receiver input pin for UART11. */
#define SYS_GPC_MFPH_PC12MFP_I2C1_SDA         (0x04UL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< I2C1 data input/output pin. */
#define SYS_GPC_MFPH_PC12MFP_SPI1_SS0         (0x05UL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< 1st SPI1 slave select pin. */
#define SYS_GPC_MFPH_PC12MFP_EBI_ADR17        (0x07UL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPC_MFPH_PC12MFP_SC1_DAT          (0x08UL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< SmartCard1 data pin. */
#define SYS_GPC_MFPH_PC12MFP_KPI_COL4         (0x0AUL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< Keypad Interface Column 4 output pin. */
#define SYS_GPC_MFPH_PC12MFP_TM9              (0x0BUL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< Timer9 event counter input / toggle output */
#define SYS_GPC_MFPH_PC13MFP_GPIO             (0x00UL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPH_PC13MFP_EPWM1_CH3        (0x01UL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< EPWM1 channel3 output/capture input. */
#define SYS_GPC_MFPH_PC13MFP_UART12_nRTS      (0x02UL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< Request to Send output pin for UART12. */
#define SYS_GPC_MFPH_PC13MFP_UART11_TXD       (0x03UL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< Data transmitter output pin for UART11. */
#define SYS_GPC_MFPH_PC13MFP_I2C1_SCL         (0x04UL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< I2C1 clock pin. */
#define SYS_GPC_MFPH_PC13MFP_SPI1_CLK         (0x05UL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< SPI1 serial clock pin. */
#define SYS_GPC_MFPH_PC13MFP_EBI_ADR16        (0x07UL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPC_MFPH_PC13MFP_SC1_PWR          (0x08UL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< SmartCard1 power pin. */
#define SYS_GPC_MFPH_PC13MFP_KPI_COL5         (0x0AUL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< Keypad Interface Column 5 output pin. */
#define SYS_GPC_MFPH_PC13MFP_TM10_EXT         (0x0BUL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPC_MFPH_PC14MFP_GPIO             (0x00UL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPH_PC14MFP_EPWM1_CH4        (0x01UL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< EPWM1 channel4 output/capture input. */
#define SYS_GPC_MFPH_PC14MFP_UART12_RXD       (0x02UL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< Data receiver input pin for UART12. */
#define SYS_GPC_MFPH_PC14MFP_CAN3_RXD         (0x03UL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< CAN3 bus receiver input. */
#define SYS_GPC_MFPH_PC14MFP_USBHL1_DM        (0x04UL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!<  */
#define SYS_GPC_MFPH_PC14MFP_SPI1_MOSI        (0x05UL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. */
#define SYS_GPC_MFPH_PC14MFP_EBI_ADR15        (0x07UL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPC_MFPH_PC14MFP_SC1_nCD          (0x08UL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< SmartCard1 card detect pin. */
#define SYS_GPC_MFPH_PC14MFP_KPI_COL6         (0x0AUL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< Keypad Interface Column 6 output pin. */
#define SYS_GPC_MFPH_PC14MFP_TM10             (0x0BUL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPC_MFPH_PC15MFP_GPIO             (0x00UL<<SYS_GPC_MFPH_PC15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPC_MFPH_PC15MFP_EPWM1_CH5        (0x01UL<<SYS_GPC_MFPH_PC15MFP_Pos) /*!< EPWM1 channel5 output/capture input. */
#define SYS_GPC_MFPH_PC15MFP_UART12_TXD       (0x02UL<<SYS_GPC_MFPH_PC15MFP_Pos) /*!< Data transmitter output pin for UART12. */
#define SYS_GPC_MFPH_PC15MFP_CAN3_TXD         (0x03UL<<SYS_GPC_MFPH_PC15MFP_Pos) /*!< CAN3 bus transmitter output. */
#define SYS_GPC_MFPH_PC15MFP_USBHL1_DP        (0x04UL<<SYS_GPC_MFPH_PC15MFP_Pos) /*!<  */
#define SYS_GPC_MFPH_PC15MFP_SPI1_MISO        (0x05UL<<SYS_GPC_MFPH_PC15MFP_Pos) /*!< 1st SPI1 MISO (Master In, Slave Out) pin. */
#define SYS_GPC_MFPH_PC15MFP_EBI_ADR14        (0x07UL<<SYS_GPC_MFPH_PC15MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPC_MFPH_PC15MFP_SC0_RST          (0x08UL<<SYS_GPC_MFPH_PC15MFP_Pos) /*!< SmartCard0 reset pin. */
#define SYS_GPC_MFPH_PC15MFP_KPI_COL7         (0x0AUL<<SYS_GPC_MFPH_PC15MFP_Pos) /*!< Keypad Interface Column 7 output pin. */
#define SYS_GPC_MFPH_PC15MFP_TM11_EXT         (0x0BUL<<SYS_GPC_MFPH_PC15MFP_Pos) /*!< Timer1 event counter input / toggle output */
/********************* Bit definition of GPD_MFPL register **********************/
#define SYS_GPD_MFPL_PD0MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPL_PD0MFP_EPWM0_CH0         (0x01UL<<SYS_GPD_MFPL_PD0MFP_Pos)  /*!< EPWM0 channel0 output/capture input. */
#define SYS_GPD_MFPL_PD0MFP_UART16_nCTS       (0x02UL<<SYS_GPD_MFPL_PD0MFP_Pos)  /*!< Clear to Send input pin for UART16. */
#define SYS_GPD_MFPL_PD0MFP_UART15_RXD        (0x03UL<<SYS_GPD_MFPL_PD0MFP_Pos)  /*!< Data receiver input pin for UART15. */
#define SYS_GPD_MFPL_PD0MFP_I2C1_SDA          (0x04UL<<SYS_GPD_MFPL_PD0MFP_Pos)  /*!< I2C1 data input/output pin. */
#define SYS_GPD_MFPL_PD0MFP_QSPI0_SS0         (0x05UL<<SYS_GPD_MFPL_PD0MFP_Pos)  /*!< Quad SPI0 slave select pin. */
#define SYS_GPD_MFPL_PD0MFP_I2S1_LRCK         (0x07UL<<SYS_GPD_MFPL_PD0MFP_Pos)  /*!< I2S1 left right channel clock. */
#define SYS_GPD_MFPL_PD0MFP_TM11              (0x0BUL<<SYS_GPD_MFPL_PD0MFP_Pos)  /*!< Timer1 event counter input / toggle output */
#define SYS_GPD_MFPL_PD1MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPL_PD1MFP_EPWM0_CH1         (0x01UL<<SYS_GPD_MFPL_PD1MFP_Pos)  /*!< EPWM0 channel1 output/capture input. */
#define SYS_GPD_MFPL_PD1MFP_UART16_nRTS       (0x02UL<<SYS_GPD_MFPL_PD1MFP_Pos)  /*!< Request to Send output pin for UART16. */
#define SYS_GPD_MFPL_PD1MFP_UART15_TXD        (0x03UL<<SYS_GPD_MFPL_PD1MFP_Pos)  /*!< Data transmitter output pin for UART15. */
#define SYS_GPD_MFPL_PD1MFP_I2C1_SCL          (0x04UL<<SYS_GPD_MFPL_PD1MFP_Pos)  /*!< I2C1 clock pin. */
#define SYS_GPD_MFPL_PD1MFP_QSPI0_CLK         (0x05UL<<SYS_GPD_MFPL_PD1MFP_Pos)  /*!< Quad SPI0 serial clock pin. */
#define SYS_GPD_MFPL_PD1MFP_I2S1_BCLK         (0x07UL<<SYS_GPD_MFPL_PD1MFP_Pos)  /*!< I2S1 bit clock pin. */
#define SYS_GPD_MFPL_PD1MFP_TM0_EXT           (0x0BUL<<SYS_GPD_MFPL_PD1MFP_Pos)  /*!< Timer0 event counter input / toggle output */
#define SYS_GPD_MFPL_PD2MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPL_PD2MFP_QEI2_A            (0x01UL<<SYS_GPD_MFPL_PD2MFP_Pos)  /*!< Quadrature encoder phase A input of QEI Unit 2. */
#define SYS_GPD_MFPL_PD2MFP_UART16_RXD        (0x02UL<<SYS_GPD_MFPL_PD2MFP_Pos)  /*!< Data receiver input pin for UART16. */
#define SYS_GPD_MFPL_PD2MFP_CAN0_RXD          (0x03UL<<SYS_GPD_MFPL_PD2MFP_Pos)  /*!< CAN0 bus receiver input. */
#define SYS_GPD_MFPL_PD2MFP_USBHL2_DM         (0x04UL<<SYS_GPD_MFPL_PD2MFP_Pos)  /*!<  */
#define SYS_GPD_MFPL_PD2MFP_QSPI0_MOSI0       (0x05UL<<SYS_GPD_MFPL_PD2MFP_Pos)  /*!< Quad SPI0 MOSI0 (Master Out, Slave In) pin. */
#define SYS_GPD_MFPL_PD2MFP_I2S1_DI           (0x07UL<<SYS_GPD_MFPL_PD2MFP_Pos)  /*!< I2S1 data input. */
#define SYS_GPD_MFPL_PD2MFP_TM0               (0x0BUL<<SYS_GPD_MFPL_PD2MFP_Pos)  /*!< Timer0 event counter input / toggle output */
#define SYS_GPD_MFPL_PD3MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPL_PD3MFP_QEI2_B            (0x01UL<<SYS_GPD_MFPL_PD3MFP_Pos)  /*!< Quadrature encoder phase B input of QEI Unit 2. */
#define SYS_GPD_MFPL_PD3MFP_UART16_TXD        (0x02UL<<SYS_GPD_MFPL_PD3MFP_Pos)  /*!< Data transmitter output pin for UART16. */
#define SYS_GPD_MFPL_PD3MFP_CAN0_TXD          (0x03UL<<SYS_GPD_MFPL_PD3MFP_Pos)  /*!< CAN0 bus transmitter output. */
#define SYS_GPD_MFPL_PD3MFP_USBHL2_DP         (0x04UL<<SYS_GPD_MFPL_PD3MFP_Pos)  /*!<  */
#define SYS_GPD_MFPL_PD3MFP_QSPI0_MISO0       (0x05UL<<SYS_GPD_MFPL_PD3MFP_Pos)  /*!< Quad SPI0 MISO0 (Master In, Slave Out) pin. */
#define SYS_GPD_MFPL_PD3MFP_I2S1_DO           (0x07UL<<SYS_GPD_MFPL_PD3MFP_Pos)  /*!< I2S1 data output. */
#define SYS_GPD_MFPL_PD3MFP_TM1_EXT           (0x0BUL<<SYS_GPD_MFPL_PD3MFP_Pos)  /*!< Timer1 event counter input / toggle output */
#define SYS_GPD_MFPL_PD4MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPL_PD4MFP_EPWM0_CH2         (0x01UL<<SYS_GPD_MFPL_PD4MFP_Pos)  /*!< EPWM0 channel2 output/capture input. */
#define SYS_GPD_MFPL_PD4MFP_UART1_nCTS        (0x02UL<<SYS_GPD_MFPL_PD4MFP_Pos)  /*!< Clear to Send input pin for UART1. */
#define SYS_GPD_MFPL_PD4MFP_UART2_RXD         (0x03UL<<SYS_GPD_MFPL_PD4MFP_Pos)  /*!< Data receiver input pin for UART2. */
#define SYS_GPD_MFPL_PD4MFP_I2C2_SDA          (0x04UL<<SYS_GPD_MFPL_PD4MFP_Pos)  /*!< I2C2 data input/output pin. */
#define SYS_GPD_MFPL_PD4MFP_QSPI0_MOSI1       (0x05UL<<SYS_GPD_MFPL_PD4MFP_Pos)  /*!< Quad SPI0 MOSI1 (Master Out, Slave In) pin. */
#define SYS_GPD_MFPL_PD4MFP_I2S1_MCLK         (0x07UL<<SYS_GPD_MFPL_PD4MFP_Pos)  /*!< I2S1 master clock output pin. */
#define SYS_GPD_MFPL_PD4MFP_TM1               (0x0BUL<<SYS_GPD_MFPL_PD4MFP_Pos)  /*!< Timer1 event counter input / toggle output */
#define SYS_GPD_MFPL_PD5MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPL_PD5MFP_EPWM0_CH3         (0x01UL<<SYS_GPD_MFPL_PD5MFP_Pos)  /*!< EPWM0 channel3 output/capture input. */
#define SYS_GPD_MFPL_PD5MFP_UART1_nRTS        (0x02UL<<SYS_GPD_MFPL_PD5MFP_Pos)  /*!< Request to Send output pin for UART1. */
#define SYS_GPD_MFPL_PD5MFP_UART2_TXD         (0x03UL<<SYS_GPD_MFPL_PD5MFP_Pos)  /*!< Data transmitter output pin for UART2. */
#define SYS_GPD_MFPL_PD5MFP_I2C2_SCL          (0x04UL<<SYS_GPD_MFPL_PD5MFP_Pos)  /*!< I2C2 clock pin. */
#define SYS_GPD_MFPL_PD5MFP_QSPI0_MISO1       (0x05UL<<SYS_GPD_MFPL_PD5MFP_Pos)  /*!< Quad SPI0 MISO1 (Master In, Slave Out) pin. */
#define SYS_GPD_MFPL_PD5MFP_TM2_EXT           (0x0BUL<<SYS_GPD_MFPL_PD5MFP_Pos)  /*!< Timer2 event counter input / toggle output */
#define SYS_GPD_MFPL_PD6MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPL_PD6MFP_EPWM0_CH4         (0x01UL<<SYS_GPD_MFPL_PD6MFP_Pos)  /*!< EPWM0 channel4 output/capture input. */
#define SYS_GPD_MFPL_PD6MFP_UART1_RXD         (0x02UL<<SYS_GPD_MFPL_PD6MFP_Pos)  /*!< Data receiver input pin for UART1. */
#define SYS_GPD_MFPL_PD6MFP_CAN1_RXD          (0x03UL<<SYS_GPD_MFPL_PD6MFP_Pos)  /*!< CAN1 bus receiver input. */
#define SYS_GPD_MFPL_PD6MFP_USBHL3_DM         (0x04UL<<SYS_GPD_MFPL_PD6MFP_Pos)  /*!<  */
#define SYS_GPD_MFPL_PD6MFP_QSPI0_SS1         (0x05UL<<SYS_GPD_MFPL_PD6MFP_Pos)  /*!< Quad SPI0 slave select pin. */
#define SYS_GPD_MFPL_PD6MFP_TRACE_CLK         (0x06UL<<SYS_GPD_MFPL_PD6MFP_Pos)  /*!< ETM Rx clock input pin. */
#define SYS_GPD_MFPL_PD6MFP_EBI_ADR9          (0x07UL<<SYS_GPD_MFPL_PD6MFP_Pos)  /*!< EBI address/data bus bit*. */
#define SYS_GPD_MFPL_PD7MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPL_PD7MFP_EPWM0_CH5         (0x01UL<<SYS_GPD_MFPL_PD7MFP_Pos)  /*!< EPWM0 channel5 output/capture input. */
#define SYS_GPD_MFPL_PD7MFP_UART1_TXD         (0x02UL<<SYS_GPD_MFPL_PD7MFP_Pos)  /*!< Data transmitter output pin for UART1. */
#define SYS_GPD_MFPL_PD7MFP_CAN1_TXD          (0x03UL<<SYS_GPD_MFPL_PD7MFP_Pos)  /*!< CAN1 bus transmitter output. */
#define SYS_GPD_MFPL_PD7MFP_USBHL3_DP         (0x04UL<<SYS_GPD_MFPL_PD7MFP_Pos)  /*!<  */
#define SYS_GPD_MFPL_PD7MFP_SPI0_SS1          (0x05UL<<SYS_GPD_MFPL_PD7MFP_Pos)  /*!< 1st SPI0 slave select pin. */
#define SYS_GPD_MFPL_PD7MFP_SPI2_SS1          (0x06UL<<SYS_GPD_MFPL_PD7MFP_Pos)  /*!< 1st SPI2 slave select pin. */
#define SYS_GPD_MFPL_PD7MFP_EBI_ADR8          (0x07UL<<SYS_GPD_MFPL_PD7MFP_Pos)  /*!< EBI address/data bus bit*. */
/********************* Bit definition of GPD_MFPH register **********************/
#define SYS_GPD_MFPH_PD8MFP_GPIO              (0x00UL<<SYS_GPD_MFPH_PD8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPH_PD8MFP_EPWM0_BRAKE0      (0x01UL<<SYS_GPD_MFPH_PD8MFP_Pos)  /*!< Brake input pin 0 of EPWM0. */
#define SYS_GPD_MFPH_PD8MFP_UART3_nCTS        (0x02UL<<SYS_GPD_MFPH_PD8MFP_Pos)  /*!< Clear to Send input pin for UART3. */
#define SYS_GPD_MFPH_PD8MFP_UART4_RXD         (0x03UL<<SYS_GPD_MFPH_PD8MFP_Pos)  /*!< Data receiver input pin for UART4. */
#define SYS_GPD_MFPH_PD8MFP_I2C3_SDA          (0x04UL<<SYS_GPD_MFPH_PD8MFP_Pos)  /*!< I2C3 data input/output pin. */
#define SYS_GPD_MFPH_PD8MFP_SPI0_SS0          (0x05UL<<SYS_GPD_MFPH_PD8MFP_Pos)  /*!< 1st SPI0 slave select pin. */
#define SYS_GPD_MFPH_PD8MFP_EADC0_ST          (0x06UL<<SYS_GPD_MFPH_PD8MFP_Pos)  /*!< EADC external trigger input. */
#define SYS_GPD_MFPH_PD8MFP_EBI_ADR7          (0x07UL<<SYS_GPD_MFPH_PD8MFP_Pos)  /*!< EBI address/data bus bit*. */
#define SYS_GPD_MFPH_PD8MFP_KPI_COL0          (0x0AUL<<SYS_GPD_MFPH_PD8MFP_Pos)  /*!< Keypad Interface Column 0 output pin. */
#define SYS_GPD_MFPH_PD9MFP_GPIO              (0x00UL<<SYS_GPD_MFPH_PD9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPH_PD9MFP_EPWM0_BRAKE1      (0x01UL<<SYS_GPD_MFPH_PD9MFP_Pos)  /*!< Brake input pin 1 of EPWM0. */
#define SYS_GPD_MFPH_PD9MFP_UART3_nRTS        (0x02UL<<SYS_GPD_MFPH_PD9MFP_Pos)  /*!< Request to Send output pin for UART3. */
#define SYS_GPD_MFPH_PD9MFP_UART4_TXD         (0x03UL<<SYS_GPD_MFPH_PD9MFP_Pos)  /*!< Data transmitter output pin for UART4. */
#define SYS_GPD_MFPH_PD9MFP_I2C3_SCL          (0x04UL<<SYS_GPD_MFPH_PD9MFP_Pos)  /*!< I2C3 clock pin. */
#define SYS_GPD_MFPH_PD9MFP_SPI0_CLK          (0x05UL<<SYS_GPD_MFPH_PD9MFP_Pos)  /*!< SPI0 serial clock pin. */
#define SYS_GPD_MFPH_PD9MFP_EBI_ADR6          (0x07UL<<SYS_GPD_MFPH_PD9MFP_Pos)  /*!< EBI address/data bus bit*. */
#define SYS_GPD_MFPH_PD9MFP_KPI_COL1          (0x0AUL<<SYS_GPD_MFPH_PD9MFP_Pos)  /*!< Keypad Interface Column 1 output pin. */
#define SYS_GPD_MFPH_PD10MFP_GPIO             (0x00UL<<SYS_GPD_MFPH_PD10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPH_PD10MFP_EPWM0_SYNC_IN    (0x01UL<<SYS_GPD_MFPH_PD10MFP_Pos) /*!< EPWM0 counter synchronous trigger input pin. */
#define SYS_GPD_MFPH_PD10MFP_UART3_RXD        (0x02UL<<SYS_GPD_MFPH_PD10MFP_Pos) /*!< Data receiver input pin for UART3. */
#define SYS_GPD_MFPH_PD10MFP_CAN2_RXD         (0x03UL<<SYS_GPD_MFPH_PD10MFP_Pos) /*!< CAN2 bus receiver input. */
#define SYS_GPD_MFPH_PD10MFP_USBHL4_DM        (0x04UL<<SYS_GPD_MFPH_PD10MFP_Pos) /*!<  */
#define SYS_GPD_MFPH_PD10MFP_SPI0_MOSI        (0x05UL<<SYS_GPD_MFPH_PD10MFP_Pos) /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. */
#define SYS_GPD_MFPH_PD10MFP_EBI_ADR5         (0x07UL<<SYS_GPD_MFPH_PD10MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPD_MFPH_PD10MFP_KPI_COL2         (0x0AUL<<SYS_GPD_MFPH_PD10MFP_Pos) /*!< Keypad Interface Column 2 output pin. */
#define SYS_GPD_MFPH_PD11MFP_GPIO             (0x00UL<<SYS_GPD_MFPH_PD11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPH_PD11MFP_EPWM0_SYNC_OUT   (0x01UL<<SYS_GPD_MFPH_PD11MFP_Pos) /*!< EPWM0 counter synchronous trigger output pin. */
#define SYS_GPD_MFPH_PD11MFP_UART3_TXD        (0x02UL<<SYS_GPD_MFPH_PD11MFP_Pos) /*!< Data transmitter output pin for UART3. */
#define SYS_GPD_MFPH_PD11MFP_CAN2_TXD         (0x03UL<<SYS_GPD_MFPH_PD11MFP_Pos) /*!< CAN2 bus transmitter output. */
#define SYS_GPD_MFPH_PD11MFP_USBHL4_DP        (0x04UL<<SYS_GPD_MFPH_PD11MFP_Pos) /*!<  */
#define SYS_GPD_MFPH_PD11MFP_SPI0_MISO        (0x05UL<<SYS_GPD_MFPH_PD11MFP_Pos) /*!< 1st SPI0 MISO (Master In, Slave Out) pin. */
#define SYS_GPD_MFPH_PD11MFP_EBI_ADR4         (0x07UL<<SYS_GPD_MFPH_PD11MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPD_MFPH_PD11MFP_KPI_COL3         (0x0AUL<<SYS_GPD_MFPH_PD11MFP_Pos) /*!< Keypad Interface Column 3 output pin. */
#define SYS_GPD_MFPH_PD12MFP_GPIO             (0x00UL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPH_PD12MFP_QEI2_INDEX       (0x01UL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< Quadrature encoder index input of QEI Unit 2. */
#define SYS_GPD_MFPH_PD12MFP_UART5_nCTS       (0x02UL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< Clear to Send input pin for UART5. */
#define SYS_GPD_MFPH_PD12MFP_UART6_RXD        (0x03UL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< Data receiver input pin for UART6. */
#define SYS_GPD_MFPH_PD12MFP_I2C4_SDA         (0x04UL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< I2C4 data input/output pin. */
#define SYS_GPD_MFPH_PD12MFP_SPI2_SS0         (0x05UL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< 1st SPI2 slave select pin. */
#define SYS_GPD_MFPH_PD12MFP_TRACE_DATA0      (0x06UL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< ETM Rx input bus bit0. */
#define SYS_GPD_MFPH_PD12MFP_EBI_ADR3         (0x07UL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPD_MFPH_PD12MFP_KPI_ROW0         (0x0AUL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< Keypad Interface Row 0 input pin. */
#define SYS_GPD_MFPH_PD12MFP_TM9              (0x0BUL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< Timer9 event counter input / toggle output */
#define SYS_GPD_MFPH_PD13MFP_GPIO             (0x00UL<<SYS_GPD_MFPH_PD13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPH_PD13MFP_ECAP2_IC0        (0x01UL<<SYS_GPD_MFPH_PD13MFP_Pos) /*!< Input 0 of enhanced capture unit 2. */
#define SYS_GPD_MFPH_PD13MFP_UART5_nRTS       (0x02UL<<SYS_GPD_MFPH_PD13MFP_Pos) /*!< Request to Send output pin for UART5. */
#define SYS_GPD_MFPH_PD13MFP_UART6_TXD        (0x03UL<<SYS_GPD_MFPH_PD13MFP_Pos) /*!< Data transmitter output pin for UART6. */
#define SYS_GPD_MFPH_PD13MFP_I2C4_SCL         (0x04UL<<SYS_GPD_MFPH_PD13MFP_Pos) /*!< I2C4 clock pin. */
#define SYS_GPD_MFPH_PD13MFP_SPI2_CLK         (0x05UL<<SYS_GPD_MFPH_PD13MFP_Pos) /*!< SPI2 serial clock pin. */
#define SYS_GPD_MFPH_PD13MFP_TRACE_DATA1      (0x06UL<<SYS_GPD_MFPH_PD13MFP_Pos) /*!< ETM Rx input bus bit1. */
#define SYS_GPD_MFPH_PD13MFP_EBI_ADR2         (0x07UL<<SYS_GPD_MFPH_PD13MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPD_MFPH_PD13MFP_KPI_ROW1         (0x0AUL<<SYS_GPD_MFPH_PD13MFP_Pos) /*!< Keypad Interface Row 1 input pin. */
#define SYS_GPD_MFPH_PD13MFP_TM9_EXT          (0x0BUL<<SYS_GPD_MFPH_PD13MFP_Pos) /*!< Timer* event counter input / toggle output */
#define SYS_GPD_MFPH_PD14MFP_GPIO             (0x00UL<<SYS_GPD_MFPH_PD14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPH_PD14MFP_ECAP2_IC1        (0x01UL<<SYS_GPD_MFPH_PD14MFP_Pos) /*!< Input 1 of enhanced capture unit 2. */
#define SYS_GPD_MFPH_PD14MFP_UART5_RXD        (0x02UL<<SYS_GPD_MFPH_PD14MFP_Pos) /*!< Data receiver input pin for UART5. */
#define SYS_GPD_MFPH_PD14MFP_CAN3_RXD         (0x03UL<<SYS_GPD_MFPH_PD14MFP_Pos) /*!< CAN3 bus receiver input. */
#define SYS_GPD_MFPH_PD14MFP_USBHL5_DM        (0x04UL<<SYS_GPD_MFPH_PD14MFP_Pos) /*!<  */
#define SYS_GPD_MFPH_PD14MFP_SPI2_MOSI        (0x05UL<<SYS_GPD_MFPH_PD14MFP_Pos) /*!< 1st SPI2 MOSI (Master Out, Slave In) pin. */
#define SYS_GPD_MFPH_PD14MFP_TRACE_DATA2      (0x06UL<<SYS_GPD_MFPH_PD14MFP_Pos) /*!< ETM Rx input bus bit2. */
#define SYS_GPD_MFPH_PD14MFP_EBI_ADR1         (0x07UL<<SYS_GPD_MFPH_PD14MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPD_MFPH_PD14MFP_KPI_ROW2         (0x0AUL<<SYS_GPD_MFPH_PD14MFP_Pos) /*!< Keypad Interface Row 2 input pin. */
#define SYS_GPD_MFPH_PD14MFP_TM11             (0x0BUL<<SYS_GPD_MFPH_PD14MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPD_MFPH_PD15MFP_GPIO             (0x00UL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPD_MFPH_PD15MFP_ECAP2_IC2        (0x01UL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< Input 2 of enhanced capture unit 2. */
#define SYS_GPD_MFPH_PD15MFP_UART5_TXD        (0x02UL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< Data transmitter output pin for UART5. */
#define SYS_GPD_MFPH_PD15MFP_CAN3_TXD         (0x03UL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< CAN3 bus transmitter output. */
#define SYS_GPD_MFPH_PD15MFP_USBHL5_DP        (0x04UL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!<  */
#define SYS_GPD_MFPH_PD15MFP_SPI2_MISO        (0x05UL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< 1st SPI2 MISO (Master In, Slave Out) pin. */
#define SYS_GPD_MFPH_PD15MFP_TRACE_DATA3      (0x06UL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< ETM Rx input bus bit3. */
#define SYS_GPD_MFPH_PD15MFP_EBI_ADR0         (0x07UL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPD_MFPH_PD15MFP_KPI_ROW3         (0x0AUL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< Keypad Interface Row 3 input pin. */
#define SYS_GPD_MFPH_PD15MFP_TM11_EXT         (0x0BUL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< Timer1 event counter input / toggle output */
/********************* Bit definition of GPE_MFPL register **********************/
#define SYS_GPE_MFPL_PE0MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPL_PE0MFP_EPWM1_CH0         (0x01UL<<SYS_GPE_MFPL_PE0MFP_Pos)  /*!< EPWM1 channel0 output/capture input. */
#define SYS_GPE_MFPL_PE0MFP_UART9_nCTS        (0x02UL<<SYS_GPE_MFPL_PE0MFP_Pos)  /*!< Clear to Send input pin for UART*. */
#define SYS_GPE_MFPL_PE0MFP_UART8_RXD         (0x03UL<<SYS_GPE_MFPL_PE0MFP_Pos)  /*!< Data receiver input pin for UART8. */
#define SYS_GPE_MFPL_PE0MFP_I2C0_SDA          (0x04UL<<SYS_GPE_MFPL_PE0MFP_Pos)  /*!< I2C0 data input/output pin. */
#define SYS_GPE_MFPL_PE0MFP_RGMII0_MDC        (0x08UL<<SYS_GPE_MFPL_PE0MFP_Pos)  /*!< RGMII0 Management Data Clock. */
#define SYS_GPE_MFPL_PE0MFP_RMII0_MDC         (0x09UL<<SYS_GPE_MFPL_PE0MFP_Pos)  /*!< RMII0 PHY Management Clock. */
#define SYS_GPE_MFPL_PE1MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPL_PE1MFP_EPWM1_CH1         (0x01UL<<SYS_GPE_MFPL_PE1MFP_Pos)  /*!< EPWM1 channel1 output/capture input. */
#define SYS_GPE_MFPL_PE1MFP_UART9_nRTS        (0x02UL<<SYS_GPE_MFPL_PE1MFP_Pos)  /*!< Request to Send output pin for UART*. */
#define SYS_GPE_MFPL_PE1MFP_UART8_TXD         (0x03UL<<SYS_GPE_MFPL_PE1MFP_Pos)  /*!< Data transmitter output pin for UART8. */
#define SYS_GPE_MFPL_PE1MFP_I2C0_SCL          (0x04UL<<SYS_GPE_MFPL_PE1MFP_Pos)  /*!< I2C0 clock pin. */
#define SYS_GPE_MFPL_PE1MFP_RGMII0_MDIO       (0x08UL<<SYS_GPE_MFPL_PE1MFP_Pos)  /*!< RGMII0 Management Data I/O. */
#define SYS_GPE_MFPL_PE1MFP_RMII0_MDIO        (0x09UL<<SYS_GPE_MFPL_PE1MFP_Pos)  /*!< RMII0 PHY Management Data I/O. */
#define SYS_GPE_MFPL_PE2MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPL_PE2MFP_EPWM1_CH2         (0x01UL<<SYS_GPE_MFPL_PE2MFP_Pos)  /*!< EPWM1 channel2 output/capture input. */
#define SYS_GPE_MFPL_PE2MFP_UART9_RXD         (0x02UL<<SYS_GPE_MFPL_PE2MFP_Pos)  /*!< Data receiver input pin for UART*. */
#define SYS_GPE_MFPL_PE2MFP_CAN0_RXD          (0x03UL<<SYS_GPE_MFPL_PE2MFP_Pos)  /*!< CAN0 bus receiver input. */
#define SYS_GPE_MFPL_PE2MFP_USBHL0_DM         (0x04UL<<SYS_GPE_MFPL_PE2MFP_Pos)  /*!<  */
#define SYS_GPE_MFPL_PE2MFP_RGMII0_TXCTL      (0x08UL<<SYS_GPE_MFPL_PE2MFP_Pos)  /*!< RGMII0 Transmit Control output pin. */
#define SYS_GPE_MFPL_PE2MFP_RMII0_TXEN        (0x09UL<<SYS_GPE_MFPL_PE2MFP_Pos)  /*!< RMII0 Transmit Enable. */
#define SYS_GPE_MFPL_PE3MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPL_PE3MFP_EPWM1_CH3         (0x01UL<<SYS_GPE_MFPL_PE3MFP_Pos)  /*!< EPWM1 channel3 output/capture input. */
#define SYS_GPE_MFPL_PE3MFP_UART9_TXD         (0x02UL<<SYS_GPE_MFPL_PE3MFP_Pos)  /*!< Data transmitter output pin for UART*. */
#define SYS_GPE_MFPL_PE3MFP_CAN0_TXD          (0x03UL<<SYS_GPE_MFPL_PE3MFP_Pos)  /*!< CAN0 bus transmitter output. */
#define SYS_GPE_MFPL_PE3MFP_USBHL0_DP         (0x04UL<<SYS_GPE_MFPL_PE3MFP_Pos)  /*!<  */
#define SYS_GPE_MFPL_PE3MFP_SPI2_SS1          (0x05UL<<SYS_GPE_MFPL_PE3MFP_Pos)  /*!< 1st SPI2 slave select pin. */
#define SYS_GPE_MFPL_PE3MFP_RGMII0_TXD0       (0x08UL<<SYS_GPE_MFPL_PE3MFP_Pos)  /*!< RGMII0 Transmit Data bus bit 0 */
#define SYS_GPE_MFPL_PE3MFP_RMII0_TXD0        (0x09UL<<SYS_GPE_MFPL_PE3MFP_Pos)  /*!< RMII0 Transmit Data bus bit 0. */
#define SYS_GPE_MFPL_PE4MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPL_PE4MFP_QEI1_A            (0x01UL<<SYS_GPE_MFPL_PE4MFP_Pos)  /*!< Quadrature encoder phase A input of QEI Unit 1. */
#define SYS_GPE_MFPL_PE4MFP_UART11_nCTS       (0x02UL<<SYS_GPE_MFPL_PE4MFP_Pos)  /*!< Clear to Send input pin for UART11. */
#define SYS_GPE_MFPL_PE4MFP_UART10_RXD        (0x03UL<<SYS_GPE_MFPL_PE4MFP_Pos)  /*!< Data receiver input pin for UART10. */
#define SYS_GPE_MFPL_PE4MFP_I2C1_SDA          (0x04UL<<SYS_GPE_MFPL_PE4MFP_Pos)  /*!< I2C1 data input/output pin. */
#define SYS_GPE_MFPL_PE4MFP_SPI2_CLK          (0x05UL<<SYS_GPE_MFPL_PE4MFP_Pos)  /*!< SPI2 serial clock pin. */
#define SYS_GPE_MFPL_PE4MFP_RGMII0_TXD1       (0x08UL<<SYS_GPE_MFPL_PE4MFP_Pos)  /*!<  */
#define SYS_GPE_MFPL_PE4MFP_RMII0_TXD1        (0x09UL<<SYS_GPE_MFPL_PE4MFP_Pos)  /*!< RMII0 Transmit Data bus bit 1. */
#define SYS_GPE_MFPL_PE5MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPL_PE5MFP_QEI1_B            (0x01UL<<SYS_GPE_MFPL_PE5MFP_Pos)  /*!< Quadrature encoder phase B input of QEI Unit 1. */
#define SYS_GPE_MFPL_PE5MFP_UART11_nRTS       (0x02UL<<SYS_GPE_MFPL_PE5MFP_Pos)  /*!< Request to Send output pin for UART11. */
#define SYS_GPE_MFPL_PE5MFP_UART10_TXD        (0x03UL<<SYS_GPE_MFPL_PE5MFP_Pos)  /*!< Data transmitter output pin for UART10. */
#define SYS_GPE_MFPL_PE5MFP_I2C1_SCL          (0x04UL<<SYS_GPE_MFPL_PE5MFP_Pos)  /*!< I2C1 clock pin. */
#define SYS_GPE_MFPL_PE5MFP_SPI2_MOSI         (0x05UL<<SYS_GPE_MFPL_PE5MFP_Pos)  /*!< 1st SPI2 MOSI (Master Out, Slave In) pin. */
#define SYS_GPE_MFPL_PE5MFP_RGMII0_RXCLK      (0x08UL<<SYS_GPE_MFPL_PE5MFP_Pos)  /*!<  */
#define SYS_GPE_MFPL_PE5MFP_RMII0_REFCLK      (0x09UL<<SYS_GPE_MFPL_PE5MFP_Pos)  /*!< RMII0 mode clock input. */
#define SYS_GPE_MFPL_PE6MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPL_PE6MFP_QEI1_INDEX        (0x01UL<<SYS_GPE_MFPL_PE6MFP_Pos)  /*!< Quadrature encoder index input of QEI Unit 1. */
#define SYS_GPE_MFPL_PE6MFP_UART11_RXD        (0x02UL<<SYS_GPE_MFPL_PE6MFP_Pos)  /*!< Data receiver input pin for UART11. */
#define SYS_GPE_MFPL_PE6MFP_CAN1_RXD          (0x03UL<<SYS_GPE_MFPL_PE6MFP_Pos)  /*!< CAN1 bus receiver input. */
#define SYS_GPE_MFPL_PE6MFP_USBHL1_DM         (0x04UL<<SYS_GPE_MFPL_PE6MFP_Pos)  /*!<  */
#define SYS_GPE_MFPL_PE6MFP_SPI2_MISO         (0x05UL<<SYS_GPE_MFPL_PE6MFP_Pos)  /*!< 1st SPI2 MISO (Master In, Slave Out) pin. */
#define SYS_GPE_MFPL_PE6MFP_RGMII0_RXCTL      (0x08UL<<SYS_GPE_MFPL_PE6MFP_Pos)  /*!< RGMII0 Receive Control input pin. */
#define SYS_GPE_MFPL_PE6MFP_RMII0_CRSDV       (0x09UL<<SYS_GPE_MFPL_PE6MFP_Pos)  /*!< RMII0 Carrier Sense/Receive Data input pin. */
#define SYS_GPE_MFPL_PE7MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPL_PE7MFP_ECAP1_IC0         (0x01UL<<SYS_GPE_MFPL_PE7MFP_Pos)  /*!< Input 0 of enhanced capture unit 1. */
#define SYS_GPE_MFPL_PE7MFP_UART11_TXD        (0x02UL<<SYS_GPE_MFPL_PE7MFP_Pos)  /*!< Data transmitter output pin for UART11. */
#define SYS_GPE_MFPL_PE7MFP_CAN1_TXD          (0x03UL<<SYS_GPE_MFPL_PE7MFP_Pos)  /*!< CAN1 bus transmitter output. */
#define SYS_GPE_MFPL_PE7MFP_USBHL1_DP         (0x04UL<<SYS_GPE_MFPL_PE7MFP_Pos)  /*!<  */
#define SYS_GPE_MFPL_PE7MFP_SPI2_SS0          (0x05UL<<SYS_GPE_MFPL_PE7MFP_Pos)  /*!< 1st SPI2 slave select pin. */
#define SYS_GPE_MFPL_PE7MFP_RGMII0_RXD0       (0x08UL<<SYS_GPE_MFPL_PE7MFP_Pos)  /*!< RGMII0 Receive Data bus bit 0. */
#define SYS_GPE_MFPL_PE7MFP_RMII0_RXD0        (0x09UL<<SYS_GPE_MFPL_PE7MFP_Pos)  /*!< RMII0 Receive Data bus bit 0. */
/********************* Bit definition of GPE_MFPH register **********************/
#define SYS_GPE_MFPH_PE8MFP_GPIO              (0x00UL<<SYS_GPE_MFPH_PE8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPH_PE8MFP_ECAP1_IC1         (0x01UL<<SYS_GPE_MFPH_PE8MFP_Pos)  /*!< Input 1 of enhanced capture unit 1. */
#define SYS_GPE_MFPH_PE8MFP_UART13_nCTS       (0x02UL<<SYS_GPE_MFPH_PE8MFP_Pos)  /*!< Clear to Send input pin for UART13. */
#define SYS_GPE_MFPH_PE8MFP_UART12_RXD        (0x03UL<<SYS_GPE_MFPH_PE8MFP_Pos)  /*!< Data receiver input pin for UART12. */
#define SYS_GPE_MFPH_PE8MFP_I2C2_SDA          (0x04UL<<SYS_GPE_MFPH_PE8MFP_Pos)  /*!< I2C2 data input/output pin. */
#define SYS_GPE_MFPH_PE8MFP_SPI2_CLK          (0x05UL<<SYS_GPE_MFPH_PE8MFP_Pos)  /*!< SPI2 serial clock pin. */
#define SYS_GPE_MFPH_PE8MFP_RGMII0_RXD1       (0x08UL<<SYS_GPE_MFPH_PE8MFP_Pos)  /*!< RGMII0 Receive Data bus bit 1. */
#define SYS_GPE_MFPH_PE8MFP_RMII0_RXD1        (0x09UL<<SYS_GPE_MFPH_PE8MFP_Pos)  /*!< RMII0 Receive Data bus bit 1. */
#define SYS_GPE_MFPH_PE9MFP_GPIO              (0x00UL<<SYS_GPE_MFPH_PE9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPH_PE9MFP_ECAP1_IC2         (0x01UL<<SYS_GPE_MFPH_PE9MFP_Pos)  /*!< Input 1 of enhanced capture unit 2. */
#define SYS_GPE_MFPH_PE9MFP_UART13_nRTS       (0x02UL<<SYS_GPE_MFPH_PE9MFP_Pos)  /*!< Request to Send output pin for UART13. */
#define SYS_GPE_MFPH_PE9MFP_UART12_TXD        (0x03UL<<SYS_GPE_MFPH_PE9MFP_Pos)  /*!< Data transmitter output pin for UART12. */
#define SYS_GPE_MFPH_PE9MFP_I2C2_SCL          (0x04UL<<SYS_GPE_MFPH_PE9MFP_Pos)  /*!< I2C2 clock pin. */
#define SYS_GPE_MFPH_PE9MFP_SPI2_MOSI         (0x05UL<<SYS_GPE_MFPH_PE9MFP_Pos)  /*!< 1st SPI2 MOSI (Master Out, Slave In) pin. */
#define SYS_GPE_MFPH_PE9MFP_RGMII0_RXD2       (0x08UL<<SYS_GPE_MFPH_PE9MFP_Pos)  /*!< RGMII0 Receive Data bus bit 2. */
#define SYS_GPE_MFPH_PE9MFP_RMII0_RXERR       (0x09UL<<SYS_GPE_MFPH_PE9MFP_Pos)  /*!< RMII0 Receive Data error. */
#define SYS_GPE_MFPH_PE10MFP_GPIO             (0x00UL<<SYS_GPE_MFPH_PE10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPH_PE10MFP_UART15_nCTS      (0x02UL<<SYS_GPE_MFPH_PE10MFP_Pos) /*!< Clear to Send input pin for UART15. */
#define SYS_GPE_MFPH_PE10MFP_UART14_RXD       (0x03UL<<SYS_GPE_MFPH_PE10MFP_Pos) /*!< Data receiver input pin for UART14. */
#define SYS_GPE_MFPH_PE10MFP_I2C3_SDA         (0x04UL<<SYS_GPE_MFPH_PE10MFP_Pos) /*!< I2C3 data input/output pin. */
#define SYS_GPE_MFPH_PE10MFP_SPI2_MISO        (0x05UL<<SYS_GPE_MFPH_PE10MFP_Pos) /*!< 1st SPI2 MISO (Master In, Slave Out) pin. */
#define SYS_GPE_MFPH_PE10MFP_RGMII0_RXD3      (0x08UL<<SYS_GPE_MFPH_PE10MFP_Pos) /*!< RGMII0 Receive Data bus bit 3. */
#define SYS_GPE_MFPH_PE10MFP_INT2             (0x0AUL<<SYS_GPE_MFPH_PE10MFP_Pos) /*!< External interrupt2 input pin. */
#define SYS_GPE_MFPH_PE10MFP_TM1              (0x0BUL<<SYS_GPE_MFPH_PE10MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPE_MFPH_PE11MFP_GPIO             (0x00UL<<SYS_GPE_MFPH_PE11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPH_PE11MFP_UART15_nRTS      (0x02UL<<SYS_GPE_MFPH_PE11MFP_Pos) /*!< Request to Send output pin for UART15. */
#define SYS_GPE_MFPH_PE11MFP_UART14_TXD       (0x03UL<<SYS_GPE_MFPH_PE11MFP_Pos) /*!< Data transmitter output pin for UART14. */
#define SYS_GPE_MFPH_PE11MFP_I2C3_SCL         (0x04UL<<SYS_GPE_MFPH_PE11MFP_Pos) /*!< I2C3 clock pin. */
#define SYS_GPE_MFPH_PE11MFP_SPI2_SS0         (0x05UL<<SYS_GPE_MFPH_PE11MFP_Pos) /*!< 1st SPI2 slave select pin. */
#define SYS_GPE_MFPH_PE11MFP_RGMII0_TXCLK     (0x08UL<<SYS_GPE_MFPH_PE11MFP_Pos) /*!< RGMII0 Mode TX Clock output pin. */
#define SYS_GPE_MFPH_PE11MFP_TM1_EXT          (0x0BUL<<SYS_GPE_MFPH_PE11MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPE_MFPH_PE12MFP_GPIO             (0x00UL<<SYS_GPE_MFPH_PE12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPH_PE12MFP_UART15_RXD       (0x02UL<<SYS_GPE_MFPH_PE12MFP_Pos) /*!< Data receiver input pin for UART15. */
#define SYS_GPE_MFPH_PE12MFP_CAN2_RXD         (0x03UL<<SYS_GPE_MFPH_PE12MFP_Pos) /*!< CAN2 bus receiver input. */
#define SYS_GPE_MFPH_PE12MFP_USBHL2_DM        (0x04UL<<SYS_GPE_MFPH_PE12MFP_Pos) /*!<  */
#define SYS_GPE_MFPH_PE12MFP_SPI2_SS1         (0x05UL<<SYS_GPE_MFPH_PE12MFP_Pos) /*!< 1st SPI2 slave select pin. */
#define SYS_GPE_MFPH_PE12MFP_RGMII0_TXD2      (0x08UL<<SYS_GPE_MFPH_PE12MFP_Pos) /*!< RGMII0 Transmit Data bus bit 2. */
#define SYS_GPE_MFPH_PE12MFP_INT3             (0x0AUL<<SYS_GPE_MFPH_PE12MFP_Pos) /*!< External interrupt3 input pin. */
#define SYS_GPE_MFPH_PE12MFP_TM3              (0x0BUL<<SYS_GPE_MFPH_PE12MFP_Pos) /*!< Timer3 event counter input / toggle output */
#define SYS_GPE_MFPH_PE13MFP_GPIO             (0x00UL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPH_PE13MFP_UART15_TXD       (0x02UL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!< Data transmitter output pin for UART15. */
#define SYS_GPE_MFPH_PE13MFP_CAN2_TXD         (0x03UL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!< CAN2 bus transmitter output. */
#define SYS_GPE_MFPH_PE13MFP_USBHL2_DP        (0x04UL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!<  */
#define SYS_GPE_MFPH_PE13MFP_SPI3_SS1         (0x05UL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!< 1st SPI3 slave select pin. */
#define SYS_GPE_MFPH_PE13MFP_RGMII0_TXD3      (0x08UL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!< RGMII0 Transmit Data bus bit 1. */
#define SYS_GPE_MFPH_PE13MFP_TM3_EXT          (0x0BUL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!< Timer3 event counter input / toggle output */
#define SYS_GPE_MFPH_PE14MFP_GPIO             (0x00UL<<SYS_GPE_MFPH_PE14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPH_PE14MFP_UART0_TXD        (0x01UL<<SYS_GPE_MFPH_PE14MFP_Pos) /*!< Data transmitter output pin for UART0. */
#define SYS_GPE_MFPH_PE15MFP_GPIO             (0x00UL<<SYS_GPE_MFPH_PE15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPE_MFPH_PE15MFP_UART0_RXD        (0x01UL<<SYS_GPE_MFPH_PE15MFP_Pos) /*!< Data receiver input pin for UART0. */
/********************* Bit definition of GPF_MFPL register **********************/
#define SYS_GPF_MFPL_PF0MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPL_PF0MFP_UART2_nCTS        (0x02UL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< Clear to Send input pin for UART2. */
#define SYS_GPF_MFPL_PF0MFP_UART1_RXD         (0x03UL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< Data receiver input pin for UART1. */
#define SYS_GPF_MFPL_PF0MFP_I2C4_SDA          (0x04UL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< I2C4 data input/output pin. */
#define SYS_GPF_MFPL_PF0MFP_SC1_RST           (0x05UL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< SmartCard1 reset pin. */
#define SYS_GPF_MFPL_PF0MFP_RGMII0_RXD3       (0x06UL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< RGMII0 Receive Data bus bit 3. */
#define SYS_GPF_MFPL_PF0MFP_VCAP1_DATA0       (0x07UL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< Camera capture 1 data input bus bit 0. */
#define SYS_GPF_MFPL_PF0MFP_RGMII1_MDC        (0x08UL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< RGMII1 Management Data Clock. */
#define SYS_GPF_MFPL_PF0MFP_RMII1_MDC         (0x09UL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< RMII1 PHY Management Clock. */
#define SYS_GPF_MFPL_PF0MFP_EBI_AD0           (0x0AUL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< EBI address/data bus bit0. */
#define SYS_GPF_MFPL_PF0MFP_TM5_EXT           (0x0BUL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< Timer5 event counter input / toggle output */
#define SYS_GPF_MFPL_PF1MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPL_PF1MFP_UART2_nRTS        (0x02UL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< Request to Send output pin for UART2. */
#define SYS_GPF_MFPL_PF1MFP_UART1_TXD         (0x03UL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< Data transmitter output pin for UART1. */
#define SYS_GPF_MFPL_PF1MFP_I2C4_SCL          (0x04UL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< I2C4 clock pin. */
#define SYS_GPF_MFPL_PF1MFP_SC1_CLK           (0x05UL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< SmartCard1 clock pin. */
#define SYS_GPF_MFPL_PF1MFP_RGMII0_TXCLK      (0x06UL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< RGMII0 Mode TX Clock output pin. */
#define SYS_GPF_MFPL_PF1MFP_VCAP1_DATA1       (0x07UL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< Camera capture 1 data input bus bit 1. */
#define SYS_GPF_MFPL_PF1MFP_RGMII1_MDIO       (0x08UL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< RGMII1 Management Data I/O. */
#define SYS_GPF_MFPL_PF1MFP_RMII1_MDIO        (0x09UL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< RMII1 PHY Management Data I/O. */
#define SYS_GPF_MFPL_PF1MFP_EBI_AD1           (0x0AUL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< EBI address/data bus bit1. */
#define SYS_GPF_MFPL_PF1MFP_TM5               (0x0BUL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< Timer5 event counter input / toggle output */
#define SYS_GPF_MFPL_PF2MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPL_PF2MFP_EPWM0_CH4         (0x01UL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< EPWM0 channel4 output/capture input. */
#define SYS_GPF_MFPL_PF2MFP_UART2_RXD         (0x02UL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< Data receiver input pin for UART2. */
#define SYS_GPF_MFPL_PF2MFP_CAN3_RXD          (0x03UL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< CAN3 bus receiver input. */
#define SYS_GPF_MFPL_PF2MFP_USBHL3_DM         (0x04UL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!<  */
#define SYS_GPF_MFPL_PF2MFP_SC1_DAT           (0x05UL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< SmartCard1 data pin. */
#define SYS_GPF_MFPL_PF2MFP_RGMII0_TXD2       (0x06UL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< RGMII0 Transmit Data bus bit 2. */
#define SYS_GPF_MFPL_PF2MFP_VCAP1_DATA2       (0x07UL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< Camera capture 1 data input bus bit 2. */
#define SYS_GPF_MFPL_PF2MFP_RGMII1_TXCTL      (0x08UL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< RGMII1 Transmit Control output pin. */
#define SYS_GPF_MFPL_PF2MFP_RMII1_TXEN        (0x09UL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< RMII1 Transmit Enable. */
#define SYS_GPF_MFPL_PF2MFP_EBI_AD2           (0x0AUL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< EBI address/data bus bit2. */
#define SYS_GPF_MFPL_PF2MFP_TM6_EXT           (0x0BUL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< Timer6 event counter input / toggle output */
#define SYS_GPF_MFPL_PF3MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPL_PF3MFP_EPWM0_CH5         (0x01UL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< EPWM0 channel5 output/capture input. */
#define SYS_GPF_MFPL_PF3MFP_UART2_TXD         (0x02UL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< Data transmitter output pin for UART2. */
#define SYS_GPF_MFPL_PF3MFP_CAN3_TXD          (0x03UL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< CAN3 bus transmitter output. */
#define SYS_GPF_MFPL_PF3MFP_USBHL3_DP         (0x04UL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!<  */
#define SYS_GPF_MFPL_PF3MFP_SC1_PWR           (0x05UL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< SmartCard1 power pin. */
#define SYS_GPF_MFPL_PF3MFP_RGMII0_TXD3       (0x06UL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< RGMII0 Transmit Data bus bit 1. */
#define SYS_GPF_MFPL_PF3MFP_VCAP1_DATA3       (0x07UL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< Camera capture 1 data input bus bit 3. */
#define SYS_GPF_MFPL_PF3MFP_RGMII1_TXD0       (0x08UL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< RGMII1 Transmit Data bus bit 0 */
#define SYS_GPF_MFPL_PF3MFP_RMII1_TXD0        (0x09UL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< RMII1 Transmit Data bus bit 0. */
#define SYS_GPF_MFPL_PF3MFP_EBI_AD3           (0x0AUL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< EBI address/data bus bit3. */
#define SYS_GPF_MFPL_PF3MFP_TM6               (0x0BUL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< Timer6 event counter input / toggle output */
#define SYS_GPF_MFPL_PF4MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPL_PF4MFP_UART4_nCTS        (0x02UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< Clear to Send input pin for UART4. */
#define SYS_GPF_MFPL_PF4MFP_UART3_RXD         (0x03UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< Data receiver input pin for UART3. */
#define SYS_GPF_MFPL_PF4MFP_I2S0_LRCK         (0x04UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< I2S0 left right channel clock. */
#define SYS_GPF_MFPL_PF4MFP_QSPI1_SS0         (0x05UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< Quad SPI1 slave select pin. */
#define SYS_GPF_MFPL_PF4MFP_SPI2_SS0          (0x06UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< 1st SPI2 slave select pin. */
#define SYS_GPF_MFPL_PF4MFP_VCAP1_DATA4       (0x07UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< Camera capture 1 data input bus bit 4. */
#define SYS_GPF_MFPL_PF4MFP_RGMII1_TXD1       (0x08UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!<  */
#define SYS_GPF_MFPL_PF4MFP_RMII1_TXD1        (0x09UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< RMII1 Transmit Data bus bit 1. */
#define SYS_GPF_MFPL_PF4MFP_EBI_AD4           (0x0AUL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< EBI address/data bus bit4. */
#define SYS_GPF_MFPL_PF4MFP_TM7_EXT           (0x0BUL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< Timer7 event counter input / toggle output */
#define SYS_GPF_MFPL_PF5MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPL_PF5MFP_UART4_nRTS        (0x02UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< Request to Send output pin for UART4. */
#define SYS_GPF_MFPL_PF5MFP_UART3_TXD         (0x03UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< Data transmitter output pin for UART3. */
#define SYS_GPF_MFPL_PF5MFP_I2S0_BCLK         (0x04UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< I2S0 bit clock pin. */
#define SYS_GPF_MFPL_PF5MFP_QSPI1_CLK         (0x05UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< Quad SPI1 serial clock pin. */
#define SYS_GPF_MFPL_PF5MFP_SPI2_CLK          (0x06UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< SPI2 serial clock pin. */
#define SYS_GPF_MFPL_PF5MFP_VCAP1_DATA5       (0x07UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< Camera capture 1 data input bus bit 5. */
#define SYS_GPF_MFPL_PF5MFP_RGMII1_RXCLK      (0x08UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!<  */
#define SYS_GPF_MFPL_PF5MFP_RMII1_REFCLK      (0x09UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< RMII1 mode clock input. */
#define SYS_GPF_MFPL_PF5MFP_EBI_AD5           (0x0AUL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< EBI address/data bus bit5. */
#define SYS_GPF_MFPL_PF5MFP_TM7               (0x0BUL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< Timer7 event counter input / toggle output */
#define SYS_GPF_MFPL_PF6MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPL_PF6MFP_UART4_RXD         (0x02UL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< Data receiver input pin for UART4. */
#define SYS_GPF_MFPL_PF6MFP_CAN0_RXD          (0x03UL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< CAN0 bus receiver input. */
#define SYS_GPF_MFPL_PF6MFP_I2S0_DI           (0x04UL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< I2S0 data input. */
#define SYS_GPF_MFPL_PF6MFP_QSPI1_MOSI0       (0x05UL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< Quad SPI1 MOSI0 (Master Out, Slave In) pin. */
#define SYS_GPF_MFPL_PF6MFP_SPI2_MOSI         (0x06UL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< 1st SPI2 MOSI (Master Out, Slave In) pin. */
#define SYS_GPF_MFPL_PF6MFP_VCAP1_DATA6       (0x07UL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< Camera capture 1 data input bus bit 6. */
#define SYS_GPF_MFPL_PF6MFP_RGMII1_RXCTL      (0x08UL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< RGMII1 Receive Control input pin. */
#define SYS_GPF_MFPL_PF6MFP_RMII1_CRSDV       (0x09UL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< RMII1 Carrier Sense/Receive Data input pin. */
#define SYS_GPF_MFPL_PF6MFP_EBI_AD6           (0x0AUL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< EBI address/data bus bit6. */
#define SYS_GPF_MFPL_PF6MFP_TM8_EXT           (0x0BUL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< Timer8 event counter input / toggle output */
#define SYS_GPF_MFPL_PF7MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPL_PF7MFP_ECAP1_IC0         (0x01UL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< Input 0 of enhanced capture unit 1. */
#define SYS_GPF_MFPL_PF7MFP_UART4_TXD         (0x02UL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< Data transmitter output pin for UART4. */
#define SYS_GPF_MFPL_PF7MFP_CAN0_TXD          (0x03UL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< CAN0 bus transmitter output. */
#define SYS_GPF_MFPL_PF7MFP_I2S0_DO           (0x04UL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< I2S0 data output. */
#define SYS_GPF_MFPL_PF7MFP_QSPI1_MISO0       (0x05UL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< Quad SPI1 MISO0 (Master In, Slave Out) pin. */
#define SYS_GPF_MFPL_PF7MFP_SPI2_MISO         (0x06UL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< 1st SPI2 MISO (Master In, Slave Out) pin. */
#define SYS_GPF_MFPL_PF7MFP_VCAP1_DATA7       (0x07UL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< Camera capture 1 data input bus bit 7. */
#define SYS_GPF_MFPL_PF7MFP_RGMII1_RXD0       (0x08UL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< RGMII1 Receive Data bus bit 0. */
#define SYS_GPF_MFPL_PF7MFP_RMII1_RXD0        (0x09UL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< RMII1 Receive Data bus bit 0. */
#define SYS_GPF_MFPL_PF7MFP_EBI_AD7           (0x0AUL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< EBI address/data bus bit7. */
#define SYS_GPF_MFPL_PF7MFP_TM8               (0x0BUL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< Timer8 event counter input / toggle output */
/********************* Bit definition of GPF_MFPH register **********************/
#define SYS_GPF_MFPH_PF8MFP_GPIO              (0x00UL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPH_PF8MFP_ECAP1_IC1         (0x01UL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< Input 1 of enhanced capture unit 1. */
#define SYS_GPF_MFPH_PF8MFP_UART13_RXD        (0x02UL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< Data receiver input pin for UART13. */
#define SYS_GPF_MFPH_PF8MFP_CAN1_RXD          (0x03UL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< CAN1 bus receiver input. */
#define SYS_GPF_MFPH_PF8MFP_I2C5_SDA          (0x04UL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< I2C5 data input/output pin. */
#define SYS_GPF_MFPH_PF8MFP_QSPI1_MOSI1       (0x05UL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< Quad SPI1 MOSI1 (Master Out, Slave In) pin. */
#define SYS_GPF_MFPH_PF8MFP_SPI1_MOSI         (0x06UL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. */
#define SYS_GPF_MFPH_PF8MFP_VCAP1_DATA8       (0x07UL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< Camera capture 1 data input bus bit 8. */
#define SYS_GPF_MFPH_PF8MFP_RGMII1_RXD1       (0x08UL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< RGMII1 Receive Data bus bit 1. */
#define SYS_GPF_MFPH_PF8MFP_RMII1_RXD1        (0x09UL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< RMII1 Receive Data bus bit 1. */
#define SYS_GPF_MFPH_PF8MFP_EBI_AD8           (0x0AUL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< EBI address/data bus bit8. */
#define SYS_GPF_MFPH_PF8MFP_TM9_EXT           (0x0BUL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< Timer* event counter input / toggle output */
#define SYS_GPF_MFPH_PF9MFP_GPIO              (0x00UL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPH_PF9MFP_ECAP1_IC2         (0x01UL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< Input 1 of enhanced capture unit 2. */
#define SYS_GPF_MFPH_PF9MFP_UART13_TXD        (0x02UL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< Data transmitter output pin for UART13. */
#define SYS_GPF_MFPH_PF9MFP_CAN1_TXD          (0x03UL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< CAN1 bus transmitter output. */
#define SYS_GPF_MFPH_PF9MFP_I2C5_SCL          (0x04UL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< I2C5 clock pin. */
#define SYS_GPF_MFPH_PF9MFP_QSPI1_MISO1       (0x05UL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< Quad SPI1 MISO1 (Master In, Slave Out) pin. */
#define SYS_GPF_MFPH_PF9MFP_SPI1_MISO         (0x06UL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. */
#define SYS_GPF_MFPH_PF9MFP_VCAP1_DATA9       (0x07UL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< Camera capture 1 data input bus bit 9. */
#define SYS_GPF_MFPH_PF9MFP_RGMII1_RXD2       (0x08UL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< RGMII1 Receive Data bus bit 2. */
#define SYS_GPF_MFPH_PF9MFP_RMII1_RXERR       (0x09UL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< RMII1 Receive Data error. */
#define SYS_GPF_MFPH_PF9MFP_EBI_AD9           (0x0AUL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< EBI address/data bus bit9. */
#define SYS_GPF_MFPH_PF9MFP_TM9               (0x0BUL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< Timer9 event counter input / toggle output */
#define SYS_GPF_MFPH_PF10MFP_GPIO             (0x00UL<<SYS_GPF_MFPH_PF10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPH_PF10MFP_UART13_nCTS      (0x02UL<<SYS_GPF_MFPH_PF10MFP_Pos) /*!< Clear to Send input pin for UART13. */
#define SYS_GPF_MFPH_PF10MFP_UART5_RXD        (0x03UL<<SYS_GPF_MFPH_PF10MFP_Pos) /*!< Data receiver input pin for UART5. */
#define SYS_GPF_MFPH_PF10MFP_I2C1_SDA         (0x04UL<<SYS_GPF_MFPH_PF10MFP_Pos) /*!< I2C1 data input/output pin. */
#define SYS_GPF_MFPH_PF10MFP_QSPI1_SS1        (0x05UL<<SYS_GPF_MFPH_PF10MFP_Pos) /*!< Quad SPI1 slave select pin. */
#define SYS_GPF_MFPH_PF10MFP_SPI1_CLK         (0x06UL<<SYS_GPF_MFPH_PF10MFP_Pos) /*!< SPI1 serial clock pin. */
#define SYS_GPF_MFPH_PF10MFP_VCAP1_SCLK       (0x07UL<<SYS_GPF_MFPH_PF10MFP_Pos) /*!< Camera capture 1 interface sensor clock output pin. */
#define SYS_GPF_MFPH_PF10MFP_RGMII1_RXD3      (0x08UL<<SYS_GPF_MFPH_PF10MFP_Pos) /*!< RGMII1 Receive Data bus bit 3. */
#define SYS_GPF_MFPH_PF10MFP_EBI_AD10         (0x0AUL<<SYS_GPF_MFPH_PF10MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPF_MFPH_PF10MFP_TM10_EXT         (0x0BUL<<SYS_GPF_MFPH_PF10MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPF_MFPH_PF11MFP_GPIO             (0x00UL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPH_PF11MFP_QEI0_A           (0x01UL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< Quadrature encoder phase A input of QEI Unit 0. */
#define SYS_GPF_MFPH_PF11MFP_UART13_nRTS      (0x02UL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< Request to Send output pin for UART13. */
#define SYS_GPF_MFPH_PF11MFP_UART5_TXD        (0x03UL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< Data transmitter output pin for UART5. */
#define SYS_GPF_MFPH_PF11MFP_I2C1_SCL         (0x04UL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< I2C1 clock pin. */
#define SYS_GPF_MFPH_PF11MFP_I2S0_LRCK        (0x05UL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< I2S0 left right channel clock. */
#define SYS_GPF_MFPH_PF11MFP_SPI0_SS0         (0x06UL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< 1st SPI0 slave select pin. */
#define SYS_GPF_MFPH_PF11MFP_VCAP1_VSYNC      (0x07UL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< Camera capture 1 interface vsync input pin. */
#define SYS_GPF_MFPH_PF11MFP_RGMII1_TXCLK     (0x08UL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< RGMII1 Mode TX Clock output pin. */
#define SYS_GPF_MFPH_PF11MFP_EBI_AD11         (0x0AUL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPF_MFPH_PF11MFP_TM10             (0x0BUL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPF_MFPH_PF12MFP_GPIO             (0x00UL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPH_PF12MFP_QEI0_B           (0x01UL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< Quadrature encoder phase B input of QEI Unit 0. */
#define SYS_GPF_MFPH_PF12MFP_HSUSBH_PWREN     (0x03UL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!<  */
#define SYS_GPF_MFPH_PF12MFP_EADC0_ST         (0x04UL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< EADC external trigger input. */
#define SYS_GPF_MFPH_PF12MFP_I2S0_BCLK        (0x05UL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< I2S0 bit clock pin. */
#define SYS_GPF_MFPH_PF12MFP_SPI0_CLK         (0x06UL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< SPI0 serial clock pin. */
#define SYS_GPF_MFPH_PF12MFP_VCAP1_HSYNC      (0x07UL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< Camera capture 1 interface hsync input pin. */
#define SYS_GPF_MFPH_PF12MFP_RGMII1_TXD2      (0x08UL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< RGMII1 Transmit Data bus bit 2. */
#define SYS_GPF_MFPH_PF12MFP_EBI_AD12         (0x0AUL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPF_MFPH_PF12MFP_TM11_EXT         (0x0BUL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPF_MFPH_PF13MFP_GPIO             (0x00UL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPH_PF13MFP_QEI0_INDEX       (0x01UL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< Quadrature encoder index input of QEI Unit 0. */
#define SYS_GPF_MFPH_PF13MFP_HSUSBH_OVC       (0x03UL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!<  */
#define SYS_GPF_MFPH_PF13MFP_I2S0_DI          (0x05UL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< I2S0 data input. */
#define SYS_GPF_MFPH_PF13MFP_SPI0_MOSI        (0x06UL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. */
#define SYS_GPF_MFPH_PF13MFP_VCAP1_PIXCLK     (0x07UL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< Camera capture 1 interface pixel clock input pin. */
#define SYS_GPF_MFPH_PF13MFP_RGMII1_TXD3      (0x08UL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< RGMII1 Transmit Data bus bit 1. */
#define SYS_GPF_MFPH_PF13MFP_EBI_AD13         (0x0AUL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPF_MFPH_PF13MFP_TM11             (0x0BUL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< Timer1 event counter input / toggle output */
#define SYS_GPF_MFPH_PF14MFP_GPIO             (0x00UL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPH_PF14MFP_QEI2_INDEX       (0x01UL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< Quadrature encoder index input of QEI Unit 2. */
#define SYS_GPF_MFPH_PF14MFP_RGMII1_PPS       (0x03UL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< RGMII1 Pulse Per Second output pin. */
#define SYS_GPF_MFPH_PF14MFP_RMII1_PPS        (0x04UL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< RMII1 Pulse Per Second output pin. */
#define SYS_GPF_MFPH_PF14MFP_I2S0_DO          (0x05UL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< I2S0 data output. */
#define SYS_GPF_MFPH_PF14MFP_SPI0_MISO        (0x06UL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< 1st SPI0 MISO (Master In, Slave Out) pin. */
#define SYS_GPF_MFPH_PF14MFP_VCAP1_SFIELD     (0x07UL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< Camera capture 1 interface SFIELD input pin. */
#define SYS_GPF_MFPH_PF14MFP_RGMII0_PPS       (0x08UL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< RGMII0 Pulse Per Second output pin. */
#define SYS_GPF_MFPH_PF14MFP_RMII0_PPS        (0x09UL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< RMII0 Pulse Per Second output pin. */
#define SYS_GPF_MFPH_PF14MFP_EBI_AD14         (0x0AUL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPF_MFPH_PF14MFP_TM0              (0x0BUL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< Timer0 event counter input / toggle output */
#define SYS_GPF_MFPH_PF15MFP_GPIO             (0x00UL<<SYS_GPF_MFPH_PF15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPF_MFPH_PF15MFP_HSUSB0_VBUSVLD   (0x01UL<<SYS_GPF_MFPH_PF15MFP_Pos) /*!<  */
/********************* Bit definition of GPG_MFPL register **********************/
#define SYS_GPG_MFPL_PG0MFP_GPIO              (0x00UL<<SYS_GPG_MFPL_PG0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPL_PG0MFP_ECAP1_IC2         (0x01UL<<SYS_GPG_MFPL_PG0MFP_Pos)  /*!< Input 1 of enhanced capture unit 2. */
#define SYS_GPG_MFPL_PG0MFP_UART7_TXD         (0x02UL<<SYS_GPG_MFPL_PG0MFP_Pos)  /*!< Data transmitter output pin for UART7. */
#define SYS_GPG_MFPL_PG0MFP_CAN3_TXD          (0x03UL<<SYS_GPG_MFPL_PG0MFP_Pos)  /*!< CAN3 bus transmitter output. */
#define SYS_GPG_MFPL_PG0MFP_USBHL3_DP         (0x04UL<<SYS_GPG_MFPL_PG0MFP_Pos)  /*!<  */
#define SYS_GPG_MFPL_PG0MFP_SPI3_MISO         (0x05UL<<SYS_GPG_MFPL_PG0MFP_Pos)  /*!< 1st SPI3 MISO (Master In, Slave Out) pin. */
#define SYS_GPG_MFPL_PG0MFP_EADC0_ST          (0x06UL<<SYS_GPG_MFPL_PG0MFP_Pos)  /*!< EADC external trigger input. */
#define SYS_GPG_MFPL_PG0MFP_EBI_AD15          (0x07UL<<SYS_GPG_MFPL_PG0MFP_Pos)  /*!< EBI address/data bus bit1. */
#define SYS_GPG_MFPL_PG0MFP_VCAP0_SFIELD      (0x08UL<<SYS_GPG_MFPL_PG0MFP_Pos)  /*!< Camera capture 0 interface SFIELD input pin. */
#define SYS_GPG_MFPL_PG0MFP_LCM_DATA0         (0x09UL<<SYS_GPG_MFPL_PG0MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 0. */
#define SYS_GPG_MFPL_PG0MFP_TM3_EXT           (0x0BUL<<SYS_GPG_MFPL_PG0MFP_Pos)  /*!< Timer3 event counter input / toggle output */
#define SYS_GPG_MFPL_PG1MFP_GPIO              (0x00UL<<SYS_GPG_MFPL_PG1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPL_PG1MFP_ECAP1_IC1         (0x01UL<<SYS_GPG_MFPL_PG1MFP_Pos)  /*!< Input 1 of enhanced capture unit 1. */
#define SYS_GPG_MFPL_PG1MFP_UART9_nRTS        (0x02UL<<SYS_GPG_MFPL_PG1MFP_Pos)  /*!< Request to Send output pin for UART*. */
#define SYS_GPG_MFPL_PG1MFP_UART8_TXD         (0x03UL<<SYS_GPG_MFPL_PG1MFP_Pos)  /*!< Data transmitter output pin for UART8. */
#define SYS_GPG_MFPL_PG1MFP_I2C4_SCL          (0x04UL<<SYS_GPG_MFPL_PG1MFP_Pos)  /*!< I2C4 clock pin. */
#define SYS_GPG_MFPL_PG1MFP_SPI1_SS1          (0x05UL<<SYS_GPG_MFPL_PG1MFP_Pos)  /*!< 1st SPI1 slave select pin. */
#define SYS_GPG_MFPL_PG1MFP_LCM_DATA2         (0x09UL<<SYS_GPG_MFPL_PG1MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 2. */
#define SYS_GPG_MFPL_PG1MFP_TM5_EXT           (0x0BUL<<SYS_GPG_MFPL_PG1MFP_Pos)  /*!< Timer5 event counter input / toggle output */
#define SYS_GPG_MFPL_PG2MFP_GPIO              (0x00UL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPL_PG2MFP_ECAP1_IC0         (0x01UL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< Input 0 of enhanced capture unit 1. */
#define SYS_GPG_MFPL_PG2MFP_UART9_RXD         (0x02UL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< Data receiver input pin for UART*. */
#define SYS_GPG_MFPL_PG2MFP_CAN0_RXD          (0x03UL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< CAN0 bus receiver input. */
#define SYS_GPG_MFPL_PG2MFP_USBHL4_DM         (0x04UL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!<  */
#define SYS_GPG_MFPL_PG2MFP_SPI2_SS1          (0x05UL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< 1st SPI2 slave select pin. */
#define SYS_GPG_MFPL_PG2MFP_ICE_DAT           (0x06UL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< Serial wired debugger data pin. */
#define SYS_GPG_MFPL_PG2MFP_EBI_ADR16         (0x07UL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< EBI address/data bus bit*. */
#define SYS_GPG_MFPL_PG2MFP_VCAP0_SCLK        (0x08UL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< Camera capture 0 interface sensor clock output pin. */
#define SYS_GPG_MFPL_PG2MFP_LCM_DEN           (0x09UL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< TFT LCD Module Data Enable/Display Control Signal output pin. */
#define SYS_GPG_MFPL_PG2MFP_TM7               (0x0BUL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< Timer7 event counter input / toggle output */
#define SYS_GPG_MFPL_PG3MFP_GPIO              (0x00UL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPL_PG3MFP_QEI2_INDEX        (0x01UL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< Quadrature encoder index input of QEI Unit 2. */
#define SYS_GPG_MFPL_PG3MFP_UART9_TXD         (0x02UL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< Data transmitter output pin for UART*. */
#define SYS_GPG_MFPL_PG3MFP_CAN0_TXD          (0x03UL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< CAN0 bus transmitter output. */
#define SYS_GPG_MFPL_PG3MFP_USBHL4_DP         (0x04UL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!<  */
#define SYS_GPG_MFPL_PG3MFP_SPI3_SS1          (0x05UL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< 1st SPI3 slave select pin. */
#define SYS_GPG_MFPL_PG3MFP_ICE_CLK           (0x06UL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< Serial wired debugger clock pin. */
#define SYS_GPG_MFPL_PG3MFP_EBI_ADR17         (0x07UL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< EBI address/data bus bit*. */
#define SYS_GPG_MFPL_PG3MFP_VCAP0_VSYNC       (0x08UL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< Camera capture 0 interface vsync input pin. */
#define SYS_GPG_MFPL_PG3MFP_LCM_VSYNC         (0x09UL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< TFT LCD Module Vertical/Frame sync. output pin. */
#define SYS_GPG_MFPL_PG3MFP_EBI_nCS1          (0x0AUL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< EBI chip select enable output pin. */
#define SYS_GPG_MFPL_PG3MFP_TM7_EXT           (0x0BUL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< Timer7 event counter input / toggle output */
#define SYS_GPG_MFPL_PG3MFP_EBI_MCLK          (0x0CUL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< EBI external clock output pin. */
#define SYS_GPG_MFPL_PG4MFP_GPIO              (0x00UL<<SYS_GPG_MFPL_PG4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPL_PG4MFP_UART11_nCTS       (0x02UL<<SYS_GPG_MFPL_PG4MFP_Pos)  /*!< Clear to Send input pin for UART11. */
#define SYS_GPG_MFPL_PG4MFP_UART10_RXD        (0x03UL<<SYS_GPG_MFPL_PG4MFP_Pos)  /*!< Data receiver input pin for UART10. */
#define SYS_GPG_MFPL_PG4MFP_I2C5_SDA          (0x04UL<<SYS_GPG_MFPL_PG4MFP_Pos)  /*!< I2C5 data input/output pin. */
#define SYS_GPG_MFPL_PG4MFP_SPI1_SS0          (0x05UL<<SYS_GPG_MFPL_PG4MFP_Pos)  /*!< 1st SPI1 slave select pin. */
#define SYS_GPG_MFPL_PG4MFP_I2S1_DO           (0x06UL<<SYS_GPG_MFPL_PG4MFP_Pos)  /*!< I2S1 data output. */
#define SYS_GPG_MFPL_PG4MFP_EBI_nRD           (0x07UL<<SYS_GPG_MFPL_PG4MFP_Pos)  /*!< EBI read enable output pin. */
#define SYS_GPG_MFPL_PG4MFP_VCAP0_HSYNC       (0x08UL<<SYS_GPG_MFPL_PG4MFP_Pos)  /*!< Camera capture 0 interface hsync input pin. */
#define SYS_GPG_MFPL_PG4MFP_LCM_HSYNC         (0x09UL<<SYS_GPG_MFPL_PG4MFP_Pos)  /*!< TFT LCD Module Horizontal/Line sync. output pin. */
#define SYS_GPG_MFPL_PG4MFP_TM9               (0x0BUL<<SYS_GPG_MFPL_PG4MFP_Pos)  /*!< Timer9 event counter input / toggle output */
#define SYS_GPG_MFPL_PG5MFP_GPIO              (0x00UL<<SYS_GPG_MFPL_PG5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPL_PG5MFP_UART11_nRTS       (0x02UL<<SYS_GPG_MFPL_PG5MFP_Pos)  /*!< Request to Send output pin for UART11. */
#define SYS_GPG_MFPL_PG5MFP_UART10_TXD        (0x03UL<<SYS_GPG_MFPL_PG5MFP_Pos)  /*!< Data transmitter output pin for UART10. */
#define SYS_GPG_MFPL_PG5MFP_I2C5_SCL          (0x04UL<<SYS_GPG_MFPL_PG5MFP_Pos)  /*!< I2C5 clock pin. */
#define SYS_GPG_MFPL_PG5MFP_SPI1_CLK          (0x05UL<<SYS_GPG_MFPL_PG5MFP_Pos)  /*!< SPI1 serial clock pin. */
#define SYS_GPG_MFPL_PG5MFP_I2S1_DI           (0x06UL<<SYS_GPG_MFPL_PG5MFP_Pos)  /*!< I2S1 data input. */
#define SYS_GPG_MFPL_PG5MFP_EBI_nWR           (0x07UL<<SYS_GPG_MFPL_PG5MFP_Pos)  /*!< EBI write enable output pin. */
#define SYS_GPG_MFPL_PG5MFP_VCAP0_PIXCLK      (0x08UL<<SYS_GPG_MFPL_PG5MFP_Pos)  /*!< Camera capture 0 interface pixel clock input pin. */
#define SYS_GPG_MFPL_PG5MFP_LCM_CLK           (0x09UL<<SYS_GPG_MFPL_PG5MFP_Pos)  /*!< TFT LCD Module Pixel Clock output pin. */
#define SYS_GPG_MFPL_PG5MFP_TM9_EXT           (0x0BUL<<SYS_GPG_MFPL_PG5MFP_Pos)  /*!< Timer* event counter input / toggle output */
#define SYS_GPG_MFPL_PG6MFP_GPIO              (0x00UL<<SYS_GPG_MFPL_PG6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPL_PG6MFP_UART11_RXD        (0x02UL<<SYS_GPG_MFPL_PG6MFP_Pos)  /*!< Data receiver input pin for UART11. */
#define SYS_GPG_MFPL_PG6MFP_CAN1_RXD          (0x03UL<<SYS_GPG_MFPL_PG6MFP_Pos)  /*!< CAN1 bus receiver input. */
#define SYS_GPG_MFPL_PG6MFP_USBHL5_DM         (0x04UL<<SYS_GPG_MFPL_PG6MFP_Pos)  /*!<  */
#define SYS_GPG_MFPL_PG6MFP_SPI1_MOSI         (0x05UL<<SYS_GPG_MFPL_PG6MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. */
#define SYS_GPG_MFPL_PG6MFP_I2S1_BCLK         (0x06UL<<SYS_GPG_MFPL_PG6MFP_Pos)  /*!< I2S1 bit clock pin. */
#define SYS_GPG_MFPL_PG6MFP_EBI_nCS0          (0x07UL<<SYS_GPG_MFPL_PG6MFP_Pos)  /*!< EBI chip select enable output pin. */
#define SYS_GPG_MFPL_PG6MFP_VCAP0_DATA0       (0x08UL<<SYS_GPG_MFPL_PG6MFP_Pos)  /*!< Camera capture 0 data input bus bit 0. */
#define SYS_GPG_MFPL_PG6MFP_LCM_DATA3         (0x09UL<<SYS_GPG_MFPL_PG6MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 3. */
#define SYS_GPG_MFPL_PG6MFP_TM11              (0x0BUL<<SYS_GPG_MFPL_PG6MFP_Pos)  /*!< Timer1 event counter input / toggle output */
#define SYS_GPG_MFPL_PG7MFP_GPIO              (0x00UL<<SYS_GPG_MFPL_PG7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPL_PG7MFP_UART11_TXD        (0x02UL<<SYS_GPG_MFPL_PG7MFP_Pos)  /*!< Data transmitter output pin for UART11. */
#define SYS_GPG_MFPL_PG7MFP_CAN1_TXD          (0x03UL<<SYS_GPG_MFPL_PG7MFP_Pos)  /*!< CAN1 bus transmitter output. */
#define SYS_GPG_MFPL_PG7MFP_USBHL5_DP         (0x04UL<<SYS_GPG_MFPL_PG7MFP_Pos)  /*!<  */
#define SYS_GPG_MFPL_PG7MFP_SPI1_MISO         (0x05UL<<SYS_GPG_MFPL_PG7MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. */
#define SYS_GPG_MFPL_PG7MFP_I2S1_LRCK         (0x06UL<<SYS_GPG_MFPL_PG7MFP_Pos)  /*!< I2S1 left right channel clock. */
#define SYS_GPG_MFPL_PG7MFP_EBI_ALE           (0x07UL<<SYS_GPG_MFPL_PG7MFP_Pos)  /*!< EBI address latch enable output pin. */
#define SYS_GPG_MFPL_PG7MFP_VCAP0_DATA1       (0x08UL<<SYS_GPG_MFPL_PG7MFP_Pos)  /*!< Camera capture 0 data input bus bit 1. */
#define SYS_GPG_MFPL_PG7MFP_LCM_DATA4         (0x09UL<<SYS_GPG_MFPL_PG7MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 4. */
#define SYS_GPG_MFPL_PG7MFP_TM11_EXT          (0x0BUL<<SYS_GPG_MFPL_PG7MFP_Pos)  /*!< Timer1 event counter input / toggle output */
/********************* Bit definition of GPG_MFPH register **********************/
#define SYS_GPG_MFPH_PG8MFP_GPIO              (0x00UL<<SYS_GPG_MFPH_PG8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPH_PG8MFP_QEI2_B            (0x01UL<<SYS_GPG_MFPH_PG8MFP_Pos)  /*!< Quadrature encoder phase B input of QEI Unit 2. */
#define SYS_GPG_MFPH_PG8MFP_SPI1_SS1          (0x05UL<<SYS_GPG_MFPH_PG8MFP_Pos)  /*!< 1st SPI1 slave select pin. */
#define SYS_GPG_MFPH_PG8MFP_LCM_DATA5         (0x09UL<<SYS_GPG_MFPH_PG8MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 5. */
#define SYS_GPG_MFPH_PG9MFP_GPIO              (0x00UL<<SYS_GPG_MFPH_PG9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPH_PG9MFP_QEI2_A            (0x01UL<<SYS_GPG_MFPH_PG9MFP_Pos)  /*!< Quadrature encoder phase A input of QEI Unit 2. */
#define SYS_GPG_MFPH_PG9MFP_SPI2_SS1          (0x05UL<<SYS_GPG_MFPH_PG9MFP_Pos)  /*!< 1st SPI2 slave select pin. */
#define SYS_GPG_MFPH_PG9MFP_LCM_DATA6         (0x09UL<<SYS_GPG_MFPH_PG9MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 6. */
#define SYS_GPG_MFPH_PG10MFP_GPIO             (0x00UL<<SYS_GPG_MFPH_PG10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPH_PG10MFP_I2S1_MCLK        (0x03UL<<SYS_GPG_MFPH_PG10MFP_Pos) /*!< I2S1 master clock output pin. */
#define SYS_GPG_MFPH_PG10MFP_SPI3_SS1         (0x05UL<<SYS_GPG_MFPH_PG10MFP_Pos) /*!< 1st SPI3 slave select pin. */
#define SYS_GPG_MFPH_PG10MFP_LCM_DATA7        (0x09UL<<SYS_GPG_MFPH_PG10MFP_Pos) /*!< TFT LCD Module Pixel Data output bit 7. */
#define SYS_GPG_MFPH_PG11MFP_GPIO             (0x00UL<<SYS_GPG_MFPH_PG11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPH_PG11MFP_JTAG_TDO         (0x03UL<<SYS_GPG_MFPH_PG11MFP_Pos) /*!< JTAG data output pin. */
#define SYS_GPG_MFPH_PG11MFP_I2S0_MCLK        (0x04UL<<SYS_GPG_MFPH_PG11MFP_Pos) /*!< I2S0 master clock output pin. */
#define SYS_GPG_MFPH_PG11MFP_SPI1_SS1         (0x05UL<<SYS_GPG_MFPH_PG11MFP_Pos) /*!< 1st SPI1 slave select pin. */
#define SYS_GPG_MFPH_PG11MFP_SPI0_SS1         (0x06UL<<SYS_GPG_MFPH_PG11MFP_Pos) /*!< 1st SPI0 slave select pin. */
#define SYS_GPG_MFPH_PG11MFP_SPI2_SS1         (0x07UL<<SYS_GPG_MFPH_PG11MFP_Pos) /*!< 1st SPI2 slave select pin. */
#define SYS_GPG_MFPH_PG11MFP_SPI3_SS1         (0x08UL<<SYS_GPG_MFPH_PG11MFP_Pos) /*!< 1st SPI3 slave select pin. */
#define SYS_GPG_MFPH_PG11MFP_VCAP0_SFIELD     (0x09UL<<SYS_GPG_MFPH_PG11MFP_Pos) /*!< Camera capture 0 interface SFIELD input pin. */
#define SYS_GPG_MFPH_PG11MFP_CLKO             (0x0AUL<<SYS_GPG_MFPH_PG11MFP_Pos) /*!< Clock Output pin. */
#define SYS_GPG_MFPH_PG11MFP_TM2              (0x0BUL<<SYS_GPG_MFPH_PG11MFP_Pos) /*!< Timer2 event counter input / toggle output */
#define SYS_GPG_MFPH_PG12MFP_GPIO             (0x00UL<<SYS_GPG_MFPH_PG12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPH_PG12MFP_EPWM0_CH0        (0x01UL<<SYS_GPG_MFPH_PG12MFP_Pos) /*!< EPWM0 channel0 output/capture input. */
#define SYS_GPG_MFPH_PG12MFP_UART7_nCTS       (0x02UL<<SYS_GPG_MFPH_PG12MFP_Pos) /*!< Clear to Send input pin for UART7. */
#define SYS_GPG_MFPH_PG12MFP_JTAG_TCK         (0x03UL<<SYS_GPG_MFPH_PG12MFP_Pos) /*!< JTAG clock input pin. */
#define SYS_GPG_MFPH_PG12MFP_SW_CLK           (0x03UL<<SYS_GPG_MFPH_PG12MFP_Pos) /*!<  */
#define SYS_GPG_MFPH_PG12MFP_I2C0_SDA         (0x04UL<<SYS_GPG_MFPH_PG12MFP_Pos) /*!< I2C0 data input/output pin. */
#define SYS_GPG_MFPH_PG12MFP_SPI1_SS0         (0x05UL<<SYS_GPG_MFPH_PG12MFP_Pos) /*!< 1st SPI1 slave select pin. */
#define SYS_GPG_MFPH_PG12MFP_EADC0_ST         (0x06UL<<SYS_GPG_MFPH_PG12MFP_Pos) /*!< EADC external trigger input. */
#define SYS_GPG_MFPH_PG12MFP_EBI_ALE          (0x07UL<<SYS_GPG_MFPH_PG12MFP_Pos) /*!< EBI address latch enable output pin. */
#define SYS_GPG_MFPH_PG12MFP_KPI_ROW4         (0x0AUL<<SYS_GPG_MFPH_PG12MFP_Pos) /*!< Keypad Interface Row 4 input pin. */
#define SYS_GPG_MFPH_PG12MFP_TM3_EXT          (0x0BUL<<SYS_GPG_MFPH_PG12MFP_Pos) /*!< Timer3 event counter input / toggle output */
#define SYS_GPG_MFPH_PG13MFP_GPIO             (0x00UL<<SYS_GPG_MFPH_PG13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPH_PG13MFP_EPWM0_CH1        (0x01UL<<SYS_GPG_MFPH_PG13MFP_Pos) /*!< EPWM0 channel1 output/capture input. */
#define SYS_GPG_MFPH_PG13MFP_UART7_nRTS       (0x02UL<<SYS_GPG_MFPH_PG13MFP_Pos) /*!< Request to Send output pin for UART7. */
#define SYS_GPG_MFPH_PG13MFP_JTAG_TMS         (0x03UL<<SYS_GPG_MFPH_PG13MFP_Pos) /*!< JTAG test mode selection input pin. */
#define SYS_GPG_MFPH_PG13MFP_SW_DIO           (0x03UL<<SYS_GPG_MFPH_PG13MFP_Pos) /*!<  */
#define SYS_GPG_MFPH_PG13MFP_I2C0_SCL         (0x04UL<<SYS_GPG_MFPH_PG13MFP_Pos) /*!< I2C0 clock pin. */
#define SYS_GPG_MFPH_PG13MFP_SPI1_CLK         (0x05UL<<SYS_GPG_MFPH_PG13MFP_Pos) /*!< SPI1 serial clock pin. */
#define SYS_GPG_MFPH_PG13MFP_EBI_MCLK         (0x07UL<<SYS_GPG_MFPH_PG13MFP_Pos) /*!< EBI external clock output pin. */
#define SYS_GPG_MFPH_PG13MFP_SC0_PWR          (0x08UL<<SYS_GPG_MFPH_PG13MFP_Pos) /*!< SmartCard0 power pin. */
#define SYS_GPG_MFPH_PG13MFP_KPI_ROW5         (0x0AUL<<SYS_GPG_MFPH_PG13MFP_Pos) /*!< Keypad Interface Row 5 input pin. */
#define SYS_GPG_MFPH_PG13MFP_TM3              (0x0BUL<<SYS_GPG_MFPH_PG13MFP_Pos) /*!< Timer3 event counter input / toggle output */
#define SYS_GPG_MFPH_PG14MFP_GPIO             (0x00UL<<SYS_GPG_MFPH_PG14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPH_PG14MFP_EPWM0_CH2        (0x01UL<<SYS_GPG_MFPH_PG14MFP_Pos) /*!< EPWM0 channel2 output/capture input. */
#define SYS_GPG_MFPH_PG14MFP_UART7_RXD        (0x02UL<<SYS_GPG_MFPH_PG14MFP_Pos) /*!< Data receiver input pin for UART7. */
#define SYS_GPG_MFPH_PG14MFP_JTAG_TDI         (0x03UL<<SYS_GPG_MFPH_PG14MFP_Pos) /*!< JTAG data input pin. */
#define SYS_GPG_MFPH_PG14MFP_CAN3_RXD         (0x04UL<<SYS_GPG_MFPH_PG14MFP_Pos) /*!< CAN3 bus receiver input. */
#define SYS_GPG_MFPH_PG14MFP_SPI1_MOSI        (0x05UL<<SYS_GPG_MFPH_PG14MFP_Pos) /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. */
#define SYS_GPG_MFPH_PG14MFP_EBI_nCS1         (0x07UL<<SYS_GPG_MFPH_PG14MFP_Pos) /*!< EBI chip select enable output pin. */
#define SYS_GPG_MFPH_PG14MFP_KPI_ROW6         (0x0AUL<<SYS_GPG_MFPH_PG14MFP_Pos) /*!< Keypad Interface Row 6 input pin. */
#define SYS_GPG_MFPH_PG14MFP_TM4_EXT          (0x0BUL<<SYS_GPG_MFPH_PG14MFP_Pos) /*!< Timer4 event counter input / toggle output */
#define SYS_GPG_MFPH_PG15MFP_GPIO             (0x00UL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPG_MFPH_PG15MFP_EPWM0_CH3        (0x01UL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< EPWM0 channel3 output/capture input. */
#define SYS_GPG_MFPH_PG15MFP_UART7_TXD        (0x02UL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< Data transmitter output pin for UART7. */
#define SYS_GPG_MFPH_PG15MFP_JTAG_nTRST       (0x03UL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< JTAG reset pin. */
#define SYS_GPG_MFPH_PG15MFP_CAN3_TXD         (0x04UL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< CAN3 bus transmitter output. */
#define SYS_GPG_MFPH_PG15MFP_SPI1_MISO        (0x05UL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< 1st SPI1 MISO (Master In, Slave Out) pin. */
#define SYS_GPG_MFPH_PG15MFP_INT3             (0x06UL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< External interrupt3 input pin. */
#define SYS_GPG_MFPH_PG15MFP_EBI_nCS2         (0x07UL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< EBI chip select enable output pin. */
#define SYS_GPG_MFPH_PG15MFP_SC1_PWR          (0x08UL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< SmartCard1 power pin. */
#define SYS_GPG_MFPH_PG15MFP_VCAP1_SFIELD     (0x09UL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< Camera capture 1 interface SFIELD input pin. */
#define SYS_GPG_MFPH_PG15MFP_KPI_ROW7         (0x0AUL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< Keypad Interface Row 7 input pin. */
#define SYS_GPG_MFPH_PG15MFP_TM4              (0x0BUL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< Timer4 event counter input / toggle output */
/********************* Bit definition of GPH_MFPL register **********************/
#define SYS_GPH_MFPL_PH0MFP_GPIO              (0x00UL<<SYS_GPH_MFPL_PH0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPL_PH0MFP_QEI1_A            (0x01UL<<SYS_GPH_MFPL_PH0MFP_Pos)  /*!< Quadrature encoder phase A input of QEI Unit 1. */
#define SYS_GPH_MFPL_PH0MFP_UART8_nCTS        (0x02UL<<SYS_GPH_MFPL_PH0MFP_Pos)  /*!< Clear to Send input pin for UART8. */
#define SYS_GPH_MFPL_PH0MFP_UART7_RXD         (0x03UL<<SYS_GPH_MFPL_PH0MFP_Pos)  /*!< Data receiver input pin for UART7. */
#define SYS_GPH_MFPL_PH0MFP_I2C3_SDA          (0x04UL<<SYS_GPH_MFPL_PH0MFP_Pos)  /*!< I2C3 data input/output pin. */
#define SYS_GPH_MFPL_PH0MFP_SPI1_SS0          (0x05UL<<SYS_GPH_MFPL_PH0MFP_Pos)  /*!< 1st SPI1 slave select pin. */
#define SYS_GPH_MFPL_PH0MFP_LCM_DATA16        (0x09UL<<SYS_GPH_MFPL_PH0MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPH_MFPL_PH1MFP_GPIO              (0x00UL<<SYS_GPH_MFPL_PH1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPL_PH1MFP_QEI1_B            (0x01UL<<SYS_GPH_MFPL_PH1MFP_Pos)  /*!< Quadrature encoder phase B input of QEI Unit 1. */
#define SYS_GPH_MFPL_PH1MFP_UART8_nRTS        (0x02UL<<SYS_GPH_MFPL_PH1MFP_Pos)  /*!< Request to Send output pin for UART8. */
#define SYS_GPH_MFPL_PH1MFP_UART7_TXD         (0x03UL<<SYS_GPH_MFPL_PH1MFP_Pos)  /*!< Data transmitter output pin for UART7. */
#define SYS_GPH_MFPL_PH1MFP_I2C3_SCL          (0x04UL<<SYS_GPH_MFPL_PH1MFP_Pos)  /*!< I2C3 clock pin. */
#define SYS_GPH_MFPL_PH1MFP_SPI1_CLK          (0x05UL<<SYS_GPH_MFPL_PH1MFP_Pos)  /*!< SPI1 serial clock pin. */
#define SYS_GPH_MFPL_PH1MFP_LCM_DATA17        (0x09UL<<SYS_GPH_MFPL_PH1MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPH_MFPL_PH2MFP_GPIO              (0x00UL<<SYS_GPH_MFPL_PH2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPL_PH2MFP_QEI1_INDEX        (0x01UL<<SYS_GPH_MFPL_PH2MFP_Pos)  /*!< Quadrature encoder index input of QEI Unit 1. */
#define SYS_GPH_MFPL_PH2MFP_UART8_RXD         (0x02UL<<SYS_GPH_MFPL_PH2MFP_Pos)  /*!< Data receiver input pin for UART8. */
#define SYS_GPH_MFPL_PH2MFP_CAN0_RXD          (0x03UL<<SYS_GPH_MFPL_PH2MFP_Pos)  /*!< CAN0 bus receiver input. */
#define SYS_GPH_MFPL_PH2MFP_USBHL2_DM         (0x04UL<<SYS_GPH_MFPL_PH2MFP_Pos)  /*!<  */
#define SYS_GPH_MFPL_PH2MFP_SPI1_MOSI         (0x05UL<<SYS_GPH_MFPL_PH2MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. */
#define SYS_GPH_MFPL_PH2MFP_LCM_DATA18        (0x09UL<<SYS_GPH_MFPL_PH2MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPH_MFPL_PH3MFP_GPIO              (0x00UL<<SYS_GPH_MFPL_PH3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPL_PH3MFP_ECAP0_IC0         (0x01UL<<SYS_GPH_MFPL_PH3MFP_Pos)  /*!< Input 0 of enhanced capture unit 0. */
#define SYS_GPH_MFPL_PH3MFP_UART8_TXD         (0x02UL<<SYS_GPH_MFPL_PH3MFP_Pos)  /*!< Data transmitter output pin for UART8. */
#define SYS_GPH_MFPL_PH3MFP_CAN0_TXD          (0x03UL<<SYS_GPH_MFPL_PH3MFP_Pos)  /*!< CAN0 bus transmitter output. */
#define SYS_GPH_MFPL_PH3MFP_USBHL2_DP         (0x04UL<<SYS_GPH_MFPL_PH3MFP_Pos)  /*!<  */
#define SYS_GPH_MFPL_PH3MFP_SPI1_MISO         (0x05UL<<SYS_GPH_MFPL_PH3MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. */
#define SYS_GPH_MFPL_PH3MFP_LCM_DATA19        (0x09UL<<SYS_GPH_MFPL_PH3MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPH_MFPL_PH4MFP_GPIO              (0x00UL<<SYS_GPH_MFPL_PH4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPL_PH4MFP_ECAP0_IC1         (0x01UL<<SYS_GPH_MFPL_PH4MFP_Pos)  /*!< Input 1 of enhanced capture unit 0. */
#define SYS_GPH_MFPL_PH4MFP_UART10_nCTS       (0x02UL<<SYS_GPH_MFPL_PH4MFP_Pos)  /*!< Clear to Send input pin for UART10. */
#define SYS_GPH_MFPL_PH4MFP_UART9_RXD         (0x03UL<<SYS_GPH_MFPL_PH4MFP_Pos)  /*!< Data receiver input pin for UART*. */
#define SYS_GPH_MFPL_PH4MFP_I2C2_SDA          (0x04UL<<SYS_GPH_MFPL_PH4MFP_Pos)  /*!< I2C2 data input/output pin. */
#define SYS_GPH_MFPL_PH4MFP_SPI0_SS0          (0x05UL<<SYS_GPH_MFPL_PH4MFP_Pos)  /*!< 1st SPI0 slave select pin. */
#define SYS_GPH_MFPL_PH4MFP_LCM_DATA20        (0x09UL<<SYS_GPH_MFPL_PH4MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 2. */
#define SYS_GPH_MFPL_PH4MFP_TM6               (0x0BUL<<SYS_GPH_MFPL_PH4MFP_Pos)  /*!< Timer6 event counter input / toggle output */
#define SYS_GPH_MFPL_PH5MFP_GPIO              (0x00UL<<SYS_GPH_MFPL_PH5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPL_PH5MFP_ECAP0_IC2         (0x01UL<<SYS_GPH_MFPL_PH5MFP_Pos)  /*!< Input 0 of enhanced capture unit 2. */
#define SYS_GPH_MFPL_PH5MFP_UART10_nRTS       (0x02UL<<SYS_GPH_MFPL_PH5MFP_Pos)  /*!< Request to Send output pin for UART10. */
#define SYS_GPH_MFPL_PH5MFP_UART9_TXD         (0x03UL<<SYS_GPH_MFPL_PH5MFP_Pos)  /*!< Data transmitter output pin for UART*. */
#define SYS_GPH_MFPL_PH5MFP_I2C2_SCL          (0x04UL<<SYS_GPH_MFPL_PH5MFP_Pos)  /*!< I2C2 clock pin. */
#define SYS_GPH_MFPL_PH5MFP_SPI0_CLK          (0x05UL<<SYS_GPH_MFPL_PH5MFP_Pos)  /*!< SPI0 serial clock pin. */
#define SYS_GPH_MFPL_PH5MFP_LCM_DATA21        (0x09UL<<SYS_GPH_MFPL_PH5MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 2. */
#define SYS_GPH_MFPL_PH5MFP_TM6_EXT           (0x0BUL<<SYS_GPH_MFPL_PH5MFP_Pos)  /*!< Timer6 event counter input / toggle output */
#define SYS_GPH_MFPL_PH6MFP_GPIO              (0x00UL<<SYS_GPH_MFPL_PH6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPL_PH6MFP_EPWM1_CH4         (0x01UL<<SYS_GPH_MFPL_PH6MFP_Pos)  /*!< EPWM1 channel4 output/capture input. */
#define SYS_GPH_MFPL_PH6MFP_UART10_RXD        (0x02UL<<SYS_GPH_MFPL_PH6MFP_Pos)  /*!< Data receiver input pin for UART10. */
#define SYS_GPH_MFPL_PH6MFP_CAN1_RXD          (0x03UL<<SYS_GPH_MFPL_PH6MFP_Pos)  /*!< CAN1 bus receiver input. */
#define SYS_GPH_MFPL_PH6MFP_USBHL3_DM         (0x04UL<<SYS_GPH_MFPL_PH6MFP_Pos)  /*!<  */
#define SYS_GPH_MFPL_PH6MFP_SPI0_MOSI         (0x05UL<<SYS_GPH_MFPL_PH6MFP_Pos)  /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. */
#define SYS_GPH_MFPL_PH6MFP_LCM_DATA22        (0x09UL<<SYS_GPH_MFPL_PH6MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 2. */
#define SYS_GPH_MFPL_PH6MFP_TM7               (0x0BUL<<SYS_GPH_MFPL_PH6MFP_Pos)  /*!< Timer7 event counter input / toggle output */
#define SYS_GPH_MFPL_PH7MFP_GPIO              (0x00UL<<SYS_GPH_MFPL_PH7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPL_PH7MFP_EPWM1_CH5         (0x01UL<<SYS_GPH_MFPL_PH7MFP_Pos)  /*!< EPWM1 channel5 output/capture input. */
#define SYS_GPH_MFPL_PH7MFP_UART10_TXD        (0x02UL<<SYS_GPH_MFPL_PH7MFP_Pos)  /*!< Data transmitter output pin for UART10. */
#define SYS_GPH_MFPL_PH7MFP_CAN1_TXD          (0x03UL<<SYS_GPH_MFPL_PH7MFP_Pos)  /*!< CAN1 bus transmitter output. */
#define SYS_GPH_MFPL_PH7MFP_USBHL3_DP         (0x04UL<<SYS_GPH_MFPL_PH7MFP_Pos)  /*!<  */
#define SYS_GPH_MFPL_PH7MFP_SPI0_MISO         (0x05UL<<SYS_GPH_MFPL_PH7MFP_Pos)  /*!< 1st SPI0 MISO (Master In, Slave Out) pin. */
#define SYS_GPH_MFPL_PH7MFP_LCM_DATA23        (0x09UL<<SYS_GPH_MFPL_PH7MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 2. */
#define SYS_GPH_MFPL_PH7MFP_TM7_EXT           (0x0BUL<<SYS_GPH_MFPL_PH7MFP_Pos)  /*!< Timer7 event counter input / toggle output */
/********************* Bit definition of GPH_MFPH register **********************/
#define SYS_GPH_MFPH_PH8MFP_GPIO              (0x00UL<<SYS_GPH_MFPH_PH8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPH_PH8MFP_UART16_nCTS       (0x02UL<<SYS_GPH_MFPH_PH8MFP_Pos)  /*!< Clear to Send input pin for UART16. */
#define SYS_GPH_MFPH_PH8MFP_TAMPER0           (0x06UL<<SYS_GPH_MFPH_PH8MFP_Pos)  /*!< TAMPER detector loop pin0. */
#define SYS_GPH_MFPH_PH9MFP_GPIO              (0x00UL<<SYS_GPH_MFPH_PH9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPH_PH9MFP_UART16_nRTS       (0x02UL<<SYS_GPH_MFPH_PH9MFP_Pos)  /*!< Request to Send output pin for UART16. */
#define SYS_GPH_MFPH_PH9MFP_CLK_32KOUT        (0x04UL<<SYS_GPH_MFPH_PH9MFP_Pos)  /*!<  */
#define SYS_GPH_MFPH_PH9MFP_TAMPER1           (0x06UL<<SYS_GPH_MFPH_PH9MFP_Pos)  /*!< TAMPER detector loop pin1. */
#define SYS_GPH_MFPH_PH10MFP_GPIO             (0x00UL<<SYS_GPH_MFPH_PH10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPH_PH10MFP_UART16_RXD       (0x02UL<<SYS_GPH_MFPH_PH10MFP_Pos) /*!< Data receiver input pin for UART16. */
#define SYS_GPH_MFPH_PH10MFP_RTC_RPWR         (0x03UL<<SYS_GPH_MFPH_PH10MFP_Pos) /*!< Enable external power control source when active high. */
#define SYS_GPH_MFPH_PH11MFP_GPIO             (0x00UL<<SYS_GPH_MFPH_PH11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPH_PH11MFP_UART16_TXD       (0x02UL<<SYS_GPH_MFPH_PH11MFP_Pos) /*!< Data transmitter output pin for UART16. */
#define SYS_GPH_MFPH_PH11MFP_RTC_nRWAKE       (0x03UL<<SYS_GPH_MFPH_PH11MFP_Pos) /*!< System power enable trigger when active low. */
#define SYS_GPH_MFPH_PH12MFP_GPIO             (0x00UL<<SYS_GPH_MFPH_PH12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPH_PH12MFP_ECAP2_IC0        (0x01UL<<SYS_GPH_MFPH_PH12MFP_Pos) /*!< Input 0 of enhanced capture unit 2. */
#define SYS_GPH_MFPH_PH12MFP_UART14_nCTS      (0x02UL<<SYS_GPH_MFPH_PH12MFP_Pos) /*!< Clear to Send input pin for UART14. */
#define SYS_GPH_MFPH_PH12MFP_UART13_RXD       (0x03UL<<SYS_GPH_MFPH_PH12MFP_Pos) /*!< Data receiver input pin for UART13. */
#define SYS_GPH_MFPH_PH12MFP_I2C2_SDA         (0x04UL<<SYS_GPH_MFPH_PH12MFP_Pos) /*!< I2C2 data input/output pin. */
#define SYS_GPH_MFPH_PH12MFP_SPI3_SS0         (0x05UL<<SYS_GPH_MFPH_PH12MFP_Pos) /*!< 1st SPI3 slave select pin. */
#define SYS_GPH_MFPH_PH12MFP_EBI_ADR13        (0x07UL<<SYS_GPH_MFPH_PH12MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPH_MFPH_PH12MFP_SC0_CLK          (0x08UL<<SYS_GPH_MFPH_PH12MFP_Pos) /*!< SmartCard0 clock pin. */
#define SYS_GPH_MFPH_PH12MFP_KPI_COL0         (0x0AUL<<SYS_GPH_MFPH_PH12MFP_Pos) /*!< Keypad Interface Column 0 output pin. */
#define SYS_GPH_MFPH_PH13MFP_GPIO             (0x00UL<<SYS_GPH_MFPH_PH13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPH_PH13MFP_ECAP2_IC1        (0x01UL<<SYS_GPH_MFPH_PH13MFP_Pos) /*!< Input 1 of enhanced capture unit 2. */
#define SYS_GPH_MFPH_PH13MFP_UART14_nRTS      (0x02UL<<SYS_GPH_MFPH_PH13MFP_Pos) /*!< Request to Send output pin for UART14. */
#define SYS_GPH_MFPH_PH13MFP_UART13_TXD       (0x03UL<<SYS_GPH_MFPH_PH13MFP_Pos) /*!< Data transmitter output pin for UART13. */
#define SYS_GPH_MFPH_PH13MFP_I2C2_SCL         (0x04UL<<SYS_GPH_MFPH_PH13MFP_Pos) /*!< I2C2 clock pin. */
#define SYS_GPH_MFPH_PH13MFP_SPI3_CLK         (0x05UL<<SYS_GPH_MFPH_PH13MFP_Pos) /*!< SPI3 serial clock pin. */
#define SYS_GPH_MFPH_PH13MFP_EBI_ADR12        (0x07UL<<SYS_GPH_MFPH_PH13MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPH_MFPH_PH13MFP_SC0_DAT          (0x08UL<<SYS_GPH_MFPH_PH13MFP_Pos) /*!< SmartCard0 data pin. */
#define SYS_GPH_MFPH_PH13MFP_KPI_COL1         (0x0AUL<<SYS_GPH_MFPH_PH13MFP_Pos) /*!< Keypad Interface Column 1 output pin. */
#define SYS_GPH_MFPH_PH14MFP_GPIO             (0x00UL<<SYS_GPH_MFPH_PH14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPH_PH14MFP_ECAP2_IC2        (0x01UL<<SYS_GPH_MFPH_PH14MFP_Pos) /*!< Input 2 of enhanced capture unit 2. */
#define SYS_GPH_MFPH_PH14MFP_UART14_RXD       (0x02UL<<SYS_GPH_MFPH_PH14MFP_Pos) /*!< Data receiver input pin for UART14. */
#define SYS_GPH_MFPH_PH14MFP_CAN0_RXD         (0x03UL<<SYS_GPH_MFPH_PH14MFP_Pos) /*!< CAN0 bus receiver input. */
#define SYS_GPH_MFPH_PH14MFP_USBHL2_DM        (0x04UL<<SYS_GPH_MFPH_PH14MFP_Pos) /*!<  */
#define SYS_GPH_MFPH_PH14MFP_SPI3_MOSI        (0x05UL<<SYS_GPH_MFPH_PH14MFP_Pos) /*!< 1st SPI3 MOSI (Master Out, Slave In) pin. */
#define SYS_GPH_MFPH_PH14MFP_EBI_ADR11        (0x07UL<<SYS_GPH_MFPH_PH14MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPH_MFPH_PH14MFP_SC0_PWR          (0x08UL<<SYS_GPH_MFPH_PH14MFP_Pos) /*!< SmartCard0 power pin. */
#define SYS_GPH_MFPH_PH14MFP_KPI_ROW4         (0x0AUL<<SYS_GPH_MFPH_PH14MFP_Pos) /*!< Keypad Interface Row 4 input pin. */
#define SYS_GPH_MFPH_PH15MFP_GPIO             (0x00UL<<SYS_GPH_MFPH_PH15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPH_MFPH_PH15MFP_UART14_TXD       (0x02UL<<SYS_GPH_MFPH_PH15MFP_Pos) /*!< Data transmitter output pin for UART14. */
#define SYS_GPH_MFPH_PH15MFP_CAN0_TXD         (0x03UL<<SYS_GPH_MFPH_PH15MFP_Pos) /*!< CAN0 bus transmitter output. */
#define SYS_GPH_MFPH_PH15MFP_USBHL2_DP        (0x04UL<<SYS_GPH_MFPH_PH15MFP_Pos) /*!<  */
#define SYS_GPH_MFPH_PH15MFP_SPI3_MISO        (0x05UL<<SYS_GPH_MFPH_PH15MFP_Pos) /*!< 1st SPI3 MISO (Master In, Slave Out) pin. */
#define SYS_GPH_MFPH_PH15MFP_EBI_ADR10        (0x07UL<<SYS_GPH_MFPH_PH15MFP_Pos) /*!< EBI address/data bus bit*. */
#define SYS_GPH_MFPH_PH15MFP_SC0_nCD          (0x08UL<<SYS_GPH_MFPH_PH15MFP_Pos) /*!< SmartCard0 card detect pin. */
#define SYS_GPH_MFPH_PH15MFP_KPI_ROW5         (0x0AUL<<SYS_GPH_MFPH_PH15MFP_Pos) /*!< Keypad Interface Row 5 input pin. */
/********************* Bit definition of GPI_MFPL register **********************/
#define SYS_GPI_MFPL_PI0MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPL_PI0MFP_UART12_nCTS       (0x02UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< Clear to Send input pin for UART12. */
#define SYS_GPI_MFPL_PI0MFP_UART11_RXD        (0x03UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< Data receiver input pin for UART11. */
#define SYS_GPI_MFPL_PI0MFP_I2C2_SDA          (0x04UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< I2C2 data input/output pin. */
#define SYS_GPI_MFPL_PI0MFP_SPI3_SS0          (0x05UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< 1st SPI3 slave select pin. */
#define SYS_GPI_MFPL_PI0MFP_EBI_AD0           (0x07UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< EBI address/data bus bit0. */
#define SYS_GPI_MFPL_PI0MFP_VCAP0_DATA0       (0x08UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< Camera capture 0 data input bus bit 0. */
#define SYS_GPI_MFPL_PI0MFP_INT0              (0x09UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< External interrupt0 input pin. */
#define SYS_GPI_MFPL_PI0MFP_TM0               (0x0BUL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< Timer0 event counter input / toggle output */
#define SYS_GPI_MFPL_PI1MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPL_PI1MFP_UART12_nRTS       (0x02UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< Request to Send output pin for UART12. */
#define SYS_GPI_MFPL_PI1MFP_UART11_TXD        (0x03UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< Data transmitter output pin for UART11. */
#define SYS_GPI_MFPL_PI1MFP_I2C2_SCL          (0x04UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< I2C2 clock pin. */
#define SYS_GPI_MFPL_PI1MFP_SPI3_CLK          (0x05UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< SPI3 serial clock pin. */
#define SYS_GPI_MFPL_PI1MFP_EBI_AD1           (0x07UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< EBI address/data bus bit1. */
#define SYS_GPI_MFPL_PI1MFP_VCAP0_DATA1       (0x08UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< Camera capture 0 data input bus bit 1. */
#define SYS_GPI_MFPL_PI1MFP_INT1              (0x09UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< External interrupt1 input pin. */
#define SYS_GPI_MFPL_PI1MFP_TM0_EXT           (0x0BUL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< Timer0 event counter input / toggle output */
#define SYS_GPI_MFPL_PI2MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPL_PI2MFP_UART12_RXD        (0x02UL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< Data receiver input pin for UART12. */
#define SYS_GPI_MFPL_PI2MFP_CAN0_RXD          (0x03UL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< CAN0 bus receiver input. */
#define SYS_GPI_MFPL_PI2MFP_USBHL2_DM         (0x04UL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!<  */
#define SYS_GPI_MFPL_PI2MFP_SPI3_MOSI         (0x05UL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< 1st SPI3 MOSI (Master Out, Slave In) pin. */
#define SYS_GPI_MFPL_PI2MFP_EBI_AD2           (0x07UL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< EBI address/data bus bit2. */
#define SYS_GPI_MFPL_PI2MFP_VCAP0_DATA2       (0x08UL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< Camera capture 0 data input bus bit 2. */
#define SYS_GPI_MFPL_PI2MFP_TM1               (0x0BUL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< Timer1 event counter input / toggle output */
#define SYS_GPI_MFPL_PI3MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPL_PI3MFP_UART12_TXD        (0x02UL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< Data transmitter output pin for UART12. */
#define SYS_GPI_MFPL_PI3MFP_CAN0_TXD          (0x03UL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< CAN0 bus transmitter output. */
#define SYS_GPI_MFPL_PI3MFP_USBHL2_DP         (0x04UL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!<  */
#define SYS_GPI_MFPL_PI3MFP_SPI3_MISO         (0x05UL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< 1st SPI3 MISO (Master In, Slave Out) pin. */
#define SYS_GPI_MFPL_PI3MFP_EBI_AD3           (0x07UL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< EBI address/data bus bit3. */
#define SYS_GPI_MFPL_PI3MFP_VCAP0_DATA3       (0x08UL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< Camera capture 0 data input bus bit 3. */
#define SYS_GPI_MFPL_PI3MFP_TM1_EXT           (0x0BUL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< Timer1 event counter input / toggle output */
#define SYS_GPI_MFPL_PI4MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPL_PI4MFP_EPWM2_BRAKE0      (0x01UL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< Brake input pin 0 of EPWM2. */
#define SYS_GPI_MFPL_PI4MFP_UART14_nCTS       (0x02UL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< Clear to Send input pin for UART14. */
#define SYS_GPI_MFPL_PI4MFP_UART13_RXD        (0x03UL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< Data receiver input pin for UART13. */
#define SYS_GPI_MFPL_PI4MFP_I2C3_SDA          (0x04UL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< I2C3 data input/output pin. */
#define SYS_GPI_MFPL_PI4MFP_SPI2_SS0          (0x05UL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< 1st SPI2 slave select pin. */
#define SYS_GPI_MFPL_PI4MFP_EBI_AD4           (0x07UL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< EBI address/data bus bit4. */
#define SYS_GPI_MFPL_PI4MFP_VCAP0_DATA4       (0x08UL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< Camera capture 0 data input bus bit 4. */
#define SYS_GPI_MFPL_PI5MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPL_PI5MFP_EPWM2_BRAKE1      (0x01UL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< Brake input pin 1 of EPWM2. */
#define SYS_GPI_MFPL_PI5MFP_UART14_nRTS       (0x02UL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< Request to Send output pin for UART14. */
#define SYS_GPI_MFPL_PI5MFP_UART13_TXD        (0x03UL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< Data transmitter output pin for UART13. */
#define SYS_GPI_MFPL_PI5MFP_I2C3_SCL          (0x04UL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< I2C3 clock pin. */
#define SYS_GPI_MFPL_PI5MFP_SPI2_CLK          (0x05UL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< SPI2 serial clock pin. */
#define SYS_GPI_MFPL_PI5MFP_EBI_AD5           (0x07UL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< EBI address/data bus bit5. */
#define SYS_GPI_MFPL_PI5MFP_VCAP0_DATA5       (0x08UL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< Camera capture 0 data input bus bit 5. */
#define SYS_GPI_MFPL_PI6MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPL_PI6MFP_EPWM2_CH0         (0x01UL<<SYS_GPI_MFPL_PI6MFP_Pos)  /*!< EPWM2 channel0 output/capture input. */
#define SYS_GPI_MFPL_PI6MFP_UART14_RXD        (0x02UL<<SYS_GPI_MFPL_PI6MFP_Pos)  /*!< Data receiver input pin for UART14. */
#define SYS_GPI_MFPL_PI6MFP_CAN1_RXD          (0x03UL<<SYS_GPI_MFPL_PI6MFP_Pos)  /*!< CAN1 bus receiver input. */
#define SYS_GPI_MFPL_PI6MFP_USBHL3_DM         (0x04UL<<SYS_GPI_MFPL_PI6MFP_Pos)  /*!<  */
#define SYS_GPI_MFPL_PI6MFP_SPI2_MOSI         (0x05UL<<SYS_GPI_MFPL_PI6MFP_Pos)  /*!< 1st SPI2 MOSI (Master Out, Slave In) pin. */
#define SYS_GPI_MFPL_PI6MFP_EBI_AD6           (0x07UL<<SYS_GPI_MFPL_PI6MFP_Pos)  /*!< EBI address/data bus bit6. */
#define SYS_GPI_MFPL_PI6MFP_VCAP0_DATA6       (0x08UL<<SYS_GPI_MFPL_PI6MFP_Pos)  /*!< Camera capture 0 data input bus bit 6. */
#define SYS_GPI_MFPL_PI7MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPL_PI7MFP_EPWM2_CH1         (0x01UL<<SYS_GPI_MFPL_PI7MFP_Pos)  /*!< EPWM2 channel1 output/capture input. */
#define SYS_GPI_MFPL_PI7MFP_UART14_TXD        (0x02UL<<SYS_GPI_MFPL_PI7MFP_Pos)  /*!< Data transmitter output pin for UART14. */
#define SYS_GPI_MFPL_PI7MFP_CAN1_TXD          (0x03UL<<SYS_GPI_MFPL_PI7MFP_Pos)  /*!< CAN1 bus transmitter output. */
#define SYS_GPI_MFPL_PI7MFP_USBHL3_DP         (0x04UL<<SYS_GPI_MFPL_PI7MFP_Pos)  /*!<  */
#define SYS_GPI_MFPL_PI7MFP_SPI2_MISO         (0x05UL<<SYS_GPI_MFPL_PI7MFP_Pos)  /*!< 1st SPI2 MISO (Master In, Slave Out) pin. */
#define SYS_GPI_MFPL_PI7MFP_EBI_AD7           (0x07UL<<SYS_GPI_MFPL_PI7MFP_Pos)  /*!< EBI address/data bus bit7. */
#define SYS_GPI_MFPL_PI7MFP_VCAP0_DATA7       (0x08UL<<SYS_GPI_MFPL_PI7MFP_Pos)  /*!< Camera capture 0 data input bus bit 7. */
/********************* Bit definition of GPI_MFPH register **********************/
#define SYS_GPI_MFPH_PI8MFP_GPIO              (0x00UL<<SYS_GPI_MFPH_PI8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPH_PI8MFP_EPWM2_CH2         (0x01UL<<SYS_GPI_MFPH_PI8MFP_Pos)  /*!< EPWM2 channel2 output/capture input. */
#define SYS_GPI_MFPH_PI8MFP_UART4_nCTS        (0x02UL<<SYS_GPI_MFPH_PI8MFP_Pos)  /*!< Clear to Send input pin for UART4. */
#define SYS_GPI_MFPH_PI8MFP_UART3_RXD         (0x03UL<<SYS_GPI_MFPH_PI8MFP_Pos)  /*!< Data receiver input pin for UART3. */
#define SYS_GPI_MFPH_PI8MFP_I2C1_SDA          (0x04UL<<SYS_GPI_MFPH_PI8MFP_Pos)  /*!< I2C1 data input/output pin. */
#define SYS_GPI_MFPH_PI8MFP_SPI3_SS0          (0x05UL<<SYS_GPI_MFPH_PI8MFP_Pos)  /*!< 1st SPI3 slave select pin. */
#define SYS_GPI_MFPH_PI8MFP_LCM_DATA8         (0x09UL<<SYS_GPI_MFPH_PI8MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 8. */
#define SYS_GPI_MFPH_PI8MFP_TM4               (0x0BUL<<SYS_GPI_MFPH_PI8MFP_Pos)  /*!< Timer4 event counter input / toggle output */
#define SYS_GPI_MFPH_PI9MFP_GPIO              (0x00UL<<SYS_GPI_MFPH_PI9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPH_PI9MFP_EPWM2_CH3         (0x01UL<<SYS_GPI_MFPH_PI9MFP_Pos)  /*!< EPWM2 channel3 output/capture input. */
#define SYS_GPI_MFPH_PI9MFP_UART4_nRTS        (0x02UL<<SYS_GPI_MFPH_PI9MFP_Pos)  /*!< Request to Send output pin for UART4. */
#define SYS_GPI_MFPH_PI9MFP_UART3_TXD         (0x03UL<<SYS_GPI_MFPH_PI9MFP_Pos)  /*!< Data transmitter output pin for UART3. */
#define SYS_GPI_MFPH_PI9MFP_I2C1_SCL          (0x04UL<<SYS_GPI_MFPH_PI9MFP_Pos)  /*!< I2C1 clock pin. */
#define SYS_GPI_MFPH_PI9MFP_SPI3_CLK          (0x05UL<<SYS_GPI_MFPH_PI9MFP_Pos)  /*!< SPI3 serial clock pin. */
#define SYS_GPI_MFPH_PI9MFP_LCM_DATA9         (0x09UL<<SYS_GPI_MFPH_PI9MFP_Pos)  /*!< TFT LCD Module Pixel Data output bit 9. */
#define SYS_GPI_MFPH_PI9MFP_TM4_EXT           (0x0BUL<<SYS_GPI_MFPH_PI9MFP_Pos)  /*!< Timer4 event counter input / toggle output */
#define SYS_GPI_MFPH_PI10MFP_GPIO             (0x00UL<<SYS_GPI_MFPH_PI10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPH_PI10MFP_QEI2_B           (0x01UL<<SYS_GPI_MFPH_PI10MFP_Pos) /*!< Quadrature encoder phase B input of QEI Unit 2. */
#define SYS_GPI_MFPH_PI10MFP_UART4_RXD        (0x02UL<<SYS_GPI_MFPH_PI10MFP_Pos) /*!< Data receiver input pin for UART4. */
#define SYS_GPI_MFPH_PI10MFP_CAN2_RXD         (0x03UL<<SYS_GPI_MFPH_PI10MFP_Pos) /*!< CAN2 bus receiver input. */
#define SYS_GPI_MFPH_PI10MFP_USBHL0_DM        (0x04UL<<SYS_GPI_MFPH_PI10MFP_Pos) /*!<  */
#define SYS_GPI_MFPH_PI10MFP_SPI3_MOSI        (0x05UL<<SYS_GPI_MFPH_PI10MFP_Pos) /*!< 1st SPI3 MOSI (Master Out, Slave In) pin. */
#define SYS_GPI_MFPH_PI10MFP_LCM_DATA10       (0x09UL<<SYS_GPI_MFPH_PI10MFP_Pos) /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPI_MFPH_PI10MFP_TM5              (0x0BUL<<SYS_GPI_MFPH_PI10MFP_Pos) /*!< Timer5 event counter input / toggle output */
#define SYS_GPI_MFPH_PI11MFP_GPIO             (0x00UL<<SYS_GPI_MFPH_PI11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPH_PI11MFP_QEI2_INDEX       (0x01UL<<SYS_GPI_MFPH_PI11MFP_Pos) /*!< Quadrature encoder index input of QEI Unit 2. */
#define SYS_GPI_MFPH_PI11MFP_UART4_TXD        (0x02UL<<SYS_GPI_MFPH_PI11MFP_Pos) /*!< Data transmitter output pin for UART4. */
#define SYS_GPI_MFPH_PI11MFP_CAN2_TXD         (0x03UL<<SYS_GPI_MFPH_PI11MFP_Pos) /*!< CAN2 bus transmitter output. */
#define SYS_GPI_MFPH_PI11MFP_USBHL0_DP        (0x04UL<<SYS_GPI_MFPH_PI11MFP_Pos) /*!<  */
#define SYS_GPI_MFPH_PI11MFP_SPI3_MISO        (0x05UL<<SYS_GPI_MFPH_PI11MFP_Pos) /*!< 1st SPI3 MISO (Master In, Slave Out) pin. */
#define SYS_GPI_MFPH_PI11MFP_LCM_DATA11       (0x09UL<<SYS_GPI_MFPH_PI11MFP_Pos) /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPI_MFPH_PI11MFP_TM5_EXT          (0x0BUL<<SYS_GPI_MFPH_PI11MFP_Pos) /*!< Timer5 event counter input / toggle output */
#define SYS_GPI_MFPH_PI12MFP_GPIO             (0x00UL<<SYS_GPI_MFPH_PI12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPH_PI12MFP_UART6_nCTS       (0x02UL<<SYS_GPI_MFPH_PI12MFP_Pos) /*!< Clear to Send input pin for UART6. */
#define SYS_GPI_MFPH_PI12MFP_UART5_RXD        (0x03UL<<SYS_GPI_MFPH_PI12MFP_Pos) /*!< Data receiver input pin for UART5. */
#define SYS_GPI_MFPH_PI12MFP_I2C0_SDA         (0x04UL<<SYS_GPI_MFPH_PI12MFP_Pos) /*!< I2C0 data input/output pin. */
#define SYS_GPI_MFPH_PI12MFP_SPI2_SS0         (0x05UL<<SYS_GPI_MFPH_PI12MFP_Pos) /*!< 1st SPI2 slave select pin. */
#define SYS_GPI_MFPH_PI12MFP_LCM_DATA12       (0x09UL<<SYS_GPI_MFPH_PI12MFP_Pos) /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPI_MFPH_PI13MFP_GPIO             (0x00UL<<SYS_GPI_MFPH_PI13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPH_PI13MFP_EPWM1_SYNC_IN    (0x01UL<<SYS_GPI_MFPH_PI13MFP_Pos) /*!< EPWM1 counter synchronous trigger input pin. */
#define SYS_GPI_MFPH_PI13MFP_UART6_nRTS       (0x02UL<<SYS_GPI_MFPH_PI13MFP_Pos) /*!< Request to Send output pin for UART6. */
#define SYS_GPI_MFPH_PI13MFP_UART5_TXD        (0x03UL<<SYS_GPI_MFPH_PI13MFP_Pos) /*!< Data transmitter output pin for UART5. */
#define SYS_GPI_MFPH_PI13MFP_I2C0_SCL         (0x04UL<<SYS_GPI_MFPH_PI13MFP_Pos) /*!< I2C0 clock pin. */
#define SYS_GPI_MFPH_PI13MFP_SPI2_CLK         (0x05UL<<SYS_GPI_MFPH_PI13MFP_Pos) /*!< SPI2 serial clock pin. */
#define SYS_GPI_MFPH_PI13MFP_LCM_DATA13       (0x09UL<<SYS_GPI_MFPH_PI13MFP_Pos) /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPI_MFPH_PI14MFP_GPIO             (0x00UL<<SYS_GPI_MFPH_PI14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPH_PI14MFP_EPWM2_CH4        (0x01UL<<SYS_GPI_MFPH_PI14MFP_Pos) /*!< EPWM2 channel4 output/capture input. */
#define SYS_GPI_MFPH_PI14MFP_UART6_RXD        (0x02UL<<SYS_GPI_MFPH_PI14MFP_Pos) /*!< Data receiver input pin for UART6. */
#define SYS_GPI_MFPH_PI14MFP_CAN3_RXD         (0x03UL<<SYS_GPI_MFPH_PI14MFP_Pos) /*!< CAN3 bus receiver input. */
#define SYS_GPI_MFPH_PI14MFP_USBHL1_DM        (0x04UL<<SYS_GPI_MFPH_PI14MFP_Pos) /*!<  */
#define SYS_GPI_MFPH_PI14MFP_SPI2_MOSI        (0x05UL<<SYS_GPI_MFPH_PI14MFP_Pos) /*!< 1st SPI2 MOSI (Master Out, Slave In) pin. */
#define SYS_GPI_MFPH_PI14MFP_INT0             (0x08UL<<SYS_GPI_MFPH_PI14MFP_Pos) /*!< External interrupt0 input pin. */
#define SYS_GPI_MFPH_PI14MFP_LCM_DATA14       (0x09UL<<SYS_GPI_MFPH_PI14MFP_Pos) /*!< TFT LCD Module Pixel Data output bit 1. */
#define SYS_GPI_MFPH_PI15MFP_GPIO             (0x00UL<<SYS_GPI_MFPH_PI15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPI_MFPH_PI15MFP_EPWM2_CH5        (0x01UL<<SYS_GPI_MFPH_PI15MFP_Pos) /*!< EPWM2 channel5 output/capture input. */
#define SYS_GPI_MFPH_PI15MFP_UART6_TXD        (0x02UL<<SYS_GPI_MFPH_PI15MFP_Pos) /*!< Data transmitter output pin for UART6. */
#define SYS_GPI_MFPH_PI15MFP_CAN3_TXD         (0x03UL<<SYS_GPI_MFPH_PI15MFP_Pos) /*!< CAN3 bus transmitter output. */
#define SYS_GPI_MFPH_PI15MFP_USBHL1_DP        (0x04UL<<SYS_GPI_MFPH_PI15MFP_Pos) /*!<  */
#define SYS_GPI_MFPH_PI15MFP_SPI2_MISO        (0x05UL<<SYS_GPI_MFPH_PI15MFP_Pos) /*!< 1st SPI2 MISO (Master In, Slave Out) pin. */
#define SYS_GPI_MFPH_PI15MFP_INT1             (0x08UL<<SYS_GPI_MFPH_PI15MFP_Pos) /*!< External interrupt1 input pin. */
#define SYS_GPI_MFPH_PI15MFP_LCM_DATA15       (0x09UL<<SYS_GPI_MFPH_PI15MFP_Pos) /*!< TFT LCD Module Pixel Data output bit 1. */
/********************* Bit definition of GPJ_MFPL register **********************/
#define SYS_GPJ_MFPL_PJ0MFP_GPIO              (0x00UL<<SYS_GPJ_MFPL_PJ0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPL_PJ0MFP_EPWM2_CH0         (0x01UL<<SYS_GPJ_MFPL_PJ0MFP_Pos)  /*!< EPWM2 channel0 output/capture input. */
#define SYS_GPJ_MFPL_PJ0MFP_UART8_nCTS        (0x02UL<<SYS_GPJ_MFPL_PJ0MFP_Pos)  /*!< Clear to Send input pin for UART8. */
#define SYS_GPJ_MFPL_PJ0MFP_UART7_RXD         (0x03UL<<SYS_GPJ_MFPL_PJ0MFP_Pos)  /*!< Data receiver input pin for UART7. */
#define SYS_GPJ_MFPL_PJ0MFP_I2C2_SDA          (0x04UL<<SYS_GPJ_MFPL_PJ0MFP_Pos)  /*!< I2C2 data input/output pin. */
#define SYS_GPJ_MFPL_PJ0MFP_I2S0_LRCK         (0x05UL<<SYS_GPJ_MFPL_PJ0MFP_Pos)  /*!< I2S0 left right channel clock. */
#define SYS_GPJ_MFPL_PJ0MFP_eMMC1_DAT4        (0x06UL<<SYS_GPJ_MFPL_PJ0MFP_Pos)  /*!< eMMC1 data line bit 4. */
#define SYS_GPJ_MFPL_PJ0MFP_SPI0_SS0          (0x07UL<<SYS_GPJ_MFPL_PJ0MFP_Pos)  /*!< 1st SPI0 slave select pin. */
#define SYS_GPJ_MFPL_PJ0MFP_KPI_COL4          (0x0AUL<<SYS_GPJ_MFPL_PJ0MFP_Pos)  /*!< Keypad Interface Column 4 output pin. */
#define SYS_GPJ_MFPL_PJ0MFP_TM0_EXT           (0x0BUL<<SYS_GPJ_MFPL_PJ0MFP_Pos)  /*!< Timer0 event counter input / toggle output */
#define SYS_GPJ_MFPL_PJ1MFP_GPIO              (0x00UL<<SYS_GPJ_MFPL_PJ1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPL_PJ1MFP_EPWM2_CH1         (0x01UL<<SYS_GPJ_MFPL_PJ1MFP_Pos)  /*!< EPWM2 channel1 output/capture input. */
#define SYS_GPJ_MFPL_PJ1MFP_UART8_nRTS        (0x02UL<<SYS_GPJ_MFPL_PJ1MFP_Pos)  /*!< Request to Send output pin for UART8. */
#define SYS_GPJ_MFPL_PJ1MFP_UART7_TXD         (0x03UL<<SYS_GPJ_MFPL_PJ1MFP_Pos)  /*!< Data transmitter output pin for UART7. */
#define SYS_GPJ_MFPL_PJ1MFP_I2C2_SCL          (0x04UL<<SYS_GPJ_MFPL_PJ1MFP_Pos)  /*!< I2C2 clock pin. */
#define SYS_GPJ_MFPL_PJ1MFP_I2S0_BCLK         (0x05UL<<SYS_GPJ_MFPL_PJ1MFP_Pos)  /*!< I2S0 bit clock pin. */
#define SYS_GPJ_MFPL_PJ1MFP_eMMC1_DAT5        (0x06UL<<SYS_GPJ_MFPL_PJ1MFP_Pos)  /*!< eMMC1 data line bit 5. */
#define SYS_GPJ_MFPL_PJ1MFP_SPI0_CLK          (0x07UL<<SYS_GPJ_MFPL_PJ1MFP_Pos)  /*!< SPI0 serial clock pin. */
#define SYS_GPJ_MFPL_PJ1MFP_KPI_COL5          (0x0AUL<<SYS_GPJ_MFPL_PJ1MFP_Pos)  /*!< Keypad Interface Column 5 output pin. */
#define SYS_GPJ_MFPL_PJ1MFP_TM1               (0x0BUL<<SYS_GPJ_MFPL_PJ1MFP_Pos)  /*!< Timer1 event counter input / toggle output */
#define SYS_GPJ_MFPL_PJ2MFP_GPIO              (0x00UL<<SYS_GPJ_MFPL_PJ2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPL_PJ2MFP_EPWM2_CH2         (0x01UL<<SYS_GPJ_MFPL_PJ2MFP_Pos)  /*!< EPWM2 channel2 output/capture input. */
#define SYS_GPJ_MFPL_PJ2MFP_UART8_RXD         (0x02UL<<SYS_GPJ_MFPL_PJ2MFP_Pos)  /*!< Data receiver input pin for UART8. */
#define SYS_GPJ_MFPL_PJ2MFP_CAN3_RXD          (0x03UL<<SYS_GPJ_MFPL_PJ2MFP_Pos)  /*!< CAN3 bus receiver input. */
#define SYS_GPJ_MFPL_PJ2MFP_USBHL5_DM         (0x04UL<<SYS_GPJ_MFPL_PJ2MFP_Pos)  /*!<  */
#define SYS_GPJ_MFPL_PJ2MFP_I2S0_DI           (0x05UL<<SYS_GPJ_MFPL_PJ2MFP_Pos)  /*!< I2S0 data input. */
#define SYS_GPJ_MFPL_PJ2MFP_eMMC1_DAT6        (0x06UL<<SYS_GPJ_MFPL_PJ2MFP_Pos)  /*!< eMMC1 data line bit 6. */
#define SYS_GPJ_MFPL_PJ2MFP_SPI0_MOSI         (0x07UL<<SYS_GPJ_MFPL_PJ2MFP_Pos)  /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. */
#define SYS_GPJ_MFPL_PJ2MFP_KPI_COL0          (0x0AUL<<SYS_GPJ_MFPL_PJ2MFP_Pos)  /*!< Keypad Interface Column 0 output pin. */
#define SYS_GPJ_MFPL_PJ2MFP_TM1_EXT           (0x0BUL<<SYS_GPJ_MFPL_PJ2MFP_Pos)  /*!< Timer1 event counter input / toggle output */
#define SYS_GPJ_MFPL_PJ3MFP_GPIO              (0x00UL<<SYS_GPJ_MFPL_PJ3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPL_PJ3MFP_EPWM2_CH3         (0x01UL<<SYS_GPJ_MFPL_PJ3MFP_Pos)  /*!< EPWM2 channel3 output/capture input. */
#define SYS_GPJ_MFPL_PJ3MFP_UART8_TXD         (0x02UL<<SYS_GPJ_MFPL_PJ3MFP_Pos)  /*!< Data transmitter output pin for UART8. */
#define SYS_GPJ_MFPL_PJ3MFP_CAN3_TXD          (0x03UL<<SYS_GPJ_MFPL_PJ3MFP_Pos)  /*!< CAN3 bus transmitter output. */
#define SYS_GPJ_MFPL_PJ3MFP_USBHL5_DP         (0x04UL<<SYS_GPJ_MFPL_PJ3MFP_Pos)  /*!<  */
#define SYS_GPJ_MFPL_PJ3MFP_I2S0_DO           (0x05UL<<SYS_GPJ_MFPL_PJ3MFP_Pos)  /*!< I2S0 data output. */
#define SYS_GPJ_MFPL_PJ3MFP_eMMC1_DAT7        (0x06UL<<SYS_GPJ_MFPL_PJ3MFP_Pos)  /*!< eMMC1 data line bit 7. */
#define SYS_GPJ_MFPL_PJ3MFP_SPI0_MISO         (0x07UL<<SYS_GPJ_MFPL_PJ3MFP_Pos)  /*!< 1st SPI0 MISO (Master In, Slave Out) pin. */
#define SYS_GPJ_MFPL_PJ3MFP_KPI_COL1          (0x0AUL<<SYS_GPJ_MFPL_PJ3MFP_Pos)  /*!< Keypad Interface Column 1 output pin. */
#define SYS_GPJ_MFPL_PJ3MFP_TM2               (0x0BUL<<SYS_GPJ_MFPL_PJ3MFP_Pos)  /*!< Timer2 event counter input / toggle output */
#define SYS_GPJ_MFPL_PJ4MFP_GPIO              (0x00UL<<SYS_GPJ_MFPL_PJ4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPL_PJ4MFP_UART10_nCTS       (0x02UL<<SYS_GPJ_MFPL_PJ4MFP_Pos)  /*!< Clear to Send input pin for UART10. */
#define SYS_GPJ_MFPL_PJ4MFP_UART9_RXD         (0x03UL<<SYS_GPJ_MFPL_PJ4MFP_Pos)  /*!< Data receiver input pin for UART*. */
#define SYS_GPJ_MFPL_PJ4MFP_I2C3_SDA          (0x04UL<<SYS_GPJ_MFPL_PJ4MFP_Pos)  /*!< I2C3 data input/output pin. */
#define SYS_GPJ_MFPL_PJ4MFP_SD1_WP            (0x06UL<<SYS_GPJ_MFPL_PJ4MFP_Pos)  /*!< SD/SDIO1 write protect input. */
#define SYS_GPJ_MFPL_PJ4MFP_SPI1_SS0          (0x07UL<<SYS_GPJ_MFPL_PJ4MFP_Pos)  /*!< 1st SPI1 slave select pin. */
#define SYS_GPJ_MFPL_PJ4MFP_SC1_RST           (0x09UL<<SYS_GPJ_MFPL_PJ4MFP_Pos)  /*!< SmartCard1 reset pin. */
#define SYS_GPJ_MFPL_PJ4MFP_KPI_COL2          (0x0AUL<<SYS_GPJ_MFPL_PJ4MFP_Pos)  /*!< Keypad Interface Column 2 output pin. */
#define SYS_GPJ_MFPL_PJ4MFP_TM2_EXT           (0x0BUL<<SYS_GPJ_MFPL_PJ4MFP_Pos)  /*!< Timer2 event counter input / toggle output */
#define SYS_GPJ_MFPL_PJ5MFP_GPIO              (0x00UL<<SYS_GPJ_MFPL_PJ5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPL_PJ5MFP_UART10_nRTS       (0x02UL<<SYS_GPJ_MFPL_PJ5MFP_Pos)  /*!< Request to Send output pin for UART10. */
#define SYS_GPJ_MFPL_PJ5MFP_UART9_TXD         (0x03UL<<SYS_GPJ_MFPL_PJ5MFP_Pos)  /*!< Data transmitter output pin for UART*. */
#define SYS_GPJ_MFPL_PJ5MFP_I2C3_SCL          (0x04UL<<SYS_GPJ_MFPL_PJ5MFP_Pos)  /*!< I2C3 clock pin. */
#define SYS_GPJ_MFPL_PJ5MFP_QSPI1_SS1         (0x05UL<<SYS_GPJ_MFPL_PJ5MFP_Pos)  /*!< Quad SPI1 slave select pin. */
#define SYS_GPJ_MFPL_PJ5MFP_SD1_nCD           (0x06UL<<SYS_GPJ_MFPL_PJ5MFP_Pos)  /*!< SD/SDIO1 card detect */
#define SYS_GPJ_MFPL_PJ5MFP_SPI1_CLK          (0x07UL<<SYS_GPJ_MFPL_PJ5MFP_Pos)  /*!< SPI1 serial clock pin. */
#define SYS_GPJ_MFPL_PJ5MFP_SC1_CLK           (0x09UL<<SYS_GPJ_MFPL_PJ5MFP_Pos)  /*!< SmartCard1 clock pin. */
#define SYS_GPJ_MFPL_PJ5MFP_KPI_COL3          (0x0AUL<<SYS_GPJ_MFPL_PJ5MFP_Pos)  /*!< Keypad Interface Column 3 output pin. */
#define SYS_GPJ_MFPL_PJ5MFP_TM3               (0x0BUL<<SYS_GPJ_MFPL_PJ5MFP_Pos)  /*!< Timer3 event counter input / toggle output */
#define SYS_GPJ_MFPL_PJ6MFP_GPIO              (0x00UL<<SYS_GPJ_MFPL_PJ6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPL_PJ6MFP_UART10_RXD        (0x02UL<<SYS_GPJ_MFPL_PJ6MFP_Pos)  /*!< Data receiver input pin for UART10. */
#define SYS_GPJ_MFPL_PJ6MFP_CAN0_RXD          (0x03UL<<SYS_GPJ_MFPL_PJ6MFP_Pos)  /*!< CAN0 bus receiver input. */
#define SYS_GPJ_MFPL_PJ6MFP_USBHL0_DM         (0x04UL<<SYS_GPJ_MFPL_PJ6MFP_Pos)  /*!<  */
#define SYS_GPJ_MFPL_PJ6MFP_QSPI1_SS0         (0x05UL<<SYS_GPJ_MFPL_PJ6MFP_Pos)  /*!< Quad SPI1 slave select pin. */
#define SYS_GPJ_MFPL_PJ6MFP_eMMC1_CMD         (0x06UL<<SYS_GPJ_MFPL_PJ6MFP_Pos)  /*!< eMMC1 command/response. */
#define SYS_GPJ_MFPL_PJ6MFP_SD1_CMD           (0x06UL<<SYS_GPJ_MFPL_PJ6MFP_Pos)  /*!< SD/SDIO1 command/response. */
#define SYS_GPJ_MFPL_PJ6MFP_SPI1_MOSI         (0x07UL<<SYS_GPJ_MFPL_PJ6MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. */
#define SYS_GPJ_MFPL_PJ6MFP_SC1_DAT           (0x09UL<<SYS_GPJ_MFPL_PJ6MFP_Pos)  /*!< SmartCard1 data pin. */
#define SYS_GPJ_MFPL_PJ6MFP_KPI_COL6          (0x0AUL<<SYS_GPJ_MFPL_PJ6MFP_Pos)  /*!< Keypad Interface Column 6 output pin. */
#define SYS_GPJ_MFPL_PJ6MFP_TM3_EXT           (0x0BUL<<SYS_GPJ_MFPL_PJ6MFP_Pos)  /*!< Timer3 event counter input / toggle output */
#define SYS_GPJ_MFPL_PJ7MFP_GPIO              (0x00UL<<SYS_GPJ_MFPL_PJ7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPL_PJ7MFP_UART10_TXD        (0x02UL<<SYS_GPJ_MFPL_PJ7MFP_Pos)  /*!< Data transmitter output pin for UART10. */
#define SYS_GPJ_MFPL_PJ7MFP_CAN0_TXD          (0x03UL<<SYS_GPJ_MFPL_PJ7MFP_Pos)  /*!< CAN0 bus transmitter output. */
#define SYS_GPJ_MFPL_PJ7MFP_USBHL0_DP         (0x04UL<<SYS_GPJ_MFPL_PJ7MFP_Pos)  /*!<  */
#define SYS_GPJ_MFPL_PJ7MFP_QSPI1_CLK         (0x05UL<<SYS_GPJ_MFPL_PJ7MFP_Pos)  /*!< Quad SPI1 serial clock pin. */
#define SYS_GPJ_MFPL_PJ7MFP_eMMC1_CLK         (0x06UL<<SYS_GPJ_MFPL_PJ7MFP_Pos)  /*!< eMMC1 clock. */
#define SYS_GPJ_MFPL_PJ7MFP_SD1_CLK           (0x06UL<<SYS_GPJ_MFPL_PJ7MFP_Pos)  /*!< SD/SDIO1 clock. */
#define SYS_GPJ_MFPL_PJ7MFP_SPI1_MISO         (0x07UL<<SYS_GPJ_MFPL_PJ7MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. */
#define SYS_GPJ_MFPL_PJ7MFP_SC1_PWR           (0x09UL<<SYS_GPJ_MFPL_PJ7MFP_Pos)  /*!< SmartCard1 power pin. */
#define SYS_GPJ_MFPL_PJ7MFP_KPI_COL7          (0x0AUL<<SYS_GPJ_MFPL_PJ7MFP_Pos)  /*!< Keypad Interface Column 7 output pin. */
#define SYS_GPJ_MFPL_PJ7MFP_TM4               (0x0BUL<<SYS_GPJ_MFPL_PJ7MFP_Pos)  /*!< Timer4 event counter input / toggle output */
/********************* Bit definition of GPJ_MFPH register **********************/
#define SYS_GPJ_MFPH_PJ8MFP_GPIO              (0x00UL<<SYS_GPJ_MFPH_PJ8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPH_PJ8MFP_UART12_nCTS       (0x02UL<<SYS_GPJ_MFPH_PJ8MFP_Pos)  /*!< Clear to Send input pin for UART12. */
#define SYS_GPJ_MFPH_PJ8MFP_UART11_RXD        (0x03UL<<SYS_GPJ_MFPH_PJ8MFP_Pos)  /*!< Data receiver input pin for UART11. */
#define SYS_GPJ_MFPH_PJ8MFP_I2C4_SDA          (0x04UL<<SYS_GPJ_MFPH_PJ8MFP_Pos)  /*!< I2C4 data input/output pin. */
#define SYS_GPJ_MFPH_PJ8MFP_QSPI1_MOSI0       (0x05UL<<SYS_GPJ_MFPH_PJ8MFP_Pos)  /*!< Quad SPI1 MOSI0 (Master Out, Slave In) pin. */
#define SYS_GPJ_MFPH_PJ8MFP_eMMC1_DAT0        (0x06UL<<SYS_GPJ_MFPH_PJ8MFP_Pos)  /*!< eMMC1 data line bit 0. */
#define SYS_GPJ_MFPH_PJ8MFP_SD1_DAT0          (0x06UL<<SYS_GPJ_MFPH_PJ8MFP_Pos)  /*!< SD/SDIO1 data line bit 0. */
#define SYS_GPJ_MFPH_PJ8MFP_SPI2_SS0          (0x07UL<<SYS_GPJ_MFPH_PJ8MFP_Pos)  /*!< 1st SPI2 slave select pin. */
#define SYS_GPJ_MFPH_PJ8MFP_SC1_nCD           (0x09UL<<SYS_GPJ_MFPH_PJ8MFP_Pos)  /*!< SmartCard1 card detect pin. */
#define SYS_GPJ_MFPH_PJ8MFP_TM4_EXT           (0x0BUL<<SYS_GPJ_MFPH_PJ8MFP_Pos)  /*!< Timer4 event counter input / toggle output */
#define SYS_GPJ_MFPH_PJ9MFP_GPIO              (0x00UL<<SYS_GPJ_MFPH_PJ9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPH_PJ9MFP_EPWM2_CH4         (0x01UL<<SYS_GPJ_MFPH_PJ9MFP_Pos)  /*!< EPWM2 channel4 output/capture input. */
#define SYS_GPJ_MFPH_PJ9MFP_UART12_nRTS       (0x02UL<<SYS_GPJ_MFPH_PJ9MFP_Pos)  /*!< Request to Send output pin for UART12. */
#define SYS_GPJ_MFPH_PJ9MFP_UART11_TXD        (0x03UL<<SYS_GPJ_MFPH_PJ9MFP_Pos)  /*!< Data transmitter output pin for UART11. */
#define SYS_GPJ_MFPH_PJ9MFP_I2C4_SCL          (0x04UL<<SYS_GPJ_MFPH_PJ9MFP_Pos)  /*!< I2C4 clock pin. */
#define SYS_GPJ_MFPH_PJ9MFP_QSPI1_MISO0       (0x05UL<<SYS_GPJ_MFPH_PJ9MFP_Pos)  /*!< Quad SPI1 MISO0 (Master In, Slave Out) pin. */
#define SYS_GPJ_MFPH_PJ9MFP_eMMC1_DAT1        (0x06UL<<SYS_GPJ_MFPH_PJ9MFP_Pos)  /*!< eMMC1 data line bit 1. */
#define SYS_GPJ_MFPH_PJ9MFP_SD1_DAT1          (0x06UL<<SYS_GPJ_MFPH_PJ9MFP_Pos)  /*!< SD/SDIO1 data line bit 1. */
#define SYS_GPJ_MFPH_PJ9MFP_SPI2_CLK          (0x07UL<<SYS_GPJ_MFPH_PJ9MFP_Pos)  /*!< SPI2 serial clock pin. */
#define SYS_GPJ_MFPH_PJ9MFP_TM5               (0x0BUL<<SYS_GPJ_MFPH_PJ9MFP_Pos)  /*!< Timer5 event counter input / toggle output */
#define SYS_GPJ_MFPH_PJ10MFP_GPIO             (0x00UL<<SYS_GPJ_MFPH_PJ10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPH_PJ10MFP_EPWM2_CH5        (0x01UL<<SYS_GPJ_MFPH_PJ10MFP_Pos) /*!< EPWM2 channel5 output/capture input. */
#define SYS_GPJ_MFPH_PJ10MFP_UART12_RXD       (0x02UL<<SYS_GPJ_MFPH_PJ10MFP_Pos) /*!< Data receiver input pin for UART12. */
#define SYS_GPJ_MFPH_PJ10MFP_CAN1_RXD         (0x03UL<<SYS_GPJ_MFPH_PJ10MFP_Pos) /*!< CAN1 bus receiver input. */
#define SYS_GPJ_MFPH_PJ10MFP_USBHL1_DM        (0x04UL<<SYS_GPJ_MFPH_PJ10MFP_Pos) /*!<  */
#define SYS_GPJ_MFPH_PJ10MFP_QSPI1_MOSI1      (0x05UL<<SYS_GPJ_MFPH_PJ10MFP_Pos) /*!< Quad SPI1 MOSI1 (Master Out, Slave In) pin. */
#define SYS_GPJ_MFPH_PJ10MFP_eMMC1_DAT2       (0x06UL<<SYS_GPJ_MFPH_PJ10MFP_Pos) /*!< eMMC1 data line bit 2. */
#define SYS_GPJ_MFPH_PJ10MFP_SD1_DAT2         (0x06UL<<SYS_GPJ_MFPH_PJ10MFP_Pos) /*!< SD/SDIO1 data line bit 2. */
#define SYS_GPJ_MFPH_PJ10MFP_SPI2_MOSI        (0x07UL<<SYS_GPJ_MFPH_PJ10MFP_Pos) /*!< 1st SPI2 MOSI (Master Out, Slave In) pin. */
#define SYS_GPJ_MFPH_PJ10MFP_TM5_EXT          (0x0BUL<<SYS_GPJ_MFPH_PJ10MFP_Pos) /*!< Timer5 event counter input / toggle output */
#define SYS_GPJ_MFPH_PJ11MFP_GPIO             (0x00UL<<SYS_GPJ_MFPH_PJ11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPH_PJ11MFP_UART12_TXD       (0x02UL<<SYS_GPJ_MFPH_PJ11MFP_Pos) /*!< Data transmitter output pin for UART12. */
#define SYS_GPJ_MFPH_PJ11MFP_CAN1_TXD         (0x03UL<<SYS_GPJ_MFPH_PJ11MFP_Pos) /*!< CAN1 bus transmitter output. */
#define SYS_GPJ_MFPH_PJ11MFP_USBHL1_DP        (0x04UL<<SYS_GPJ_MFPH_PJ11MFP_Pos) /*!<  */
#define SYS_GPJ_MFPH_PJ11MFP_QSPI1_MISO1      (0x05UL<<SYS_GPJ_MFPH_PJ11MFP_Pos) /*!< Quad SPI1 MISO1 (Master In, Slave Out) pin. */
#define SYS_GPJ_MFPH_PJ11MFP_eMMC1_DAT3       (0x06UL<<SYS_GPJ_MFPH_PJ11MFP_Pos) /*!< eMMC1 data line bit 3. */
#define SYS_GPJ_MFPH_PJ11MFP_SD1_DAT3         (0x06UL<<SYS_GPJ_MFPH_PJ11MFP_Pos) /*!< SD/SDIO1 data line bit 3. */
#define SYS_GPJ_MFPH_PJ11MFP_SPI2_MISO        (0x07UL<<SYS_GPJ_MFPH_PJ11MFP_Pos) /*!< 1st SPI2 MISO (Master In, Slave Out) pin. */
#define SYS_GPJ_MFPH_PJ11MFP_TM6              (0x0BUL<<SYS_GPJ_MFPH_PJ11MFP_Pos) /*!< Timer6 event counter input / toggle output */
#define SYS_GPJ_MFPH_PJ12MFP_GPIO             (0x00UL<<SYS_GPJ_MFPH_PJ12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPH_PJ12MFP_UART2_nCTS       (0x02UL<<SYS_GPJ_MFPH_PJ12MFP_Pos) /*!< Clear to Send input pin for UART2. */
#define SYS_GPJ_MFPH_PJ12MFP_UART1_RXD        (0x03UL<<SYS_GPJ_MFPH_PJ12MFP_Pos) /*!< Data receiver input pin for UART1. */
#define SYS_GPJ_MFPH_PJ12MFP_I2C5_SDA         (0x04UL<<SYS_GPJ_MFPH_PJ12MFP_Pos) /*!< I2C5 data input/output pin. */
#define SYS_GPJ_MFPH_PJ12MFP_SPI0_SS0         (0x05UL<<SYS_GPJ_MFPH_PJ12MFP_Pos) /*!< 1st SPI0 slave select pin. */
#define SYS_GPJ_MFPH_PJ12MFP_EBI_AD12         (0x07UL<<SYS_GPJ_MFPH_PJ12MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPJ_MFPH_PJ12MFP_VCAP0_PIXCLK     (0x08UL<<SYS_GPJ_MFPH_PJ12MFP_Pos) /*!< Camera capture 0 interface pixel clock input pin. */
#define SYS_GPJ_MFPH_PJ12MFP_KPI_ROW4         (0x0AUL<<SYS_GPJ_MFPH_PJ12MFP_Pos) /*!< Keypad Interface Row 4 input pin. */
#define SYS_GPJ_MFPH_PJ12MFP_TM2              (0x0BUL<<SYS_GPJ_MFPH_PJ12MFP_Pos) /*!< Timer2 event counter input / toggle output */
#define SYS_GPJ_MFPH_PJ13MFP_GPIO             (0x00UL<<SYS_GPJ_MFPH_PJ13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPH_PJ13MFP_UART2_nRTS       (0x02UL<<SYS_GPJ_MFPH_PJ13MFP_Pos) /*!< Request to Send output pin for UART2. */
#define SYS_GPJ_MFPH_PJ13MFP_UART1_TXD        (0x03UL<<SYS_GPJ_MFPH_PJ13MFP_Pos) /*!< Data transmitter output pin for UART1. */
#define SYS_GPJ_MFPH_PJ13MFP_I2C5_SCL         (0x04UL<<SYS_GPJ_MFPH_PJ13MFP_Pos) /*!< I2C5 clock pin. */
#define SYS_GPJ_MFPH_PJ13MFP_SPI0_CLK         (0x05UL<<SYS_GPJ_MFPH_PJ13MFP_Pos) /*!< SPI0 serial clock pin. */
#define SYS_GPJ_MFPH_PJ13MFP_EBI_AD13         (0x07UL<<SYS_GPJ_MFPH_PJ13MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPJ_MFPH_PJ13MFP_VCAP0_SCLK       (0x08UL<<SYS_GPJ_MFPH_PJ13MFP_Pos) /*!< Camera capture 0 interface sensor clock output pin. */
#define SYS_GPJ_MFPH_PJ13MFP_KPI_ROW5         (0x0AUL<<SYS_GPJ_MFPH_PJ13MFP_Pos) /*!< Keypad Interface Row 5 input pin. */
#define SYS_GPJ_MFPH_PJ13MFP_TM2_EXT          (0x0BUL<<SYS_GPJ_MFPH_PJ13MFP_Pos) /*!< Timer2 event counter input / toggle output */
#define SYS_GPJ_MFPH_PJ14MFP_GPIO             (0x00UL<<SYS_GPJ_MFPH_PJ14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPH_PJ14MFP_UART2_RXD        (0x02UL<<SYS_GPJ_MFPH_PJ14MFP_Pos) /*!< Data receiver input pin for UART2. */
#define SYS_GPJ_MFPH_PJ14MFP_CAN3_RXD         (0x03UL<<SYS_GPJ_MFPH_PJ14MFP_Pos) /*!< CAN3 bus receiver input. */
#define SYS_GPJ_MFPH_PJ14MFP_USBHL5_DM        (0x04UL<<SYS_GPJ_MFPH_PJ14MFP_Pos) /*!<  */
#define SYS_GPJ_MFPH_PJ14MFP_SPI0_MOSI        (0x05UL<<SYS_GPJ_MFPH_PJ14MFP_Pos) /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. */
#define SYS_GPJ_MFPH_PJ14MFP_EBI_AD14         (0x07UL<<SYS_GPJ_MFPH_PJ14MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPJ_MFPH_PJ14MFP_VCAP0_SFIELD     (0x08UL<<SYS_GPJ_MFPH_PJ14MFP_Pos) /*!< Camera capture 0 interface SFIELD input pin. */
#define SYS_GPJ_MFPH_PJ14MFP_KPI_ROW6         (0x0AUL<<SYS_GPJ_MFPH_PJ14MFP_Pos) /*!< Keypad Interface Row 6 input pin. */
#define SYS_GPJ_MFPH_PJ14MFP_TM3              (0x0BUL<<SYS_GPJ_MFPH_PJ14MFP_Pos) /*!< Timer3 event counter input / toggle output */
#define SYS_GPJ_MFPH_PJ15MFP_GPIO             (0x00UL<<SYS_GPJ_MFPH_PJ15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPJ_MFPH_PJ15MFP_UART2_TXD        (0x02UL<<SYS_GPJ_MFPH_PJ15MFP_Pos) /*!< Data transmitter output pin for UART2. */
#define SYS_GPJ_MFPH_PJ15MFP_CAN3_TXD         (0x03UL<<SYS_GPJ_MFPH_PJ15MFP_Pos) /*!< CAN3 bus transmitter output. */
#define SYS_GPJ_MFPH_PJ15MFP_USBHL5_DP        (0x04UL<<SYS_GPJ_MFPH_PJ15MFP_Pos) /*!<  */
#define SYS_GPJ_MFPH_PJ15MFP_SPI0_MISO        (0x05UL<<SYS_GPJ_MFPH_PJ15MFP_Pos) /*!< 1st SPI0 MISO (Master In, Slave Out) pin. */
#define SYS_GPJ_MFPH_PJ15MFP_EADC0_ST         (0x06UL<<SYS_GPJ_MFPH_PJ15MFP_Pos) /*!< EADC external trigger input. */
#define SYS_GPJ_MFPH_PJ15MFP_EBI_AD15         (0x07UL<<SYS_GPJ_MFPH_PJ15MFP_Pos) /*!< EBI address/data bus bit1. */
#define SYS_GPJ_MFPH_PJ15MFP_KPI_ROW7         (0x0AUL<<SYS_GPJ_MFPH_PJ15MFP_Pos) /*!< Keypad Interface Row 7 input pin. */
#define SYS_GPJ_MFPH_PJ15MFP_TM3_EXT          (0x0BUL<<SYS_GPJ_MFPH_PJ15MFP_Pos) /*!< Timer3 event counter input / toggle output */
/********************* Bit definition of GPK_MFPL register **********************/
#define SYS_GPK_MFPL_PK0MFP_GPIO              (0x00UL<<SYS_GPK_MFPL_PK0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPL_PK0MFP_ECAP2_IC0         (0x01UL<<SYS_GPK_MFPL_PK0MFP_Pos)  /*!< Input 0 of enhanced capture unit 2. */
#define SYS_GPK_MFPL_PK0MFP_UART16_nCTS       (0x02UL<<SYS_GPK_MFPL_PK0MFP_Pos)  /*!< Clear to Send input pin for UART16. */
#define SYS_GPK_MFPL_PK0MFP_UART15_RXD        (0x03UL<<SYS_GPK_MFPL_PK0MFP_Pos)  /*!< Data receiver input pin for UART15. */
#define SYS_GPK_MFPL_PK0MFP_I2C4_SDA          (0x04UL<<SYS_GPK_MFPL_PK0MFP_Pos)  /*!< I2C4 data input/output pin. */
#define SYS_GPK_MFPL_PK0MFP_SPI1_SS0          (0x05UL<<SYS_GPK_MFPL_PK0MFP_Pos)  /*!< 1st SPI1 slave select pin. */
#define SYS_GPK_MFPL_PK0MFP_EBI_AD8           (0x07UL<<SYS_GPK_MFPL_PK0MFP_Pos)  /*!< EBI address/data bus bit8. */
#define SYS_GPK_MFPL_PK0MFP_VCAP0_DATA8       (0x08UL<<SYS_GPK_MFPL_PK0MFP_Pos)  /*!< Camera capture 0 data input bus bit 8. */
#define SYS_GPK_MFPL_PK0MFP_KPI_ROW0          (0x0AUL<<SYS_GPK_MFPL_PK0MFP_Pos)  /*!< Keypad Interface Row 0 input pin. */
#define SYS_GPK_MFPL_PK1MFP_GPIO              (0x00UL<<SYS_GPK_MFPL_PK1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPL_PK1MFP_ECAP2_IC1         (0x01UL<<SYS_GPK_MFPL_PK1MFP_Pos)  /*!< Input 1 of enhanced capture unit 2. */
#define SYS_GPK_MFPL_PK1MFP_UART16_nRTS       (0x02UL<<SYS_GPK_MFPL_PK1MFP_Pos)  /*!< Request to Send output pin for UART16. */
#define SYS_GPK_MFPL_PK1MFP_UART15_TXD        (0x03UL<<SYS_GPK_MFPL_PK1MFP_Pos)  /*!< Data transmitter output pin for UART15. */
#define SYS_GPK_MFPL_PK1MFP_I2C4_SCL          (0x04UL<<SYS_GPK_MFPL_PK1MFP_Pos)  /*!< I2C4 clock pin. */
#define SYS_GPK_MFPL_PK1MFP_SPI1_CLK          (0x05UL<<SYS_GPK_MFPL_PK1MFP_Pos)  /*!< SPI1 serial clock pin. */
#define SYS_GPK_MFPL_PK1MFP_EBI_AD9           (0x07UL<<SYS_GPK_MFPL_PK1MFP_Pos)  /*!< EBI address/data bus bit9. */
#define SYS_GPK_MFPL_PK1MFP_VCAP0_DATA9       (0x08UL<<SYS_GPK_MFPL_PK1MFP_Pos)  /*!< Camera capture 0 data input bus bit 9. */
#define SYS_GPK_MFPL_PK1MFP_KPI_ROW1          (0x0AUL<<SYS_GPK_MFPL_PK1MFP_Pos)  /*!< Keypad Interface Row 1 input pin. */
#define SYS_GPK_MFPL_PK2MFP_GPIO              (0x00UL<<SYS_GPK_MFPL_PK2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPL_PK2MFP_ECAP2_IC2         (0x01UL<<SYS_GPK_MFPL_PK2MFP_Pos)  /*!< Input 2 of enhanced capture unit 2. */
#define SYS_GPK_MFPL_PK2MFP_UART16_RXD        (0x02UL<<SYS_GPK_MFPL_PK2MFP_Pos)  /*!< Data receiver input pin for UART16. */
#define SYS_GPK_MFPL_PK2MFP_CAN2_RXD          (0x03UL<<SYS_GPK_MFPL_PK2MFP_Pos)  /*!< CAN2 bus receiver input. */
#define SYS_GPK_MFPL_PK2MFP_USBHL4_DM         (0x04UL<<SYS_GPK_MFPL_PK2MFP_Pos)  /*!<  */
#define SYS_GPK_MFPL_PK2MFP_SPI1_MOSI         (0x05UL<<SYS_GPK_MFPL_PK2MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. */
#define SYS_GPK_MFPL_PK2MFP_EBI_AD10          (0x07UL<<SYS_GPK_MFPL_PK2MFP_Pos)  /*!< EBI address/data bus bit1. */
#define SYS_GPK_MFPL_PK2MFP_VCAP0_VSYNC       (0x08UL<<SYS_GPK_MFPL_PK2MFP_Pos)  /*!< Camera capture 0 interface vsync input pin. */
#define SYS_GPK_MFPL_PK2MFP_KPI_ROW2          (0x0AUL<<SYS_GPK_MFPL_PK2MFP_Pos)  /*!< Keypad Interface Row 2 input pin. */
#define SYS_GPK_MFPL_PK3MFP_GPIO              (0x00UL<<SYS_GPK_MFPL_PK3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPL_PK3MFP_QEI2_A            (0x01UL<<SYS_GPK_MFPL_PK3MFP_Pos)  /*!< Quadrature encoder phase A input of QEI Unit 2. */
#define SYS_GPK_MFPL_PK3MFP_UART16_TXD        (0x02UL<<SYS_GPK_MFPL_PK3MFP_Pos)  /*!< Data transmitter output pin for UART16. */
#define SYS_GPK_MFPL_PK3MFP_CAN2_TXD          (0x03UL<<SYS_GPK_MFPL_PK3MFP_Pos)  /*!< CAN2 bus transmitter output. */
#define SYS_GPK_MFPL_PK3MFP_USBHL4_DP         (0x04UL<<SYS_GPK_MFPL_PK3MFP_Pos)  /*!<  */
#define SYS_GPK_MFPL_PK3MFP_SPI1_MISO         (0x05UL<<SYS_GPK_MFPL_PK3MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. */
#define SYS_GPK_MFPL_PK3MFP_EBI_AD11          (0x07UL<<SYS_GPK_MFPL_PK3MFP_Pos)  /*!< EBI address/data bus bit1. */
#define SYS_GPK_MFPL_PK3MFP_VCAP0_HSYNC       (0x08UL<<SYS_GPK_MFPL_PK3MFP_Pos)  /*!< Camera capture 0 interface hsync input pin. */
#define SYS_GPK_MFPL_PK3MFP_KPI_ROW3          (0x0AUL<<SYS_GPK_MFPL_PK3MFP_Pos)  /*!< Keypad Interface Row 3 input pin. */
#define SYS_GPK_MFPL_PK4MFP_GPIO              (0x00UL<<SYS_GPK_MFPL_PK4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPL_PK4MFP_EPWM1_CH0         (0x01UL<<SYS_GPK_MFPL_PK4MFP_Pos)  /*!< EPWM1 channel0 output/capture input. */
#define SYS_GPK_MFPL_PK4MFP_UART13_nCTS       (0x02UL<<SYS_GPK_MFPL_PK4MFP_Pos)  /*!< Clear to Send input pin for UART13. */
#define SYS_GPK_MFPL_PK4MFP_UART12_RXD        (0x03UL<<SYS_GPK_MFPL_PK4MFP_Pos)  /*!< Data receiver input pin for UART12. */
#define SYS_GPK_MFPL_PK4MFP_I2C4_SDA          (0x04UL<<SYS_GPK_MFPL_PK4MFP_Pos)  /*!< I2C4 data input/output pin. */
#define SYS_GPK_MFPL_PK4MFP_SPI1_SS0          (0x05UL<<SYS_GPK_MFPL_PK4MFP_Pos)  /*!< 1st SPI1 slave select pin. */
#define SYS_GPK_MFPL_PK4MFP_EADC0_ST          (0x06UL<<SYS_GPK_MFPL_PK4MFP_Pos)  /*!< EADC external trigger input. */
#define SYS_GPK_MFPL_PK4MFP_SC0_nCD           (0x07UL<<SYS_GPK_MFPL_PK4MFP_Pos)  /*!< SmartCard0 card detect pin. */
#define SYS_GPK_MFPL_PK5MFP_GPIO              (0x00UL<<SYS_GPK_MFPL_PK5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPL_PK5MFP_EPWM1_CH1         (0x01UL<<SYS_GPK_MFPL_PK5MFP_Pos)  /*!< EPWM1 channel1 output/capture input. */
#define SYS_GPK_MFPL_PK5MFP_UART13_nRTS       (0x02UL<<SYS_GPK_MFPL_PK5MFP_Pos)  /*!< Request to Send output pin for UART13. */
#define SYS_GPK_MFPL_PK5MFP_UART12_TXD        (0x03UL<<SYS_GPK_MFPL_PK5MFP_Pos)  /*!< Data transmitter output pin for UART12. */
#define SYS_GPK_MFPL_PK5MFP_I2C4_SCL          (0x04UL<<SYS_GPK_MFPL_PK5MFP_Pos)  /*!< I2C4 clock pin. */
#define SYS_GPK_MFPL_PK5MFP_SPI1_CLK          (0x05UL<<SYS_GPK_MFPL_PK5MFP_Pos)  /*!< SPI1 serial clock pin. */
#define SYS_GPK_MFPL_PK5MFP_SC0_RST           (0x07UL<<SYS_GPK_MFPL_PK5MFP_Pos)  /*!< SmartCard0 reset pin. */
#define SYS_GPK_MFPL_PK6MFP_GPIO              (0x00UL<<SYS_GPK_MFPL_PK6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPL_PK6MFP_EPWM1_CH2         (0x01UL<<SYS_GPK_MFPL_PK6MFP_Pos)  /*!< EPWM1 channel2 output/capture input. */
#define SYS_GPK_MFPL_PK6MFP_UART13_RXD        (0x02UL<<SYS_GPK_MFPL_PK6MFP_Pos)  /*!< Data receiver input pin for UART13. */
#define SYS_GPK_MFPL_PK6MFP_CAN0_RXD          (0x03UL<<SYS_GPK_MFPL_PK6MFP_Pos)  /*!< CAN0 bus receiver input. */
#define SYS_GPK_MFPL_PK6MFP_USBHL4_DM         (0x04UL<<SYS_GPK_MFPL_PK6MFP_Pos)  /*!<  */
#define SYS_GPK_MFPL_PK6MFP_SPI1_MOSI         (0x05UL<<SYS_GPK_MFPL_PK6MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. */
#define SYS_GPK_MFPL_PK6MFP_SC0_CLK           (0x07UL<<SYS_GPK_MFPL_PK6MFP_Pos)  /*!< SmartCard0 clock pin. */
#define SYS_GPK_MFPL_PK7MFP_GPIO              (0x00UL<<SYS_GPK_MFPL_PK7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPL_PK7MFP_EPWM1_CH3         (0x01UL<<SYS_GPK_MFPL_PK7MFP_Pos)  /*!< EPWM1 channel3 output/capture input. */
#define SYS_GPK_MFPL_PK7MFP_UART13_TXD        (0x02UL<<SYS_GPK_MFPL_PK7MFP_Pos)  /*!< Data transmitter output pin for UART13. */
#define SYS_GPK_MFPL_PK7MFP_CAN0_TXD          (0x03UL<<SYS_GPK_MFPL_PK7MFP_Pos)  /*!< CAN0 bus transmitter output. */
#define SYS_GPK_MFPL_PK7MFP_USBHL4_DP         (0x04UL<<SYS_GPK_MFPL_PK7MFP_Pos)  /*!<  */
#define SYS_GPK_MFPL_PK7MFP_SPI1_MISO         (0x05UL<<SYS_GPK_MFPL_PK7MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. */
#define SYS_GPK_MFPL_PK7MFP_CLKO              (0x06UL<<SYS_GPK_MFPL_PK7MFP_Pos)  /*!< Clock Output pin. */
#define SYS_GPK_MFPL_PK7MFP_SC0_DAT           (0x07UL<<SYS_GPK_MFPL_PK7MFP_Pos)  /*!< SmartCard0 data pin. */
/********************* Bit definition of GPK_MFPH register **********************/
#define SYS_GPK_MFPH_PK8MFP_GPIO              (0x00UL<<SYS_GPK_MFPH_PK8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPH_PK8MFP_EPWM2_CH0         (0x01UL<<SYS_GPK_MFPH_PK8MFP_Pos)  /*!< EPWM2 channel0 output/capture input. */
#define SYS_GPK_MFPH_PK8MFP_UART4_nCTS        (0x02UL<<SYS_GPK_MFPH_PK8MFP_Pos)  /*!< Clear to Send input pin for UART4. */
#define SYS_GPK_MFPH_PK8MFP_UART3_RXD         (0x03UL<<SYS_GPK_MFPH_PK8MFP_Pos)  /*!< Data receiver input pin for UART3. */
#define SYS_GPK_MFPH_PK8MFP_I2C3_SDA          (0x04UL<<SYS_GPK_MFPH_PK8MFP_Pos)  /*!< I2C3 data input/output pin. */
#define SYS_GPK_MFPH_PK8MFP_SPI2_SS0          (0x05UL<<SYS_GPK_MFPH_PK8MFP_Pos)  /*!< 1st SPI2 slave select pin. */
#define SYS_GPK_MFPH_PK8MFP_SC1_nCD           (0x06UL<<SYS_GPK_MFPH_PK8MFP_Pos)  /*!< SmartCard1 card detect pin. */
#define SYS_GPK_MFPH_PK8MFP_QSPI1_MOSI1       (0x07UL<<SYS_GPK_MFPH_PK8MFP_Pos)  /*!< Quad SPI1 MOSI1 (Master Out, Slave In) pin. */
#define SYS_GPK_MFPH_PK8MFP_EADC0_ST          (0x08UL<<SYS_GPK_MFPH_PK8MFP_Pos)  /*!< EADC external trigger input. */
#define SYS_GPK_MFPH_PK9MFP_GPIO              (0x00UL<<SYS_GPK_MFPH_PK9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPH_PK9MFP_EPWM2_CH1         (0x01UL<<SYS_GPK_MFPH_PK9MFP_Pos)  /*!< EPWM2 channel1 output/capture input. */
#define SYS_GPK_MFPH_PK9MFP_UART4_nRTS        (0x02UL<<SYS_GPK_MFPH_PK9MFP_Pos)  /*!< Request to Send output pin for UART4. */
#define SYS_GPK_MFPH_PK9MFP_UART3_TXD         (0x03UL<<SYS_GPK_MFPH_PK9MFP_Pos)  /*!< Data transmitter output pin for UART3. */
#define SYS_GPK_MFPH_PK9MFP_I2C3_SCL          (0x04UL<<SYS_GPK_MFPH_PK9MFP_Pos)  /*!< I2C3 clock pin. */
#define SYS_GPK_MFPH_PK9MFP_SPI2_CLK          (0x05UL<<SYS_GPK_MFPH_PK9MFP_Pos)  /*!< SPI2 serial clock pin. */
#define SYS_GPK_MFPH_PK9MFP_SC1_RST           (0x06UL<<SYS_GPK_MFPH_PK9MFP_Pos)  /*!< SmartCard1 reset pin. */
#define SYS_GPK_MFPH_PK9MFP_QSPI1_MISO1       (0x07UL<<SYS_GPK_MFPH_PK9MFP_Pos)  /*!< Quad SPI1 MISO1 (Master In, Slave Out) pin. */
#define SYS_GPK_MFPH_PK9MFP_VCAP0_SFIELD      (0x09UL<<SYS_GPK_MFPH_PK9MFP_Pos)  /*!< Camera capture 0 interface SFIELD input pin. */
#define SYS_GPK_MFPH_PK10MFP_GPIO             (0x00UL<<SYS_GPK_MFPH_PK10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPH_PK10MFP_EPWM2_CH2        (0x01UL<<SYS_GPK_MFPH_PK10MFP_Pos) /*!< EPWM2 channel2 output/capture input. */
#define SYS_GPK_MFPH_PK10MFP_UART4_RXD        (0x02UL<<SYS_GPK_MFPH_PK10MFP_Pos) /*!< Data receiver input pin for UART4. */
#define SYS_GPK_MFPH_PK10MFP_CAN1_RXD         (0x03UL<<SYS_GPK_MFPH_PK10MFP_Pos) /*!< CAN1 bus receiver input. */
#define SYS_GPK_MFPH_PK10MFP_USBHL3_DM        (0x04UL<<SYS_GPK_MFPH_PK10MFP_Pos) /*!<  */
#define SYS_GPK_MFPH_PK10MFP_SPI2_MOSI        (0x05UL<<SYS_GPK_MFPH_PK10MFP_Pos) /*!< 1st SPI2 MOSI (Master Out, Slave In) pin. */
#define SYS_GPK_MFPH_PK10MFP_SC1_CLK          (0x06UL<<SYS_GPK_MFPH_PK10MFP_Pos) /*!< SmartCard1 clock pin. */
#define SYS_GPK_MFPH_PK10MFP_VCAP0_DATA0      (0x09UL<<SYS_GPK_MFPH_PK10MFP_Pos) /*!< Camera capture 0 data input bus bit 0. */
#define SYS_GPK_MFPH_PK11MFP_GPIO             (0x00UL<<SYS_GPK_MFPH_PK11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPH_PK11MFP_EPWM2_CH3        (0x01UL<<SYS_GPK_MFPH_PK11MFP_Pos) /*!< EPWM2 channel3 output/capture input. */
#define SYS_GPK_MFPH_PK11MFP_UART4_TXD        (0x02UL<<SYS_GPK_MFPH_PK11MFP_Pos) /*!< Data transmitter output pin for UART4. */
#define SYS_GPK_MFPH_PK11MFP_CAN1_TXD         (0x03UL<<SYS_GPK_MFPH_PK11MFP_Pos) /*!< CAN1 bus transmitter output. */
#define SYS_GPK_MFPH_PK11MFP_USBHL3_DP        (0x04UL<<SYS_GPK_MFPH_PK11MFP_Pos) /*!<  */
#define SYS_GPK_MFPH_PK11MFP_SPI2_MISO        (0x05UL<<SYS_GPK_MFPH_PK11MFP_Pos) /*!< 1st SPI2 MISO (Master In, Slave Out) pin. */
#define SYS_GPK_MFPH_PK11MFP_SC1_DAT          (0x06UL<<SYS_GPK_MFPH_PK11MFP_Pos) /*!< SmartCard1 data pin. */
#define SYS_GPK_MFPH_PK11MFP_VCAP0_DATA1      (0x09UL<<SYS_GPK_MFPH_PK11MFP_Pos) /*!< Camera capture 0 data input bus bit 1. */
#define SYS_GPK_MFPH_PK12MFP_GPIO             (0x00UL<<SYS_GPK_MFPH_PK12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPH_PK12MFP_EPWM0_CH0        (0x01UL<<SYS_GPK_MFPH_PK12MFP_Pos) /*!< EPWM0 channel0 output/capture input. */
#define SYS_GPK_MFPH_PK12MFP_UART1_nCTS       (0x02UL<<SYS_GPK_MFPH_PK12MFP_Pos) /*!< Clear to Send input pin for UART1. */
#define SYS_GPK_MFPH_PK12MFP_UART13_RXD       (0x03UL<<SYS_GPK_MFPH_PK12MFP_Pos) /*!< Data receiver input pin for UART13. */
#define SYS_GPK_MFPH_PK12MFP_I2C4_SDA         (0x04UL<<SYS_GPK_MFPH_PK12MFP_Pos) /*!< I2C4 data input/output pin. */
#define SYS_GPK_MFPH_PK12MFP_I2S0_LRCK        (0x05UL<<SYS_GPK_MFPH_PK12MFP_Pos) /*!< I2S0 left right channel clock. */
#define SYS_GPK_MFPH_PK12MFP_SPI0_SS1         (0x06UL<<SYS_GPK_MFPH_PK12MFP_Pos) /*!< 1st SPI0 slave select pin. */
#define SYS_GPK_MFPH_PK12MFP_SC0_nCD          (0x08UL<<SYS_GPK_MFPH_PK12MFP_Pos) /*!< SmartCard0 card detect pin. */
#define SYS_GPK_MFPH_PK12MFP_TM4              (0x0BUL<<SYS_GPK_MFPH_PK12MFP_Pos) /*!< Timer4 event counter input / toggle output */
#define SYS_GPK_MFPH_PK13MFP_GPIO             (0x00UL<<SYS_GPK_MFPH_PK13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPH_PK13MFP_EPWM0_CH1        (0x01UL<<SYS_GPK_MFPH_PK13MFP_Pos) /*!< EPWM0 channel1 output/capture input. */
#define SYS_GPK_MFPH_PK13MFP_UART1_nRTS       (0x02UL<<SYS_GPK_MFPH_PK13MFP_Pos) /*!< Request to Send output pin for UART1. */
#define SYS_GPK_MFPH_PK13MFP_UART13_TXD       (0x03UL<<SYS_GPK_MFPH_PK13MFP_Pos) /*!< Data transmitter output pin for UART13. */
#define SYS_GPK_MFPH_PK13MFP_I2C4_SCL         (0x04UL<<SYS_GPK_MFPH_PK13MFP_Pos) /*!< I2C4 clock pin. */
#define SYS_GPK_MFPH_PK13MFP_I2S0_BCLK        (0x05UL<<SYS_GPK_MFPH_PK13MFP_Pos) /*!< I2S0 bit clock pin. */
#define SYS_GPK_MFPH_PK13MFP_SPI0_CLK         (0x06UL<<SYS_GPK_MFPH_PK13MFP_Pos) /*!< SPI0 serial clock pin. */
#define SYS_GPK_MFPH_PK13MFP_SPI1_SS1         (0x07UL<<SYS_GPK_MFPH_PK13MFP_Pos) /*!< 1st SPI1 slave select pin. */
#define SYS_GPK_MFPH_PK13MFP_SC0_RST          (0x08UL<<SYS_GPK_MFPH_PK13MFP_Pos) /*!< SmartCard0 reset pin. */
#define SYS_GPK_MFPH_PK13MFP_TM4_EXT          (0x0BUL<<SYS_GPK_MFPH_PK13MFP_Pos) /*!< Timer4 event counter input / toggle output */
#define SYS_GPK_MFPH_PK14MFP_GPIO             (0x00UL<<SYS_GPK_MFPH_PK14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPH_PK14MFP_EPWM0_CH2        (0x01UL<<SYS_GPK_MFPH_PK14MFP_Pos) /*!< EPWM0 channel2 output/capture input. */
#define SYS_GPK_MFPH_PK14MFP_UART1_RXD        (0x02UL<<SYS_GPK_MFPH_PK14MFP_Pos) /*!< Data receiver input pin for UART1. */
#define SYS_GPK_MFPH_PK14MFP_CAN3_RXD         (0x03UL<<SYS_GPK_MFPH_PK14MFP_Pos) /*!< CAN3 bus receiver input. */
#define SYS_GPK_MFPH_PK14MFP_USBHL4_DM        (0x04UL<<SYS_GPK_MFPH_PK14MFP_Pos) /*!<  */
#define SYS_GPK_MFPH_PK14MFP_I2S0_DI          (0x05UL<<SYS_GPK_MFPH_PK14MFP_Pos) /*!< I2S0 data input. */
#define SYS_GPK_MFPH_PK14MFP_SPI0_MOSI        (0x06UL<<SYS_GPK_MFPH_PK14MFP_Pos) /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. */
#define SYS_GPK_MFPH_PK14MFP_SPI2_SS1         (0x07UL<<SYS_GPK_MFPH_PK14MFP_Pos) /*!< 1st SPI2 slave select pin. */
#define SYS_GPK_MFPH_PK14MFP_SC0_CLK          (0x08UL<<SYS_GPK_MFPH_PK14MFP_Pos) /*!< SmartCard0 clock pin. */
#define SYS_GPK_MFPH_PK14MFP_TM6              (0x0BUL<<SYS_GPK_MFPH_PK14MFP_Pos) /*!< Timer6 event counter input / toggle output */
#define SYS_GPK_MFPH_PK15MFP_GPIO             (0x00UL<<SYS_GPK_MFPH_PK15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPK_MFPH_PK15MFP_EPWM0_CH3        (0x01UL<<SYS_GPK_MFPH_PK15MFP_Pos) /*!< EPWM0 channel3 output/capture input. */
#define SYS_GPK_MFPH_PK15MFP_UART1_TXD        (0x02UL<<SYS_GPK_MFPH_PK15MFP_Pos) /*!< Data transmitter output pin for UART1. */
#define SYS_GPK_MFPH_PK15MFP_CAN3_TXD         (0x03UL<<SYS_GPK_MFPH_PK15MFP_Pos) /*!< CAN3 bus transmitter output. */
#define SYS_GPK_MFPH_PK15MFP_USBHL4_DP        (0x04UL<<SYS_GPK_MFPH_PK15MFP_Pos) /*!<  */
#define SYS_GPK_MFPH_PK15MFP_I2S0_DO          (0x05UL<<SYS_GPK_MFPH_PK15MFP_Pos) /*!< I2S0 data output. */
#define SYS_GPK_MFPH_PK15MFP_SPI0_MISO        (0x06UL<<SYS_GPK_MFPH_PK15MFP_Pos) /*!< 1st SPI0 MISO (Master In, Slave Out) pin. */
#define SYS_GPK_MFPH_PK15MFP_SPI3_SS1         (0x07UL<<SYS_GPK_MFPH_PK15MFP_Pos) /*!< 1st SPI3 slave select pin. */
#define SYS_GPK_MFPH_PK15MFP_SC0_DAT          (0x08UL<<SYS_GPK_MFPH_PK15MFP_Pos) /*!< SmartCard0 data pin. */
#define SYS_GPK_MFPH_PK15MFP_TM6_EXT          (0x0BUL<<SYS_GPK_MFPH_PK15MFP_Pos) /*!< Timer6 event counter input / toggle output */
/********************* Bit definition of GPL_MFPL register **********************/
#define SYS_GPL_MFPL_PL0MFP_GPIO              (0x00UL<<SYS_GPL_MFPL_PL0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPL_PL0MFP_EPWM1_CH2         (0x01UL<<SYS_GPL_MFPL_PL0MFP_Pos)  /*!< EPWM1 channel2 output/capture input. */
#define SYS_GPL_MFPL_PL0MFP_QSPI1_SS0         (0x05UL<<SYS_GPL_MFPL_PL0MFP_Pos)  /*!< Quad SPI1 slave select pin. */
#define SYS_GPL_MFPL_PL0MFP_I2C1_SCL          (0x06UL<<SYS_GPL_MFPL_PL0MFP_Pos)  /*!< I2C1 clock pin. */
#define SYS_GPL_MFPL_PL0MFP_KPI_ROW4          (0x0AUL<<SYS_GPL_MFPL_PL0MFP_Pos)  /*!< Keypad Interface Row 4 input pin. */
#define SYS_GPL_MFPL_PL1MFP_GPIO              (0x00UL<<SYS_GPL_MFPL_PL1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPL_PL1MFP_EPWM1_CH3         (0x01UL<<SYS_GPL_MFPL_PL1MFP_Pos)  /*!< EPWM1 channel3 output/capture input. */
#define SYS_GPL_MFPL_PL1MFP_QSPI1_CLK         (0x05UL<<SYS_GPL_MFPL_PL1MFP_Pos)  /*!< Quad SPI1 serial clock pin. */
#define SYS_GPL_MFPL_PL1MFP_I2C1_SDA          (0x06UL<<SYS_GPL_MFPL_PL1MFP_Pos)  /*!< I2C1 data input/output pin. */
#define SYS_GPL_MFPL_PL1MFP_KPI_ROW5          (0x0AUL<<SYS_GPL_MFPL_PL1MFP_Pos)  /*!< Keypad Interface Row 5 input pin. */
#define SYS_GPL_MFPL_PL2MFP_GPIO              (0x00UL<<SYS_GPL_MFPL_PL2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPL_PL2MFP_EPWM1_CH4         (0x01UL<<SYS_GPL_MFPL_PL2MFP_Pos)  /*!< EPWM1 channel4 output/capture input. */
#define SYS_GPL_MFPL_PL2MFP_QSPI1_MOSI0       (0x05UL<<SYS_GPL_MFPL_PL2MFP_Pos)  /*!< Quad SPI1 MOSI0 (Master Out, Slave In) pin. */
#define SYS_GPL_MFPL_PL2MFP_I2C2_SCL          (0x06UL<<SYS_GPL_MFPL_PL2MFP_Pos)  /*!< I2C2 clock pin. */
#define SYS_GPL_MFPL_PL2MFP_KPI_ROW0          (0x0AUL<<SYS_GPL_MFPL_PL2MFP_Pos)  /*!< Keypad Interface Row 0 input pin. */
#define SYS_GPL_MFPL_PL3MFP_GPIO              (0x00UL<<SYS_GPL_MFPL_PL3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPL_PL3MFP_EPWM1_CH5         (0x01UL<<SYS_GPL_MFPL_PL3MFP_Pos)  /*!< EPWM1 channel5 output/capture input. */
#define SYS_GPL_MFPL_PL3MFP_QSPI1_MISO0       (0x05UL<<SYS_GPL_MFPL_PL3MFP_Pos)  /*!< Quad SPI1 MISO0 (Master In, Slave Out) pin. */
#define SYS_GPL_MFPL_PL3MFP_I2C2_SDA          (0x06UL<<SYS_GPL_MFPL_PL3MFP_Pos)  /*!< I2C2 data input/output pin. */
#define SYS_GPL_MFPL_PL3MFP_KPI_ROW1          (0x0AUL<<SYS_GPL_MFPL_PL3MFP_Pos)  /*!< Keypad Interface Row 1 input pin. */
#define SYS_GPL_MFPL_PL4MFP_GPIO              (0x00UL<<SYS_GPL_MFPL_PL4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPL_PL4MFP_EPWM2_BRAKE0      (0x01UL<<SYS_GPL_MFPL_PL4MFP_Pos)  /*!< Brake input pin 0 of EPWM2. */
#define SYS_GPL_MFPL_PL4MFP_UART10_nCTS       (0x02UL<<SYS_GPL_MFPL_PL4MFP_Pos)  /*!< Clear to Send input pin for UART10. */
#define SYS_GPL_MFPL_PL4MFP_QSPI1_SS1         (0x05UL<<SYS_GPL_MFPL_PL4MFP_Pos)  /*!< Quad SPI1 slave select pin. */
#define SYS_GPL_MFPL_PL4MFP_KPI_ROW2          (0x0AUL<<SYS_GPL_MFPL_PL4MFP_Pos)  /*!< Keypad Interface Row 2 input pin. */
#define SYS_GPL_MFPL_PL4MFP_TM10              (0x0BUL<<SYS_GPL_MFPL_PL4MFP_Pos)  /*!< Timer1 event counter input / toggle output */
#define SYS_GPL_MFPL_PL5MFP_GPIO              (0x00UL<<SYS_GPL_MFPL_PL5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPL_PL5MFP_EPWM2_BRAKE1      (0x01UL<<SYS_GPL_MFPL_PL5MFP_Pos)  /*!< Brake input pin 1 of EPWM2. */
#define SYS_GPL_MFPL_PL5MFP_UART10_nRTS       (0x02UL<<SYS_GPL_MFPL_PL5MFP_Pos)  /*!< Request to Send output pin for UART10. */
#define SYS_GPL_MFPL_PL5MFP_KPI_ROW3          (0x0AUL<<SYS_GPL_MFPL_PL5MFP_Pos)  /*!< Keypad Interface Row 3 input pin. */
#define SYS_GPL_MFPL_PL5MFP_TM10_EXT          (0x0BUL<<SYS_GPL_MFPL_PL5MFP_Pos)  /*!< Timer1 event counter input / toggle output */
#define SYS_GPL_MFPL_PL6MFP_GPIO              (0x00UL<<SYS_GPL_MFPL_PL6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPL_PL6MFP_QEI0_INDEX        (0x01UL<<SYS_GPL_MFPL_PL6MFP_Pos)  /*!< Quadrature encoder index input of QEI Unit 0. */
#define SYS_GPL_MFPL_PL6MFP_UART10_RXD        (0x02UL<<SYS_GPL_MFPL_PL6MFP_Pos)  /*!< Data receiver input pin for UART10. */
#define SYS_GPL_MFPL_PL6MFP_SC1_RST           (0x04UL<<SYS_GPL_MFPL_PL6MFP_Pos)  /*!< SmartCard1 reset pin. */
#define SYS_GPL_MFPL_PL6MFP_SPI0_SS1          (0x05UL<<SYS_GPL_MFPL_PL6MFP_Pos)  /*!< 1st SPI0 slave select pin. */
#define SYS_GPL_MFPL_PL6MFP_KPI_ROW6          (0x0AUL<<SYS_GPL_MFPL_PL6MFP_Pos)  /*!< Keypad Interface Row 6 input pin. */
#define SYS_GPL_MFPL_PL6MFP_TM11              (0x0BUL<<SYS_GPL_MFPL_PL6MFP_Pos)  /*!< Timer1 event counter input / toggle output */
#define SYS_GPL_MFPL_PL7MFP_GPIO              (0x00UL<<SYS_GPL_MFPL_PL7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPL_PL7MFP_ECAP0_IC0         (0x01UL<<SYS_GPL_MFPL_PL7MFP_Pos)  /*!< Input 0 of enhanced capture unit 0. */
#define SYS_GPL_MFPL_PL7MFP_UART10_TXD        (0x02UL<<SYS_GPL_MFPL_PL7MFP_Pos)  /*!< Data transmitter output pin for UART10. */
#define SYS_GPL_MFPL_PL7MFP_SC0_RST           (0x04UL<<SYS_GPL_MFPL_PL7MFP_Pos)  /*!< SmartCard0 reset pin. */
#define SYS_GPL_MFPL_PL7MFP_SPI0_CLK          (0x05UL<<SYS_GPL_MFPL_PL7MFP_Pos)  /*!< SPI0 serial clock pin. */
#define SYS_GPL_MFPL_PL7MFP_KPI_ROW7          (0x0AUL<<SYS_GPL_MFPL_PL7MFP_Pos)  /*!< Keypad Interface Row 7 input pin. */
#define SYS_GPL_MFPL_PL7MFP_TM11_EXT          (0x0BUL<<SYS_GPL_MFPL_PL7MFP_Pos)  /*!< Timer1 event counter input / toggle output */
/********************* Bit definition of GPL_MFPH register **********************/
#define SYS_GPL_MFPH_PL8MFP_GPIO              (0x00UL<<SYS_GPL_MFPH_PL8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPH_PL8MFP_ECAP0_IC1         (0x01UL<<SYS_GPL_MFPH_PL8MFP_Pos)  /*!< Input 1 of enhanced capture unit 0. */
#define SYS_GPL_MFPH_PL8MFP_UART12_nCTS       (0x02UL<<SYS_GPL_MFPH_PL8MFP_Pos)  /*!< Clear to Send input pin for UART12. */
#define SYS_GPL_MFPH_PL8MFP_SC0_CLK           (0x04UL<<SYS_GPL_MFPH_PL8MFP_Pos)  /*!< SmartCard0 clock pin. */
#define SYS_GPL_MFPH_PL8MFP_SPI0_MOSI         (0x05UL<<SYS_GPL_MFPH_PL8MFP_Pos)  /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. */
#define SYS_GPL_MFPH_PL8MFP_KPI_COL0          (0x0AUL<<SYS_GPL_MFPH_PL8MFP_Pos)  /*!< Keypad Interface Column 0 output pin. */
#define SYS_GPL_MFPH_PL9MFP_GPIO              (0x00UL<<SYS_GPL_MFPH_PL9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPH_PL9MFP_ECAP0_IC2         (0x01UL<<SYS_GPL_MFPH_PL9MFP_Pos)  /*!< Input 0 of enhanced capture unit 2. */
#define SYS_GPL_MFPH_PL9MFP_UART12_nRTS       (0x02UL<<SYS_GPL_MFPH_PL9MFP_Pos)  /*!< Request to Send output pin for UART12. */
#define SYS_GPL_MFPH_PL9MFP_SC0_DAT           (0x04UL<<SYS_GPL_MFPH_PL9MFP_Pos)  /*!< SmartCard0 data pin. */
#define SYS_GPL_MFPH_PL9MFP_SPI0_MISO         (0x05UL<<SYS_GPL_MFPH_PL9MFP_Pos)  /*!< 1st SPI0 MISO (Master In, Slave Out) pin. */
#define SYS_GPL_MFPH_PL9MFP_KPI_COL1          (0x0AUL<<SYS_GPL_MFPH_PL9MFP_Pos)  /*!< Keypad Interface Column 1 output pin. */
#define SYS_GPL_MFPH_PL10MFP_GPIO             (0x00UL<<SYS_GPL_MFPH_PL10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPH_PL10MFP_QEI0_A           (0x01UL<<SYS_GPL_MFPH_PL10MFP_Pos) /*!< Quadrature encoder phase A input of QEI Unit 0. */
#define SYS_GPL_MFPH_PL10MFP_UART12_RXD       (0x02UL<<SYS_GPL_MFPH_PL10MFP_Pos) /*!< Data receiver input pin for UART12. */
#define SYS_GPL_MFPH_PL10MFP_SC0_PWR          (0x04UL<<SYS_GPL_MFPH_PL10MFP_Pos) /*!< SmartCard0 power pin. */
#define SYS_GPL_MFPH_PL10MFP_SPI0_SS0         (0x05UL<<SYS_GPL_MFPH_PL10MFP_Pos) /*!< 1st SPI0 slave select pin. */
#define SYS_GPL_MFPH_PL10MFP_KPI_COL2         (0x0AUL<<SYS_GPL_MFPH_PL10MFP_Pos) /*!< Keypad Interface Column 2 output pin. */
#define SYS_GPL_MFPH_PL11MFP_GPIO             (0x00UL<<SYS_GPL_MFPH_PL11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPH_PL11MFP_QEI0_B           (0x01UL<<SYS_GPL_MFPH_PL11MFP_Pos) /*!< Quadrature encoder phase B input of QEI Unit 0. */
#define SYS_GPL_MFPH_PL11MFP_UART12_TXD       (0x02UL<<SYS_GPL_MFPH_PL11MFP_Pos) /*!< Data transmitter output pin for UART12. */
#define SYS_GPL_MFPH_PL11MFP_SC0_nCD          (0x04UL<<SYS_GPL_MFPH_PL11MFP_Pos) /*!< SmartCard0 card detect pin. */
#define SYS_GPL_MFPH_PL11MFP_SPI1_SS1         (0x05UL<<SYS_GPL_MFPH_PL11MFP_Pos) /*!< 1st SPI1 slave select pin. */
#define SYS_GPL_MFPH_PL11MFP_KPI_COL3         (0x0AUL<<SYS_GPL_MFPH_PL11MFP_Pos) /*!< Keypad Interface Column 3 output pin. */
#define SYS_GPL_MFPH_PL12MFP_GPIO             (0x00UL<<SYS_GPL_MFPH_PL12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPH_PL12MFP_QEI0_INDEX       (0x01UL<<SYS_GPL_MFPH_PL12MFP_Pos) /*!< Quadrature encoder index input of QEI Unit 0. */
#define SYS_GPL_MFPH_PL12MFP_UART14_nCTS      (0x02UL<<SYS_GPL_MFPH_PL12MFP_Pos) /*!< Clear to Send input pin for UART14. */
#define SYS_GPL_MFPH_PL12MFP_I2S1_LRCK        (0x04UL<<SYS_GPL_MFPH_PL12MFP_Pos) /*!< I2S1 left right channel clock. */
#define SYS_GPL_MFPH_PL12MFP_SPI1_CLK         (0x05UL<<SYS_GPL_MFPH_PL12MFP_Pos) /*!< SPI1 serial clock pin. */
#define SYS_GPL_MFPH_PL12MFP_I2C1_SCL         (0x06UL<<SYS_GPL_MFPH_PL12MFP_Pos) /*!< I2C1 clock pin. */
#define SYS_GPL_MFPH_PL12MFP_SC1_CLK          (0x07UL<<SYS_GPL_MFPH_PL12MFP_Pos) /*!< SmartCard1 clock pin. */
#define SYS_GPL_MFPH_PL12MFP_KPI_COL4         (0x0AUL<<SYS_GPL_MFPH_PL12MFP_Pos) /*!< Keypad Interface Column 4 output pin. */
#define SYS_GPL_MFPH_PL12MFP_TM0              (0x0BUL<<SYS_GPL_MFPH_PL12MFP_Pos) /*!< Timer0 event counter input / toggle output */
#define SYS_GPL_MFPH_PL13MFP_GPIO             (0x00UL<<SYS_GPL_MFPH_PL13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPH_PL13MFP_QEI1_A           (0x01UL<<SYS_GPL_MFPH_PL13MFP_Pos) /*!< Quadrature encoder phase A input of QEI Unit 1. */
#define SYS_GPL_MFPH_PL13MFP_UART14_nRTS      (0x02UL<<SYS_GPL_MFPH_PL13MFP_Pos) /*!< Request to Send output pin for UART14. */
#define SYS_GPL_MFPH_PL13MFP_I2S1_BCLK        (0x04UL<<SYS_GPL_MFPH_PL13MFP_Pos) /*!< I2S1 bit clock pin. */
#define SYS_GPL_MFPH_PL13MFP_SPI1_MOSI        (0x05UL<<SYS_GPL_MFPH_PL13MFP_Pos) /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. */
#define SYS_GPL_MFPH_PL13MFP_SC1_DAT          (0x07UL<<SYS_GPL_MFPH_PL13MFP_Pos) /*!< SmartCard1 data pin. */
#define SYS_GPL_MFPH_PL13MFP_RGMII0_PPS       (0x08UL<<SYS_GPL_MFPH_PL13MFP_Pos) /*!< RGMII0 Pulse Per Second output pin. */
#define SYS_GPL_MFPH_PL13MFP_RMII0_PPS        (0x09UL<<SYS_GPL_MFPH_PL13MFP_Pos) /*!< RMII0 Pulse Per Second output pin. */
#define SYS_GPL_MFPH_PL13MFP_KPI_COL5         (0x0AUL<<SYS_GPL_MFPH_PL13MFP_Pos) /*!< Keypad Interface Column 5 output pin. */
#define SYS_GPL_MFPH_PL13MFP_TM0_EXT          (0x0BUL<<SYS_GPL_MFPH_PL13MFP_Pos) /*!< Timer0 event counter input / toggle output */
#define SYS_GPL_MFPH_PL14MFP_GPIO             (0x00UL<<SYS_GPL_MFPH_PL14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPH_PL14MFP_QEI1_B           (0x01UL<<SYS_GPL_MFPH_PL14MFP_Pos) /*!< Quadrature encoder phase B input of QEI Unit 1. */
#define SYS_GPL_MFPH_PL14MFP_UART14_RXD       (0x02UL<<SYS_GPL_MFPH_PL14MFP_Pos) /*!< Data receiver input pin for UART14. */
#define SYS_GPL_MFPH_PL14MFP_I2S1_DI          (0x04UL<<SYS_GPL_MFPH_PL14MFP_Pos) /*!< I2S1 data input. */
#define SYS_GPL_MFPH_PL14MFP_SPI1_MISO        (0x05UL<<SYS_GPL_MFPH_PL14MFP_Pos) /*!< 1st SPI1 MISO (Master In, Slave Out) pin. */
#define SYS_GPL_MFPH_PL14MFP_SC1_PWR          (0x07UL<<SYS_GPL_MFPH_PL14MFP_Pos) /*!< SmartCard1 power pin. */
#define SYS_GPL_MFPH_PL14MFP_RGMII1_PPS       (0x08UL<<SYS_GPL_MFPH_PL14MFP_Pos) /*!< RGMII1 Pulse Per Second output pin. */
#define SYS_GPL_MFPH_PL14MFP_RMII1_PPS        (0x09UL<<SYS_GPL_MFPH_PL14MFP_Pos) /*!< RMII1 Pulse Per Second output pin. */
#define SYS_GPL_MFPH_PL14MFP_KPI_COL6         (0x0AUL<<SYS_GPL_MFPH_PL14MFP_Pos) /*!< Keypad Interface Column 6 output pin. */
#define SYS_GPL_MFPH_PL14MFP_TM2              (0x0BUL<<SYS_GPL_MFPH_PL14MFP_Pos) /*!< Timer2 event counter input / toggle output */
#define SYS_GPL_MFPH_PL15MFP_GPIO             (0x00UL<<SYS_GPL_MFPH_PL15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPL_MFPH_PL15MFP_QEI1_INDEX       (0x01UL<<SYS_GPL_MFPH_PL15MFP_Pos) /*!< Quadrature encoder index input of QEI Unit 1. */
#define SYS_GPL_MFPH_PL15MFP_UART14_TXD       (0x02UL<<SYS_GPL_MFPH_PL15MFP_Pos) /*!< Data transmitter output pin for UART14. */
#define SYS_GPL_MFPH_PL15MFP_TRACE_CLK        (0x03UL<<SYS_GPL_MFPH_PL15MFP_Pos) /*!< ETM Rx clock input pin. */
#define SYS_GPL_MFPH_PL15MFP_I2S1_DO          (0x04UL<<SYS_GPL_MFPH_PL15MFP_Pos) /*!< I2S1 data output. */
#define SYS_GPL_MFPH_PL15MFP_SPI1_SS0         (0x05UL<<SYS_GPL_MFPH_PL15MFP_Pos) /*!< 1st SPI1 slave select pin. */
#define SYS_GPL_MFPH_PL15MFP_SC1_nCD          (0x07UL<<SYS_GPL_MFPH_PL15MFP_Pos) /*!< SmartCard1 card detect pin. */
#define SYS_GPL_MFPH_PL15MFP_KPI_COL7         (0x0AUL<<SYS_GPL_MFPH_PL15MFP_Pos) /*!< Keypad Interface Column 7 output pin. */
#define SYS_GPL_MFPH_PL15MFP_TM2_EXT          (0x0BUL<<SYS_GPL_MFPH_PL15MFP_Pos) /*!< Timer2 event counter input / toggle output */
/********************* Bit definition of GPM_MFPL register **********************/
#define SYS_GPM_MFPL_PM0MFP_GPIO              (0x00UL<<SYS_GPM_MFPL_PM0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPL_PM0MFP_EPWM0_CH0         (0x01UL<<SYS_GPM_MFPL_PM0MFP_Pos)  /*!< EPWM0 channel0 output/capture input. */
#define SYS_GPM_MFPL_PM0MFP_UART6_nCTS        (0x02UL<<SYS_GPM_MFPL_PM0MFP_Pos)  /*!< Clear to Send input pin for UART6. */
#define SYS_GPM_MFPL_PM0MFP_USBHL1_DM         (0x07UL<<SYS_GPM_MFPL_PM0MFP_Pos)  /*!<  */
#define SYS_GPM_MFPL_PM0MFP_VCAP0_DATA2       (0x09UL<<SYS_GPM_MFPL_PM0MFP_Pos)  /*!< Camera capture 0 data input bus bit 2. */
#define SYS_GPM_MFPL_PM1MFP_GPIO              (0x00UL<<SYS_GPM_MFPL_PM1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPL_PM1MFP_EPWM0_CH1         (0x01UL<<SYS_GPM_MFPL_PM1MFP_Pos)  /*!< EPWM0 channel1 output/capture input. */
#define SYS_GPM_MFPL_PM1MFP_UART6_nRTS        (0x02UL<<SYS_GPM_MFPL_PM1MFP_Pos)  /*!< Request to Send output pin for UART6. */
#define SYS_GPM_MFPL_PM1MFP_USBHL1_DP         (0x07UL<<SYS_GPM_MFPL_PM1MFP_Pos)  /*!<  */
#define SYS_GPM_MFPL_PM1MFP_VCAP0_DATA3       (0x09UL<<SYS_GPM_MFPL_PM1MFP_Pos)  /*!< Camera capture 0 data input bus bit 3. */
#define SYS_GPM_MFPL_PM2MFP_GPIO              (0x00UL<<SYS_GPM_MFPL_PM2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPL_PM2MFP_EPWM0_CH2         (0x01UL<<SYS_GPM_MFPL_PM2MFP_Pos)  /*!< EPWM0 channel2 output/capture input. */
#define SYS_GPM_MFPL_PM2MFP_UART6_RXD         (0x02UL<<SYS_GPM_MFPL_PM2MFP_Pos)  /*!< Data receiver input pin for UART6. */
#define SYS_GPM_MFPL_PM2MFP_USBHL2_DM         (0x07UL<<SYS_GPM_MFPL_PM2MFP_Pos)  /*!<  */
#define SYS_GPM_MFPL_PM2MFP_VCAP0_DATA4       (0x09UL<<SYS_GPM_MFPL_PM2MFP_Pos)  /*!< Camera capture 0 data input bus bit 4. */
#define SYS_GPM_MFPL_PM3MFP_GPIO              (0x00UL<<SYS_GPM_MFPL_PM3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPL_PM3MFP_EPWM0_CH3         (0x01UL<<SYS_GPM_MFPL_PM3MFP_Pos)  /*!< EPWM0 channel3 output/capture input. */
#define SYS_GPM_MFPL_PM3MFP_UART6_TXD         (0x02UL<<SYS_GPM_MFPL_PM3MFP_Pos)  /*!< Data transmitter output pin for UART6. */
#define SYS_GPM_MFPL_PM3MFP_USBHL2_DP         (0x07UL<<SYS_GPM_MFPL_PM3MFP_Pos)  /*!<  */
#define SYS_GPM_MFPL_PM3MFP_VCAP0_DATA5       (0x09UL<<SYS_GPM_MFPL_PM3MFP_Pos)  /*!< Camera capture 0 data input bus bit 5. */
#define SYS_GPM_MFPL_PM4MFP_GPIO              (0x00UL<<SYS_GPM_MFPL_PM4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPL_PM4MFP_EPWM0_CH4         (0x01UL<<SYS_GPM_MFPL_PM4MFP_Pos)  /*!< EPWM0 channel4 output/capture input. */
#define SYS_GPM_MFPL_PM4MFP_UART8_nCTS        (0x02UL<<SYS_GPM_MFPL_PM4MFP_Pos)  /*!< Clear to Send input pin for UART8. */
#define SYS_GPM_MFPL_PM4MFP_USBHL3_DM         (0x07UL<<SYS_GPM_MFPL_PM4MFP_Pos)  /*!<  */
#define SYS_GPM_MFPL_PM4MFP_VCAP0_DATA6       (0x09UL<<SYS_GPM_MFPL_PM4MFP_Pos)  /*!< Camera capture 0 data input bus bit 6. */
#define SYS_GPM_MFPL_PM4MFP_TM8               (0x0BUL<<SYS_GPM_MFPL_PM4MFP_Pos)  /*!< Timer8 event counter input / toggle output */
#define SYS_GPM_MFPL_PM5MFP_GPIO              (0x00UL<<SYS_GPM_MFPL_PM5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPL_PM5MFP_EPWM0_CH5         (0x01UL<<SYS_GPM_MFPL_PM5MFP_Pos)  /*!< EPWM0 channel5 output/capture input. */
#define SYS_GPM_MFPL_PM5MFP_UART8_nRTS        (0x02UL<<SYS_GPM_MFPL_PM5MFP_Pos)  /*!< Request to Send output pin for UART8. */
#define SYS_GPM_MFPL_PM5MFP_USBHL3_DP         (0x07UL<<SYS_GPM_MFPL_PM5MFP_Pos)  /*!<  */
#define SYS_GPM_MFPL_PM5MFP_VCAP0_DATA7       (0x09UL<<SYS_GPM_MFPL_PM5MFP_Pos)  /*!< Camera capture 0 data input bus bit 7. */
#define SYS_GPM_MFPL_PM5MFP_TM8_EXT           (0x0BUL<<SYS_GPM_MFPL_PM5MFP_Pos)  /*!< Timer8 event counter input / toggle output */
#define SYS_GPM_MFPL_PM6MFP_GPIO              (0x00UL<<SYS_GPM_MFPL_PM6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPL_PM6MFP_EPWM2_CH0         (0x01UL<<SYS_GPM_MFPL_PM6MFP_Pos)  /*!< EPWM2 channel0 output/capture input. */
#define SYS_GPM_MFPL_PM6MFP_UART8_RXD         (0x02UL<<SYS_GPM_MFPL_PM6MFP_Pos)  /*!< Data receiver input pin for UART8. */
#define SYS_GPM_MFPL_PM6MFP_VCAP0_DATA8       (0x09UL<<SYS_GPM_MFPL_PM6MFP_Pos)  /*!< Camera capture 0 data input bus bit 8. */
#define SYS_GPM_MFPL_PM6MFP_TM9               (0x0BUL<<SYS_GPM_MFPL_PM6MFP_Pos)  /*!< Timer9 event counter input / toggle output */
#define SYS_GPM_MFPL_PM7MFP_GPIO              (0x00UL<<SYS_GPM_MFPL_PM7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPL_PM7MFP_EPWM2_CH1         (0x01UL<<SYS_GPM_MFPL_PM7MFP_Pos)  /*!< EPWM2 channel1 output/capture input. */
#define SYS_GPM_MFPL_PM7MFP_UART8_TXD         (0x02UL<<SYS_GPM_MFPL_PM7MFP_Pos)  /*!< Data transmitter output pin for UART8. */
#define SYS_GPM_MFPL_PM7MFP_SPI3_SS1          (0x05UL<<SYS_GPM_MFPL_PM7MFP_Pos)  /*!< 1st SPI3 slave select pin. */
#define SYS_GPM_MFPL_PM7MFP_I2S1_MCLK         (0x06UL<<SYS_GPM_MFPL_PM7MFP_Pos)  /*!< I2S1 master clock output pin. */
#define SYS_GPM_MFPL_PM7MFP_VCAP0_DATA9       (0x09UL<<SYS_GPM_MFPL_PM7MFP_Pos)  /*!< Camera capture 0 data input bus bit 9. */
#define SYS_GPM_MFPL_PM7MFP_TM9_EXT           (0x0BUL<<SYS_GPM_MFPL_PM7MFP_Pos)  /*!< Timer* event counter input / toggle output */
/********************* Bit definition of GPM_MFPH register **********************/
#define SYS_GPM_MFPH_PM8MFP_GPIO              (0x00UL<<SYS_GPM_MFPH_PM8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPH_PM8MFP_EPWM1_SYNC_OUT    (0x01UL<<SYS_GPM_MFPH_PM8MFP_Pos)  /*!< EPWM1 counter synchronous trigger output pin. */
#define SYS_GPM_MFPH_PM8MFP_UART16_nCTS       (0x02UL<<SYS_GPM_MFPH_PM8MFP_Pos)  /*!< Clear to Send input pin for UART16. */
#define SYS_GPM_MFPH_PM8MFP_SPI3_CLK          (0x05UL<<SYS_GPM_MFPH_PM8MFP_Pos)  /*!< SPI3 serial clock pin. */
#define SYS_GPM_MFPH_PM8MFP_I2S1_LRCK         (0x06UL<<SYS_GPM_MFPH_PM8MFP_Pos)  /*!< I2S1 left right channel clock. */
#define SYS_GPM_MFPH_PM8MFP_VCAP0_SCLK        (0x09UL<<SYS_GPM_MFPH_PM8MFP_Pos)  /*!< Camera capture 0 interface sensor clock output pin. */
#define SYS_GPM_MFPH_PM9MFP_GPIO              (0x00UL<<SYS_GPM_MFPH_PM9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPH_PM9MFP_UART16_nRTS       (0x02UL<<SYS_GPM_MFPH_PM9MFP_Pos)  /*!< Request to Send output pin for UART16. */
#define SYS_GPM_MFPH_PM9MFP_SPI3_MOSI         (0x05UL<<SYS_GPM_MFPH_PM9MFP_Pos)  /*!< 1st SPI3 MOSI (Master Out, Slave In) pin. */
#define SYS_GPM_MFPH_PM9MFP_I2S1_BCLK         (0x06UL<<SYS_GPM_MFPH_PM9MFP_Pos)  /*!< I2S1 bit clock pin. */
#define SYS_GPM_MFPH_PM9MFP_VCAP0_VSYNC       (0x09UL<<SYS_GPM_MFPH_PM9MFP_Pos)  /*!< Camera capture 0 interface vsync input pin. */
#define SYS_GPM_MFPH_PM10MFP_GPIO             (0x00UL<<SYS_GPM_MFPH_PM10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPH_PM10MFP_EPWM1_CH0        (0x01UL<<SYS_GPM_MFPH_PM10MFP_Pos) /*!< EPWM1 channel0 output/capture input. */
#define SYS_GPM_MFPH_PM10MFP_UART16_RXD       (0x02UL<<SYS_GPM_MFPH_PM10MFP_Pos) /*!< Data receiver input pin for UART16. */
#define SYS_GPM_MFPH_PM10MFP_SPI3_MISO        (0x05UL<<SYS_GPM_MFPH_PM10MFP_Pos) /*!< 1st SPI3 MISO (Master In, Slave Out) pin. */
#define SYS_GPM_MFPH_PM10MFP_I2S1_DI          (0x06UL<<SYS_GPM_MFPH_PM10MFP_Pos) /*!< I2S1 data input. */
#define SYS_GPM_MFPH_PM10MFP_VCAP0_HSYNC      (0x09UL<<SYS_GPM_MFPH_PM10MFP_Pos) /*!< Camera capture 0 interface hsync input pin. */
#define SYS_GPM_MFPH_PM11MFP_GPIO             (0x00UL<<SYS_GPM_MFPH_PM11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPH_PM11MFP_EPWM1_CH1        (0x01UL<<SYS_GPM_MFPH_PM11MFP_Pos) /*!< EPWM1 channel1 output/capture input. */
#define SYS_GPM_MFPH_PM11MFP_UART16_TXD       (0x02UL<<SYS_GPM_MFPH_PM11MFP_Pos) /*!< Data transmitter output pin for UART16. */
#define SYS_GPM_MFPH_PM11MFP_SPI3_SS0         (0x05UL<<SYS_GPM_MFPH_PM11MFP_Pos) /*!< 1st SPI3 slave select pin. */
#define SYS_GPM_MFPH_PM11MFP_I2S1_DO          (0x06UL<<SYS_GPM_MFPH_PM11MFP_Pos) /*!< I2S1 data output. */
#define SYS_GPM_MFPH_PM11MFP_VCAP0_PIXCLK     (0x09UL<<SYS_GPM_MFPH_PM11MFP_Pos) /*!< Camera capture 0 interface pixel clock input pin. */
#define SYS_GPM_MFPH_PM12MFP_GPIO             (0x00UL<<SYS_GPM_MFPH_PM12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPH_PM12MFP_EPWM0_BRAKE0     (0x01UL<<SYS_GPM_MFPH_PM12MFP_Pos) /*!< Brake input pin 0 of EPWM0. */
#define SYS_GPM_MFPH_PM12MFP_TRACE_DATA0      (0x03UL<<SYS_GPM_MFPH_PM12MFP_Pos) /*!< ETM Rx input bus bit0. */
#define SYS_GPM_MFPH_PM12MFP_I2S1_MCLK        (0x04UL<<SYS_GPM_MFPH_PM12MFP_Pos) /*!< I2S1 master clock output pin. */
#define SYS_GPM_MFPH_PM12MFP_I2C4_SCL         (0x06UL<<SYS_GPM_MFPH_PM12MFP_Pos) /*!< I2C4 clock pin. */
#define SYS_GPM_MFPH_PM12MFP_KPI_COL4         (0x0AUL<<SYS_GPM_MFPH_PM12MFP_Pos) /*!< Keypad Interface Column 4 output pin. */
#define SYS_GPM_MFPH_PM13MFP_GPIO             (0x00UL<<SYS_GPM_MFPH_PM13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPH_PM13MFP_EPWM0_BRAKE1     (0x01UL<<SYS_GPM_MFPH_PM13MFP_Pos) /*!< Brake input pin 1 of EPWM0. */
#define SYS_GPM_MFPH_PM13MFP_TRACE_DATA1      (0x03UL<<SYS_GPM_MFPH_PM13MFP_Pos) /*!< ETM Rx input bus bit1. */
#define SYS_GPM_MFPH_PM13MFP_I2C4_SDA         (0x06UL<<SYS_GPM_MFPH_PM13MFP_Pos) /*!< I2C4 data input/output pin. */
#define SYS_GPM_MFPH_PM13MFP_KPI_COL5         (0x0AUL<<SYS_GPM_MFPH_PM13MFP_Pos) /*!< Keypad Interface Column 5 output pin. */
#define SYS_GPM_MFPH_PM14MFP_GPIO             (0x00UL<<SYS_GPM_MFPH_PM14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPH_PM14MFP_EPWM0_SYNC_IN    (0x01UL<<SYS_GPM_MFPH_PM14MFP_Pos) /*!< EPWM0 counter synchronous trigger input pin. */
#define SYS_GPM_MFPH_PM14MFP_TRACE_DATA2      (0x03UL<<SYS_GPM_MFPH_PM14MFP_Pos) /*!< ETM Rx input bus bit2. */
#define SYS_GPM_MFPH_PM14MFP_I2C5_SCL         (0x06UL<<SYS_GPM_MFPH_PM14MFP_Pos) /*!< I2C5 clock pin. */
#define SYS_GPM_MFPH_PM14MFP_KPI_COL6         (0x0AUL<<SYS_GPM_MFPH_PM14MFP_Pos) /*!< Keypad Interface Column 6 output pin. */
#define SYS_GPM_MFPH_PM15MFP_GPIO             (0x00UL<<SYS_GPM_MFPH_PM15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPM_MFPH_PM15MFP_EPWM0_SYNC_OUT   (0x01UL<<SYS_GPM_MFPH_PM15MFP_Pos) /*!< EPWM0 counter synchronous trigger output pin. */
#define SYS_GPM_MFPH_PM15MFP_TRACE_DATA3      (0x03UL<<SYS_GPM_MFPH_PM15MFP_Pos) /*!< ETM Rx input bus bit3. */
#define SYS_GPM_MFPH_PM15MFP_I2C5_SDA         (0x06UL<<SYS_GPM_MFPH_PM15MFP_Pos) /*!< I2C5 data input/output pin. */
#define SYS_GPM_MFPH_PM15MFP_KPI_COL7         (0x0AUL<<SYS_GPM_MFPH_PM15MFP_Pos) /*!< Keypad Interface Column 7 output pin. */
/********************* Bit definition of GPN_MFPL register **********************/
#define SYS_GPN_MFPL_PN0MFP_GPIO              (0x00UL<<SYS_GPN_MFPL_PN0MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPL_PN0MFP_EPWM2_CH2         (0x01UL<<SYS_GPN_MFPL_PN0MFP_Pos)  /*!< EPWM2 channel2 output/capture input. */
#define SYS_GPN_MFPL_PN0MFP_UART3_nCTS        (0x02UL<<SYS_GPN_MFPL_PN0MFP_Pos)  /*!< Clear to Send input pin for UART3. */
#define SYS_GPN_MFPL_PN0MFP_UART2_RXD         (0x03UL<<SYS_GPN_MFPL_PN0MFP_Pos)  /*!< Data receiver input pin for UART2. */
#define SYS_GPN_MFPL_PN0MFP_I2C2_SDA          (0x04UL<<SYS_GPN_MFPL_PN0MFP_Pos)  /*!< I2C2 data input/output pin. */
#define SYS_GPN_MFPL_PN0MFP_VCAP1_DATA0       (0x06UL<<SYS_GPN_MFPL_PN0MFP_Pos)  /*!< Camera capture 1 data input bus bit 0. */
#define SYS_GPN_MFPL_PN0MFP_SPI0_SS0          (0x07UL<<SYS_GPN_MFPL_PN0MFP_Pos)  /*!< 1st SPI0 slave select pin. */
#define SYS_GPN_MFPL_PN0MFP_KPI_ROW0          (0x0AUL<<SYS_GPN_MFPL_PN0MFP_Pos)  /*!< Keypad Interface Row 0 input pin. */
#define SYS_GPN_MFPL_PN1MFP_GPIO              (0x00UL<<SYS_GPN_MFPL_PN1MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPL_PN1MFP_EPWM2_CH3         (0x01UL<<SYS_GPN_MFPL_PN1MFP_Pos)  /*!< EPWM2 channel3 output/capture input. */
#define SYS_GPN_MFPL_PN1MFP_UART3_nRTS        (0x02UL<<SYS_GPN_MFPL_PN1MFP_Pos)  /*!< Request to Send output pin for UART3. */
#define SYS_GPN_MFPL_PN1MFP_UART2_TXD         (0x03UL<<SYS_GPN_MFPL_PN1MFP_Pos)  /*!< Data transmitter output pin for UART2. */
#define SYS_GPN_MFPL_PN1MFP_I2C2_SCL          (0x04UL<<SYS_GPN_MFPL_PN1MFP_Pos)  /*!< I2C2 clock pin. */
#define SYS_GPN_MFPL_PN1MFP_VCAP1_DATA1       (0x06UL<<SYS_GPN_MFPL_PN1MFP_Pos)  /*!< Camera capture 1 data input bus bit 1. */
#define SYS_GPN_MFPL_PN1MFP_SPI0_CLK          (0x07UL<<SYS_GPN_MFPL_PN1MFP_Pos)  /*!< SPI0 serial clock pin. */
#define SYS_GPN_MFPL_PN1MFP_KPI_ROW1          (0x0AUL<<SYS_GPN_MFPL_PN1MFP_Pos)  /*!< Keypad Interface Row 1 input pin. */
#define SYS_GPN_MFPL_PN2MFP_GPIO              (0x00UL<<SYS_GPN_MFPL_PN2MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPL_PN2MFP_EPWM2_CH4         (0x01UL<<SYS_GPN_MFPL_PN2MFP_Pos)  /*!< EPWM2 channel4 output/capture input. */
#define SYS_GPN_MFPL_PN2MFP_UART3_RXD         (0x02UL<<SYS_GPN_MFPL_PN2MFP_Pos)  /*!< Data receiver input pin for UART3. */
#define SYS_GPN_MFPL_PN2MFP_CAN0_RXD          (0x03UL<<SYS_GPN_MFPL_PN2MFP_Pos)  /*!< CAN0 bus receiver input. */
#define SYS_GPN_MFPL_PN2MFP_USBHL0_DM         (0x04UL<<SYS_GPN_MFPL_PN2MFP_Pos)  /*!<  */
#define SYS_GPN_MFPL_PN2MFP_VCAP1_DATA2       (0x06UL<<SYS_GPN_MFPL_PN2MFP_Pos)  /*!< Camera capture 1 data input bus bit 2. */
#define SYS_GPN_MFPL_PN2MFP_SPI0_MOSI         (0x07UL<<SYS_GPN_MFPL_PN2MFP_Pos)  /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. */
#define SYS_GPN_MFPL_PN2MFP_KPI_ROW2          (0x0AUL<<SYS_GPN_MFPL_PN2MFP_Pos)  /*!< Keypad Interface Row 2 input pin. */
#define SYS_GPN_MFPL_PN3MFP_GPIO              (0x00UL<<SYS_GPN_MFPL_PN3MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPL_PN3MFP_EPWM2_CH5         (0x01UL<<SYS_GPN_MFPL_PN3MFP_Pos)  /*!< EPWM2 channel5 output/capture input. */
#define SYS_GPN_MFPL_PN3MFP_UART3_TXD         (0x02UL<<SYS_GPN_MFPL_PN3MFP_Pos)  /*!< Data transmitter output pin for UART3. */
#define SYS_GPN_MFPL_PN3MFP_CAN0_TXD          (0x03UL<<SYS_GPN_MFPL_PN3MFP_Pos)  /*!< CAN0 bus transmitter output. */
#define SYS_GPN_MFPL_PN3MFP_USBHL0_DP         (0x04UL<<SYS_GPN_MFPL_PN3MFP_Pos)  /*!<  */
#define SYS_GPN_MFPL_PN3MFP_VCAP1_DATA3       (0x06UL<<SYS_GPN_MFPL_PN3MFP_Pos)  /*!< Camera capture 1 data input bus bit 3. */
#define SYS_GPN_MFPL_PN3MFP_SPI0_MISO         (0x07UL<<SYS_GPN_MFPL_PN3MFP_Pos)  /*!< 1st SPI0 MISO (Master In, Slave Out) pin. */
#define SYS_GPN_MFPL_PN3MFP_KPI_ROW3          (0x0AUL<<SYS_GPN_MFPL_PN3MFP_Pos)  /*!< Keypad Interface Row 3 input pin. */
#define SYS_GPN_MFPL_PN4MFP_GPIO              (0x00UL<<SYS_GPN_MFPL_PN4MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPL_PN4MFP_ECAP1_IC0         (0x01UL<<SYS_GPN_MFPL_PN4MFP_Pos)  /*!< Input 0 of enhanced capture unit 1. */
#define SYS_GPN_MFPL_PN4MFP_UART5_nCTS        (0x02UL<<SYS_GPN_MFPL_PN4MFP_Pos)  /*!< Clear to Send input pin for UART5. */
#define SYS_GPN_MFPL_PN4MFP_UART4_RXD         (0x03UL<<SYS_GPN_MFPL_PN4MFP_Pos)  /*!< Data receiver input pin for UART4. */
#define SYS_GPN_MFPL_PN4MFP_I2C1_SDA          (0x04UL<<SYS_GPN_MFPL_PN4MFP_Pos)  /*!< I2C1 data input/output pin. */
#define SYS_GPN_MFPL_PN4MFP_VCAP1_DATA4       (0x06UL<<SYS_GPN_MFPL_PN4MFP_Pos)  /*!< Camera capture 1 data input bus bit 4. */
#define SYS_GPN_MFPL_PN4MFP_SPI1_SS0          (0x07UL<<SYS_GPN_MFPL_PN4MFP_Pos)  /*!< 1st SPI1 slave select pin. */
#define SYS_GPN_MFPL_PN4MFP_KPI_ROW4          (0x0AUL<<SYS_GPN_MFPL_PN4MFP_Pos)  /*!< Keypad Interface Row 4 input pin. */
#define SYS_GPN_MFPL_PN4MFP_TM8               (0x0BUL<<SYS_GPN_MFPL_PN4MFP_Pos)  /*!< Timer8 event counter input / toggle output */
#define SYS_GPN_MFPL_PN5MFP_GPIO              (0x00UL<<SYS_GPN_MFPL_PN5MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPL_PN5MFP_ECAP1_IC1         (0x01UL<<SYS_GPN_MFPL_PN5MFP_Pos)  /*!< Input 1 of enhanced capture unit 1. */
#define SYS_GPN_MFPL_PN5MFP_UART5_nRTS        (0x02UL<<SYS_GPN_MFPL_PN5MFP_Pos)  /*!< Request to Send output pin for UART5. */
#define SYS_GPN_MFPL_PN5MFP_UART4_TXD         (0x03UL<<SYS_GPN_MFPL_PN5MFP_Pos)  /*!< Data transmitter output pin for UART4. */
#define SYS_GPN_MFPL_PN5MFP_I2C1_SCL          (0x04UL<<SYS_GPN_MFPL_PN5MFP_Pos)  /*!< I2C1 clock pin. */
#define SYS_GPN_MFPL_PN5MFP_VCAP1_DATA5       (0x06UL<<SYS_GPN_MFPL_PN5MFP_Pos)  /*!< Camera capture 1 data input bus bit 5. */
#define SYS_GPN_MFPL_PN5MFP_SPI1_CLK          (0x07UL<<SYS_GPN_MFPL_PN5MFP_Pos)  /*!< SPI1 serial clock pin. */
#define SYS_GPN_MFPL_PN5MFP_KPI_ROW5          (0x0AUL<<SYS_GPN_MFPL_PN5MFP_Pos)  /*!< Keypad Interface Row 5 input pin. */
#define SYS_GPN_MFPL_PN5MFP_TM8_EXT           (0x0BUL<<SYS_GPN_MFPL_PN5MFP_Pos)  /*!< Timer8 event counter input / toggle output */
#define SYS_GPN_MFPL_PN6MFP_GPIO              (0x00UL<<SYS_GPN_MFPL_PN6MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPL_PN6MFP_ECAP1_IC2         (0x01UL<<SYS_GPN_MFPL_PN6MFP_Pos)  /*!< Input 1 of enhanced capture unit 2. */
#define SYS_GPN_MFPL_PN6MFP_UART5_RXD         (0x02UL<<SYS_GPN_MFPL_PN6MFP_Pos)  /*!< Data receiver input pin for UART5. */
#define SYS_GPN_MFPL_PN6MFP_CAN1_RXD          (0x03UL<<SYS_GPN_MFPL_PN6MFP_Pos)  /*!< CAN1 bus receiver input. */
#define SYS_GPN_MFPL_PN6MFP_USBHL1_DM         (0x04UL<<SYS_GPN_MFPL_PN6MFP_Pos)  /*!<  */
#define SYS_GPN_MFPL_PN6MFP_VCAP1_DATA6       (0x06UL<<SYS_GPN_MFPL_PN6MFP_Pos)  /*!< Camera capture 1 data input bus bit 6. */
#define SYS_GPN_MFPL_PN6MFP_SPI1_MOSI         (0x07UL<<SYS_GPN_MFPL_PN6MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. */
#define SYS_GPN_MFPL_PN6MFP_KPI_ROW6          (0x0AUL<<SYS_GPN_MFPL_PN6MFP_Pos)  /*!< Keypad Interface Row 6 input pin. */
#define SYS_GPN_MFPL_PN6MFP_TM10              (0x0BUL<<SYS_GPN_MFPL_PN6MFP_Pos)  /*!< Timer1 event counter input / toggle output */
#define SYS_GPN_MFPL_PN7MFP_GPIO              (0x00UL<<SYS_GPN_MFPL_PN7MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPL_PN7MFP_QEI2_A            (0x01UL<<SYS_GPN_MFPL_PN7MFP_Pos)  /*!< Quadrature encoder phase A input of QEI Unit 2. */
#define SYS_GPN_MFPL_PN7MFP_UART5_TXD         (0x02UL<<SYS_GPN_MFPL_PN7MFP_Pos)  /*!< Data transmitter output pin for UART5. */
#define SYS_GPN_MFPL_PN7MFP_CAN1_TXD          (0x03UL<<SYS_GPN_MFPL_PN7MFP_Pos)  /*!< CAN1 bus transmitter output. */
#define SYS_GPN_MFPL_PN7MFP_USBHL1_DP         (0x04UL<<SYS_GPN_MFPL_PN7MFP_Pos)  /*!<  */
#define SYS_GPN_MFPL_PN7MFP_VCAP1_DATA7       (0x06UL<<SYS_GPN_MFPL_PN7MFP_Pos)  /*!< Camera capture 1 data input bus bit 7. */
#define SYS_GPN_MFPL_PN7MFP_SPI1_MISO         (0x07UL<<SYS_GPN_MFPL_PN7MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. */
#define SYS_GPN_MFPL_PN7MFP_KPI_ROW7          (0x0AUL<<SYS_GPN_MFPL_PN7MFP_Pos)  /*!< Keypad Interface Row 7 input pin. */
#define SYS_GPN_MFPL_PN7MFP_TM10_EXT          (0x0BUL<<SYS_GPN_MFPL_PN7MFP_Pos)  /*!< Timer1 event counter input / toggle output */
/********************* Bit definition of GPN_MFPH register **********************/
#define SYS_GPN_MFPH_PN8MFP_GPIO              (0x00UL<<SYS_GPN_MFPH_PN8MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPH_PN8MFP_EPWM1_BRAKE0      (0x01UL<<SYS_GPN_MFPH_PN8MFP_Pos)  /*!< Brake input pin 0 of EPWM1. */
#define SYS_GPN_MFPH_PN8MFP_UART7_nCTS        (0x02UL<<SYS_GPN_MFPH_PN8MFP_Pos)  /*!< Clear to Send input pin for UART7. */
#define SYS_GPN_MFPH_PN8MFP_UART8_RXD         (0x03UL<<SYS_GPN_MFPH_PN8MFP_Pos)  /*!< Data receiver input pin for UART8. */
#define SYS_GPN_MFPH_PN8MFP_I2C0_SDA          (0x04UL<<SYS_GPN_MFPH_PN8MFP_Pos)  /*!< I2C0 data input/output pin. */
#define SYS_GPN_MFPH_PN8MFP_VCAP1_DATA8       (0x06UL<<SYS_GPN_MFPH_PN8MFP_Pos)  /*!< Camera capture 1 data input bus bit 8. */
#define SYS_GPN_MFPH_PN8MFP_SPI2_SS0          (0x07UL<<SYS_GPN_MFPH_PN8MFP_Pos)  /*!< 1st SPI2 slave select pin. */
#define SYS_GPN_MFPH_PN8MFP_KPI_COL4          (0x0AUL<<SYS_GPN_MFPH_PN8MFP_Pos)  /*!< Keypad Interface Column 4 output pin. */
#define SYS_GPN_MFPH_PN9MFP_GPIO              (0x00UL<<SYS_GPN_MFPH_PN9MFP_Pos)  /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPH_PN9MFP_EPWM1_BRAKE1      (0x01UL<<SYS_GPN_MFPH_PN9MFP_Pos)  /*!< Brake input pin 1 of EPWM1. */
#define SYS_GPN_MFPH_PN9MFP_UART7_nRTS        (0x02UL<<SYS_GPN_MFPH_PN9MFP_Pos)  /*!< Request to Send output pin for UART7. */
#define SYS_GPN_MFPH_PN9MFP_UART8_TXD         (0x03UL<<SYS_GPN_MFPH_PN9MFP_Pos)  /*!< Data transmitter output pin for UART8. */
#define SYS_GPN_MFPH_PN9MFP_I2C0_SCL          (0x04UL<<SYS_GPN_MFPH_PN9MFP_Pos)  /*!< I2C0 clock pin. */
#define SYS_GPN_MFPH_PN9MFP_VCAP1_DATA9       (0x06UL<<SYS_GPN_MFPH_PN9MFP_Pos)  /*!< Camera capture 1 data input bus bit 9. */
#define SYS_GPN_MFPH_PN9MFP_SPI2_CLK          (0x07UL<<SYS_GPN_MFPH_PN9MFP_Pos)  /*!< SPI2 serial clock pin. */
#define SYS_GPN_MFPH_PN9MFP_KPI_COL5          (0x0AUL<<SYS_GPN_MFPH_PN9MFP_Pos)  /*!< Keypad Interface Column 5 output pin. */
#define SYS_GPN_MFPH_PN10MFP_GPIO             (0x00UL<<SYS_GPN_MFPH_PN10MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPH_PN10MFP_EPWM1_SYNC_IN    (0x01UL<<SYS_GPN_MFPH_PN10MFP_Pos) /*!< EPWM1 counter synchronous trigger input pin. */
#define SYS_GPN_MFPH_PN10MFP_UART7_RXD        (0x02UL<<SYS_GPN_MFPH_PN10MFP_Pos) /*!< Data receiver input pin for UART7. */
#define SYS_GPN_MFPH_PN10MFP_CAN2_RXD         (0x03UL<<SYS_GPN_MFPH_PN10MFP_Pos) /*!< CAN2 bus receiver input. */
#define SYS_GPN_MFPH_PN10MFP_USBHL2_DM        (0x04UL<<SYS_GPN_MFPH_PN10MFP_Pos) /*!<  */
#define SYS_GPN_MFPH_PN10MFP_VCAP1_SCLK       (0x06UL<<SYS_GPN_MFPH_PN10MFP_Pos) /*!< Camera capture 1 interface sensor clock output pin. */
#define SYS_GPN_MFPH_PN10MFP_SPI2_MOSI        (0x07UL<<SYS_GPN_MFPH_PN10MFP_Pos) /*!< 1st SPI2 MOSI (Master Out, Slave In) pin. */
#define SYS_GPN_MFPH_PN10MFP_KPI_COL0         (0x0AUL<<SYS_GPN_MFPH_PN10MFP_Pos) /*!< Keypad Interface Column 0 output pin. */
#define SYS_GPN_MFPH_PN11MFP_GPIO             (0x00UL<<SYS_GPN_MFPH_PN11MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPH_PN11MFP_EPWM1_SYNC_OUT   (0x01UL<<SYS_GPN_MFPH_PN11MFP_Pos) /*!< EPWM1 counter synchronous trigger output pin. */
#define SYS_GPN_MFPH_PN11MFP_UART7_TXD        (0x02UL<<SYS_GPN_MFPH_PN11MFP_Pos) /*!< Data transmitter output pin for UART7. */
#define SYS_GPN_MFPH_PN11MFP_CAN2_TXD         (0x03UL<<SYS_GPN_MFPH_PN11MFP_Pos) /*!< CAN2 bus transmitter output. */
#define SYS_GPN_MFPH_PN11MFP_USBHL2_DP        (0x04UL<<SYS_GPN_MFPH_PN11MFP_Pos) /*!<  */
#define SYS_GPN_MFPH_PN11MFP_VCAP1_VSYNC      (0x06UL<<SYS_GPN_MFPH_PN11MFP_Pos) /*!< Camera capture 1 interface vsync input pin. */
#define SYS_GPN_MFPH_PN11MFP_SPI2_MISO        (0x07UL<<SYS_GPN_MFPH_PN11MFP_Pos) /*!< 1st SPI2 MISO (Master In, Slave Out) pin. */
#define SYS_GPN_MFPH_PN11MFP_SC0_nCD          (0x08UL<<SYS_GPN_MFPH_PN11MFP_Pos) /*!< SmartCard0 card detect pin. */
#define SYS_GPN_MFPH_PN11MFP_KPI_COL1         (0x0AUL<<SYS_GPN_MFPH_PN11MFP_Pos) /*!< Keypad Interface Column 1 output pin. */
#define SYS_GPN_MFPH_PN12MFP_GPIO             (0x00UL<<SYS_GPN_MFPH_PN12MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPH_PN12MFP_QEI2_B           (0x01UL<<SYS_GPN_MFPH_PN12MFP_Pos) /*!< Quadrature encoder phase B input of QEI Unit 2. */
#define SYS_GPN_MFPH_PN12MFP_UART6_nCTS       (0x02UL<<SYS_GPN_MFPH_PN12MFP_Pos) /*!< Clear to Send input pin for UART6. */
#define SYS_GPN_MFPH_PN12MFP_UART12_RXD       (0x03UL<<SYS_GPN_MFPH_PN12MFP_Pos) /*!< Data receiver input pin for UART12. */
#define SYS_GPN_MFPH_PN12MFP_I2C5_SDA         (0x04UL<<SYS_GPN_MFPH_PN12MFP_Pos) /*!< I2C5 data input/output pin. */
#define SYS_GPN_MFPH_PN12MFP_VCAP1_HSYNC      (0x06UL<<SYS_GPN_MFPH_PN12MFP_Pos) /*!< Camera capture 1 interface hsync input pin. */
#define SYS_GPN_MFPH_PN12MFP_SPI3_SS0         (0x07UL<<SYS_GPN_MFPH_PN12MFP_Pos) /*!< 1st SPI3 slave select pin. */
#define SYS_GPN_MFPH_PN12MFP_SC0_RST          (0x08UL<<SYS_GPN_MFPH_PN12MFP_Pos) /*!< SmartCard0 reset pin. */
#define SYS_GPN_MFPH_PN12MFP_KPI_COL2         (0x0AUL<<SYS_GPN_MFPH_PN12MFP_Pos) /*!< Keypad Interface Column 2 output pin. */
#define SYS_GPN_MFPH_PN12MFP_TM5              (0x0BUL<<SYS_GPN_MFPH_PN12MFP_Pos) /*!< Timer5 event counter input / toggle output */
#define SYS_GPN_MFPH_PN13MFP_GPIO             (0x00UL<<SYS_GPN_MFPH_PN13MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPH_PN13MFP_ECAP2_IC0        (0x01UL<<SYS_GPN_MFPH_PN13MFP_Pos) /*!< Input 0 of enhanced capture unit 2. */
#define SYS_GPN_MFPH_PN13MFP_UART6_nRTS       (0x02UL<<SYS_GPN_MFPH_PN13MFP_Pos) /*!< Request to Send output pin for UART6. */
#define SYS_GPN_MFPH_PN13MFP_UART12_TXD       (0x03UL<<SYS_GPN_MFPH_PN13MFP_Pos) /*!< Data transmitter output pin for UART12. */
#define SYS_GPN_MFPH_PN13MFP_I2C5_SCL         (0x04UL<<SYS_GPN_MFPH_PN13MFP_Pos) /*!< I2C5 clock pin. */
#define SYS_GPN_MFPH_PN13MFP_VCAP1_PIXCLK     (0x06UL<<SYS_GPN_MFPH_PN13MFP_Pos) /*!< Camera capture 1 interface pixel clock input pin. */
#define SYS_GPN_MFPH_PN13MFP_SPI3_CLK         (0x07UL<<SYS_GPN_MFPH_PN13MFP_Pos) /*!< SPI3 serial clock pin. */
#define SYS_GPN_MFPH_PN13MFP_SC0_CLK          (0x08UL<<SYS_GPN_MFPH_PN13MFP_Pos) /*!< SmartCard0 clock pin. */
#define SYS_GPN_MFPH_PN13MFP_KPI_COL3         (0x0AUL<<SYS_GPN_MFPH_PN13MFP_Pos) /*!< Keypad Interface Column 3 output pin. */
#define SYS_GPN_MFPH_PN13MFP_TM5_EXT          (0x0BUL<<SYS_GPN_MFPH_PN13MFP_Pos) /*!< Timer5 event counter input / toggle output */
#define SYS_GPN_MFPH_PN14MFP_GPIO             (0x00UL<<SYS_GPN_MFPH_PN14MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPH_PN14MFP_ECAP2_IC1        (0x01UL<<SYS_GPN_MFPH_PN14MFP_Pos) /*!< Input 1 of enhanced capture unit 2. */
#define SYS_GPN_MFPH_PN14MFP_UART6_RXD        (0x02UL<<SYS_GPN_MFPH_PN14MFP_Pos) /*!< Data receiver input pin for UART6. */
#define SYS_GPN_MFPH_PN14MFP_CAN3_RXD         (0x03UL<<SYS_GPN_MFPH_PN14MFP_Pos) /*!< CAN3 bus receiver input. */
#define SYS_GPN_MFPH_PN14MFP_USBHL3_DM        (0x04UL<<SYS_GPN_MFPH_PN14MFP_Pos) /*!<  */
#define SYS_GPN_MFPH_PN14MFP_VCAP1_SFIELD     (0x06UL<<SYS_GPN_MFPH_PN14MFP_Pos) /*!< Camera capture 1 interface SFIELD input pin. */
#define SYS_GPN_MFPH_PN14MFP_SPI3_MOSI        (0x07UL<<SYS_GPN_MFPH_PN14MFP_Pos) /*!< 1st SPI3 MOSI (Master Out, Slave In) pin. */
#define SYS_GPN_MFPH_PN14MFP_SC0_DAT          (0x08UL<<SYS_GPN_MFPH_PN14MFP_Pos) /*!< SmartCard0 data pin. */
#define SYS_GPN_MFPH_PN14MFP_KPI_COL6         (0x0AUL<<SYS_GPN_MFPH_PN14MFP_Pos) /*!< Keypad Interface Column 6 output pin. */
#define SYS_GPN_MFPH_PN14MFP_TM7              (0x0BUL<<SYS_GPN_MFPH_PN14MFP_Pos) /*!< Timer7 event counter input / toggle output */
#define SYS_GPN_MFPH_PN15MFP_GPIO             (0x00UL<<SYS_GPN_MFPH_PN15MFP_Pos) /*!< General purpose digital I/O pin. */
#define SYS_GPN_MFPH_PN15MFP_ECAP2_IC2        (0x01UL<<SYS_GPN_MFPH_PN15MFP_Pos) /*!< Input 2 of enhanced capture unit 2. */
#define SYS_GPN_MFPH_PN15MFP_UART6_TXD        (0x02UL<<SYS_GPN_MFPH_PN15MFP_Pos) /*!< Data transmitter output pin for UART6. */
#define SYS_GPN_MFPH_PN15MFP_CAN3_TXD         (0x03UL<<SYS_GPN_MFPH_PN15MFP_Pos) /*!< CAN3 bus transmitter output. */
#define SYS_GPN_MFPH_PN15MFP_USBHL3_DP        (0x04UL<<SYS_GPN_MFPH_PN15MFP_Pos) /*!<  */
#define SYS_GPN_MFPH_PN15MFP_I2S0_MCLK        (0x05UL<<SYS_GPN_MFPH_PN15MFP_Pos) /*!< I2S0 master clock output pin. */
#define SYS_GPN_MFPH_PN15MFP_CLKO             (0x06UL<<SYS_GPN_MFPH_PN15MFP_Pos) /*!< Clock Output pin. */
#define SYS_GPN_MFPH_PN15MFP_SPI3_MISO        (0x07UL<<SYS_GPN_MFPH_PN15MFP_Pos) /*!< 1st SPI3 MISO (Master In, Slave Out) pin. */
#define SYS_GPN_MFPH_PN15MFP_SC0_PWR          (0x08UL<<SYS_GPN_MFPH_PN15MFP_Pos) /*!< SmartCard0 power pin. */
#define SYS_GPN_MFPH_PN15MFP_EADC0_ST         (0x09UL<<SYS_GPN_MFPH_PN15MFP_Pos) /*!< EADC external trigger input. */
#define SYS_GPN_MFPH_PN15MFP_KPI_COL7         (0x0AUL<<SYS_GPN_MFPH_PN15MFP_Pos) /*!< Keypad Interface Column 7 output pin. */
#define SYS_GPN_MFPH_PN15MFP_TM7_EXT          (0x0BUL<<SYS_GPN_MFPH_PN15MFP_Pos) /*!< Timer7 event counter input / toggle output */







/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup WHC_Driver WHC Driver
  @{
*/

/** @addtogroup WHC_EXPORTED_CONSTANTS WHC Exported Constants
  @{
*/
#define WHC_CH              4ul /*!<WHC channel number \hideinitializer */
#define WHC_BUFFER_LEN      4ul /*!<WHC buffer size in unsigned int \hideinitializer */

/*@}*/ /* end of group SYS_EXPORTED_CONSTANTS */


/** @addtogroup SYS_EXPORTED_FUNCTIONS SYS Exported Functions
  @{
*/

/**
  * @brief      Disable register write-protection function
  * @param      None
  * @return     None
  * @details    This function disable register write-protection function.
  *             To unlock the protected register to allow write access.
  */
static __inline void SYS_UnlockReg(void)
{
    do
    {
        outpw((void *)0x404601A0, 0x59UL);
        outpw((void *)0x404601A0, 0x16UL);
        outpw((void *)0x404601A0, 0x88UL);
    }
    while(inpw((void *)0x404601A0) == 0UL);
}

/**
  * @brief      Enable register write-protection function
  * @param      None
  * @return     None
  * @details    This function is used to enable register write-protection function.
  *             To lock the protected register to forbid write access.
  */
static __inline void SYS_LockReg(void)
{
    outpw((void *)0x404601A0, 0);
}

#define ENTERTESTMODE(x)    do{SYS->MISCFCR |= 0x2000;}while(0)
#define LEAVETESTMODE(x)    do{SYS->MISCFCR &= ~0x2000;}while(0)

/*@}*/ /* end of group SYS_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group SYS_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif

/*** (C) COPYRIGHT 2016 Nuvoton Technology Corp. ***/
