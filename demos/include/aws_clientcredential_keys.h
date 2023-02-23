/*
 * FreeRTOS V202203.00
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
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

/*
 ****************************************************************************
 * NOTE!
 * This file is for ease of demonstration only.  Secret information should not
 * be pasted into the header file in production devices.  Do not paste
 * production secrets here!  Production devices should store secrets such as
 * private keys securely, such as within a secure element.  See our examples that
 * demonstrate how to use the PKCS #11 API for secure keys access.
 ****************************************************************************
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

/* @TEST_ANCHOR */

/*
 * @brief PEM-encoded client certificate.
 *
 * @todo If you are running one of the FreeRTOS demo projects, set this
 * to the certificate that will be used for TLS client authentication.
 *
 * @note Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
/* Fleet provisioning credentials */
#ifdef CONFIG_FLEET_PROVISIONING_DEMO_ENABLED
#ifndef keyCLIENT_CERTIFICATE_PEM
    #define keyCLIENT_CERTIFICATE_PEM   "-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAOxx+RUDxnU4VOxLV58JMA42wkmnMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMjExMTkwNjUy\n"\
"MjNaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCeXNSS2aX+60LuIQjM\n"\
"Y10i7ucEbw/UyqXRlXf+L0FtbPsAbFXRR0A/NvhfeQ22sLejGGWspFIvWetrC8QU\n"\
"T0oWm/veH6g1p4kZFYLiWoxLRIYpqUdMPvMO/yFMC1ulLlxPpGVYFCnwLOFF1wMW\n"\
"dsgdzze9cRt5NYaeMevzNkQXIxkszFxf3igc6AiQ+B3h/sPjcufrgkvobD5dqV6R\n"\
"gdZuBU5jMmKulnyg3tFDZHANh+U+rqKRoSBVbiCpxqh5AlXcWp5HsNp7IY/UgMuF\n"\
"krucHltnGV1BtQZX0UzLWTa6EDzjV1NdzgJCyGA4gSb4roFOwdbpb3WQXRp0cji3\n"\
"o053AgMBAAGjYDBeMB8GA1UdIwQYMBaAFE4ckuOTEYSZ5te0pDwEZOXhrsUJMB0G\n"\
"A1UdDgQWBBQ2+q0f9X/VgwH3b1bZm3oYA1JZNTAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAbAQobHjpJJUj2hipLvaGjM0n\n"\
"l5qEue8NL9zqHOi8LiN+33pXseJzRfF/q9ejCT8fXP7W4B6QVnBYMDh0rmeliIr0\n"\
"vH1yb3zrcio+0aYOpEFT9ZFqBgxbYZxQsd+Y9zOJeeH+n9VjdCWE8Jf9EtWlrM0j\n"\
"mPR7rhkONpvHOsHRuahzQjYSHwfnqinUdKPmjUSLEXRDdIdEpXd/tKCUk9ZwUTUn\n"\
"uFsLiTjwbUpklf4gjHy7jbhAZlQY3v5l6cZ+5IrI42xZ9Fx0zTKSiAp9tIMPfEFS\n"\
"MwdoRlla00t1XfN5wh1fJumJg4KSl87lku33K2D8b0m3an9KFzzzeClCO1vqcQ==\n"\
"-----END CERTIFICATE-----\n"
#endif
#endif

/*Alif_thing*/
#ifndef keyCLIENT_CERTIFICATE_PEM
    #define keyCLIENT_CERTIFICATE_PEM   "-----BEGIN CERTIFICATE-----\n"\
