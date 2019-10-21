/**************************************************************************//**
 * @file     M480.h
 * @version  V1.00
 * @brief    M480 peripheral access layer header file.
 *           This file contains all the peripheral register's definitions,
 *           bits definitions and memory mapping for NuMicro M480 MCU.
 *
 * @copyright (C) 2017-2019 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __NUA3500M4_H__
#define __NUA3500M4_H__

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************/
/*                Processor and Core Peripherals                              */
/******************************************************************************/
/** @addtogroup CMSIS_Device Device CMSIS Definitions
  Configuration of the Cortex-M4 Processor and Core Peripherals
  @{
*/

/**
 * @details  Interrupt Number Definition.
 */
typedef enum IRQn
{
    /******  Cortex-M4 Processor Exceptions Numbers ***************************************************/
    NonMaskableInt_IRQn           = -14,      /*!<  2 Non Maskable Interrupt                        */
    MemoryManagement_IRQn         = -12,      /*!<  4 Memory Management Interrupt                   */
    BusFault_IRQn                 = -11,      /*!<  5 Bus Fault Interrupt                           */
    UsageFault_IRQn               = -10,      /*!<  6 Usage Fault Interrupt                         */
    SVCall_IRQn                   = -5,       /*!< 11 SV Call Interrupt                             */
    DebugMonitor_IRQn             = -4,       /*!< 12 Debug Monitor Interrupt                       */
    PendSV_IRQn                   = -2,       /*!< 14 Pend SV Interrupt                             */
    SysTick_IRQn                  = -1,       /*!< 15 System Tick Interrupt                         */

    /******  NUA3500M4 Specific Interrupt Numbers ****************************************************/

    LVD_IRQn                      = 0,
    PWRWU_IRQn                    = 2,
    HWSEM0_IRQn                   = 3,
    CKFAIL_IRQn                   = 4,
    WHC0_IRQn                     = 5,
    RTC_IRQn                      = 6,
    TAMPER_IRQn                   = 7,
    WDT2_IRQn                     = 8,
    WWDT2_IRQn                    = 9,
    EINT0_IRQn                    = 10,
    EINT1_IRQn                    = 11,
    EINT2_IRQn                    = 12,
    EINT3_IRQn                    = 13,
    EINT4_IRQn                    = 14,
    EINT5_IRQn                    = 15,
    GPA_IRQn                      = 16,
    GPB_IRQn                      = 17,
    GPC_IRQn                      = 18,
    GPD_IRQn                      = 19,
    TMR0_IRQn                     = 20,
    TMR1_IRQn                     = 21,
    TMR2_IRQn                     = 22,
    TMR3_IRQn                     = 23,
    BRAKE0_IRQn                   = 24,
    EPWM0P0_IRQn                  = 25,
    EPWM0P1_IRQn                  = 26,
    EPWM0P2_IRQn                  = 27,
    QEI0_IRQn                     = 28,
    ECAP0_IRQn                    = 29,
    QSPI0_IRQn                    = 30,
    QSPI1_IRQn                    = 31,
    PDMA0_IRQn                    = 32,
    PDMA1_IRQn                    = 33,
    UART0_IRQn                    = 34,
    UART1_IRQn                    = 35,
    UART2_IRQn                    = 36,
    UART3_IRQn                    = 37,
    UART4_IRQn                    = 38,
    UART5_IRQn                    = 39,
    EADC00_IRQn                   = 40,
    EADC01_IRQn                   = 41,
    EADC02_IRQn                   = 42,
    EADC03_IRQn                   = 43,
    I2C0_IRQn                     = 44,
    I2C1_IRQn                     = 45,
    I2S0_IRQn                     = 46,
    CANFD0_IRQn                   = 47,
    SC0_IRQn                      = 48,
    GPE_IRQn                      = 49,
    GPF_IRQn                      = 50,
    GPG_IRQn                      = 51,
    GPH_IRQn                      = 52,
    GPI_IRQn                      = 53,
    GPJ_IRQn                      = 54,
    TMR4_IRQn                     = 55,
    TMR5_IRQn                     = 56,
    TMR6_IRQn                     = 57,
    TMR7_IRQn                     = 58,
    BRAKE1_IRQn                   = 59,
    EPWM1P0_IRQn                  = 60,
    EPWM1P1_IRQn                  = 61,
    EPWM1P2_IRQn                  = 62,
    QEI1_IRQn                     = 63,
    ECAP1_IRQn                    = 64,
    SPI0_IRQn                     = 65,
    SPI1_IRQn                     = 66,
    PDMA2_IRQn                    = 67,
    PDMA3_IRQn                    = 68,
    UART6_IRQn                    = 69,
    UART7_IRQn                    = 70,
    UART8_IRQn                    = 71,
    UART9_IRQn                    = 72,
    UART10_IRQn                   = 73,
    UART11_IRQn                   = 74,
    I2C2_IRQn                     = 75,
    I2C3_IRQn                     = 76,
    I2S1_IRQn                     = 77,
    CANFD1_IRQn                   = 78,
    SC1_IRQn                      = 79,
    GPK_IRQn                      = 80,
    GPL_IRQn                      = 81,
    GPM_IRQn                      = 82,
    GPN_IRQn                      = 83,
    TMR8_IRQn                     = 84,
    TMR9_IRQn                     = 85,
    TMR10_IRQn                    = 86,
    TMR11_IRQn                    = 87,
    BRAKE2_IRQn                   = 88,
    EPWM2P0_IRQn                  = 89,
    EPWM2P1_IRQn                  = 90,
    EPWM2P2_IRQn                  = 91,
    QEI2_IRQn                     = 92,
    ECAP2_IRQn                    = 93,
    SPI2_IRQn                     = 94,
    SPI3_IRQn                     = 95,
    UART12_IRQn                   = 96,
    UART13_IRQn                   = 97,
    UART14_IRQn                   = 98,
    UART15_IRQn                   = 99,
    UART16_IRQn                   = 100,
    I2C4_IRQn                     = 101,
    I2C5_IRQn                     = 102,
    CANFD2_IRQn                   = 103,
    CANFD3_IRQn                   = 104,
    KPI_IRQn                      = 105,
}
IRQn_Type;


/*
 * ==========================================================================
 * ----------- Processor and Core Peripheral Section ------------------------
 * ==========================================================================
 */

/* Configuration of the Cortex-M4 Processor and Core Peripherals */
#define __CM4_REV                 0x0201UL    /*!< Core Revision r2p1                               */
#define __NVIC_PRIO_BITS          4UL         /*!< Number of Bits used for Priority Levels          */
#define __Vendor_SysTickConfig    0UL         /*!< Set to 1 if different SysTick Config is used     */
#define __MPU_PRESENT             1UL         /*!< MPU present or not                               */
#ifdef __FPU_PRESENT
#undef __FPU_PRESENT
#define __FPU_PRESENT             1UL         /*!< FPU present or not                               */
#else
#define __FPU_PRESENT             1UL         /*!< FPU present or not                               */
#endif

/*@}*/ /* end of group CMSIS_Device */


#include "core_cm4.h"               /* Cortex-M4 processor and core peripherals           */
#include "system_NUA3500M4.h"            /* System include file                         */
#include <stdint.h>



#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/******************************************************************************/
/*                            Register definitions                            */
/******************************************************************************/

///////////////////////////////////////////////////
//// ADD YOUR REGISTER INCLUDE HERE ///////////////
///////////////////////////////////////////////////

/** @addtogroup PERIPHERAL_MEM_MAP Peripheral Memory Base
  Memory Mapped Structure for Peripherals
  @{
 */
/* Peripheral and SRAM base address */
#define SRAM_BASE            ((uint32_t)0x00000000)      /*!< SRAM Base Address       */
#define DDR_BASE             ((uint32_t)0x00040000)      /*!< DDR Base Address        */
#define AHBPERIPH_BASE       ((uint32_t)0x40000000)      /*!< AHB Base Address */
#define APBPERIPH_BASE       ((uint32_t)0x40400000)      /*!< AHB Base Address */

/*!< AHB peripherals */
#define SYS_BASE               (AHBPERIPH_BASE + 0x00000UL)
#define CLK_BASE               (AHBPERIPH_BASE + 0x00200UL)
#define GPIOA_BASE             (AHBPERIPH_BASE + 0x04000UL)
#define GPIOB_BASE             (AHBPERIPH_BASE + 0x04040UL)
#define GPIOC_BASE             (AHBPERIPH_BASE + 0x04080UL)
#define GPIOD_BASE             (AHBPERIPH_BASE + 0x040C0UL)
#define GPIOE_BASE             (AHBPERIPH_BASE + 0x04100UL)
#define GPIOF_BASE             (AHBPERIPH_BASE + 0x04140UL)
#define GPIOG_BASE             (AHBPERIPH_BASE + 0x04180UL)
#define GPIOH_BASE             (AHBPERIPH_BASE + 0x041C0UL)
#define GPIOI_BASE             (AHBPERIPH_BASE + 0x04200UL)
#define PDMA0_BASE             (AHBPERIPH_BASE + 0x08000UL)
#define PDMA1_BASE             (AHBPERIPH_BASE + 0x09000UL)
#define PDMA2_BASE             (AHBPERIPH_BASE + 0x0A000UL)
#define PDMA3_BASE             (AHBPERIPH_BASE + 0x0B000UL)
#define EBI_BASE               (AHBPERIPH_BASE + 0x10000UL)
#define HWSEM0_BASE            (AHBPERIPH_BASE + 0x38000UL)
#define HRSHO0_BASE            (AHBPERIPH_BASE + 0x3A000UL)

/*!< APB peripherals */
//#define WDT0_BASE             (APBPERIPH_BASE + 0x00000UL)
//#define WWDT0_BASE            (APBPERIPH_BASE + 0x00100UL)
#define RTC_BASE              (APBPERIPH_BASE + 0x01000UL)
#define ADC0_BASE             (APBPERIPH_BASE + 0x02000UL)
#define EADC0_BASE            (APBPERIPH_BASE + 0x03000UL)
//#define WDT1_BASE             (APBPERIPH_BASE + 0x04000UL)
//#define WWDT1_BASE            (APBPERIPH_BASE + 0x04100UL)
#define I2S0_BASE             (APBPERIPH_BASE + 0x08000UL)
#define I2S1_BASE             (APBPERIPH_BASE + 0x09000UL)
#define KPI_BASE              (APBPERIPH_BASE + 0x0A000UL)
#define TIMER0_BASE           (APBPERIPH_BASE + 0x10000UL)
#define TIMER1_BASE           (APBPERIPH_BASE + 0x10100UL)
#define TIMER2_BASE           (APBPERIPH_BASE + 0x11000UL)
#define TIMER3_BASE           (APBPERIPH_BASE + 0x11100UL)
#define TIMER4_BASE           (APBPERIPH_BASE + 0x12000UL)
#define TIMER5_BASE           (APBPERIPH_BASE + 0x12100UL)
#define TIMER6_BASE           (APBPERIPH_BASE + 0x13000UL)
#define TIMER7_BASE           (APBPERIPH_BASE + 0x13100UL)
#define TIMER8_BASE           (APBPERIPH_BASE + 0x14000UL)
#define TIMER9_BASE           (APBPERIPH_BASE + 0x14100UL)
#define TIMER10_BASE          (APBPERIPH_BASE + 0x15000UL)
#define TIMER11_BASE          (APBPERIPH_BASE + 0x15100UL)
#define EPWM0_BASE            (APBPERIPH_BASE + 0x18000UL)
#define EPWM1_BASE            (APBPERIPH_BASE + 0x19000UL)
#define EPWM2_BASE            (APBPERIPH_BASE + 0x1A000UL)
#define SPI0_BASE             (APBPERIPH_BASE + 0x20000UL)
#define SPI1_BASE             (APBPERIPH_BASE + 0x21000UL)
#define SPI2_BASE             (APBPERIPH_BASE + 0x22000UL)
#define SPI3_BASE             (APBPERIPH_BASE + 0x23000UL)
//#define QSPI0_BASE             (APBPERIPH_BASE + 0x28000UL)
#define QSPI1_BASE             (APBPERIPH_BASE + 0x29000UL)
//#define UART0_BASE            (APBPERIPH_BASE + 0x30000UL)
#define UART1_BASE            (APBPERIPH_BASE + 0x31000UL)
#define UART2_BASE            (APBPERIPH_BASE + 0x32000UL)
#define UART3_BASE            (APBPERIPH_BASE + 0x33000UL)
#define UART4_BASE            (APBPERIPH_BASE + 0x34000UL)
#define UART5_BASE            (APBPERIPH_BASE + 0x35000UL)
#define UART6_BASE            (APBPERIPH_BASE + 0x36000UL)
#define UART7_BASE            (APBPERIPH_BASE + 0x37000UL)
#define UART8_BASE            (APBPERIPH_BASE + 0x38000UL)
#define UART9_BASE            (APBPERIPH_BASE + 0x39000UL)
#define UART10_BASE           (APBPERIPH_BASE + 0x3A000UL)
#define UART11_BASE           (APBPERIPH_BASE + 0x3B000UL)
#define UART12_BASE           (APBPERIPH_BASE + 0x3C000UL)
#define UART13_BASE           (APBPERIPH_BASE + 0x3D000UL)
#define UART14_BASE           (APBPERIPH_BASE + 0x3E000UL)
#define UART15_BASE           (APBPERIPH_BASE + 0x3F000UL)
#define UART16_BASE           (APBPERIPH_BASE + 0x48000UL)
//#define I2C0_BASE             (APBPERIPH_BASE + 0x40000UL)
#define I2C1_BASE             (APBPERIPH_BASE + 0x41000UL)
#define I2C2_BASE             (APBPERIPH_BASE + 0x42000UL)
#define I2C3_BASE             (APBPERIPH_BASE + 0x43000UL)
#define I2C4_BASE             (APBPERIPH_BASE + 0x44000UL)
#define I2C5_BASE             (APBPERIPH_BASE + 0x45000UL)
#define SC0_BASE              (APBPERIPH_BASE + 0x50000UL)
#define SC1_BASE              (APBPERIPH_BASE + 0x51000UL)
#define WDT2_BASE             (APBPERIPH_BASE + 0x58000UL)
#define WWDT2_BASE            (APBPERIPH_BASE + 0x58100UL)
#define CANFD0_BASE           (APBPERIPH_BASE + 0x60000UL)
#define CANFD1_BASE           (APBPERIPH_BASE + 0x61000UL)
#define CANFD2_BASE           (APBPERIPH_BASE + 0x62000UL)
#define CANFD3_BASE           (APBPERIPH_BASE + 0x63000UL)
#define QEI0_BASE             (APBPERIPH_BASE + 0x70000UL)
#define QEI1_BASE             (APBPERIPH_BASE + 0x71000UL)
#define QEI2_BASE             (APBPERIPH_BASE + 0x72000UL)
#define ECAP0_BASE            (APBPERIPH_BASE + 0x74000UL)
#define ECAP1_BASE            (APBPERIPH_BASE + 0x75000UL)
#define ECAP2_BASE            (APBPERIPH_BASE + 0x76000UL)


/*@}*/ /* end of group PERIPHERAL_MEM_MAP */


/** @addtogroup PERIPHERAL_DECLARATION Peripheral Pointer
  The Declaration of Peripherals
  @{
 */

#define SYS                  ((SYS_T *)   SYS_BASE)
#define CLK                  ((CLK_T *)   CLK_BASE)
#define NMI                  ((NMI_T *)   NMI_BASE)
#define PA                   ((GPIO_T *)  GPIOA_BASE)
#define PB                   ((GPIO_T *)  GPIOB_BASE)
#define PC                   ((GPIO_T *)  GPIOC_BASE)
#define PD                   ((GPIO_T *)  GPIOD_BASE)
#define PE                   ((GPIO_T *)  GPIOE_BASE)
#define PF                   ((GPIO_T *)  GPIOF_BASE)
#define PG                   ((GPIO_T *)  GPIOG_BASE)
#define PH                   ((GPIO_T *)  GPIOH_BASE)
#define GPA                  ((GPIO_T *)  GPIOA_BASE)
#define GPB                  ((GPIO_T *)  GPIOB_BASE)
#define GPC                  ((GPIO_T *)  GPIOC_BASE)
#define GPD                  ((GPIO_T *)  GPIOD_BASE)
#define GPE                  ((GPIO_T *)  GPIOE_BASE)
#define GPF                  ((GPIO_T *)  GPIOF_BASE)
#define GPG                  ((GPIO_T *)  GPIOG_BASE)
#define GPH                  ((GPIO_T *)  GPIOH_BASE)
#define GPIO                 ((GPIO_DBCTL_T *) GPIO_DBCTL_BASE)
#define PDMA                 ((PDMA_T *)  PDMA_BASE)
#define EBI                  ((EBI_T *)   EBI_BASE)
#define CRC                  ((CRC_T *)   CRC_BASE)
#define TAMPER               ((TAMPER_T *) TAMPER_BASE)

#define WDT2                  ((WDT_T *)   WDT2_BASE)
#define WWDT2                 ((WWDT_T *)  WWDT2_BASE)
#define RTC                  ((RTC_T *)   RTC_BASE)
#define ADC0                  ((ADC_T *)  ADC0_BASE)
#define EADC0                ((EADC_T *)  EADC0_BASE)

#define I2S0                 ((I2S_T *)   I2S0_BASE)
#define I2S1                 ((I2S_T *)   I2S1_BASE)
#define TIMER0               ((TIMER_T *) TIMER0_BASE)
#define TIMER1               ((TIMER_T *) TIMER1_BASE)
#define TIMER2               ((TIMER_T *) TIMER2_BASE)
#define TIMER3               ((TIMER_T *) TIMER3_BASE)
#define TIMER4               ((TIMER_T *) TIMER4_BASE)
#define TIMER5               ((TIMER_T *) TIMER5_BASE)
#define TIMER6               ((TIMER_T *) TIMER6_BASE)
#define TIMER7               ((TIMER_T *) TIMER7_BASE)
#define TIMER8               ((TIMER_T *) TIMER8_BASE)
#define TIMER9               ((TIMER_T *) TIMER9_BASE)
#define TIMER10               ((TIMER_T *) TIMER10_BASE)
#define TIMER11               ((TIMER_T *) TIMER11_BASE)
#define EPWM0                ((EPWM_T *)  EPWM0_BASE)
#define EPWM1                ((EPWM_T *)  EPWM1_BASE)
#define EPWM2                ((EPWM_T *)  EPWM2_BASE)

#define ECAP0                ((ECAP_T *)  ECAP0_BASE)
#define ECAP1                ((ECAP_T *)  ECAP1_BASE)
#define ECAP2                ((ECAP_T *)  ECAP2_BASE)
#define QEI0                 ((QEI_T *)   QEI0_BASE)
#define QEI1                 ((QEI_T *)   QEI1_BASE)
#define QEI2                 ((QEI_T *)   QEI2_BASE)
#define QSPI0                ((QSPI_T *)  QSPI0_BASE)
#define QSPI1                ((QSPI_T *)  QSPI1_BASE)
#define SPI0                 ((SPI_T *)   SPI0_BASE)
#define SPI1                 ((SPI_T *)   SPI1_BASE)
#define SPI2                 ((SPI_T *)   SPI2_BASE)
#define SPI3                 ((SPI_T *)   SPI3_BASE)

#define UART1                ((UART_T *)  UART1_BASE)
#define UART2                ((UART_T *)  UART2_BASE)
#define UART3                ((UART_T *)  UART3_BASE)
#define UART4                ((UART_T *)  UART4_BASE)
#define UART5                ((UART_T *)  UART5_BASE)
#define UART6                ((UART_T *)  UART6_BASE)
#define UART7                ((UART_T *)  UART7_BASE)
#define UART8                ((UART_T *)  UART8_BASE)
#define UART9                ((UART_T *)  UART9_BASE)
#define UART10                ((UART_T *)  UART10_BASE)
#define UART11                ((UART_T *)  UART11_BASE)
#define UART12                ((UART_T *)  UART12_BASE)
#define UART13                ((UART_T *)  UART13_BASE)
#define UART14                ((UART_T *)  UART14_BASE)
#define UART15                ((UART_T *)  UART15_BASE)
#define UART16                ((UART_T *)  UART16_BASE)
#define I2C0                 ((I2C_T *)   I2C0_BASE)
#define I2C1                 ((I2C_T *)   I2C1_BASE)
#define I2C2                 ((I2C_T *)   I2C2_BASE)
#define SC0                  ((SC_T *)    SC0_BASE)
#define SC1                  ((SC_T *)    SC1_BASE)
#define CANFD0                 ((CAN_T *)   CANFD0_BASE)
#define CANFD1                 ((CAN_T *)   CANFD1_BASE)
#define CANFD2                 ((CAN_T *)   CANFD2_BASE)
#define CANFD3                 ((CAN_T *)   CANFD3_BASE)

/*@}*/ /* end of group ERIPHERAL_DECLARATION */

/** @addtogroup IO_ROUTINE I/O Routines
  The Declaration of I/O Routines
  @{
 */

typedef volatile unsigned char  vu8;        ///< Define 8-bit unsigned volatile data type
typedef volatile unsigned short vu16;       ///< Define 16-bit unsigned volatile data type
typedef volatile unsigned long  vu32;       ///< Define 32-bit unsigned volatile data type

/**
  * @brief Get a 8-bit unsigned value from specified address
  * @param[in] addr Address to get 8-bit data from
  * @return  8-bit unsigned value stored in specified address
  */
