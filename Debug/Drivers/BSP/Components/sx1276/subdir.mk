################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/Components/sx1276/sx1276.c 

OBJS += \
./Drivers/BSP/Components/sx1276/sx1276.o 

C_DEPS += \
./Drivers/BSP/Components/sx1276/sx1276.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/sx1276/sx1276.o: ../Drivers/BSP/Components/sx1276/sx1276.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DUSE_HAL_DRIVER -DLOW_POWER_DISABLE -DSTM32L072xx -DDEBUG -DUSE_B_L072Z_LRWAN1 -DREGION_IN865 -c -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32L0xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32L0xx/Include -I../Drivers/STM32L0xx_HAL_Driver/Inc/Legacy -I"/home/sruthy/Desktop/_new_test_5/Drivers/BSP/B-L072Z-LRWAN1" -I"/home/sruthy/Desktop/_new_test_5/Drivers/BSP/CMWX1ZZABZ-0xx" -I"/home/sruthy/Desktop/_new_test_5/Drivers/BSP/Components/Common" -I"/home/sruthy/Desktop/_new_test_5/Drivers/BSP/Components/sx1276" -I"/home/sruthy/Desktop/_new_test_5/Middleware/LoRaWAN/Crypto" -I"/home/sruthy/Desktop/_new_test_5/Middleware/LoRaWAN/Mac" -I"/home/sruthy/Desktop/_new_test_5/Middleware/LoRaWAN/Mac/region" -I"/home/sruthy/Desktop/_new_test_5/Middleware/LoRaWAN/Patterns/Basic" -I"/home/sruthy/Desktop/_new_test_5/Middleware/LoRaWAN/Utilities" -I"/home/sruthy/Desktop/_new_test_5/Middleware/LoRaWAN/Phy" -I"/home/sruthy/Desktop/_new_test_5/Core/Inc/bmp280" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/Components/sx1276/sx1276.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

