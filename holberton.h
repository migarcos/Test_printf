#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int fstrings(va_list arguments);
int _putchar(char c);
int print_char(va_list ap);
int print_string(va_list ap);

#endif
