/**************************************************************************//**
 * @file     whc.h
 * @brief    WHC driver header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __WHC_H__
#define __WHC_H__

#ifdef __cplusplus
extern "C"
{
#endif


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

/*@}*/ /* end of group WHC_EXPORTED_CONSTANTS */


/** @addtogroup WHC_EXPORTED_FUNCTIONS WHC Exported Functions
  @{
*/

/**
  * @brief      Recall message
  *
  * @param[in]  whc           The pointer of the specified WHC module.
  * @param[in]  u32Ch         WHC channel, valid channel numbers are 0~3
  * \hideinitializer
  */
#define WHC_RECALL_MSG(whc, u32Ch)          ((whc)->TXCTL |= (1ul << (u32Ch + WHC_TXCTL_CH0RC_Pos)))

/**
  * @brief
  *
  * @param[in]  whc           The pointer of the specified WHC module.
  * @param[in]  u32Ch         WHC channel, valid channel numbers are 0~3
  * \hideinitializer
  */
#define WHC_IS_TX_READY(whc, u32Ch)         ((whc)->TXSTS & (1 << u32Ch))

/**
  * @brief
  *
  * @param[in]  whc           The pointer of the specified WHC module.
  * @param[in]  u32Ch         WHC channel, valid channel numbers are 0~3
  * \hideinitializer
  */
#define WHC_IS_RX_READY(whc, u32Ch)         ((whc)->RXSTS & (1 << u32Ch))

/**
  *    @brief        Enable specified WHC interrupt
  *
  *    @param[in]    whc        The pointer of the specified WHC module
  *    @param[in]    u32eIntSel  Interrupt type select
  *                              - \ref WHC_INTEN_RST0IEN_Msk
  *                              - \ref WHC_INTEN_POFF0IEN_Msk
  *                              - ......
  *
  *
  *    \hideinitializer
  */
#define WHC_ENABLE_INT(whc, u32eIntSel)    ((whc)->INTEN |= (u32eIntSel))


/**
  *    @brief        Disable specified WHC interrupt
  *
  *    @param[in]    whc        The pointer of the specified WHC module
  *    @param[in]    u32eIntSel  Interrupt type select
  *                              - \ref WHC_INTEN_RST0IEN_Msk
  *                              - \ref WHC_INTEN_POFF0IEN_Msk
  *                              - ......
  *
  *
  *    \hideinitializer
  */
#define WHC_DISABLE_INT(whc, u32eIntSel)    ((whc)->INTEN &= ~(u32eIntSel))

/**
  *    @brief        Get specified interrupt flag/status
  *
  *    @param[in]    whc        The pointer of the specified WHC module
  *    @param[in]    u32eIntTypeFlag Interrupt Type Flag, should be
  *                              - \ref WHC_INTEN_RST0IEN_Msk
  *                              - \ref WHC_INTEN_POFF0IEN_Msk
  *                              - ......
  *
  *    @retval       0 The specified interrupt is not happened.
  *                  1 The specified interrupt is happened.
  *    \hideinitializer
  */
#define WHC_GET_INT_FLAG(whc,u32eIntTypeFlag)    (((whc)->INTSTS & (u32eIntTypeFlag))?1:0)


/**
  *    @brief        Trigger WHC interrupt
  *    @param[in]    whc        The pointer of the specified WHC module
  *    @param[in]    u32eInt    Interrupt number, valid interrupt are 0~3
  *                              - \ref WHC_INTEN_RST0IEN_Msk
  *                              - \ref WHC_INTEN_POFF0IEN_Msk
  *                              - ......
  *
  *
  *    \hideinitializer
  */
#define WHC_TRIGGER_INT(whc, u32Int) ((whc)->GINTTRG = (1ul << u32Int))


int WHC_Send(WHC_T* whc, uint32_t u32Ch, uint32_t *pu32TxBuf);
int WHC_Recv(WHC_T* whc, uint32_t u32Ch, uint32_t *pu32RxBuf);

/*@}*/ /* end of group WHC_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group WHC_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif

