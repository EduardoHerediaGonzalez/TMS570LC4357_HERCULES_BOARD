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
#define GPIO_s_nCLK_CTRL_REG_ADDR               (SYSTEM_PERIPHERALS_FRAME1_nBASE_ADDRESS + 0x0007FFD0)
#define GPIO_s_nPERIPHERAL_POWER_DOWN_REG_ADDR  (PERIPHERALS_FRAME3_nBASE_ADDRESS + 0x00F780A8)
#define GPIO_s_nPORTA_BASE_ADDR                 (GIO_nBASE_ADDRESS + 0x00000034)
#define GPIO_s_nPORTB_BASE_ADDR                 (GIO_nBASE_ADDRESS + 0x00000054)
#define GPIO_s_nPENA_BIT                        (8U)
#define GPIO_s_nRESET_BIT                       (0U)
#define GPIO_s_nPS16_BIT                        (16U)

/* internal__types */
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
static uint8 GPIO_s_u8ModuleInitState = (uint8)STD_nOFF;
static volatile uint32 *GPIO_s_pu32GIOGCR0 = (uint32*)GIO_nBASE_ADDRESS;
static volatile uint32 *GPIO_s_pu32CLKCTRL = (uint32*)GPIO_s_nCLK_CTRL_REG_ADDR;
static volatile uint32 *GPIO_s_pu32PSPWDDWNCL2 = (uint32*)GPIO_s_nPERIPHERAL_POWER_DOWN_REG_ADDR;
static volatile GPIO_s_tstCtrlRegs *GPIO_s_pstPort = (GPIO_s_tstCtrlRegs*)NULL;
static GPIO_tstPortConfig GPIO_s_astPortA[GPIO_enTotalPinNumber] = GPIO_PORTA_CONFIG_TABLE_cfg;
static GPIO_tstPortConfig GPIO_s_astPortB[GPIO_enTotalPinNumber] = GPIO_PORTA_CONFIG_TABLE_cfg;

/* private__functions */
static void GPIO_s_vConfigPort(GPIO_tstPortConfig* pstPort)
{
    uint8 u8PinIndex;

    for(u8PinIndex = (uint8)0U; u8PinIndex < (uint8)GPIO_enTotalPinNumber ; u8PinIndex++)
    {

    }
}

/* public_functions */
void GPIO_vInit(void)
{
    *GPIO_s_pu32CLKCTRL |= (1<<GPIO_s_nPENA_BIT);   /* Release of the peripheral */
    *GPIO_s_pu32PSPWDDWNCL2 |= (1<<GPIO_s_nPS16_BIT);   /* Enable clock of the peripheral */
    *GPIO_s_pu32GIOGCR0 |= (1<<GPIO_s_nRESET_BIT);  /* Bring out of reset of the peripheral */

    if(GPIO_s_u8ModuleInitState == (uint8)STD_nOFF)
    {
        /* Configuration of PORTA */
        GPIO_s_vConfigPort(GPIO_s_astPortA);

        /* Configuration of PORTB */
        GPIO_s_vConfigPort(GPIO_s_astPortB);

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
