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
	if (str == NULL)
	{
		str = "(null)";
	}
	for (; *str; str++)
	{
		_putchar(*str);
		i++;
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

/**
 * fun_integer - print integer and digit
 * @arguments: va_list
 * Return: int
 */
int print_integer(va_list args)
{
	int i, a, b;
	unsigned int x;

	i  = va_arg(args, int);
	a = 1;
	b = 0;

	if (i < 0)
	{
		b = b + _putchar('-');
		x = i * -1;
	}
	else
	{
		x = i;
	}

	while (x / a > 9)
	a = a * 10;

	while (a != 0)
	{
		b = b + _putchar('0' + x / a);
		x = x % a;
		a = a / 10;
	}
	return (b);
}
