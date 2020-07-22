#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
void fstrings(va_list args);
int _putchar(char c);
void print_char(va_list args);
void print_string(va_list args);

#endif