"MIIDWTCCAkGgAwIBAgIUD6cTr2jzglsfJU/2oAZzxvKWt2YwDQYJKoZIhvcNAQEL\n"\
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"\
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIyMTEzMDA4Mjg0\n"\
"OFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"\
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMss1WteWNzeaBIWXKAt\n"\
"jkRWIxKSvBkpuayEen8vjGJNc8dGseFfMWMv9LzNlMGhYk7v/pXJrCLgAsOwxgDq\n"\
"wVBsD01WHJ6RXPiCNnLSZT2I12jLkG+UTvgmeSVB9nU7+S9mtFv6y/yqnC70/FXe\n"\
"Rwo5V2IFerCGHnpGqKOS4m/1zCkHTY9QIo4ws+U9ZE2ZqDMWEMTg1r6V1nEGkedN\n"\
"UEskgHMH7QBUQpdr4/AWa3RScOK81tS3e0tyxHD/lWNBXUJbRo0zx3kSCFQqT/mk\n"\
"pocfOoW7YzTMaKqh7jd0tIfhuKmOtbjp/6a3QqQ08FZAgsbmXQ1XkmpXsL48pW4R\n"\
"dfUCAwEAAaNgMF4wHwYDVR0jBBgwFoAUizaXhsBL16yXoVHyBkVbwfv4X0wwHQYD\n"\
"VR0OBBYEFKu97cA0DsCAPbqd6RUbTPKJ28eRMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"\
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQCWwZ2sMCFxvAg3J4MVqASL7opW\n"\
"X3sgTnU+KNC6y9m2onyyPlIRE9AHtHI/jLIMAzTnW+BB2mPw/EscXbF2LGEGoXR1\n"\
"D0ih/6iqNZrvG+i6deoZz2yuAcrJrYcYiFWeJRC9N/fCoSb1v/4TuYaJZ18EX4dF\n"\
"Zx/uM+KF46pJ2M8+sAWWns52unKmXeoqPLQXtS0O3U/zEJYm7R55Gzlfz9BpSJtS\n"\
"qPvslHCtBlxVk+ybFJl1ldYjff3wbNTWoNQHir8c7esJq4/ov/dz7f4IeTuS3vhB\n"\
"NNEER3U67Br2dRkMigFmIk8/VsF/G0GIzxuEtnsGOuvym2TBb7rzxKCeT6mh\n"\
"-----END CERTIFICATE-----\n"

#endif

/*dashboard_device*/
//#ifndef keyCLIENT_CERTIFICATE_PEM
//    #define keyCLIENT_CERTIFICATE_PEM   "-----BEGIN CERTIFICATE-----\n"\
//"MIIDWTCCAkGgAwIBAgIURfwO8cA8vTtSp6SUKzG8E9kF224wDQYJKoZIhvcNAQEL\n"\
//"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"\
//"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIzMDIwMjExNTEy\n"\
//"MFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"\
//"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALx6+Oig0jgNQN9I22UZ\n"\
//"GdY6PlONJGeupv8xZVmIE40acuoeYjMglDi5ODhonoc5m//R14xrhMN7xY4wu+x9\n"\
//"x/4sQU+27e+dJIgaWnrkTSVIvaAVBYI+iarIz43OMv1CfZe7+G+EMZzYWgX2MZy8\n"\
//"Sqr/dPqLYTjXrNTZRRcTfKTNAGyGvVERLMUyzyDvCdn+ZatNc0EO7nl0hNXlaY4D\n"\
//"K05KtA5oNNO+2bX+qpwnK5w0ZBMOAXpJVR2jZ3tIsRhvf8nw+iHCRzz/rzKJe/T7\n"\
//"vxd+XFqu3u3AErEiA0WDqFOoPzQrVA5oj7U9rLJnOIqc/sRYtC7TDEwF9SNFCJXY\n"\
//"DWsCAwEAAaNgMF4wHwYDVR0jBBgwFoAUyvGIJ0HKNV8Z7p25iQYQE6PT6r8wHQYD\n"\
//"VR0OBBYEFF22RIejcdL0hKm3Zet/NPvkwgkwMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"\
//"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQAW7mVhc2HGFmAgTStctF1IPSUA\n"\
//"1ZbboLgh4f/socb/oCX0XP8ejZBv4NqY8/Mq6lcGvurIb1gaJrk7g82EYWvzbgzX\n"\
//"yHVsBx7AaYX844ZeOIFas9mlP9kkYBOHTj4iD51EqLNX/kPhCzySqVK9X0LzRBmg\n"\
//"a/bLngXzgHRyLlypDejZaejsqo7HN7kz0P/4CkQfUpel1LdYA0v9d+1mCkRxTTsT\n"\
//"5LBjA0Pghy/0eb2LzL4lOKSwudZbOdoGFBrFBjjK2m6WD9JaR3jmaX9yxFP0CttB\n"\
//"AJax3DqRoLM8usQS+2vQhSblYUDzagR+r/kpmwUDFcvPdDOYtYJB/7ZNYPlq\n"\
//"-----END CERTIFICATE-----\n"
//#endif

