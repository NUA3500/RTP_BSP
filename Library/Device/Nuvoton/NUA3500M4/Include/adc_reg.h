/**************************************************************************//**
 * @file     adc.h
 * @version  V1.00
 * @brief    M480 series ADC driver header file
 *
 * @copyright (C) 2016 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#ifndef __ADC_H__
#define __ADC_H__

#ifdef __cplusplus
extern "C"
{
#endif


typedef struct
{
    __IO uint32_t CTL;          /* 0x000 */
    __IO uint32_t CONF;
    __IO uint32_t IER;
    __IO uint32_t ISR;
    __IO uint32_t WKISR;        /* 0x010 */
    __IO uint32_t RESERVE0[3];
    __IO uint32_t XYDATA;       /* 0x020 */
    __IO uint32_t ZDATA;
    __IO uint32_t DATA;
    __IO uint32_t VBADATA;
    __IO uint32_t KPDATA;       /* 0x030 */
    __IO uint32_t SELFDATA;
    __IO uint32_t RESERVE1[111];
    __IO uint32_t XYSORT[4];    /* 0x1F4 */
    __IO uint32_t ZSORT[4];
    __IO uint32_t RESERVE2[3];
    __IO uint32_t MTMULCK;      /* 0x220 */
    __IO uint32_t MTCONF;
    __IO uint32_t MTCON;
    __IO uint32_t ADCAII;
    __IO uint32_t ADCAIIRLT;    /* 0x230 */
} ADC_T;


#define ADC_CTL_ADEN_Pos              (0)
#define ADC_CTL_ADEN_Msk              (0x1ul << ADC_CTL_ADEN_Pos)

#define ADC_CTL_VBGEN_Pos              (1)
#define ADC_CTL_VBGEN_Msk              (0x1ul << ADC_CTL_VBGEN_Pos)

#define ADC_CTL_PWKPEN_Pos              (2)
#define ADC_CTL_PWKPEN_Msk              (0x1ul << ADC_CTL_PWKPEN_Pos)

#define ADC_CTL_MST_Pos              (8)
#define ADC_CTL_MST_Msk              (0x1ul << ADC_CTL_MST_Pos)

#define ADC_CTL_PEDEEN_Pos              (9)
#define ADC_CTL_PEDEEN_Msk              (0x1ul << ADC_CTL_PEDEEN_Pos)

#define ADC_CTL_WKPEN_Pos              (10)
#define ADC_CTL_WKPEN_Msk              (0x1ul << ADC_CTL_WKPEN_Pos)

#define ADC_CTL_WKTEN_Pos              (11)
#define ADC_CTL_WKTEN_Msk              (0x1ul << ADC_CTL_WKTEN_Pos)

#define ADC_CTL_WMSWCH_Pos              (16)
#define ADC_CTL_WMSWCH_Msk              (0x1ul << ADC_CTL_WMSWCH_Pos)

#define ADC_CONF_TEN_Pos              (0)
#define ADC_CONF_TEN_Msk              (0x1ul << ADC_CONF_TEN_Pos)

#define ADC_CONF_ZEN_Pos              (1)
#define ADC_CONF_ZEN_Msk              (0x1ul << ADC_CONF_ZEN_Pos)

#define ADC_CONF_NAEN_Pos              (2)
#define ADC_CONF_NAEN_Msk              (0x1ul << ADC_CONF_NAEN_Pos)

#define ADC_CONF_REFSEL_Pos              (6)
#define ADC_CONF_REFSEL_Msk              (0x3ul << ADC_CONF_REFSEL_Pos)

#define ADC_CONF_VBATEN_Pos              (8)
#define ADC_CONF_VBATEN_Msk              (0x1ul << ADC_CONF_VBATEN_Pos)

#define ADC_CONF_KPCEN_Pos              (9)
#define ADC_CONF_KPCEN_Msk              (0x1ul << ADC_CONF_KPCEN_Pos)

#define ADC_CONF_SELFTEN_Pos              (10)
#define ADC_CONF_SELFTEN_Msk              (0x1ul << ADC_CONF_SELFTEN_Pos)

#define ADC_CONF_CHSEL_Pos              (12)
#define ADC_CONF_CHSEL_Msk              (0x7ul << ADC_CONF_CHSEL_Pos)

#define ADC_CONF_REFCNT_Pos              (16)
#define ADC_CONF_REFCNT_Msk              (0xful << ADC_CONF_REFCNT_Pos)

#define ADC_CONF_TMAVEN_Pos              (20)
#define ADC_CONF_TMAVEN_Msk              (0x1ul << ADC_CONF_TMAVEN_Pos)

