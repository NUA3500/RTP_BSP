/**************************************************************************//**
 * @file     whc.c
 * @version  V1.00
 * @brief     M480 WHC driver source file
 *
 * @copyright (C) 2016 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#include "NuMicro.h"

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup WHC_Driver WHC Driver
  @{
*/

/** @addtogroup WHC_EXPORTED_FUNCTIONS WHC Exported Functions
  @{
*/

/**
  * @brief      WHC send
  *
  * @param[in]  whc           The pointer of the specified WHC module.
  *
  * @param[in]  u32Ch         WHC channel, valid channel numbers are 0~3
  *
  * @param[in]  pu32TxBuf     The buffer holds the data to send
  *
  */
int WHC_Send(WHC_T* whc, uint32_t u32Ch, uint32_t *pu32TxBuf)
{
    int i;

    if(whc->TXSTS & (1ul << u32Ch))
    {
        for(i = 0; i < WHC_BUFFER_LEN; i++)
            whc->TMDAT[u32Ch][i] = *pu32TxBuf++;
        whc->TXCTL = (1ul << u32Ch);
    }
    else
    {
        return -1;

    }
    return 0;
}

/**
  * @brief      WHC recv
  *
  * @param[in]  whc           The pointer of the specified WHC module.
  *
  * @param[in]  u32Ch         WHC channel, valid channel numbers are 0~3
  *
  * @param[in]  pu32RxBuf     The buffer to hold the receive data
  *
  */
int WHC_Recv(WHC_T* whc, uint32_t u32Ch, uint32_t *pu32RxBuf)
{
    int i;

    if(whc->RXSTS & (1ul << u32Ch))
    {
        for(i = 0; i < WHC_BUFFER_LEN; i++)
            *pu32RxBuf++ = whc->RMDAT[u32Ch][i];
        whc->RXCTL = (1ul << u32Ch);
    }
    else
    {
        return -1;

    }
    return 0;
}

/*@}*/ /* end of group WHC_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group WHC_Driver */

/*@}*/ /* end of group Standard_Driver */

/*** (C) COPYRIGHT 2016 Nuvoton Technology Corp. ***/
