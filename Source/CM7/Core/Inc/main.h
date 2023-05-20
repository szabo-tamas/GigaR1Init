/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define D7_Pin GPIO_PIN_4
#define D7_GPIO_Port GPIOB
#define BLE_ON_Pin GPIO_PIN_10
#define BLE_ON_GPIO_Port GPIOA
#define BOOT_IN_Pin GPIO_PIN_13
#define BOOT_IN_GPIO_Port GPIOC
#define WIFI_HWAKE_Pin GPIO_PIN_8
#define WIFI_HWAKE_GPIO_Port GPIOI
#define RGB_GREEN_Pin GPIO_PIN_13
#define RGB_GREEN_GPIO_Port GPIOJ
#define RGB_RED_Pin GPIO_PIN_12
#define RGB_RED_GPIO_Port GPIOI
#define BLE_HWAKE_Pin GPIO_PIN_3
#define BLE_HWAKE_GPIO_Port GPIOG
#define A6_Pin GPIO_PIN_0
#define A6_GPIO_Port GPIOC
#define A5_Pin GPIO_PIN_2
#define A5_GPIO_Port GPIOC
#define A4_Pin GPIO_PIN_3
#define A4_GPIO_Port GPIOC
#define CAMERA_XCLK_Pin GPIO_PIN_9
#define CAMERA_XCLK_GPIO_Port GPIOJ
#define D3_Pin GPIO_PIN_2
#define D3_GPIO_Port GPIOA
#define A7_Pin GPIO_PIN_0
#define A7_GPIO_Port GPIOA
#define D4_Pin GPIO_PIN_8
#define D4_GPIO_Port GPIOJ
#define WIFI_ON_Pin GPIO_PIN_10
#define WIFI_ON_GPIO_Port GPIOB
#define A8_Pin GPIO_PIN_2
#define A8_GPIO_Port GPIOC
#define A9_Pin GPIO_PIN_3
#define A9_GPIO_Port GPIOC
#define D5_Pin GPIO_PIN_7
#define D5_GPIO_Port GPIOA
#define D6_Pin GPIO_PIN_13
#define D6_GPIO_Port GPIOD
#define A11_Pin GPIO_PIN_0
#define A11_GPIO_Port GPIOA
#define A10_Pin GPIO_PIN_1
#define A10_GPIO_Port GPIOA
#define DAC1_Pin GPIO_PIN_5
#define DAC1_GPIO_Port GPIOA
#define A0_Pin GPIO_PIN_4
#define A0_GPIO_Port GPIOC
#define A3_Pin GPIO_PIN_1
#define A3_GPIO_Port GPIOB
#define D2_Pin GPIO_PIN_3
#define D2_GPIO_Port GPIOA
#define DAC0_Pin GPIO_PIN_4
#define DAC0_GPIO_Port GPIOA
#define A1_Pin GPIO_PIN_5
#define A1_GPIO_Port GPIOC
#define A2_Pin GPIO_PIN_0
#define A2_GPIO_Port GPIOB
#define BLE_DWAKE_Pin GPIO_PIN_7
#define BLE_DWAKE_GPIO_Port GPIOH

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
