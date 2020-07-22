#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * fstrings - print string.
 * @args: argumentos..
 * Return: none
 */
int fstrings(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * print_char - print a char
 * @args: list of args
 * Return: none
 */
int print_char(va_list args)
{
	int i = 0;

	i = va_arg(args, int);
	putchar(i);
	return (1);
}
