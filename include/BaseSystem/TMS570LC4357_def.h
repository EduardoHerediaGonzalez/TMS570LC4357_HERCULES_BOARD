/**
 * Copyright © 2023 
 *
 * @file    TMS570LC4357_def.h
 * @note
 *        ______________      
 *        Eduardo Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   TMS570LC4357_def 
 * @version No oficial
 *     
 *     Device Memory Map
 *
 *                      Base Address    Size    Description
 *                      ------------------------------------------------------
 *                      0x00000000      4MB     Flash
 *                      0x00400000      NA      Reserved
 *                      0x08000000      512KB   RAM
 *                      0x08080000      NA      Reserved
 *                      0x08400000      512KB   RAM-ECC
 *                      0x08480000      NA      Reserved
 *                      0x30000000      64KB    R5F Cache
 *                      0x34000000      NA      Reserved
 *                      0x38000000      NA      Reserved
 *                      0x60000000      48MB    EMIF RAM
 *                      0x70000000      NA      Reserved
 *                      0x80000000      128MB   EMIF SDRAM
 *                      0x88000000      NA      Reserved
 *                      0xF0000000      NA      Flash ECC, OTP & EEPROM
 *                      0xF0600000      NA      Reserved
 *                      0xFB000000      512KB   CRC2
 *                      0xFC000000      NA      Peripherals - Frame 2
 *                      0xFD000000      NA      Reserved
 *                      0xFE000000      512KB   CRC1
 *                      0xFF000000      NA      Peripherals - Frame 3
 *                      0xFFF80000      NA      SYSTEM Peripherals - Frame 1
 *
 */

#ifndef TMS570LC4357_def_H_
#define TMS570LC4357_def_H_

/* system headers */

/* exported macros */
#define FLASH_nBASE_ADDRESS                         (0x00000000)
#define RAM_nBASE_ADDRESS                           (0x08000000)
#define RAM_ECC_nBASE_ADDRESS                       (0x08400000)
#define R5F_CACHE_nBASE_ADDRESS                     (0x30000000)
#define EMIF_RAM_nBASE_ADDRESS                      (0x60000000)
#define EMIF_SDRAM_nBASE_ADDRESS                    (0x80000000)
#define FLASH_ECC_OTP_EEPROM_nBASE_ADDRESS          (0xF0000000)
#define CRC2_nBASE_ADDRESS                          (0xFB000000)
#define PERIPHERALS_FRAME2_nBASE_ADDRESS            (0xFC000000)
#define CRC1_nBASE_ADDRESS                          (0xFE000000)
#define PERIPHERALS_FRAME3_nBASE_ADDRESS            (0xFF000000)
#define SYSTEM_PERIPHERALS_FRAME1_nBASE_ADDRESS     (0xFFF80000)

#define GIO_nBASE_ADDRESS                           (PERIPHERALS_FRAME3_nBASE_ADDRESS + 0x00F7BC00)

/* exported types */

#endif /* TMS570LC4357_def_H_ */
