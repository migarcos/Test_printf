#include "holberton.h"
#include <stdio.h>
#include  <stdarg.h>

/**
 * _printf - 0x11 to project.
 * @format: format.
 * return: 0 all is well, -1 to error on args or format.
 */

int _printf(const char *format, ...)
{
	va_list args;
	const char *str;
	int i = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (str = format; *str; str++)
	{
		if (*str == '%' && *str + 1 == '%')
		{
			_putchar(*str), i++;
			continue;
		}
		else if (*str == '%' && *str + 1 != '%')
		{
			switch (*++str)
			{
				case 'c':
					i += fstrings(args);
					break;
				case 's':
					i += print_char(args);
					break;
				case '%':
					_putchar('%'), i++;
					break;
			}
		}
		else
			_putchar(*str), i++;
	}
	va_end(args);
	return (i);
}
