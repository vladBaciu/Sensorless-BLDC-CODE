/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Uart_PBcfg.c
 *    \author     Baciu Vlad-Eusebiu
 *    \brief      Implements the configuration array, register configuration array and the global configuration array.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/
#include "Uart.h"
#include "Uart_Cfg.h"
/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Definition Of Local Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/
#define UART_NUMBER_OF_GROUPS     (2U)
#define UART_NUMBER_OF_REGISTERS  (10U)
#define UART_BRR_VALUE            (8333U)
/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Definition Of Local Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Variables                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Declaration Of Global Variables                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Constants                                          */
/*-------------------------------------------------------------------------------------------------------------------*/
/** \brief Group configuration array */
static const Uart_GroupCfgType Uart_gkt_UartGroups[UART_NUMBER_OF_GROUPS] =
{
   { UART_TX_C_10, UART4 },
   { UART_RX_C_11, UART4 }

};

/** \brief Register configuration array */
static const RegInit_Masked32BitsSingleType Uart_kat_Registers[UART_NUMBER_OF_REGISTERS] =
{
   /* - set word length to 8 bits
    * - set oversampling to 8
    * - enable Rx and Tx
    */
   {
      (volatile uint32*) &UART4->CR1,
      (uint32) ~(
      USART_CR1_OVER8 |
      USART_CR1_M |
      USART_CR1_RE |
      USART_CR1_TE
      ),
      (uint32) (
      USART_CR1_OVER8 |
      USART_CR1_RE |
      USART_CR1_TE)

   },
   {
      /* - set 1 stop bits
       *
       */
      (volatile uint32*) &UART4->CR2,
      (uint32) ~(
      USART_CR2_STOP),
      (uint32) (
      0x00)
   },

   /* - select half duplex mode
    *
    */
   {
      (volatile uint32*) &UART4->CR3,
      (uint32) ~( USART_CR3_HDSEL),
      (uint32)  (0x00)
   },
   /*
    *  - set baud rate to 9600
    */

   {
      (volatile uint32*) &UART4->BRR,
      (uint32) ~(
      USART_BRR_DIV_Fraction |
      USART_BRR_DIV_Mantissa
      ),
      (uint32) (UART_BRR_VALUE)
   },
   /*
    *   - enable the module
    */
   {
      (volatile uint32*) &UART4->CR1,
      (uint32) ~(USART_CR1_UE),
      (uint32) (USART_CR1_UE)
   }
};

/** \brief UART register configuration array */
static const RegInit_Masked32BitsConfigType Uart_kt_Config =
{
   Uart_kat_Registers,
   UART_NUMBER_OF_REGISTERS
};
/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Declaration Of Global Constants                                          */
/*-------------------------------------------------------------------------------------------------------------------*/
const Uart_ConfigType Uart_gkt_Cfg =
{
   Uart_gkt_UartGroups,
   &Uart_kt_Config
};
/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Functions                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                         Implementation Of Local Functions                                         */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                         Implementation Of Global Functions                                        */
/*-------------------------------------------------------------------------------------------------------------------*/
