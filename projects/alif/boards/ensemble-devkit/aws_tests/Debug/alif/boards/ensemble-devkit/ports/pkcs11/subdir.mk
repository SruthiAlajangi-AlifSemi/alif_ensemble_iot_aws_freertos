################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/ports/pkcs11/core_pkcs11_pal.c 

OBJS += \
./alif/boards/ensemble-devkit/ports/pkcs11/core_pkcs11_pal.o 

C_DEPS += \
./alif/boards/ensemble-devkit/ports/pkcs11/core_pkcs11_pal.d 


# Each subdirectory must supply rules for building sources it contributes
alif/boards/ensemble-devkit/ports/pkcs11/core_pkcs11_pal.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/ports/pkcs11/core_pkcs11_pal.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


