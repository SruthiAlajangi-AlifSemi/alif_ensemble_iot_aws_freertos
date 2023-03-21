/* Copyright (C) 2022 Alif Semiconductor - All Rights Reserved.
 * Use, distribution and modification of this code is permitted under the
 * terms stated in the Alif Semiconductor Software License Agreement
 *
 * You should have received a copy of the Alif Semiconductor Software
 * License Agreement with this file. If not, please write to:
 * contact@alifsemi.com, or visit: https://alifsemi.com/license
 */

/*
FreeRTOS
Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

 http://aws.amazon.com/freertos
 http://www.FreeRTOS.org
*/

/******************************************************************************
 * @file     main.c
 * @author   Sruthi Alajangi
 * @email    sruthi.alajangi@alifsemi.com
 * @version  V1.0.0
 * @date     14-Mar-2023
 * @brief    main file for test project of AWS FreeRTOS applications.
 * @bug      None.
 * @Note     None.
 ******************************************************************************/
#include <stdio.h>

//#include "RTE_Components.h"

#include <FreeRTOS.h>
#include "task.h"
#include <FreeRTOSConfig.h>

#include "FreeRTOS_IP.h"
#include "FreeRTOS_Sockets.h"

/* Test application include. */
#include "aws_test_runner.h"

/* Aws Library Includes includes. */
#include "aws_clientcredential.h"

/* Alif Utils Includes */
#include "printf_to_uart.h"

/*Device Includes */
#include "M55_HP.h"

/*SE services Includes */
#include "SE_Service_Int_MHU.h"

/*Define for FreeRTOS*/
#define STACK_SIZE     1024
#define TIMER_SERVICE_TASK_STACK_SIZE configTIMER_TASK_STACK_DEPTH
#define IDLE_TASK_STACK_SIZE          configMINIMAL_STACK_SIZE

StackType_t IdleStack[2 * IDLE_TASK_STACK_SIZE];
StaticTask_t IdleTcb;
StackType_t TimerStack[2 * TIMER_SERVICE_TASK_STACK_SIZE];
StaticTask_t TimerTcb;

#define MHU_M55_SE_MHU0        0
#define MHU_M55_SE_MHU1        1

#define mainLOGGING_TASK_STACK_SIZE         ( configMINIMAL_STACK_SIZE * 6 )
#define mainLOGGING_MESSAGE_QUEUE_LENGTH    ( 15 )
//#define mainTEST_RUNNER_TASK_STACK_SIZE    ( configMINIMAL_STACK_SIZE * 8 )

#define TEST_RUNNER_TASK_STACK_SIZE    ( configMINIMAL_STACK_SIZE * 8 )

/** @brief Used by the pseudo random number generator. */
static UBaseType_t ulNextRand;

/** @brief Local MAC Address */
const uint8_t ucMACAddress[ 6 ] =
{
	configMAC_ADDR0,
    configMAC_ADDR1,
    configMAC_ADDR2,
    configMAC_ADDR3,
    configMAC_ADDR4,
    configMAC_ADDR5
};
/** @brief Local IP address */
static const uint8_t ucIPAddress[ 4 ] =
{
    configIP_ADDR0,
    configIP_ADDR1,
    configIP_ADDR2,
    configIP_ADDR3
};

/** @brief Net mask */
static const uint8_t ucNetMask[ 4 ] =
{
    configNET_MASK0,
    configNET_MASK1,
    configNET_MASK2,
    configNET_MASK3
};

/** @brief Gateway address */
static const uint8_t ucGatewayAddress[ 4 ] =
{
    configGATEWAY_ADDR0,
    configGATEWAY_ADDR1,
    configGATEWAY_ADDR2,
    configGATEWAY_ADDR3
};

/** @brief DNS Server Address */
static const uint8_t ucDNSServerAddress[ 4 ] =
{
    configDNS_SERVER_ADDR0,
    configDNS_SERVER_ADDR1,
    configDNS_SERVER_ADDR2,
    configDNS_SERVER_ADDR3
};

