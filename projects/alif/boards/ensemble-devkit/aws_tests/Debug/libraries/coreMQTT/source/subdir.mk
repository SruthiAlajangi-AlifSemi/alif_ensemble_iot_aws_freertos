################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/coreMQTT/source/core_mqtt.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/coreMQTT/source/core_mqtt_serializer.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/coreMQTT/source/core_mqtt_state.c 

OBJS += \
./libraries/coreMQTT/source/core_mqtt.o \
./libraries/coreMQTT/source/core_mqtt_serializer.o \
./libraries/coreMQTT/source/core_mqtt_state.o 

C_DEPS += \
./libraries/coreMQTT/source/core_mqtt.d \
./libraries/coreMQTT/source/core_mqtt_serializer.d \
./libraries/coreMQTT/source/core_mqtt_state.d 


# Each subdirectory must supply rules for building sources it contributes
libraries/coreMQTT/source/core_mqtt.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/coreMQTT/source/core_mqtt.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

libraries/coreMQTT/source/core_mqtt_serializer.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/coreMQTT/source/core_mqtt_serializer.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

libraries/coreMQTT/source/core_mqtt_state.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/coreMQTT/source/core_mqtt_state.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


