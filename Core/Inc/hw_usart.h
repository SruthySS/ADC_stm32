/*
 * hw_usart.h
 *
 *  Created on: Jun 29, 2020
 *      Author: Ajmi
 */

#ifndef CORE_INC_HW_USART_H_
#define CORE_INC_HW_USART_H_
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern UART_HandleTypeDef huart1;

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_USART1_UART_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* CORE_INC_HW_USART_H_ */
