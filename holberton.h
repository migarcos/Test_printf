#ifndef PRINTF_H
#define PRINTF_H

#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int fstrings(va_list args);
int _putchar(char c);
int print_char(va_list args);
int print_integer(va_list args);

#endif
