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
					count += _putchar(va_arg(ap, int));
					break;
				case 's':
					count += print_string(va_arg(ap, char*));
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					break;
			}
			i += 2;
			continue;
		}
		i++;
		count++;
	}
	va_end(ap);
	return (count);
}
