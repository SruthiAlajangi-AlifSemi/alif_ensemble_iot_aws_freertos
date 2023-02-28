################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/sruthi/sruthi_github_prv/repo_project_test1/alif_ensemble_iot_aws_freertos/libraries/abstractions/pkcs11/corePKCS11/source/portable/mbedtls/core_pkcs11_mbedtls.c 

OBJS += \
./libraries/abstractions/pkcs11/corePKCS11/source/portable/mbedtls/core_pkcs11_mbedtls.o 

C_DEPS += \
./libraries/abstractions/pkcs11/corePKCS11/source/portable/mbedtls/core_pkcs11_mbedtls.d 


# Each subdirectory must supply rules for building sources it contributes
libraries/abstractions/pkcs11/corePKCS11/source/portable/mbedtls/core_pkcs11_mbedtls.o: /home/sruthi/sruthi_github_prv/repo_project_test1/alif_ensemble_iot_aws_freertos/libraries/abstractions/pkcs11/corePKCS11/source/portable/mbedtls/core_pkcs11_mbedtls.c
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler 6'
	armclang --target=arm-arm-none-eabi -mcpu=cortex-m55 -mfloat-abi=hard -mthumb -mlittle-endian -mcmse -DM55_HP -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -I./../../../../../../FreeRTOS-Kernel/include -I./../../../../../../libraries/abstractions/transport/secure_sockets -I./../../../../../../demos/common/pkcs11_helpers -I./../../../../../../demos/network_manager -I./../../../../../../demos/dev_mode_key_provisioning/include -I./../../../../../../libraries/abstractions/backoff_algorithm/source/include -I./../../../../../../libraries/freertos_plus/standard/crypto/include -I./../../../../../../libraries/coreMQTT/source/interface -I./../../../../../../libraries/coreMQTT/source/include -I./../../../../../../libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/tools/tcp_utilities/include -I./../../../../../../libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/portable/Compiler/Keil -I./../../../../../../libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/include -I./../../../../../../libraries/3rdparty/mbedtls_config -I./../../../../../../libraries/3rdparty/mbedtls_utils -I./../../../../../../libraries/3rdparty/mbedtls/include -I./../../../../../../libraries/3rdparty/pkcs11 -I./../../../../../../libraries/abstractions/pkcs11/corePKCS11/source/include -I./../../../../../../libraries/freertos_plus/standard/tls/include -I./../../../../../../libraries/freertos_plus/standard/crypto/include -I./../../../../../../libraries/c_sdk/standard/common/include/private -I./../../../../../../libraries/abstractions/secure_sockets/include -I./../../../../../../libraries/freertos_plus/standard/utils/include -I./../../../../../../libraries/logging/include -I./../../../../../../libraries/c_sdk/standard/common/include -I./../../../../../../libraries/abstractions/platform/include -I./../../../../../../libraries/abstractions/platform/freertos/include -I./../../../../../../demos/include -I./../../../../../../FreeRTOS-Kernel/portable/ARMv8M/non_secure -I./../../../../../../FreeRTOS-Kernel/portable/ARMv8M/non_secure/portable/GCC/ARM_CM33_NTZ -I./../../../../../../vendors/alif/boards/ensemble-devkit/aws_demos/config_files -I./../../../../../../vendors/alif/boards/ensemble-devkit/aws_demos/application_code/include -I./../../../../../../vendors/alif/boards/ensemble-devkit/aws_demos/application_code/Device -I./../../../../../../vendors/alif/boards/ensemble-devkit/aws_demos/application_code/cmsis_include -I./../../../../../../vendors/alif/boards/ensemble-devkit/aws_demos/application_code/Device/Include -I./../../../../../../vendors/alif/boards/ensemble-devkit/aws_demos/application_code/se_services/include -I./../../../../../../vendors/alif/boards/ensemble-devkit/aws_demos/application_code/alif_utils/include -I./../../../../../../vendors/alif/boards/ensemble-devkit/aws_demos/application_code/se_services/drivers/include -I./../../../../../../vendors/alif/boards/ensemble-devkit/aws_demos -Oz -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


