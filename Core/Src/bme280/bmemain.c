/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stdio.h"
#include "string.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "bmp280.h"
#include "bmeMain.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
#ifdef __GNUC__
  /* With GCC, small printf (option LD Linker->Libraries->Small printf
     set to 'Yes') calls __io_putchar() */
  #define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
  #define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */
/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
BMP280_HandleTypedef bmp280;
sensor1_t sensor_data;
I2C_HandleTypeDef hi2c1;
float pressure, temperature, humidity;

//uint16_t size;
//uint8_t Data[256];
void BMEinit()
{
	/* USER CODE BEGIN 2 */
	  bmp280_init_default_params(&bmp280.params);
	  bmp280.addr = BMP280_I2C_ADDRESS_0;
	  bmp280.i2c = &hi2c1;

	  while (!bmp280_init(&bmp280, &bmp280.params)) {
	    	//	size = sprintf((char *)Data, "BMP280 initialization failed\n");
	    	//	HAL_UART_Transmit(&huart2, Data, size, 1000);
	    	//	HAL_Delay(2000);
	    	}
	    //	bool bme280p = bmp280.id == BME280_CHIP_ID;
	    	//size = sprintf((char *)Data, "BMP280: found %s\n", bme280p ? "BME280" : "BMP280");
	    	//HAL_UART_Transmit(&huart2, Data, size, 1000);
	  /* USER CODE END 2 */

}
void BMERead(sensor1_t *sensor_data)
{
	 /* USER CODE BEGIN 3 */
		 	  	bmp280_read_float(&bmp280, &temperature, &pressure, &humidity);
		 	  	sensor_data->pressurei=pressure;
		 	  	sensor_data->temperaturei=temperature;
		 	  	sensor_data->humidityi=humidity;


	  /* USER CODE END 3 */
}
