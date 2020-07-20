#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * fun-string - print string.
 * @arguments: va_list.
 * Return: String.
 */
int fstrings(va_list arguments)
{
	char *str;
	int i = 0;

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (; *str; str++)
	{
		write(1, &str, 1);
		i++:
	}
	return (i);
}
