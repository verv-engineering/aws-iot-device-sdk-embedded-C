/*
 * FreeRTOS V201906.00 Major
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

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAK7Tl0hU5HTuIk8zGHjVi/7eK/8RMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMDA5MTgwODI4\n"\
"MzBaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCnYKAT1lZ9Af0kbmbH\n"\
"+QN5Q7i7w7hGgqKuHjYa7LNevfmMLxo2holNocFzfAKn/qcvj0Flefuc3RQ4Gccr\n"\
"ygcwgRoaG07u4ELEQVkl3LUKxPjjx4bT3tDaDI1xE8XOIUYr4kYyNXiC0NMIHvzy\n"\
"KS36dkr8Pz6p+WZNAfGy4yLCE/AQIi1zl8pQXAr2gxTHlNeAbvxdxCsF0PBcZJRH\n"\
"o/zEUuzLCWZW/FpYnFAlGEIdZF1OaFTgi/4Y+bdrlBdu3gKSzxLaMW/lWNUzIALp\n"\
"FoEQE+YO+apYUGnvRulQ8sxB4dGOaj8hFL93Om6gunb5roK9Ww05rVE9ks8lWnlS\n"\
"LWy3AgMBAAGjYDBeMB8GA1UdIwQYMBaAFPJJRf4OPr3xttly108X93U4NDI6MB0G\n"\
"A1UdDgQWBBRY0m3BBKB8UM68Jm64vB5v05M/MzAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAlE3rrqES+gmfYXLuq4EOP8Hg\n"\
"mxWjFRuEduZmWp/MpFA0wRi/zVsTGFL+U8CAiF4JUTZUA4LF4pzoEcjUPTPcHGVm\n"\
"81rtifijlfWPpfrzBTp5kzDGBI90+JFOTi/yWvBw7UY919Bqp6dLlxNPUKeCpI3p\n"\
"6GWjXn0TV6koGUtbFbtSUeaKSQkSJDfphSrCvjLLhG3K/DLtewGQYTuRqyFhZa34\n"\
"NkBpFLaWl5mKJUvOp4bcro7uelHa7C8Dkmol3MYhb9nTmCdcernGoAfFMOQ96Vsd\n"\
"leelfJLSQif6PqTCHd08m8bh5Yc+JTc6C89zxBrGHl5GjLFgOc1dioni2erzoA==\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate 
 * Authority) of the client certificate is used by the server for routing the 
 * device's initial request. (The device client certificate must always be 
 * sent as well.) For more information about JITR, see:
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
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  NULL

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEowIBAAKCAQEAp2CgE9ZWfQH9JG5mx/kDeUO4u8O4RoKirh42GuyzXr35jC8a\n"\
"NoaJTaHBc3wCp/6nL49BZXn7nN0UOBnHK8oHMIEaGhtO7uBCxEFZJdy1CsT448eG\n"\
"097Q2gyNcRPFziFGK+JGMjV4gtDTCB788ikt+nZK/D8+qflmTQHxsuMiwhPwECIt\n"\
"c5fKUFwK9oMUx5TXgG78XcQrBdDwXGSUR6P8xFLsywlmVvxaWJxQJRhCHWRdTmhU\n"\
"4Iv+GPm3a5QXbt4Cks8S2jFv5VjVMyAC6RaBEBPmDvmqWFBp70bpUPLMQeHRjmo/\n"\
"IRS/dzpuoLp2+a6CvVsNOa1RPZLPJVp5Ui1stwIDAQABAoIBAF0mWFBR8/ZEOhah\n"\
"XpAiFH3TY6cTqKWNJG5Un/XiD31FqvEKccMwoo9S22+i73OBNJgyWMnZ1l8ZZpxG\n"\
"NGM5X0DuSJGI6yfkJSRF3hBFQXhJ4N4bd/zHv2HqpHju8SHjwMLBfiGJQpVDFH8r\n"\
"h8hZhJ4kYVz68av1AasPzuyonfp16asKTDEVRXywe/BUHqCghRnG8ahTyTMT+rox\n"\
"7X+83PFt51TqLtzZZkE5zT+l44ft3EQapcQ3EAg0MFd0dp+espzQXp0MCSPX1l2e\n"\
"MAbwlnH+0PM2jwD8Ljd2K1QXSzDsUEI6RPrCdHzhH0dpMbHObjUW0bZuOlD6OHmb\n"\
"KrBrOXkCgYEA02XmkADeyd63KoPoKEKrUCWW/klBTO4IFAEwp3atRzem8i/KiXVo\n"\
"0mmcpkEda3eX2anFDetp2t2PZGYayQdUbuButycjK/mfi3Q+fgJrL5U3OrBm2cKJ\n"\
"xfKGXGbpUh91TVjn+T0YkPgHTBIc4xZienoTUQcSgARxclaGndwAIt0CgYEAyrER\n"\
"y3t8au2DfZEdqkM8RPJxxfnp2+sChba+4VQk7H3HXko8p0cU5wc02XYgT6IwPL0Q\n"\
"a/18rfj+d9voyzTtz+TraAy9EckkUVKlUEePiOk5pid4vPMMdoytxsFLhdrAHf8C\n"\
"sG4bVjUY11MrUs08WhtAVORSz+/wyePEdng/gqMCgYBC7138tLnWM3XNuWx16v4x\n"\
"Z2WS6IELqcbXBrVwIOymwyFSR/2aXpmtHhGitrVpBLoJCm9BhAvFaCfyAz5x7qc2\n"\
"YEvOJE9HqkdxMYJkBcIIk/ej1p0KUEWtbqhKc69m+Fz8+6yfx0+S/2XYGVgaM0lF\n"\
"PIgHPPUHoeCF8o23SCSm5QKBgQCHNdOPD9MRaVubueA2Ih/kRm7LCEmOoJjQJfXz\n"\
"TjRLZiRGq/MGC47QBqikn/4x4RmYiu6Xe0Nesojd397NH4O8eRLoGAdQBAOsFBuf\n"\
"D/2Z8Sq5wf7y3JdlxbZurab5pdEesWxT0T9/JHBrw1lVJP+rhB5IAv+TIpZXtw7p\n"\
"kJGdTQKBgAY89eewqF7YbXdYL/9wVE/3MKHQ7jdV8ELxKtHChR7aV/CjfxXhC01V\n"\
"cg4zknOQHvfOiNPrFBgg8D9UBSIckG5CK6Vg3eBABRl6+rTrGRLxApZQFeNCbuBh\n"\
"/Wf7tLfNVH9nk6USFPyBi/xR8PyNuKo95sogfG9aKq2B8RvcaWrc\n"\
"-----END RSA PRIVATE KEY-----\n"


#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
