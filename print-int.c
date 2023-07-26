#include "main.h"
#include <stdarg.h>
/**
 * print_int - prints number of characters
 * @ap: variable list
 *
 * Return: number of characters
 */

int print_int(va_list ap)
{
	int i;

	i = va_arg(ap, int);
	if (i < 0)
	{
		_putchar('-');
		i = -i;
		return (print_abs((unsigned int)i) + 1);
	}
	else
	{
		return (print_abs((unsigned int)i));
	}
}
/**
 * print_abs - print unsigned integer
 * @i: unsigned integer to be prited
 *
 * Return: number of characters printed
 */
int print_abs(unsigned int i)
{
	int count;

	count = 0;
	if (i / 10 == 0)
	{
		return (_putchar((i % 10) + '0'));
	}
	else
	{
		count += print_abs(i / 10);
		count += _putchar((i % 10) + '0');
	}
	return (count);
}
