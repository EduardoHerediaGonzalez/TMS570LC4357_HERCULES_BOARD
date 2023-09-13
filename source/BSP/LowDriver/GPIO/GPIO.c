/**
 * Copyright © 2023 
 *
 * @file    GPIO.c
 * @note
 *        ______________      
 *        Eduardo Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   GPIO implementation file
 * @version 1.0.0
 *     
 */
/* system headers */
#include "PLATFORM_TYPES_def.h"
#include "STD_TYPES_def.h"
#include "TMS570LC4357_def.h"

/* used headers */

/* own headers */
#include "GPIO_def.h"
#include "GPIO_cfg.h"
#include "GPIO.h"

/*[EXPORTED]****************************************************************************/

/* public_variables */

/*[INTERNAL]****************************************************************************/

/* internal__pre-processor macros */
#define GPIO_s_nBASE_ADDRESS    ()

/* internal__types */
static uint8 GPIO_s_u8ModuleInitState = (uint8)STD_nOFF;
static volatile uint32 *GPIO_s_pu32GIOGCR0 = (uint32*)GIO_nBASE_ADDRESS;

typedef struct
{
    uint32 GIODIR;
    uint32 GIODIN;
    uint32 GIODOUT;
    uint32 GIODSET;
    uint32 GIODCLR;
    uint32 GIOPDR;
    uint32 GIOPULDIS;
    uint32 GIOPSL;
}volatile GPIO_s_tstCtrlRegs;

/* private__variables */

/* private__functions */

/* public_functions */
void GPIO_vInit(void)
{
    if(GPIO_s_u8ModuleInitState == (uint8)STD_nOFF)
    {

        GPIO_s_u8ModuleInitState = (uint8)STD_nON;
    }
    else
    {
        /* Nothing to do */
    }
}

uint8 GPIO_u8SetState(uint8 u8Port, uint8 u8Pin, uint8 u8State)
{
    uint8 u8RetValue = (uint8)STD_nNOT_OK;

    return u8RetValue;
}

uint8 GPIO_u8GetState(uint8 u8Port, uint8 u8Pin)
{
    uint8 u8RetValue = (uint8)STD_nUNDEFINED;

    return u8RetValue;
}

GPIO_tstPortConfig* GPIO_u8GetPortConfig(uint8 u8Port)
{
    GPIO_tstPortConfig *pstRetValue = (GPIO_tstPortConfig*)NULL;

    return pstRetValue;
}

/* EOF */
