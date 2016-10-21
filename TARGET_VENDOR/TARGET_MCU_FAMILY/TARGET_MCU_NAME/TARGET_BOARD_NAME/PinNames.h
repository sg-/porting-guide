/* mbed Microcontroller Library
 * Copyright (c) 2006-2016 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PIN_INPUT,
    PIN_OUTPUT
} PinDirection;

typedef enum {
    LED1 = 0,
    LED2,
    LED3,
    LED4,

    USBTX,
    USBRX,

    D0,
    D1,
    D2,
    D3,
    D4,
    D5,
    D6,
    D7,
    D8,
    D9,
    D10,
    D11,
    D12,
    D13,

    A0,
    A1,
    A2,
    A3,
    A4,
    A5,

    I2C_SCL,
    I2C_SDA,

    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

typedef enum {
    PullUp = 0,
    PullDown,
    PullNone,
    Repeater,
    OpenDrain,
    PullDefault = PullUp
} PinMode;

#define STDIO_UART_TX     USBTX
#define STDIO_UART_RX     USBRX

#ifdef __cplusplus
}
#endif

#endif