#define M8(addr)  (*((vu8  *) (addr)))

/**
  * @brief Get a 16-bit unsigned value from specified address
  * @param[in] addr Address to get 16-bit data from
  * @return  16-bit unsigned value stored in specified address
  * @note The input address must be 16-bit aligned
  */
#define M16(addr) (*((vu16 *) (addr)))

/**
  * @brief Get a 32-bit unsigned value from specified address
  * @param[in] addr Address to get 32-bit data from
  * @return  32-bit unsigned value stored in specified address
  * @note The input address must be 32-bit aligned
  */
#define M32(addr) (*((vu32 *) (addr)))

/**
  * @brief Set a 32-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 32-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  * @note The output port must be 32-bit aligned
  */
#define outpw(port,value)     *((volatile unsigned int *)(port)) = (value)

/**
  * @brief Get a 32-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 32-bit data from
  * @return  32-bit unsigned value stored in specified I/O port
  * @note The input port must be 32-bit aligned
  */
#define inpw(port)            (*((volatile unsigned int *)(port)))

/**
  * @brief Set a 16-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 16-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  * @note The output port must be 16-bit aligned
  */
#define outps(port,value)     *((volatile unsigned short *)(port)) = (value)

/**
  * @brief Get a 16-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 16-bit data from
  * @return  16-bit unsigned value stored in specified I/O port
  * @note The input port must be 16-bit aligned
  */
#define inps(port)            (*((volatile unsigned short *)(port)))

/**
  * @brief Set a 8-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 8-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  */
#define outpb(port,value)     *((volatile unsigned char *)(port)) = (value)

/**
  * @brief Get a 8-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 8-bit data from
  * @return  8-bit unsigned value stored in specified I/O port
  */
#define inpb(port)            (*((volatile unsigned char *)(port)))

/**
  * @brief Set a 32-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 32-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  * @note The output port must be 32-bit aligned
  */
#define outp32(port,value)    *((volatile unsigned int *)(port)) = (value)

/**
  * @brief Get a 32-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 32-bit data from
  * @return  32-bit unsigned value stored in specified I/O port
  * @note The input port must be 32-bit aligned
  */
#define inp32(port)           (*((volatile unsigned int *)(port)))

/**
  * @brief Set a 16-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 16-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  * @note The output port must be 16-bit aligned
  */
#define outp16(port,value)    *((volatile unsigned short *)(port)) = (value)

/**
  * @brief Get a 16-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 16-bit data from
  * @return  16-bit unsigned value stored in specified I/O port
  * @note The input port must be 16-bit aligned
  */
#define inp16(port)           (*((volatile unsigned short *)(port)))

/**
  * @brief Set a 8-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 8-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  */
#define outp8(port,value)     *((volatile unsigned char *)(port)) = (value)

/**
  * @brief Get a 8-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 8-bit data from
  * @return  8-bit unsigned value stored in specified I/O port
  */
#define inp8(port)            (*((volatile unsigned char *)(port)))


/*@}*/ /* end of group IO_ROUTINE */

/******************************************************************************/
/*                Legacy Constants                                            */
/******************************************************************************/
/** @addtogroup Legacy_Constants Legacy Constants
  Legacy Constants
  @{
*/

#ifndef NULL
#define NULL           (0)      ///< NULL pointer
#endif

#define TRUE           (1UL)      ///< Boolean true, define to use in API parameters or return value
#define FALSE          (0UL)      ///< Boolean false, define to use in API parameters or return value

#define ENABLE         (1UL)      ///< Enable, define to use in API parameters
#define DISABLE        (0UL)      ///< Disable, define to use in API parameters

