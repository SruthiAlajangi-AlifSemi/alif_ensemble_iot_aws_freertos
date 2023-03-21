################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/c_sdk/standard/common/iot_init.c 

OBJS += \
./libraries/c_sdk/standard/common/iot_init.o 

C_DEPS += \
./libraries/c_sdk/standard/common/iot_init.d 


# Each subdirectory must supply rules for building sources it contributes
libraries/c_sdk/standard/common/iot_init.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/c_sdk/standard/common/iot_init.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


