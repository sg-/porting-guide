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
#include "mbed_assert.h"
#include <stdlib.h>
#include "serial_api.h"
#include "pinmap.h"
#include "gpio_api.h"

#if DEVICE_SERIAL

int stdio_uart_inited = 0;
serial_t stdio_uart;

void serial_init(serial_t *obj, PinName tx, PinName rx) {
    (void) obj;
    (void) tx; 
    (void) rx;
    // responsible for using STDIO_UART to determine if stdio has been initialized
    // and if so return.
    // if (STDIO_UART == UART0) {
    //  stdio_uart_inited = 1;
    //  return;
    //}
}

void serial_free(serial_t *obj) {
    (void) obj;
    // responsible for using STDIO_UART to determine if stdio has been initialized
    // and if so return.
    // if (obj->uart == UART0) {
    //  stdio_uart_inited = 0;
    //}
    obj = 0;
}

void serial_baud(serial_t *obj, int baudrate) {
    MBED_ASSERT(obj != 0);
}

void serial_format(serial_t *obj, int data_bits, SerialParity parity, int stop_bits) {
    MBED_ASSERT((stop_bits == 1) || (stop_bits == 2)); // 0: 1 stop bits, 1: 2 stop bits
    MBED_ASSERT((data_bits > 4) && (data_bits < 9)); // 0: 5 data bits ... 3: 8 data bits
    MBED_ASSERT((parity == ParityNone) || (parity == ParityOdd) || (parity == ParityEven) ||
           (parity == ParityForced1) || (parity == ParityForced0));
}

void serial_irq_handler(serial_t *obj, uart_irq_handler handler, uint32_t id) {
    (void) obj;
    (void) handler;
    (void) id;
}

void serial_irq_set(serial_t *obj, SerialIrq irq, uint32_t enable) {
    MBED_ASSERT(obj != 0);
    MBED_ASSERT((irq == RxIrq) || (irq ==TxIrq));
    (void) enable;
}

int serial_getc(serial_t *obj) {
    MBED_ASSERT(obj != 0);
    return -1;
}

void serial_putc(serial_t *obj, int c) {
    MBED_ASSERT(obj != 0);
}

int serial_readable(serial_t *obj) {
    MBED_ASSERT(obj != 0);
    return -1;
}

int serial_writable(serial_t *obj) {
    MBED_ASSERT(obj != 0);
    return -1;
}

void serial_clear(serial_t *obj) {
    MBED_ASSERT(obj != 0);
}

void serial_break_set(serial_t *obj) {
    MBED_ASSERT(obj != 0);
}

void serial_break_clear(serial_t *obj) {
    MBED_ASSERT(obj != 0);
}

void serial_pinout_tx(PinName tx) {
    (void) tx;
}

void serial_set_flow_control(serial_t *obj, FlowControl type, PinName rxflow, PinName txflow) {
    MBED_ASSERT(obj != 0);
    MBED_ASSERT((type == FlowControlNone) || (type == FlowControlRTS) || (type == FlowControlCTS) ||
            (type == FlowControlRTSCTS));
    MBED_ASSERT(rxflow != (PinName)NC);
    MBED_ASSERT(txflow != (PinName)NC);
}

#endif
