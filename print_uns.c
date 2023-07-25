#include "main.h"
/**
 * print_uns - print unsigned integer
 * @ap: variable argument list
 *
 * Return: number of characters printed
 */
int print_uns(va_list ap)
{
	unsigned int i;

	i = va_arg(ap, unsigned int);
	return (print_recur(i));
}
/**
 * print_recur -does recursion for printing an uns int
 * @i: what to print
 *
 * Return: number of characters printed
 */
int print_recur(unsigned int i)
{
	int c;

	c = 0;

	if (i / 10 == 0)
	{
		_putchar((i % 10) + '0');
		c++;
	}
	else
	{
		print_recur(i / 10);
		_putchar((i % 10) + '0');
		c++;
	}
	return (c);
}
