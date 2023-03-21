################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Device/mpu_M55_HP.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Device/startup_M55_HP.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Device/system_M55_HP.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Device/system_utils.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Device/tgu_M55_HP.c 

OBJS += \
./alif/boards/ensemble-devkit/aws_tests/application_code/Device/mpu_M55_HP.o \
./alif/boards/ensemble-devkit/aws_tests/application_code/Device/startup_M55_HP.o \
./alif/boards/ensemble-devkit/aws_tests/application_code/Device/system_M55_HP.o \
./alif/boards/ensemble-devkit/aws_tests/application_code/Device/system_utils.o \
./alif/boards/ensemble-devkit/aws_tests/application_code/Device/tgu_M55_HP.o 

C_DEPS += \
./alif/boards/ensemble-devkit/aws_tests/application_code/Device/mpu_M55_HP.d \
./alif/boards/ensemble-devkit/aws_tests/application_code/Device/startup_M55_HP.d \
./alif/boards/ensemble-devkit/aws_tests/application_code/Device/system_M55_HP.d \
./alif/boards/ensemble-devkit/aws_tests/application_code/Device/system_utils.d \
./alif/boards/ensemble-devkit/aws_tests/application_code/Device/tgu_M55_HP.d 


# Each subdirectory must supply rules for building sources it contributes
alif/boards/ensemble-devkit/aws_tests/application_code/Device/mpu_M55_HP.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Device/mpu_M55_HP.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

alif/boards/ensemble-devkit/aws_tests/application_code/Device/startup_M55_HP.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Device/startup_M55_HP.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

alif/boards/ensemble-devkit/aws_tests/application_code/Device/system_M55_HP.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Device/system_M55_HP.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

alif/boards/ensemble-devkit/aws_tests/application_code/Device/system_utils.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Device/system_utils.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

alif/boards/ensemble-devkit/aws_tests/application_code/Device/tgu_M55_HP.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Device/tgu_M55_HP.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


