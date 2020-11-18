/*
 * hw_bmeMain.h
 *
 *  Created on: Jun 29, 2020
 *      Author: Ajmi
 */

#ifndef CORE_INC_HW__bmeMain_H_
#define CORE_INC_HW__bmeMain_H_
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */
 typedef struct
 {
  float pressurei;    /* in mbar */
  float temperaturei; /* in �C   */
  float humidityi;    /* in %    */
   /**more may be added*/
  } sensor1_t;
/* USER CODE END Includes */


/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */
void BMEinit(void);
void BMERead(sensor1_t *sensor_data);
/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* CORE_INC_HW_USART_H_ */
