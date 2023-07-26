#include "main.h"
/**
 * print_oct - print unsigned integer in base 8
 * @ap: variable argument list
 *
 * Return: number of characters printed
 */
int print_oct(va_list ap)
{
	unsigned int i;

	i = va_arg(ap, unsigned int);
	return (oct_recur(i));
}
/**
 * oct_recur -does recursion for printing an uns int in base 8
 * @i: what to print
 *
 * Return: number of characters printed
 */
int oct_recur(unsigned int i)
{
	int c;

	c = 0;

	if (i / 8 == 0)
	{
		return (_putchar((i % 8) + '0'));
	}
	else
	{
		c += oct_recur(i / 8);
		c += _putchar((i % 8) + '0');
	}
	return (c);
}
