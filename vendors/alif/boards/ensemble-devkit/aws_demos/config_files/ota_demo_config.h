/* Copyright (C) 2022 Alif Semiconductor - All Rights Reserved.
 * Use, distribution and modification of this code is permitted under the
 * terms stated in the Alif Semiconductor Software License Agreement
 *
 * You should have received a copy of the Alif Semiconductor Software
 * License Agreement with this file. If not, please write to:
 * contact@alifsemi.com, or visit: https://alifsemi.com/license
 *
 */

/*
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/******************************************************************************
 * @file     ota_demo_config.h
 * @author   Ganesh Ramani
 * @email    ganesh.ramani@alifsemi.com
 * @version  V1.0.0
 * @date
 * @brief    Configuration file for AWS FreeRTOS OTA service demo applications.
 * @bug      None.
 * @Note     None.
 ******************************************************************************/


#ifndef OTA_DEMO_CONFIG_H_
#define OTA_DEMO_CONFIG_H_

/* Includes the OTA Application version number. */
#include "ota_appversion32.h"

/**
 * @brief Certificate used for validating code signing signatures in the OTA PAL.
 */
#ifndef otapalconfigCODE_SIGNING_CERTIFICATE
    #define otapalconfigCODE_SIGNING_CERTIFICATE  ""

#endif

/**
 * @brief Major version of the firmware.
 *
 * This is used in the OTA demo to set the appFirmwareVersion variable
 * that is declared in the ota_appversion32.h file in the OTA library.
 */
#ifndef APP_VERSION_MAJOR
    #define APP_VERSION_MAJOR    0
#endif

/**
 * @brief Minor version of the firmware.
 *
 * This is used in the OTA demo to set the appFirmwareVersion variable
 * that is declared in the ota_appversion32.h file in the OTA library.
 */
#ifndef APP_VERSION_MINOR
    #define APP_VERSION_MINOR    9
#endif

/**
 * @brief Build version of the firmware.
 *
 * This is used in the OTA demo to set the appFirmwareVersion variable
 * that is declared in the ota_appversion32.h file in the OTA library.
 */
#ifndef APP_VERSION_BUILD
    #define APP_VERSION_BUILD    2
#endif

/**
 * @brief Timeout for which MQTT library keeps polling the transport interface,
 * when no byte is received.
 * The timeout is honoured only after the first byte is read and while remaining
 * bytes are read from network interface. Keeping this timeout to a sufficiently
 * large value so as to account for delay of receipt of a large block of message.
 */
#ifndef MQTT_RECV_POLLING_TIMEOUT_MS
#define MQTT_RECV_POLLING_TIMEOUT_MS            ( 1000U )
#endif

/**
 * @brief The length of the queue used to hold commands for the agent.
 */
#define MQTT_AGENT_COMMAND_QUEUE_LENGTH         ( 25 )

/**
 * @brief Dimensions the buffer used to serialise and deserialise MQTT packets.
 * @note Specified in bytes.  Must be large enough to hold the maximum
 * anticipated MQTT payload.
 */
#define MQTT_AGENT_NETWORK_BUFFER_SIZE          ( 5000 )

/**
 * @breif Maximum time MQTT agent waits in the queue for any pending MQTT
 * operations. The wait time is kept smallest possible to increase the
 * responsiveness of MQTT agent while processing  pending MQTT operations as
 * well as receive packets from network.
 */
#ifndef MQTT_AGENT_MAX_EVENT_QUEUE_WAIT_TIME
#define MQTT_AGENT_MAX_EVENT_QUEUE_WAIT_TIME    ( 1U )
#endif

#endif /* OTA_DEMO_CONFIG_H_ */

