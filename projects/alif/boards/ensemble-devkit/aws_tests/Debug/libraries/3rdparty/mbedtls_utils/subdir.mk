################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/3rdparty/mbedtls_utils/mbedtls_error.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/3rdparty/mbedtls_utils/mbedtls_utils.c 

OBJS += \
./libraries/3rdparty/mbedtls_utils/mbedtls_error.o \
./libraries/3rdparty/mbedtls_utils/mbedtls_utils.o 

C_DEPS += \
./libraries/3rdparty/mbedtls_utils/mbedtls_error.d \
./libraries/3rdparty/mbedtls_utils/mbedtls_utils.d 


# Each subdirectory must supply rules for building sources it contributes
libraries/3rdparty/mbedtls_utils/mbedtls_error.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/3rdparty/mbedtls_utils/mbedtls_error.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

libraries/3rdparty/mbedtls_utils/mbedtls_utils.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/3rdparty/mbedtls_utils/mbedtls_utils.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


