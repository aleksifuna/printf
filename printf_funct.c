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
			case 'i':
				count += print_int(va_arg(ap, int));
				break;
			case 'd':
				count += print_int(va_arg(ap, int));
				break;
			case 'u':
				count+= print_uns(va_arg(ap, unsigned int));
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
