#ifndef CORE_INC_HW_I2C_H_
#define CORE_INC_HW_I2C_H_
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern I2C_HandleTypeDef hi2c1;

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_I2C1_Init(void);
void HAL_I2C_MspInit(I2C_HandleTypeDef*);
void HAL_I2C_MspDeInit(I2C_HandleTypeDef*);
int i2cchipid();

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* CORE_INC_HW_USART_H_ */
