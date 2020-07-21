int _printf(const char *format, ...)
{

	op_t fmt[] = {
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL},
	};

	va_list args;
	int i, j;

	va_start(args, format);
	i = 0;
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (fmt[j].op)
			{
				if (format[i] == fmt[j].op)
				{
					fmt[j].f(args);
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (0);
}