///*ganesh account device*/
//#ifndef keyCLIENT_CERTIFICATE_PEM
//    #define keyCLIENT_CERTIFICATE_PEM   "-----BEGIN CERTIFICATE-----\n"\
//"MIIDWjCCAkKgAwIBAgIVANvkuo432vSSg1ZXRg7rIStMYRYDMA0GCSqGSIb3DQEB\n"\
//"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
//"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMjA5MjgwNzIz\n"\
//"NTVaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
//"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC4d6McC7ScuOn5/nHG\n"\
//"o/3iA54rMay5vSWS4AIq8HVjB40AOUXPivYo19QvwsVF4BWijpwj32Ge7kHjWWoK\n"\
//"7CJiPNw9qbuZ1QC01UyW187LVsz447hr5X//26NEu0E4MnIazW2sXvdQYe9NvJk+\n"\
//"kluPDkR+1td5835NBUgpJqXzg4W6rVxUQA59DfvYkDfJMyOU/x+RQQgOJFCty2Et\n"\
//"KOHH/ZPXSF945T7sauT5DMkz2M+MN8ba9tUwPBgZFHX/nqpwdjuAGEuM5Twgd5U2\n"\
//"4VYDG+gE6A3BptVXBPl7l3fqvXNHVbBaXtjQq6nDTNM5xEqLmuhxmlGWl11Vateb\n"\
//"p7oXAgMBAAGjYDBeMB8GA1UdIwQYMBaAFDenX50jJ5pjJ5OZLMM9Jv0dn3IaMB0G\n"\
//"A1UdDgQWBBRVuAax88ts7NSjj20L1aPHwt1KTTAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
//"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAdsqb7SJP5zI5oYuayA6cYGj+\n"\
//"jqsp7uC4ABNhAR7neBLAWdqCftIEcMitJd+YOFGnkfgo+yTviZ1vxiqEZw7y7rat\n"\
//"vpGeCz4t0DguJC3Cwh8z/GPlEame8NK/3t+IvEQ7pluLw/RoHKk2H1Pio20wy2SF\n"\
//"gUfd6woH8bxoE9l067+GWW6D6xiyR2naGge5KFp99WgAEfbAY4xg2R5GV3AsGeUY\n"\
//"iXODuY2BFhBNmJcp9q/7Bioi0Lw7Ucy1Y9fEToe2OYXqQ+jATX7K1Q9gmpNNSfVB\n"\
//"NH+RFEkATqYbZ4JagBbN3hMTcIh6HdzbwCD9D+BaLH1gt2UUG3mw2BW/pXr7fQ==\n"\
//"-----END CERTIFICATE-----\n"
//#endif

/*
 * @brief PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 *
 * @todo If you are using AWS IoT Just in Time Registration (JITR), set this to
 * the issuer (Certificate Authority) certificate of the client certificate above.
 *
 * @note This setting is required by JITR because the issuer is used by the AWS
 * IoT gateway for routing the device's initial request. (The device client
 * certificate must always be sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html,
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#ifndef keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM
    #define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM    NULL
#endif

/*
 * @brief PEM-encoded client private key.
 *
 * @todo If you are running one of the FreeRTOS demo projects, set this
 * to the private key that will be used for TLS client authentication.
 * Please note pasting a key into the header file in this manner is for
 * convenience of demonstration only and should not be done in production.
 * Never past a production private key here!.  Production devices should
 * store keys securely, such as within a secure element.  Additionally,
 * we provide the corePKCS library that further enhances security by
 * enabling keys to be used without exposing them to software.
 *
 * @note Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
/* Fleet provisioning credentials */
#ifdef CONFIG_FLEET_PROVISIONING_DEMO_ENABLED
#ifndef keyCLIENT_PRIVATE_KEY_PEM
    #define keyCLIENT_PRIVATE_KEY_PEM   "-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEowIBAAKCAQEAnlzUktml/utC7iEIzGNdIu7nBG8P1Mql0ZV3/i9BbWz7AGxV\n"\
