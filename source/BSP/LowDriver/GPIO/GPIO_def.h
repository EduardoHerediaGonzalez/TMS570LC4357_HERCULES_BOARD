/**
 * Copyright © 2023 
 *
 * @file    GPIO_def.h
 * @note
 *        ______________      
 *        Eduardo Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   GPIO_def definition file
 * @version 1.0.0
 *     
 */

#ifndef GPIO_def_H_
#define GPIO_def_H_

/* system headers */
#include "PLATFORM_TYPES_def.h"

/* exported macros */

/* exported types */
typedef enum
{
    GPIO_enPortA = 0,
    GPIO_enPortB,
    GPIO_enTotalPortName
}GPIO_tenPortName;

typedef enum
{
    GPIO_enPin0 = 0,
    GPIO_enPin1,
    GPIO_enPin2,
    GPIO_enPin3,
    GPIO_enPin4,
    GPIO_enPin5,
    GPIO_enPin6,
    GPIO_enPin7,
    GPIO_enTotalPinNumber
}GPIO_tenPinNumber;

typedef enum
{
    GPIO_enInputPullDown = 0,
    GPIO_enInputPullUp,
    GPIO_enInputPullDisable,
    GPIO_enOutputPushPull,
    GPIO_enOutputOpenDrain,
    GPIO_enTotalPinMode
}GPIO_tenPinMode;

typedef struct
{
    uint8 u8PinBumber;
    uint8 u8PinMode;
    uint8 u8PinInitState;
    uint8 u8Padding;
}GPIO_tstPortConfig;

#endif /* GPIO_def_H_ */
