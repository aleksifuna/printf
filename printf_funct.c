#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints to the stdou
 * @format: format specifier
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, count;

	va_start(ap, format);
	i = 0;
	count = 0;
	while(format[i])
	{
		if (format[i] == '%')
		{
			switch (format [i + 1])
			{
			case 'c':
				_putchar(va_arg(ap, int));
				count ++;
				break;
			case 's':
				count += print_str(va_arg(ap, char *));
				break;
			default:
				continue;
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			count ++;
			i++;
		}
	}
	va_end(ap);
	return (count);
}
