#include "holberton.h"
#include  <stdarg.h>

/**
 * _printf - 0x11 to project
 * @format: format
 * return: 0 all is well, -1 to error on args or format
 * */

int _printf(const char *format, ...)
{
	va_list args;
	char *str;
	int i = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	
	
	va_end(args);

	return (0);
}
