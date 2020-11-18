################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Middleware/LoRaWAN/Utilities/subdir.mk
-include Middleware/LoRaWAN/Patterns/Basic/subdir.mk
-include Middleware/LoRaWAN/Mac/region/subdir.mk
-include Middleware/LoRaWAN/Mac/subdir.mk
-include Middleware/LoRaWAN/Crypto/subdir.mk
-include Drivers/STM32L0xx_HAL_Driver/Src/subdir.mk
-include Drivers/BSP/Components/sx1276/subdir.mk
-include Drivers/BSP/Components/lps25hb/subdir.mk
-include Drivers/BSP/Components/lps22hb/subdir.mk
-include Drivers/BSP/CMWX1ZZABZ-0xx/subdir.mk
-include Drivers/BSP/B-L072Z-LRWAN1/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/bme280/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
_new_test_5.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
_new_test_5.list \


# All Target
all: _new_test_5.elf secondary-outputs

# Tool invocations
_new_test_5.elf: $(OBJS) $(USER_OBJS) /home/sruthy/Desktop/_new_test_5/STM32L072CZYX_FLASH.ld
	arm-none-eabi-gcc -o "_new_test_5.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m0plus -T"/home/sruthy/Desktop/_new_test_5/STM32L072CZYX_FLASH.ld" --specs=nosys.specs -Wl,-Map="_new_test_5.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

_new_test_5.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "_new_test_5.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
