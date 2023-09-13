/**
 * Copyright © 2023 
 *
 * @file    GPIO.H
 * @note
 *        ______________      
 *        Eduardo Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   GPIO definition file
 * @version 1.0.0
 *     
 */

#ifndef GPIO_H_
#define GPIO_H_

/* system headers */
#include "PLATFORM_TYPES_def.h"

/* own headers */
#include "GPIO_def.h"

/*****************************************************************************/
/* helper macros */

/* exported variables */

/* exported functions */

/** @fn     void GPIO_vInit(void)
 *
 *  @brief  This function initializes the GIO module and set the GIO ports
 *          to the values specifies on GPIO_PORTX_CONFIG_TABLE_cfg, where
 *          X = {A,B}.
 */
extern void GPIO_vInit(void);

/** @fn     uint8 GPIO_u8SetState(uint8 u8Port, uint8 u8Pin, uint8 u8State)
 *
 *  @brief  This function set the value of the pin of the port selected.
 *
 *  @param[in] u8Port:  {[GPIO_enPortA, GPIO_enTotalPortName)}
 *  @param[in] u8Pin:   {[GPIO_enPin0, GPIO_enTotalPinNumber)}
 *  @param[in] u8State: {STD_nLOW, STD_nHIGH}
 *  @param[out] u8RetValue: {STD_nOK, STD_nNOT_OK}
 */
extern uint8 GPIO_u8SetState(uint8 u8Port, uint8 u8Pin, uint8 u8State);

/** @fn     uint8 GPIO_u8GetState(uint8 u8Port, uint8 u8Pin)
 *
 *  @brief  This function get the value of the pin of the port selected.
 *
 *  @param[in] u8Port:  {[GPIO_enPortA, GPIO_enTotalPortName)}
 *  @param[in] u8Pin:   {[GPIO_enPin0, GPIO_enTotalPinNumber)}
 *  @param[out] u8RetValue: {STD_nLOW, STD_nHIGH}
 */
extern uint8 GPIO_u8GetState(uint8 u8Port, uint8 u8Pin);

/** @fn     GPIO_tstPortConfig* GPIO_u8GetPortConfig(uint8 u8Port)
 *
 *  @brief  This function get the configuration of all the pins of the port selected.
 *
 *  @param[in] u8Port:  {[GPIO_enPortA, GPIO_enTotalPortName)}
 *  @param[out] pstRetValue:
 */
extern GPIO_tstPortConfig* GPIO_u8GetPortConfig(uint8 u8Port);

#endif /* GPIO_H_ */
