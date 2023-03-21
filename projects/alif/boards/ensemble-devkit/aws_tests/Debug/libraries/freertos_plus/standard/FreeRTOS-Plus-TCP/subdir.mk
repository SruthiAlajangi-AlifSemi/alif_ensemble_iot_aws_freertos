################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_ARP.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_DHCP.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_DNS.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_IP.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_Sockets.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_Stream_Buffer.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_TCP_IP.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_TCP_WIN.c \
/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_UDP_IP.c 

OBJS += \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_ARP.o \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_DHCP.o \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_DNS.o \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_IP.o \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_Sockets.o \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_Stream_Buffer.o \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_TCP_IP.o \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_TCP_WIN.o \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_UDP_IP.o 

C_DEPS += \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_ARP.d \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_DHCP.d \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_DNS.d \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_IP.d \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_Sockets.d \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_Stream_Buffer.d \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_TCP_IP.d \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_TCP_WIN.d \
./libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_UDP_IP.d 


# Each subdirectory must supply rules for building sources it contributes
libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_ARP.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_ARP.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_DHCP.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_DHCP.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_DNS.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_DNS.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_IP.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_IP.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_Sockets.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_Sockets.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_Stream_Buffer.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_Stream_Buffer.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_TCP_IP.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_TCP_IP.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_TCP_WIN.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_TCP_WIN.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_UDP_IP.o: /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/FreeRTOS_UDP_IP.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DCPU=M55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../libraries/3rdparty/unity/extras/fixture/src -I./../../../../../../libraries/3rdparty/unity/src -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


