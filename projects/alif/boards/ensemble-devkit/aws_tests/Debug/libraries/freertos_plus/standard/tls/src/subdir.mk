################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/tls/src/iot_tls.c 

OBJS += \
./libraries/freertos_plus/standard/tls/src/iot_tls.o 

C_DEPS += \
./libraries/freertos_plus/standard/tls/src/iot_tls.d 


# Each subdirectory must supply rules for building sources it contributes
libraries/freertos_plus/standard/tls/src/iot_tls.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/tls/src/iot_tls.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


