################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Driver_PINMUX_AND_PINPAD.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/NetworkInterface.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/entropy_hardware_poll.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/main.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/phyHandling.c 

OBJS += \
./alif/boards/ensemble-devkit/aws_tests/application_code/Driver_PINMUX_AND_PINPAD.o \
./alif/boards/ensemble-devkit/aws_tests/application_code/NetworkInterface.o \
./alif/boards/ensemble-devkit/aws_tests/application_code/entropy_hardware_poll.o \
./alif/boards/ensemble-devkit/aws_tests/application_code/main.o \
./alif/boards/ensemble-devkit/aws_tests/application_code/phyHandling.o 

C_DEPS += \
./alif/boards/ensemble-devkit/aws_tests/application_code/Driver_PINMUX_AND_PINPAD.d \
./alif/boards/ensemble-devkit/aws_tests/application_code/NetworkInterface.d \
./alif/boards/ensemble-devkit/aws_tests/application_code/entropy_hardware_poll.d \
./alif/boards/ensemble-devkit/aws_tests/application_code/main.d \
./alif/boards/ensemble-devkit/aws_tests/application_code/phyHandling.d 


# Each subdirectory must supply rules for building sources it contributes
alif/boards/ensemble-devkit/aws_tests/application_code/Driver_PINMUX_AND_PINPAD.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Driver_PINMUX_AND_PINPAD.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

alif/boards/ensemble-devkit/aws_tests/application_code/NetworkInterface.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/NetworkInterface.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

alif/boards/ensemble-devkit/aws_tests/application_code/entropy_hardware_poll.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/entropy_hardware_poll.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

alif/boards/ensemble-devkit/aws_tests/application_code/main.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/main.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

alif/boards/ensemble-devkit/aws_tests/application_code/phyHandling.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/phyHandling.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


