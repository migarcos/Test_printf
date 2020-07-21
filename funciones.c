#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * fun-string - print string.
 * @args: argumentos..
 * Return: string.
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
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
/**
 * print_char - print a char
 * @ap: list of args
 * Return: none
 */
void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	putchar(c);
}
