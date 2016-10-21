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
#ifndef MBED_PERIPHERALNAMES_H
#define MBED_PERIPHERALNAMES_H

#include "cmsis.h"
#include "PinNames.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    UART0 = 0
} UARTName;

typedef enum {
    ADC0 = 0
} ADCName;

typedef enum {
    DAC0 = 0
} DACName;

typedef enum {
    SPI0 = 0
} SPIName;

typedef enum {
    I2C0 = 0
} I2CName;

typedef enum {
    PWM0 = 0
} PWMName;

typedef enum {
     CAN0 = 0
} CANName;

#define STDIO_UART   UART0

#ifdef __cplusplus
}
#endif

#endif