"0UdAPzb4X3kNtrC3oxhlrKRSL1nrawvEFE9KFpv73h+oNaeJGRWC4lqMS0SGKalH\n"\
"TD7zDv8hTAtbpS5cT6RlWBQp8CzhRdcDFnbIHc83vXEbeTWGnjHr8zZEFyMZLMxc\n"\
"X94oHOgIkPgd4f7D43Ln64JL6Gw+XalekYHWbgVOYzJirpZ8oN7RQ2RwDYflPq6i\n"\
"kaEgVW4gqcaoeQJV3FqeR7DaeyGP1IDLhZK7nB5bZxldQbUGV9FMy1k2uhA841dT\n"\
"Xc4CQshgOIEm+K6BTsHW6W91kF0adHI4t6NOdwIDAQABAoIBAGQRPLHeninK92wJ\n"\
"q8mbMAsW8xu2IkbQFp+s1znjGnDO4HyP+FpZr5tCXQfXMncyi5efnv/MhbIuG7h0\n"\
"ot5CjAplXm4pitz8lIEpOp9VoDkff7drpAXl8SiUxrGKq8pg1SvuMavKcgW2FlNP\n"\
"XkAfpqxPeGVYx4d77yifWv1AWR5UrNiudtS8hD2JSmK3oyZTVbZ7a4Zz82leeoW9\n"\
"lhDj6CdN5SW6XjCUmpjQwD4GyWOJsTX+EfM0SIEBco/VKnFqS2vDkzoMu7r3ermo\n"\
"s3pdco9TM08UkzUSU5fBfXBvIey/FB4knq8cdxTmvSslSn/2Z5PqrCeYjimEF5OS\n"\
"NcaQCuECgYEAzfuJK0Cmg7zqPDrm5fvvRTQ/wyoU5dtjUrOna1un3qY3jetIxz6F\n"\
"TsUTZBFtKfxnGfiyLJTQWLJm/FqfwcSdblMYjFcYEeFbJ++djuqUqK3iWGtNxwUo\n"\
"wIuN98qjzyE2dzwDFgWUIXB8yBCXj+NM2X57SmVXDvWEuX0cqF0FKGMCgYEAxNEa\n"\
"WH4THTQqW2Hy0THbyknpEsrHBeECRQbO0MZejF7mB/T16/sELYDtLCud9oFex8Oa\n"\
"vVeZio2HKCig9wiJOTJ42M9jdf07gMmLANiCAyAMeEZl0hDlI0pqBco028QRR3ap\n"\
"WGXUzguNVLzz0SjpChbui2n6pKg7wBfwMvRvG90CgYAUoKLs7O1/9dQzMebbky4z\n"\
"7PaRsc4j8qNwrcMPUj9uYZDgqnZAVbd92uiFNeWLtdYRWMFnC4QNzdfYX67t9aWa\n"\
"XcHwk+w6Jio9xpYtsLowZjFrj1tbmd2p4o/WB7n9zSKqMB1TAD4EV0J3uomjBC02\n"\
"/p6UJa/hNJ8VAD11ctNIZwKBgQCxGF4WZksYqgm69GWi6rQUT3ETYba3iYGbTsbl\n"\
"gLkuoW1ml3p4/gMCVtISPqUCW+JG6bDg0mPsEfEdp4E/B0VCXDH1FJcwYc4a0j7r\n"\
"YeWKnlnaF64i2OT1Xk4MK6hoXwIVRaaXTfmv9SEUsHjLKX6Xf47hj1jitCYfcOrH\n"\
"Tr5zWQKBgC2gzLWFVIiKyq/BbtBgBF7WJbCv0Z2N4waebGHeThP2+yS8b4H8cJT6\n"\
"gWpaJKsX2H41BKipT0I/msieNVFEQZFoSK9mNw+bU2mCzYjFoSs1oNg6R2jrKOcr\n"\
"Dw93fq5uK9XLFDaQoDVmaKQzSdWxfi0eAjttj4wBgqBEtvoln4In\n"\
"-----END RSA PRIVATE KEY-----\n"

#endif
#endif
/*Alif_thing*/
#ifndef keyCLIENT_PRIVATE_KEY_PEM
    #define keyCLIENT_PRIVATE_KEY_PEM   "-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpAIBAAKCAQEAyyzVa15Y3N5oEhZcoC2ORFYjEpK8GSm5rIR6fy+MYk1zx0ax\n"\
