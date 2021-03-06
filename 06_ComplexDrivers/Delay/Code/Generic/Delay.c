/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Delay.c
 *    \author     Baciu Vlad-Eusebiu
 *    \brief      Implements delay functions for milliseconds and microseconds.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/
#include "Delay.h"
/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Definition Of Local Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/
#define DELAY_US_FACTOR    (53000000 / 1 / 1000000)
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

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Functions                                          */
/*-------------------------------------------------------------------------------------------------------------------*/
static void Delay_Tick(uint32 ul_Count);
/*-------------------------------------------------------------------------------------------------------------------*/
/*                                         Implementation Of Local Functions                                         */
/*-------------------------------------------------------------------------------------------------------------------*/

/**
 * \brief
 * \param
 * \return
 */
static void Delay_Tick(uint32 ul_Count)
{
   __asm("    subs    r0, #1\n"
   "    bne.n   Delay_Tick\n"
   "    bx      lr");
}
/*-------------------------------------------------------------------------------------------------------------------*/
/*                                         Implementation Of Global Functions                                        */
/*-------------------------------------------------------------------------------------------------------------------*/
/**
 * \brief
 * \param
 * \return
 */
void Delay_gv_Us(uint32 ul_Us)
{
   Delay_Tick(ul_Us * DELAY_US_FACTOR);
}
/**
 * \brief
 * \param
 * \return
 */
void Delay_gv_Ms(uint32 ul_Ms)
{
   Delay_gv_Us(ul_Ms * 1000);
}
