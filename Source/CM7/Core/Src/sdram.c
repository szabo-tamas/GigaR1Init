/*
 * sdram.c
 *
 *  Created on: May 15, 2023
 *      Author: Tamas Szabo
 */

#include "stm32h7xx_hal.h"
#include "sdram.h"
#include "memtest.h"

void vSDRAM_Init(SDRAM_HandleTypeDef *pHdrSdram, FMC_SDRAM_CommandTypeDef *pCommand);
uint8_t __attribute__((optimize("O0"))) ucSDRAM_Test( );

void vSDRAM_Init(SDRAM_HandleTypeDef *pHdrSdram, FMC_SDRAM_CommandTypeDef *pCommand)
{
    /*  the SDRAM mode register  */
    uint32_t ulTempModeReg = 0x220;

    /*  Enable the clock  */
    pCommand->CommandMode           = FMC_SDRAM_CMD_CLK_ENABLE;
    pCommand->CommandTarget         = FMC_SDRAM_CMD_TARGET_BANK;
    pCommand->AutoRefreshNumber     = 1;
    pCommand->ModeRegisterDefinition = 0;
    HAL_SDRAM_SendCommand(pHdrSdram, pCommand, 0x1000);

    /*  100ms delay  */
    HAL_Delay(100);

    /*  Precharge All  */
    pCommand->CommandMode           = FMC_SDRAM_CMD_PALL;
    pCommand->CommandTarget         = FMC_SDRAM_CMD_TARGET_BANK;
    pCommand->AutoRefreshNumber     = 1;
    pCommand->ModeRegisterDefinition = 0;
    HAL_SDRAM_SendCommand(pHdrSdram, pCommand, 0x1000);

    /*  Set up auto refresh  */
    pCommand->CommandMode           = FMC_SDRAM_CMD_AUTOREFRESH_MODE;
    pCommand->CommandTarget         = FMC_SDRAM_CMD_TARGET_BANK;
    pCommand->AutoRefreshNumber     = SDRAM_AUTOREFRESH_NUM;
    pCommand->ModeRegisterDefinition = 0;
    HAL_SDRAM_SendCommand(pHdrSdram, pCommand, 0x1000);

    /*  Set the mode register  */
    pCommand->CommandMode           = FMC_SDRAM_CMD_LOAD_MODE;
    pCommand->CommandTarget         = FMC_SDRAM_CMD_TARGET_BANK;
    pCommand->AutoRefreshNumber     = 1;
    pCommand->ModeRegisterDefinition = ulTempModeReg;
    HAL_SDRAM_SendCommand(pHdrSdram, pCommand, 0x1000);

    /*  Program refresh rate  */
    HAL_SDRAM_ProgramRefreshRate(pHdrSdram, REFRESH_COUNT);
}

uint8_t ucSDRAM_Test( )
{
    uint32_t ulTempVal = 0x00;
    uint32_t* pulTempPtr = NULL;

    /*  Data bus test  */
    ulTempVal = memTestDataBus( (datum*)SDRAM_START_ADDRESS );
    if( ulTempVal != 0 )
    {
        return( SDRAM_ERR_DATA_BUS );
    }

    /*  Address bus test  */
    pulTempPtr = memTestAddressBus( (datum*)SDRAM_START_ADDRESS, HW_SDRAM_SIZE );
    if( pulTempPtr != NULL )
    {
        return( SDRAM_ERR_ADDR_BUS );
    }

    /*  Check integrity  */
    pulTempPtr = memTestDevice( (datum*)SDRAM_START_ADDRESS, HW_SDRAM_SIZE );
    if( pulTempPtr != NULL )
    {
        return( SDRAM_ERR_INTEGRITY );
    }

    return SDRAM_OK;
}