"4V8xYy/0vM2UwaFiTu/+lcmsIuACw7DGAOrBUGwPTVYcnpFc+II2ctJlPYjXaMuQ\n"\
"b5RO+CZ5JUH2dTv5L2a0W/rL/KqcLvT8Vd5HCjlXYgV6sIYeekaoo5Lib/XMKQdN\n"\
"j1AijjCz5T1kTZmoMxYQxODWvpXWcQaR501QSySAcwftAFRCl2vj8BZrdFJw4rzW\n"\
"1Ld7S3LEcP+VY0FdQltGjTPHeRIIVCpP+aSmhx86hbtjNMxoqqHuN3S0h+G4qY61\n"\
"uOn/prdCpDTwVkCCxuZdDVeSalewvjylbhF19QIDAQABAoIBAQCJRZ5gb5tMhzv7\n"\
"VH56fq0LgMMrjlZmDen0JIH7Iq4P0NKzxhDy+3UL1d/eHGwwMxCP0tjIbTzPR1i2\n"\
"zN3KytGXu5rPHqoxfHc7NAcDpyFd5PHdTQQmTybXxG6/fIS/Cqk+nH6pUpa1/LOP\n"\
"ilhez9JhlwJyKM+PKt62sLzJ37j7+Pp91l8ooVt6M274S+vm09X0Z4PIYPAnQX0f\n"\
"JeW9+QtWEoX9FpHAEJxxC27NdJAkAqqLaCOskM37C2tTYBptLUHgbLwyUx1wKELE\n"\
"t2eDlOZFTr0Tvz2cDonUuFfUJy2igTYS7iOxkCR5bhvmuU+xvvvSpINKsn+XrFIr\n"\
"nhiChbhVAoGBAPPDT8tO6k0cWm1motzPC2AI9B4B0K4knhYrQhxcS2sCuIc/lv6E\n"\
"u7VL2Y7M8ow3eTn3RCCQcYkRDytgqLOEnZdAfX0OPABtycY+uH6h8DSF9EBMknva\n"\
"CpKcTwh6OJW9Zhc9KPZRpcXzvR1F1U7mn5QEXDtlxBKTednaNc5yDigDAoGBANVf\n"\
"6bipVFUdYwgD5Dav/r7Mzfh5h5ErsuoBcnLrP3MgRpQFUZdDztNwSPXM9Wn/JjK0\n"\
"ZI6f33W038J9V3qcLteFd7R33cp7hUtJv8BW102P+6RTDC9SOQjQ87OU5aolEZac\n"\
"dUAG0Hew6mC6fr6NLJCO1tpGU49SPSv9QvMUPHSnAoGBAM7qBTugmwYlgSTIMIqa\n"\
"PR+hugYWqFqJvp82zQFh3qrRPm2frr4RUXyNC/lJQsF+/SoVGAFEWvtsPaImhE0N\n"\
"zu9q0JpskMYUa2gaKWVkdI9A/Znu5ZC3/q2AfR3HEW0ZviUPx0t+9uZXBTpp4qz8\n"\
"2ow8P0Y0FgFmqdIghffdnOKdAoGAcNRSA8rOhF+QwWlFYUG5ZG1qMQ0aicJgzmrL\n"\
"eUc6ewdDKvyRA3rgwF/sxMWHtHAuY7uOPPj/Mf/eHrsm6ffysRarkOudhXfBqWkr\n"\
"E2sYWLRdbaxYkiFZdXcAlyKSO2F0pn6/ZYb074XGujWD1gFS4nIV3MA5aV0kacF3\n"\
"iJBX05sCgYBAi7W+HPgJ83ij8tNMbBPyzp5fQIyCD7GiQMMG+QN3ztRwOox9xCSw\n"\
"DYCL/L8VeCLPqzY+jamlcBwqWTdnLQ0WcN+8+Rd/1kzPJhCwbSNTbvfPWazSDHo0\n"\
"r73U80yEU57vH9gSUENVuOe+Ix3nhd/aFN/Qh6smXsLWmAoP7YKpgw==\n"\
"-----END RSA PRIVATE KEY-----\n"
#endif

