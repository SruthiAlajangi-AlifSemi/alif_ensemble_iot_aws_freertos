################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := clean

# All of the sources participating in the build are defined here
-include sources.mk
-include tests/integration_test/subdir.mk
-include tests/common/subdir.mk
-include libraries/logging/subdir.mk
-include libraries/freertos_plus/standard/utils/src/subdir.mk
-include libraries/freertos_plus/standard/tls/src/subdir.mk
-include libraries/freertos_plus/standard/crypto/src/subdir.mk
-include libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/portable/BufferManagement/subdir.mk
-include libraries/freertos_plus/standard/FreeRTOS-Plus-TCP/subdir.mk
-include libraries/coreMQTT/source/subdir.mk
-include libraries/c_sdk/standard/common/taskpool/subdir.mk
-include libraries/c_sdk/standard/common/subdir.mk
-include libraries/abstractions/transport/secure_sockets/subdir.mk
-include libraries/abstractions/secure_sockets/freertos_plus_tcp/subdir.mk
-include libraries/abstractions/platform/freertos/subdir.mk
-include libraries/abstractions/pkcs11/corePKCS11/source/portable/mbedtls/subdir.mk
-include libraries/abstractions/pkcs11/corePKCS11/source/subdir.mk
-include libraries/abstractions/backoff_algorithm/source/subdir.mk
-include alif/boards/ensemble-devkit/ports/pkcs11/subdir.mk
-include alif/boards/ensemble-devkit/aws_tests/application_code/alif_utils/subdir.mk
-include alif/boards/ensemble-devkit/aws_tests/application_code/Device/subdir.mk
-include alif/boards/ensemble-devkit/aws_tests/application_code/subdir.mk
-include FreeRTOS-Kernel/portable/MemMang/subdir.mk
-include FreeRTOS-Kernel/portable/ARMv8M/non_secure/portable/GCC/ARM_CM33_NTZ/subdir.mk
-include FreeRTOS-Kernel/portable/ARMv8M/non_secure/subdir.mk
-include FreeRTOS-Kernel/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: aws_tests.axf

# Tool invocations
aws_tests.axf: $(OBJS) /home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Device/M55_HP.sct $(USER_OBJS) $(LIBS)
	@echo 'Building target: $@'
	@echo 'Invoking: Arm Linker 6'
	armlink --scatter="/home/sruthi/sruthi_github_prv/repo_project_test3/alif_ensemble_iot_aws_freertos/vendors/alif/boards/ensemble-devkit/aws_tests/application_code/Device/M55_HP.sct" --info=sizes -o "aws_tests.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES) $(OBJS) $(C_DEPS) aws_tests.axf 
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
