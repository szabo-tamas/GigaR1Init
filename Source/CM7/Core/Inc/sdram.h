/*
 * sdram.h
 *
 *  Created on: May 15, 2023
 *      Author: Tamas Szabo
 */

#ifndef INC_SDRAM_H_
#define INC_SDRAM_H_

#define SDRAM_START_ADDRESS         ( 0xC0000000 )
#define SDRAM_END_ADDRESS           ( 0xC0800000 )

#define FMC_SDRAM_BANK              ( FMC_SDRAM_BANK1 )
#define FMC_SDRAM_CMD_TARGET_BANK   ( FMC_SDRAM_CMD_TARGET_BANK1 )

#define SDRAM_TIMING_TMRD           ( 2 )
#define SDRAM_TIMING_TXSR           ( 7 )
#define SDRAM_TIMING_TRAS           ( 5 )
#define SDRAM_TIMING_TRC            ( 7 )
#define SDRAM_TIMING_TWR            ( 2 )
#define SDRAM_TIMING_TRP            ( 3 )
#define SDRAM_TIMING_TRCD           ( 3 )
#define SDRAM_REFRESH_RATE          ( 64 )
#define SDRAM_FREQUENCY             ( 100000 )
#define SDRAM_REFRESH_CYCLES        ( 4096 )
#define REFRESH_COUNT               ( SDRAM_REFRESH_RATE * SDRAM_FREQUENCY / SDRAM_REFRESH_CYCLES - 20 )
#define SDRAM_AUTOREFRESH_NUM       ( 8 )

#define HW_SDRAM_SIZE               ( 8 * 1024 * 1024 )



typedef enum
{
  SDRAM_OK            = 0x00,
  SDRAM_ERR_DATA_BUS  = 0x01,
  SDRAM_ERR_ADDR_BUS  = 0x02,
  SDRAM_ERR_INTEGRITY = 0x03
} SDRAM_StatusTypeDef;

extern void vSDRAM_Init(SDRAM_HandleTypeDef *hsdram, FMC_SDRAM_CommandTypeDef *command);
extern uint8_t ucSDRAM_Test( );
#endif /* INC_SDRAM_H_ */
