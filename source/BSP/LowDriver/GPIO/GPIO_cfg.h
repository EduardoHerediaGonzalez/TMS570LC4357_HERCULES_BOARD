/**
 * Copyright © 2023 
 *
 * @file    GPIO_cfg.h
 * @note
 *        ______________      
 *        Eduardo Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   GPIO_cfg configuration file
 * @version 1.0.0
 *     
 */

#ifndef GPIO_cfg_H_
#define GPIO_cfg_H_

/* system headers */
#include "PLATFORM_TYPES_def.h"

/*****************************************************************************/
/* exported configuration macros */
/** @brief     Configuration table that contain the configuration of all the pins of the PORTA.
 *             When u8PinMode is configure as an input, the value of u8PinInitState can keep
 *             with the default value of "0U".
 *
 *
 *  @param[in] u8PinNumber:     {[GPIO_enPIN0, GPIO_enTotalPinNumber)}
 *  @param[in] u8PinMode:       {[GPIO_enInput, GPIO_enTotalPinMode)}
 *  @param[in] u8PinInitState:  {STD_LOW, STD_HIGH}
 */
#define  GPIO_PORTA_CONFIG_TABLE_cfg \
{   \
    /* u8PinNumber,         u8PinMode,                      u8PinInitState*/ \
    {(uint8)GPIO_enPin0,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin1,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin2,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin3,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin4,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin5,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin6,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin7,    (uint8)GPIO_enInputPullDown,    (uint8)0U} \
}

/** @brief     Configuration table that contain the configuration of all the pins of the PORTB.
 *             When u8PinMode is configure as an input, the value of u8PinInitState can keep
 *             with the default value of "0U".
 *
 *
 *  @param[in] u8PinNumber:     {[GPIO_enPIN0, GPIO_enTotalPinNumber)}
 *  @param[in] u8PinMode:       {[GPIO_enInput, GPIO_enTotalPinMode)}
 *  @param[in] u8PinInitState:  {STD_LOW, STD_HIGH}
 */
#define  GPIO_PORTB_CONFIG_TABLE_cfg \
{   \
    /* u8PinNumber,         u8PinMode,                      u8PinInitState*/ \
    {(uint8)GPIO_enPin0,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin1,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin2,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin3,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin4,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin5,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin6,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin7,    (uint8)GPIO_enInputPullDown,    (uint8)0U} \
}

#endif /* GPIO_cfg_H_ */