#define ADC_CONF_ZMAVEN_Pos              (21)
#define ADC_CONF_ZMAVEN_Msk              (0x1ul << ADC_CONF_ZMAVEN_Pos)

#define ADC_CONF_HSPEED_Pos              (22)
#define ADC_CONF_HSPEED_Msk              (0x1ul << ADC_CONF_HSPEED_Pos)

#define ADC_CONF_SAMPCNT_Pos              (24)
#define ADC_CONF_SAMPCNT_Msk              (0xfful << ADC_CONF_SAMPCNT_Pos)

#define ADC_IER_MIEN_Pos              (0)
#define ADC_IER_MIEN_Msk              (0x1ul << ADC_IER_MIEN_Pos)

#define ADC_IER_KPEIEN_Pos              (1)
#define ADC_IER_KPEIEN_Msk              (0x1ul << ADC_IER_KPEIEN_Pos)

#define ADC_IER_PEDEIEN_Pos              (2)
#define ADC_IER_PEDEIEN_Msk              (0x1ul << ADC_IER_PEDEIEN_Pos)

#define ADC_IER_WKTIEN_Pos              (3)
#define ADC_IER_WKTIEN_Msk              (0x1ul << ADC_IER_WKTIEN_Pos)

#define ADC_IER_WKPIEN_Pos              (4)
#define ADC_IER_WKPIEN_Msk              (0x1ul << ADC_IER_WKPIEN_Pos)

#define ADC_IER_KPUEIEN_Pos              (5)
#define ADC_IER_KPUEIEN_Msk              (0x1ul << ADC_IER_KPUEIEN_Pos)

#define ADC_IER_PEUEIEN_Pos              (6)
#define ADC_IER_PEUEIEN_Msk              (0x1ul << ADC_IER_PEUEIEN_Pos)

#define ADC_ISR_MF_Pos              (0)
#define ADC_ISR_MF_Msk              (0x1ul << ADC_ISR_MF_Pos)

#define ADC_ISR_KPEF_Pos              (1)
#define ADC_ISR_KPEF_Msk              (0x1ul << ADC_ISR_KPEF_Pos)

#define ADC_ISR_PEDEF_Pos              (2)
#define ADC_ISR_PEDEF_Msk              (0x1ul << ADC_ISR_PEDEF_Pos)

#define ADC_ISR_KPUEF_Pos              (3)
#define ADC_ISR_KPUEF_Msk              (0x1ul << ADC_ISR_KPUEF_Pos)

#define ADC_ISR_PEUEF_Pos              (4)
#define ADC_ISR_PEUEF_Msk              (0x1ul << ADC_ISR_PEUEF_Pos)

#define ADC_ISR_TF_Pos              (8)
#define ADC_ISR_TF_Msk              (0x1ul << ADC_ISR_TF_Pos)

#define ADC_ISR_ZF_Pos              (9)
#define ADC_ISR_ZF_Msk              (0x1ul << ADC_ISR_ZF_Pos)

#define ADC_ISR_NACF_Pos              (10)
#define ADC_ISR_NACF_Msk              (0x1ul << ADC_ISR_NACF_Pos)

#define ADC_ISR_VBF_Pos              (11)
#define ADC_ISR_VBF_Msk              (0x1ul << ADC_ISR_VBF_Pos)

#define ADC_ISR_KPCF_Pos              (12)
#define ADC_ISR_KPCF_Msk              (0x1ul << ADC_ISR_KPCF_Pos)

#define ADC_ISR_SELFTF_Pos              (13)
#define ADC_ISR_SELFTF_Msk              (0x1ul << ADC_ISR_SELFTF_Pos)

#define ADC_ISR_INTKP_Pos              (16)
#define ADC_ISR_INTKP_Msk              (0x1ul << ADC_ISR_INTKP_Pos)

#define ADC_ISR_INTTC_Pos              (17)
#define ADC_ISR_INTTC_Msk              (0x1ul << ADC_ISR_INTTC_Pos)

#define ADC_WKISR_WKPEF_Pos              (0)
#define ADC_WKISR_WKPEF_Msk              (0x1ul << ADC_WKISR_WKPEF_Pos)

#define ADC_WKISR_WPEDEF_Pos              (1)
#define ADC_WKISR_WPEDEF_Msk              (0x1ul << ADC_WKISR_WPEDEF_Pos)


#ifdef __cplusplus
}
#endif

#endif

/*** (C) COPYRIGHT 2016 Nuvoton Technology Corp. ***/