/*dashboard_device*/
//#ifndef keyCLIENT_PRIVATE_KEY_PEM
//    #define keyCLIENT_PRIVATE_KEY_PEM  "-----BEGIN RSA PRIVATE KEY-----\n"\
//"MIIEpgIBAAKCAQEAvHr46KDSOA1A30jbZRkZ1jo+U40kZ66m/zFlWYgTjRpy6h5i\n"\
//"MyCUOLk4OGiehzmb/9HXjGuEw3vFjjC77H3H/ixBT7bt750kiBpaeuRNJUi9oBUF\n"\
//"gj6JqsjPjc4y/UJ9l7v4b4QxnNhaBfYxnLxKqv90+othONes1NlFFxN8pM0AbIa9\n"\
//"UREsxTLPIO8J2f5lq01zQQ7ueXSE1eVpjgMrTkq0Dmg0077Ztf6qnCcrnDRkEw4B\n"\
//"eklVHaNne0ixGG9/yfD6IcJHPP+vMol79Pu/F35cWq7e7cASsSIDRYOoU6g/NCtU\n"\
//"DmiPtT2ssmc4ipz+xFi0LtMMTAX1I0UIldgNawIDAQABAoIBAQCt9PWchynez+Sq\n"\
//"8GyFn6gn//OcW61ZAGpjJ+z5uE0LM3kSOd66f3wt6k1ISs7d0b74Wm2NzYJohejs\n"\
//"9m/Lsr+OCLxy3Uw3lhqsf145BFNrcPqLMDu4XQ3kkZh2sfR/qQmPrM575k+ACnL0\n"\
//"A6kAlwx3THVj9JZTx0Nd4/YPeU3WL0WWCA0LvwMgyAYbZzycPA33djLoSVN/t27r\n"\
//"0ZruV/IP9g/YNbTORGT/QW1YFjyEPv4yiS2IQtft3Ul4mXvhMMOu7GonaaGt+ist\n"\
//"TSPql8ME9OqbU54XBPzQR3E4HjMke7ttX3rTsrvWMXl0WbsJVuzNBERKVF9gMKoO\n"\
//"GhFrDpIJAoGBANu/dNHUgwyYMa0tngH7Ul4ZZVKvnzHIVCk1NhcPoXpefu5K3d9j\n"\
//"nl9L8vxC3iTIVUSoZ43NdPVkSroG66qfvTN/37qkUeh3Dq5HHXKYXt9buwdr2Od1\n"\
//"Nmck/ZuUNVS7vp8kKzycKPpcH6oucSsOGwBLOuS5ySfhVlHs8pZSLvwvAoGBANuT\n"\
//"ATTFGd1Ssl+7YpHD3Jgy2j1LhZoksbsiDUFaX6QYpDsXRSgQP0aOouyr8bLi1tAU\n"\
//"YrWKb6tfpmk66O9itPXuJklZCJKCu5//ZJl2+RbaIVD+8WuBaaDCFPwP/mcET6iD\n"\
//"lL4InatyAZMLpxA4WuDeSiWVDroPxHA2u2jm4keFAoGBALouPmXBbb7v+7bEXYlE\n"\
//"TAcZ8TTbQz/EgTngsZFcVu38vgJbQBySpI4NJTQB24DCkyv2mrYUCzIV5RIz5tvL\n"\
//"N1w4zW+u5Q7WQIP8EMEUw9zuNUoWX9HLB2rgdlaofX7rCph+5nsVu8pS3ykq7AsU\n"\
//"il/3XVCI8Btv2djTrr0ZqGFVAoGBAL/6/2H5N40YohcrypoySuzUAZb4Mj88+Bzr\n"\
//"P/W1I8xhMy7rQK8vzXNOgUs3Z2OGDFXwjQG3ob2QKvr04/dyMVCZweX9r44SOiRB\n"\
//"c97udAmz/M9JqSHbC9Tf/OMKxN+jmFZ5fZLOC7V8P74mwRJgg6z7Do9fjXnHEXUf\n"\
//"laq5vHzVAoGBAIx5o6IUA6epCZQYecNKyw8rzx7+OcXwQ3YJFWsoc7RXAvbft052\n"\
//"s/pKJ2nZ/r3rJnLfTEHTFcmusbnuU9Aujq/MkBh0DBNg/Sr9y2v3MWWOIbJZHnaV\n"\
//"7m5tnH8Qre/bpOYIHTaHF6PmYNwO1sA20rbW5dzZVAcfsge+UWdz+uNx\n"\
//"-----END RSA PRIVATE KEY-----\n"
//#endif

