#include "main.h"
/**
 * print_heX - print unsigned integer in base 16
 * @ap: variable argument list
 *
 * Return: number of characters printed
 */
int print_heX(va_list ap)
{
	unsigned int i;

	i = va_arg(ap, unsigned int);
	return (heX_recur(i));
}
/**
 * heX_recur -does recursion for printing an uns int in base 16
 * @i: what to print
 *
 * Return: number of characters printed
 */
int heX_recur(unsigned int i)
{
	int c, remainder;

	c = 0;

	if (i / 16 == 0)
	{
		remainder = i % 16;
		if (remainder < 10)
			return(_putchar(remainder + '0'));
		else
			return(_putchar(remainder - 10 + 'A'));
	}
	else
	{
		c += heX_recur(i / 16);
		remainder = i % 16;
		if (remainder < 10)
			c += _putchar(remainder + '0');
		else
			c += _putchar(remainder - 10 + 'A');
	}
	return (c);
}
