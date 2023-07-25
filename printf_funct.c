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
	int i, count, (*print_handle)(va_list);

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	count = i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i - 1] != '\'')
		{
			if (format[i + 1] == '\0' || format[i + 1] == ' ')
				return (-1);
			if (format[i + 1] == '%')
				count += _putchar('%');
			else
			{
				print_handle = get_funct(format[i + 1]);
				if (print_handle == NULL)
				{
					count += _putchar(format[i]);
					i--;
				}
				else
					count += print_handle(ap);
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(ap);
	return (count);
}