///*ganesh account device*/
//#ifndef keyCLIENT_PRIVATE_KEY_PEM
//    #define keyCLIENT_PRIVATE_KEY_PEM   "-----BEGIN RSA PRIVATE KEY-----\n"\
//"MIIEpAIBAAKCAQEAuHejHAu0nLjp+f5xxqP94gOeKzGsub0lkuACKvB1YweNADlF\n"\
//"z4r2KNfUL8LFReAVoo6cI99hnu5B41lqCuwiYjzcPam7mdUAtNVMltfOy1bM+OO4\n"\
//"a+V//9ujRLtBODJyGs1trF73UGHvTbyZPpJbjw5EftbXefN+TQVIKSal84OFuq1c\n"\
//"VEAOfQ372JA3yTMjlP8fkUEIDiRQrcthLSjhx/2T10hfeOU+7Grk+QzJM9jPjDfG\n"\
//"2vbVMDwYGRR1/56qcHY7gBhLjOU8IHeVNuFWAxvoBOgNwabVVwT5e5d36r1zR1Ww\n"\
//"Wl7Y0Kupw0zTOcRKi5rocZpRlpddVWrXm6e6FwIDAQABAoIBAC56rpWFeYe3q/S6\n"\
//"oO5dKb5GDRdzF8NhHlOIr+Mj3WALagKxa56ks+uMnkE+gThfAvSHnF4Jje5euClR\n"\
//"wT9pSiyYiyHaX5OeMORfjkG/tLJVd6YKstA07nCIZfYOfJttUoTgWA8DiqstUf+z\n"\
//"UqWKeRltjeKrvXVT3fIIL6t2un/FqO+VKbXm+0q2b+roU+MTOdmPmLArdTT8C/WR\n"\
//"/hv6O+XIUrOLHho/5y7q1PrHAEJUS/KFESuaZAprKV5jcigj6zpsyd2gaCBastzp\n"\
//"GCKpD98mQb+vEhTnluz91WvCn+bYjGtUS9LTvKSa8juabqx3DC79G9H/Mrl6Htvj\n"\
//"cX99eeECgYEA7tWTJg7drU7fmh1wwvAtbObhk7EyQUPUYuZeo6/21xKn0TYj/kUx\n"\
//"e5vpE06Ad2Q7qtAtr7eJlgRFoqo7v4XseIMdGkBcRkeKdV/e5GUEpMrMQCBEmFLF\n"\
//"sCQw0s7pjyJoDkX7tjYzD6eR2YO4UKHEvp1KEUhNEDNusEkxe4/+O1ECgYEAxbm9\n"\
//"OIiQNApjm+xzDSxhPn06TOviWtIrFEdbEmIzFRxNVa1IoYyIsGdXuun4j333fYXP\n"\
//"VsxuWl3o+XaF+w0guapgDiCdp3diogwklqeVH1l8Rl10qLOj3WU7hKzVaoD7aVEm\n"\
//"Rb9I5JxnDTaAJoX89otHSysNprQ93P+JuIWH9OcCgYBc6+d2VS5WMWu5sF6g2YUy\n"\
//"65k0NyrQTa2iVPLZSKsG/pEgSqoyUYVxDDXgdxhwWyUDzj8YMJZtMXhOU2EvoNFi\n"\
//"CdEW15ePGGJ8TDKSNeNaojRZdrR5dyrG3y3Htw0TzVUiyIOoXun62z1ZnW/mnynG\n"\
//"57dbhf/Fn90e5TtFUb6eIQKBgQC+dSOniSQefMNmNmS8k7s4DjhSUAVBpqCIcBNx\n"\
//"qdW6yABWPwxvUId6JJGFIkqjLZtv9ay610CVG1CGu3xjT0nujgbolNJHtd/0Z+32\n"\
//"kIY8JF5pCSyONDvrzs9+BV2tsYB6+gf7tz3nuCArwgu/D+GTOqX56gbERWoxrpRi\n"\
//"gX1skQKBgQDZ76UquJBWd09qDsusKyYWNAzRHdPwJn2fi2wKhJBsO/AoGwO1mQYy\n"\
//"0B8tEm59u8r/QBUU3JBG9PJHnadBtvxMhxb1Y3OmISAit9S7t+fgC2X8XQ2wo5i7\n"\
//"77UTuzoZsDZ+R2KUUEqfDq2k4WxDJKUua0u9+iBcxQ2jAUWeAcWpLg==\n"\
//"-----END RSA PRIVATE KEY-----\n"
//#endif

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
