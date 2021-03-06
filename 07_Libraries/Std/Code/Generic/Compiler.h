/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Compiler.h
 *    \author     Nicolae-Bogdan Bacrau
 *    \brief      Defines the compiler abstraction for the native C-API form. This implementation does not support the
 *                AUTOSAR API definitions and macros (e.g: FUNC, P2VAR, TYPEDEF etc.). Since the C-API is used, the
 *                Compiler_Cfg.h is not implemented.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

/*----------- Headerswitch ON (for prevention of nested includes) ------------*/

#ifndef COMPILER_H
#define COMPILER_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef NULL_PTR
/** \brief  Defines the macro for the NULL pointer. */
#define NULL_PTR     ((void*) 0)
#endif

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Definition Of Global Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Variables                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Constants                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Functions                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
#endif /* COMPILER_H */
