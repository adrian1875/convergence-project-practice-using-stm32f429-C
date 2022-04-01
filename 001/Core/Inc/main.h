/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define led1_Pin GPIO_PIN_0
#define led1_GPIO_Port GPIOF
#define led2_Pin GPIO_PIN_1
#define led2_GPIO_Port GPIOF
#define led3_Pin GPIO_PIN_2
#define led3_GPIO_Port GPIOF
#define led4_Pin GPIO_PIN_3
#define led4_GPIO_Port GPIOF
#define led5_Pin GPIO_PIN_4
#define led5_GPIO_Port GPIOF
#define led6_Pin GPIO_PIN_5
#define led6_GPIO_Port GPIOF
#define led7_Pin GPIO_PIN_6
#define led7_GPIO_Port GPIOF
#define led8_Pin GPIO_PIN_7
#define led8_GPIO_Port GPIOF
#define pb1_Pin GPIO_PIN_8
#define pb1_GPIO_Port GPIOF
#define pb1_EXTI_IRQn EXTI9_5_IRQn
#define pb2_Pin GPIO_PIN_9
#define pb2_GPIO_Port GPIOF
#define pb2_EXTI_IRQn EXTI9_5_IRQn
#define pb3_Pin GPIO_PIN_10
#define pb3_GPIO_Port GPIOF
#define pb3_EXTI_IRQn EXTI15_10_IRQn
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOH
#define RMII_MDC_Pin GPIO_PIN_1
#define RMII_MDC_GPIO_Port GPIOC
#define RMII_REF_CLK_Pin GPIO_PIN_1
#define RMII_REF_CLK_GPIO_Port GPIOA
#define RMII_MDIO_Pin GPIO_PIN_2
#define RMII_MDIO_GPIO_Port GPIOA
#define RMII_CRS_DV_Pin GPIO_PIN_7
#define RMII_CRS_DV_GPIO_Port GPIOA
#define RMII_RXD0_Pin GPIO_PIN_4
#define RMII_RXD0_GPIO_Port GPIOC
#define RMII_RXD1_Pin GPIO_PIN_5
#define RMII_RXD1_GPIO_Port GPIOC
#define LD1_Pin GPIO_PIN_0
#define LD1_GPIO_Port GPIOB
#define pb4_Pin GPIO_PIN_11
#define pb4_GPIO_Port GPIOF
#define pb4_EXTI_IRQn EXTI15_10_IRQn
#define pb5_Pin GPIO_PIN_12
#define pb5_GPIO_Port GPIOF
#define pb5_EXTI_IRQn EXTI15_10_IRQn
#define pb6_Pin GPIO_PIN_13
#define pb6_GPIO_Port GPIOF
#define pb6_EXTI_IRQn EXTI15_10_IRQn
#define pb7_Pin GPIO_PIN_14
#define pb7_GPIO_Port GPIOF
#define pb7_EXTI_IRQn EXTI15_10_IRQn
#define pb8_Pin GPIO_PIN_15
#define pb8_GPIO_Port GPIOF
#define pb8_EXTI_IRQn EXTI15_10_IRQn
#define RMII_TXD1_Pin GPIO_PIN_13
#define RMII_TXD1_GPIO_Port GPIOB
#define LD3_Pin GPIO_PIN_14
#define LD3_GPIO_Port GPIOB
#define STLK_RX_Pin GPIO_PIN_8
#define STLK_RX_GPIO_Port GPIOD
#define STLK_TX_Pin GPIO_PIN_9
#define STLK_TX_GPIO_Port GPIOD
#define USB_PowerSwitchOn_Pin GPIO_PIN_6
#define USB_PowerSwitchOn_GPIO_Port GPIOG
#define USB_OverCurrent_Pin GPIO_PIN_7
#define USB_OverCurrent_GPIO_Port GPIOG
#define USB_SOF_Pin GPIO_PIN_8
#define USB_SOF_GPIO_Port GPIOA
#define USB_VBUS_Pin GPIO_PIN_9
#define USB_VBUS_GPIO_Port GPIOA
#define USB_ID_Pin GPIO_PIN_10
#define USB_ID_GPIO_Port GPIOA
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define RMII_TX_EN_Pin GPIO_PIN_11
#define RMII_TX_EN_GPIO_Port GPIOG
#define RMII_TXD0_Pin GPIO_PIN_13
#define RMII_TXD0_GPIO_Port GPIOG
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
