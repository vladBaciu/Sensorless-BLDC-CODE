/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Led_Cfg.c
 *    \author     Baciu Vlad-Eusebiu
 *    \brief      Declares all the link-time and / or post-build configuration parameters of the software component.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/
#include "Led_Core.h"
/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Definition Of Local Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

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

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Declaration Of Global Constants                                          */
/*-------------------------------------------------------------------------------------------------------------------*/
/** \brief  Defines the active values to be used for setting the PWM duty cycles. */
const IoHwAb_DigitalLevelType Led_gkat_ActiveValues[LED_NUMBER_OF_INSTANCES] =
   {
      STD_HIGH,
      STD_HIGH,
      STD_HIGH
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