/* Define one bit mask */
#define BIT0     (0x00000001UL)       ///< Bit 0 mask of an 32 bit integer
#define BIT1     (0x00000002UL)       ///< Bit 1 mask of an 32 bit integer
#define BIT2     (0x00000004UL)       ///< Bit 2 mask of an 32 bit integer
#define BIT3     (0x00000008UL)       ///< Bit 3 mask of an 32 bit integer
#define BIT4     (0x00000010UL)       ///< Bit 4 mask of an 32 bit integer
#define BIT5     (0x00000020UL)       ///< Bit 5 mask of an 32 bit integer
#define BIT6     (0x00000040UL)       ///< Bit 6 mask of an 32 bit integer
#define BIT7     (0x00000080UL)       ///< Bit 7 mask of an 32 bit integer
#define BIT8     (0x00000100UL)       ///< Bit 8 mask of an 32 bit integer
#define BIT9     (0x00000200UL)       ///< Bit 9 mask of an 32 bit integer
#define BIT10    (0x00000400UL)       ///< Bit 10 mask of an 32 bit integer
#define BIT11    (0x00000800UL)       ///< Bit 11 mask of an 32 bit integer
#define BIT12    (0x00001000UL)       ///< Bit 12 mask of an 32 bit integer
#define BIT13    (0x00002000UL)       ///< Bit 13 mask of an 32 bit integer
#define BIT14    (0x00004000UL)       ///< Bit 14 mask of an 32 bit integer
#define BIT15    (0x00008000UL)       ///< Bit 15 mask of an 32 bit integer
#define BIT16    (0x00010000UL)       ///< Bit 16 mask of an 32 bit integer
#define BIT17    (0x00020000UL)       ///< Bit 17 mask of an 32 bit integer
#define BIT18    (0x00040000UL)       ///< Bit 18 mask of an 32 bit integer
#define BIT19    (0x00080000UL)       ///< Bit 19 mask of an 32 bit integer
#define BIT20    (0x00100000UL)       ///< Bit 20 mask of an 32 bit integer
#define BIT21    (0x00200000UL)       ///< Bit 21 mask of an 32 bit integer
#define BIT22    (0x00400000UL)       ///< Bit 22 mask of an 32 bit integer
#define BIT23    (0x00800000UL)       ///< Bit 23 mask of an 32 bit integer
#define BIT24    (0x01000000UL)       ///< Bit 24 mask of an 32 bit integer
#define BIT25    (0x02000000UL)       ///< Bit 25 mask of an 32 bit integer
#define BIT26    (0x04000000UL)       ///< Bit 26 mask of an 32 bit integer
#define BIT27    (0x08000000UL)       ///< Bit 27 mask of an 32 bit integer
#define BIT28    (0x10000000UL)       ///< Bit 28 mask of an 32 bit integer
#define BIT29    (0x20000000UL)       ///< Bit 29 mask of an 32 bit integer
#define BIT30    (0x40000000UL)       ///< Bit 30 mask of an 32 bit integer
#define BIT31    (0x80000000UL)       ///< Bit 31 mask of an 32 bit integer

/* Byte Mask Definitions */
#define BYTE0_Msk              (0x000000FFUL)         ///< Mask to get bit0~bit7 from a 32 bit integer
#define BYTE1_Msk              (0x0000FF00UL)         ///< Mask to get bit8~bit15 from a 32 bit integer
#define BYTE2_Msk              (0x00FF0000UL)         ///< Mask to get bit16~bit23 from a 32 bit integer
#define BYTE3_Msk              (0xFF000000UL)         ///< Mask to get bit24~bit31 from a 32 bit integer

#define GET_BYTE0(u32Param)    (((u32Param) & BYTE0_Msk)      )  /*!< Extract Byte 0 (Bit  0~ 7) from parameter u32Param */
#define GET_BYTE1(u32Param)    (((u32Param) & BYTE1_Msk) >>  8)  /*!< Extract Byte 1 (Bit  8~15) from parameter u32Param */
#define GET_BYTE2(u32Param)    (((u32Param) & BYTE2_Msk) >> 16)  /*!< Extract Byte 2 (Bit 16~23) from parameter u32Param */
#define GET_BYTE3(u32Param)    (((u32Param) & BYTE3_Msk) >> 24)  /*!< Extract Byte 3 (Bit 24~31) from parameter u32Param */

/*@}*/ /* end of group Legacy_Constants */


/******************************************************************************/
/*                         Peripheral header files                            */
/******************************************************************************/
#include "sys.h"
#include "clk.h"

#include "uart.h"
#include "gpio.h"
#include "ecap.h"
#include "qei.h"
#include "timer.h"
#include "timer_pwm.h"
#include "pdma.h"
#include "crypto.h"
#include "trng.h"
#include "i2c.h"
#include "i2s.h"
#include "epwm.h"
#include "eadc.h"
#include "wdt.h"
#include "wwdt.h"
#include "ebi.h"
#include "scuart.h"
#include "sc.h"
#include "spi.h"
#include "qspi.h"
#include "can.h"
#include "rtc.h"



#ifdef __cplusplus
}
#endif

#endif  /* __NUA3500M4_H__ */

