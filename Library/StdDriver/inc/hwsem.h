/**************************************************************************//**
 * @file     hwsem.h
 * @version  V1.00
 * @brief    M480 series HWSEM driver header file
 *
 * @copyright (C) 2016 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __HWSEM_H__
#define __HWSEM_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup HWSEM_Driver HWSEM Driver
  @{
*/

/** @addtogroup HWSEM_EXPORTED_CONSTANTS HWSEM Exported Constants
  @{
*/
#define HWSEM_CNT             8ul /*!<HWSEM count \hideinitializer */


/*@}*/ /* end of group HWSEM_EXPORTED_CONSTANTS */


/** @addtogroup HWSEM_EXPORTED_FUNCTIONS HWSEM Exported Functions
  @{
*/

/**
  * @brief      Reset hardware semaphore
  *
  * @param[in]  hwsem         The pointer of the specified HWSEM module.
  * @param[in]  u32Num        HWSEM channel, valid channel numbers are 0~7
  * \hideinitializer
  */
#define HWSEM_RESET(hwsem, u32Num)          ((hwsem)->CTL |= (1ul << u32Num))

/**
  * @brief
  *
  * @param[in]  hwsem         The pointer of the specified HWSEM module.
  * @param[in]  u32Num        HWSEM channel, valid channel numbers are 0~7
  *
  * @retval       0 The specified semaphore is not locked.
  *               Otherwise The specified semaphore is locked.
  * \hideinitializer
  */
#define HWSEM_IS_LOCKED(hwsem, u32Num)         ((hwsem)->SEM[u32Num] & (HWSEM_SEM_ID_Msk))

/**
  * @brief        Enable specified HWSEM interrupt
  *
  * @param[in]  hwsem         The pointer of the specified HWSEM module.
  * @param[in]  u32Num        HWSEM channel, valid channel numbers are 0~7
  *
  *
  *    \hideinitializer
  */
#define HWSEM_ENABLE_INT(hwsem, u32Num)    ((hwsem)->INTEN_CM4 |= (1 << u32Num))


/**
  *    @brief        Disable specified HWSEM interrupt
  *
  * @param[in]  hwsem         The pointer of the specified HWSEM module.
  * @param[in]  u32Num        HWSEM channel, valid channel numbers are 0~7
  *
  *
  *    \hideinitializer
  */
#define HWSEM_DISABLE_INT(hwsem, u32Num)    ((hwsem)->INTEN_CM4 &= ~(1 << u32Num))

/**
  * @brief        Get specified interrupt flag
  *
  * @param[in]  hwsem         The pointer of the specified HWSEM module.
  * @param[in]  u32Num        HWSEM channel, valid channel numbers are 0~7
  *
  *    @retval       0 The specified interrupt is not happened.
  *                  Otherwise The specified interrupt is happened.
  *    \hideinitializer
  */
#define HWSEM_GET_INT_FLAG(hwsem,u32Num)    ((hwsem)->INTSTS_CM4 & (1 << u32Num))


/**
  * @brief Clear specified interrupt flag
  *
  * @param[in]  hwsem         The pointer of the specified HWSEM module.
  * @param[in]  u32Num        HWSEM channel, valid channel numbers are 0~7
  *
  *    \hideinitializer
  */
#define HWSEM_CLR_INT_FLAG(hwsem,u32Num)    ((hwsem)->INTSTS_CM4 = (1 << u32Num))

/**
  * @brief        Lock specified semaphore
  *
  * @param[in]  hwsem         The pointer of the specified HWSEM module.
  * @param[in]  u32Num        HWSEM channel, valid channel numbers are 0~7
  * @param[in]  u8Key        HWSEM channel key
  *
  *    \hideinitializer
  */
#define HWSEM_LOCK(hwsem,u32Num, u8Key)    ((hwsem)->SEM[u32Num] = ((u8Key & 0xff) << HWSEM_SEM_KEY_Pos))

/**
  * @brief        Unlock specified semaphore
  *
  * @param[in]  hwsem         The pointer of the specified HWSEM module.
  * @param[in]  u32Num        HWSEM channel, valid channel numbers are 0~7
  * @param[in]  u8Key        HWSEM channel key
  *
  *    \hideinitializer
  */
#define HWSEM_UNLOCK(hwsem,u32Num, u8Key)    ((hwsem)->SEM[u32Num] = ((u8Key & 0xff) << HWSEM_SEM_KEY_Pos))


/*@}*/ /* end of group HWSEM_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group HWSEM_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif

/*** (C) COPYRIGHT 2016 Nuvoton Technology Corp. ***/
