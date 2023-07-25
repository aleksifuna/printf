#include "main.h"
/**
 * print_bin - print unsigned integer in base 2
 * @ap: variable argument list
 *
 * Return: number of characters printed
 */
int print_bin(va_list ap)
{
	unsigned int i;

	i = va_arg(ap, unsigned int);
	return (bin_recur(i));
}
/**
 * bin_recur -does recursion for printing an uns int
 * @i: what to print
 *
 * Return: number of characters printed
 */
int bin_recur(unsigned int i)
{
	int c;

	c = 0;

	if (i / 2 == 0)
	{
		return(_putchar((i % 2) + '0'));
	}
	else
	{
		c += bin_recur(i / 2);
		c += _putchar((i % 2) + '0');
	}
	return (c);
}
