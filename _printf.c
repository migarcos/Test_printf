#include "holberton.h"
#include  <stdarg.h>

/**
 * _printf - 0x11 to project
 * @format: 
 *
 * return: 0 all is well, -1 to error on args or format
 * */

int _printf(const char *format, ...)
{
	va_list valist;

	if (format == NULL)
		return (-1);

	va_start(valist, format);

	va_end(valist);

	return (0);
}
