/* Copyright (C) 2022 Alif Semiconductor - All Rights Reserved.
 * Use, distribution and modification of this code is permitted under the
 * terms stated in the Alif Semiconductor Software License Agreement
 *
 * You should have received a copy of the Alif Semiconductor Software
 * License Agreement with this file. If not, please write to:
 * contact@alifsemi.com, or visit: https://alifsemi.com/license
 */

/*
 * FreeRTOS V202112.00
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
 *
 * https://www.FreeRTOS.org
 * https://github.com/FreeRTOS
 *
 */

/******************************************************************************
 * @file     pkcs11_operations.h
 * @author   Sruthi Alajangi
 * @email    sruthi.alajangi@alifsemi.com
 * @version  V1.0.0
 * @date
 * @brief    This file declares wrapper functions for PKCS11 operations.
 * @bug      None.
 * @Note     None.
 ******************************************************************************/


#ifndef PKCS11_OPERATIONS_H_
#define PKCS11_OPERATIONS_H_

/* Standard includes. */
#include <stdlib.h>
#include <stdbool.h>

/* corePKCS11 include. */
#include "core_pkcs11.h"

/**
 * @brief Generate a new public-private key pair in the PKCS #11 module, and
 * generate a certificate signing request (CSR) for them.
 *
 * This device-generated private key and CSR can be used with the
 * CreateCertificateFromCsr API of the the Fleet Provisioning feature of AWS IoT
 * Core in order to provision a unique client certificate.
 *
 * @param[in] xP11Session The PKCS #11 session to use.
 * @param[in] pcPrivKeyLabel PKCS #11 label for the private key.
 * @param[in] pcPubKeyLabel PKCS #11 label for the public key.
 * @param[out] pcCsrBuffer The buffer to write the CSR to.
 * @param[in] xCsrBufferLength Length of #pcCsrBuffer.
 * @param[out] pcOutCsrLength The length of the written CSR.
 *
 * @return True on success.
 */
bool xGenerateKeyAndCsr( CK_SESSION_HANDLE xP11Session,
                         const char * pcPrivKeyLabel,
                         const char * pcPubKeyLabel,
                         char * pcCsrBuffer,
                         size_t xCsrBufferLength,
                         size_t * pcOutCsrLength );

/**
 * @brief Save the device client certificate into the PKCS #11 module.
 *
 * @param[in] xP11Session The PKCS #11 session to use.
 * @param[in] pcCertificate The certificate to save.
 * @param[in] pcLabel PKCS #11 label for the certificate.
 * @param[in] xCertificateLength Length of #pcCertificate.
 *
 * @return True on success.
 */
bool xLoadCertificate( CK_SESSION_HANDLE xP11Session,
                       const char * pcCertificate,
                       const char * pcLabel,
                       size_t xCertificateLength );

/**
 * @brief Close the PKCS #11 session.
 *
 * @param[in] xP11Session The PKCS #11 session to use.
 *
 * @return True on success.
 */
bool xPkcs11CloseSession( CK_SESSION_HANDLE xP11Session );

/**
 * @brief Save the device client certificate into the PKCS #11 module.
 *
 * @param[in] xP11Session The PKCS #11 session to use.
 * @param[in] pcPrivateKey The PrivateKey to save.
 * @param[in] pcLabel PKCS #11 label for the privateKey.
 * @param[in] xPrivateKeyLength Length of #pcPrivateKey.
 *
 * @return True on success.
 */
bool xLoadPrivateKey( CK_SESSION_HANDLE xP11Session,
                      const char * pcPrivateKey,
                      const char * pcLabel,
                      size_t xPrivateKeyLength );


#endif /* ifndef PKCS11_OPERATIONS_H_ */
