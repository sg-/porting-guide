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
#ifndef MBED_OBJECTS_H
#define MBED_OBJECTS_H

#include "cmsis.h"
#include "PortNames.h"
#include "PeripheralNames.h"
#include "PinNames.h"

#ifdef __cplusplus
extern "C" {
#endif

 struct gpio_s {
     void *data;
};

struct gpio_irq_s {
    void *data;
};

struct port_s {
    void *data;
};

struct pwmout_s {
    void *data;
};

struct serial_s {
    void *data;
};

struct analogin_s {
    void *data;
};

struct dac_s {
    void *data;
};

struct can_s {
    void *data;
};

struct i2c_s {
    void *data;
};

struct spi_s {
    void *data;
};

#ifdef __cplusplus
}
#endif

#endif
