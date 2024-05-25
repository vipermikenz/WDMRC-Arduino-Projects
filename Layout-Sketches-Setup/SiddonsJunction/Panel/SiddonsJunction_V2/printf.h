#ifndef PRINTF_H
#define PRINTF_H

#include <Arduino.h>

int serial_putchar(char c, FILE* f) {
    Serial.write(c);
    return 0;
}

void setup_printf() {
    fdevopen(&serial_putchar, 0);
}

#endif
