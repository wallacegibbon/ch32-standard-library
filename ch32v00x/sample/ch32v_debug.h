#ifndef __DEBUG_H
#define __DEBUG_H

#include <stdio.h>

#define DEBUG_UART1 1

#ifndef DEBUG
#define DEBUG DEBUG_UART1
#endif

void usart_printf_initialize(uint32_t baudrate);

#endif