/** @brief Utility function to generate a pseudo random number */
UBaseType_t uxRand( void )
{
    const uint32_t ulMultiplier = 0x015a4e35UL, ulIncrement = 1UL;

    ulNextRand = ( ulMultiplier * ulNextRand ) + ulIncrement;

    return( ( int ) ( ulNextRand ) & 0x7fffUL );
}

static void prvMiscInitialization( void )
{
    /* Start logging task. */
    xLoggingTaskInitialize( mainLOGGING_TASK_STACK_SIZE,
                            tskIDLE_PRIORITY,
                            mainLOGGING_MESSAGE_QUEUE_LENGTH );
}

/**
 * @brief Function called by FreeRTOS+TCP when network connects/disconnects
 *
 * Defined by the application code, but called by FreeRTOS+TCP when the network
 * connects/disconnects (if ipconfigUSE_NETWORK_EVENT_HOOK is set to 1 in
 * FreeRTOSIPConfig.h).
 *
 * when the network is up, this function initializes logging, calls KeyProvisioning, calls DemoInitialization function
 * It also prints the network address information (IP address, netmask, gateway address etc.).
 */
void vApplicationIPNetworkEventHook( eIPCallbackEvent_t eNetworkEvent )
{
    uint32_t ulIPAddress, ulNetMask, ulGatewayAddress, ulDNSServerAddress;
    static BaseType_t xTasksAlreadyCreated = pdFALSE;
    int8_t cBuffer[ 16 ];
    /* Check this was a network up event, as opposed to a network down event. */
    if( ( eNetworkEvent == eNetworkUp ) && ( xTasksAlreadyCreated == pdFALSE ) )
    {
        prvMiscInitialization();
        if( SYSTEM_Init() == pdPASS )
        {
            vDevModeKeyProvisioning();
            xTaskCreate( TEST_RUNNER_RunTests_task,
                        "TestRunner",
                        TEST_RUNNER_TASK_STACK_SIZE,
                        NULL,
                        tskIDLE_PRIORITY, NULL );

            xTasksAlreadyCreated = pdTRUE;
        }
    }
    /* The network is up and configured.  Print out the configuration, which may have been obtained from a DHCP server. */
    FreeRTOS_GetAddressConfiguration( &ulIPAddress,
                                      &ulNetMask,
                                      &ulGatewayAddress,
                                      &ulDNSServerAddress );

    /* Convert the IP address to a string then print it out. */
    FreeRTOS_inet_ntoa( ulIPAddress, ( char * ) cBuffer );
    FreeRTOS_printf(( "IP Address: %s\n", cBuffer ));

    /* Convert the net mask to a string then print it out. */
    FreeRTOS_inet_ntoa( ulNetMask, ( char * ) cBuffer );
    FreeRTOS_printf(( "Subnet Mask: %s\n", cBuffer ));

    /* Convert the IP address of the gateway to a string then print it out. */
    FreeRTOS_inet_ntoa( ulGatewayAddress, ( char * ) cBuffer );
    FreeRTOS_printf(( "Gateway IP Address: %s\n", cBuffer ));

    /* Convert the IP address of the DNS server to a string then print it out. */
    FreeRTOS_inet_ntoa( ulDNSServerAddress, ( char * ) cBuffer );
    FreeRTOS_printf(( "DNS server IP Address: %s\n", cBuffer ));
}

/**
 * @brief The main function
 *
 * Apart from the system/OS initialization, this function calls FreeRTOS_IPInit()
 * to create the FreeRTOS IP task and to initialize the stack. This must be the
 * the first freeRTOS-Plus-TCP function called.
 */
int main (void)
{
    /**
     * Initialize the MHU and SERVICES Library
     */
    SE_Service_MHU_Init();

    // System Initialization
    SystemCoreClockUpdate();

    /* Start the FreeRTOS IP task */
    FreeRTOS_IPInit(
        ucIPAddress,
        ucNetMask,
        ucGatewayAddress,
        ucDNSServerAddress,
        ucMACAddress );

    /* Start the FreeRTOS Scheduler */
    vTaskStartScheduler();

    /* Should never get here! */

    return 0;
}
