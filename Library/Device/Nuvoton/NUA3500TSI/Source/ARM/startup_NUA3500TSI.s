;/******************************************************************************
; * @file     startup_M480.s
; * @version  V1.00
; * @brief    CMSIS Cortex-M4 Core Device Startup File for M480
; *
; * @copyright (C) 2017 Nuvoton Technology Corp. All rights reserved.
;*****************************************************************************/
;/*
;//-------- <<< Use Configuration Wizard in Context Menu >>> ------------------
;*/


; <h> Stack Configuration
;   <o> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

	IF :LNOT: :DEF: Stack_Size
Stack_Size      EQU     0x00000800
	ENDIF

                AREA    STACK, NOINIT, READWRITE, ALIGN=3
Stack_Mem       SPACE   Stack_Size
__initial_sp


; <h> Heap Configuration
;   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

	IF :LNOT: :DEF: Heap_Size
Heap_Size       EQU     0x00000100
	ENDIF

                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base
Heap_Mem        SPACE   Heap_Size
__heap_limit


                PRESERVE8
                THUMB


; Vector Table Mapped to Address 0 at Reset

                AREA    RESET, DATA, READONLY
                EXPORT  __Vectors
                EXPORT  __Vectors_End
                EXPORT  __Vectors_Size

__Vectors       DCD     __initial_sp              ; Top of Stack
                DCD     Reset_Handler             ; Reset Handler
                DCD     NMI_Handler               ; NMI Handler
                DCD     HardFault_Handler         ; Hard Fault Handler
                DCD     MemManage_Handler         ; MPU Fault Handler
                DCD     BusFault_Handler          ; Bus Fault Handler
                DCD     UsageFault_Handler        ; Usage Fault Handler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SVC_Handler               ; SVCall Handler
                DCD     DebugMon_Handler          ; Debug Monitor Handler
                DCD     0                         ; Reserved
                DCD     PendSV_Handler            ; PendSV Handler
                DCD     SysTick_Handler           ; SysTick Handler

                ; External Interrupts
                DCD     WDT_IRQHandler            
                DCD     Tamper_IRQHandler            
                DCD     0          
                DCD     WMC_IRQHandler          
                DCD     CRYPTO_IRQHandler         
                DCD     TRNG_Handler           
                DCD     KS_IRQHandler            
                DCD     OTP_IRQHandler         
                DCD     TMR0_IRQHandler            
                DCD     TMR1_IRQHandler           
                DCD     UART0_IRQHandler          




__Vectors_End

__Vectors_Size  EQU     __Vectors_End - __Vectors

                AREA    |.text|, CODE, READONLY


; Reset Handler

Reset_Handler   PROC
                EXPORT  Reset_Handler             [WEAK]
                IMPORT  SystemInit
                IMPORT  __main

                ; Unlock Register
                LDR     R0, =0x40000100
                LDR     R1, =0x59
                STR     R1, [R0]
                LDR     R1, =0x16
                STR     R1, [R0]
                LDR     R1, =0x88
                STR     R1, [R0]

	IF :LNOT: :DEF: ENABLE_SPIM_CACHE
                LDR     R0, =0x40000200            ; R0 = Clock Controller Register Base Address
                LDR     R1, [R0,#0x4]              ; R1 = 0x40000204  (AHBCLK)
                ORR     R1, R1, #0x4000              
                STR     R1, [R0,#0x4]              ; CLK->AHBCLK |= CLK_AHBCLK_SPIMCKEN_Msk;
                
                LDR     R0, =0x40007000            ; R0 = SPIM Register Base Address
                LDR     R1, [R0,#4]                ; R1 = SPIM->CTL1
                ORR     R1, R1,#2                  ; R1 |= SPIM_CTL1_CACHEOFF_Msk
                STR     R1, [R0,#4]                ; _SPIM_DISABLE_CACHE()
                LDR     R1, [R0,#4]                ; R1 = SPIM->CTL1
                ORR     R1, R1, #4                 ; R1 |= SPIM_CTL1_CCMEN_Msk
                STR     R1, [R0,#4]                ; _SPIM_ENABLE_CCM()
	ENDIF

                LDR     R0, =SystemInit
                BLX     R0

                ; Init POR
                ; LDR     R2, =0x40000024
                ; LDR     R1, =0x00005AA5
                ; STR     R1, [R2]

                ; Lock
                LDR     R0, =0x40000100
                LDR     R1, =0
                STR     R1, [R0]

                LDR     R0, =__main
                BX      R0
 
                ENDP


; Dummy Exception Handlers (infinite loops which can be modified)

NMI_Handler     PROC
                EXPORT  NMI_Handler               [WEAK]
                B       .
                ENDP
HardFault_Handler\
                PROC
                EXPORT  HardFault_Handler         [WEAK]
                B       .
                ENDP
MemManage_Handler\
                PROC
                EXPORT  MemManage_Handler         [WEAK]
                B       .
                ENDP
BusFault_Handler\
                PROC
                EXPORT  BusFault_Handler          [WEAK]
                B       .
                ENDP
UsageFault_Handler\
                PROC
                EXPORT  UsageFault_Handler        [WEAK]
                B       .
                ENDP
SVC_Handler     PROC
                EXPORT  SVC_Handler               [WEAK]
                B       .
                ENDP
DebugMon_Handler\
                PROC
                EXPORT  DebugMon_Handler          [WEAK]
                B       .
                ENDP
PendSV_Handler\
                PROC
                EXPORT  PendSV_Handler            [WEAK]
                B       .
                ENDP
SysTick_Handler\
                PROC
                EXPORT  SysTick_Handler           [WEAK]
                B       .
                ENDP

Default_Handler PROC

                EXPORT  BOD_IRQHandler            [WEAK]
                EXPORT  WDT_IRQHandler            [WEAK]
                EXPORT  Tamper_IRQHandler         [WEAK]
                EXPORT  WMC_IRQHandler            [WEAK]
                EXPORT  CRYPTO_IRQHandler         [WEAK]
                EXPORT  TRNG_Handler              [WEAK]
                EXPORT  KS_IRQHandler             [WEAK]
                EXPORT  OTP_IRQHandler            [WEAK]
                EXPORT  TMR0_IRQHandler           [WEAK]
                EXPORT  TMR1_IRQHandler           [WEAK]
                EXPORT  UART0_IRQHandler          [WEAK]


Default__IRQHandler
WDT_IRQHandler   
Tamper_IRQHandler
WMC_IRQHandler   
CRYPTO_IRQHandler
TRNG_Handler     
KS_IRQHandler    
OTP_IRQHandler   
TMR0_IRQHandler  
TMR1_IRQHandler  
UART0_IRQHandler 

                B       .
                ENDP


                ALIGN


; User Initial Stack & Heap

                IF      :DEF:__MICROLIB

                EXPORT  __initial_sp
                EXPORT  __heap_base
                EXPORT  __heap_limit

                ELSE

                IMPORT  __use_two_region_memory
                EXPORT  __user_initial_stackheap

__user_initial_stackheap PROC
                LDR     R0, =  Heap_Mem
                LDR     R1, =(Stack_Mem + Stack_Size)
                LDR     R2, = (Heap_Mem +  Heap_Size)
                LDR     R3, = Stack_Mem
                BX      LR
                ENDP

                ALIGN

                ENDIF


                END
;/*** (C) COPYRIGHT 2017 Nuvoton Technology Corp. ***/
