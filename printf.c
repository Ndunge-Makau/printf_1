#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: character string.
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list ap;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(ap, int));
					break;
				case 's':
					print_string(va_arg(ap, char*));
					break;
				case '%':
					_putchar('%');
					break;
			}
		}
		i++;
		count++;
	}
	va_end(ap);
	return (count);
}
