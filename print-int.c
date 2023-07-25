#include "main.h"

/**
 * print_int - prints number of characters
 * @i: integer to be printed
 *
 * Return: number of characters
 */

int print_int(int i)
{

	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}

	return (print_abs((unsigned int )i) + 1);
}
/**
 * print_abs - prints absolute i
 * @i: interger to be printed
 *
 * Return: number of characters printed
 */
int print_abs(unsigned int i)
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
		print_int(i / 10);

		_putchar((i % 10) + '0');
		c++;
	}
	return (c);
}
/**
 * print_uns - print unsigned integer
 * @i: unsigned integer to be prited
 *
 * Return: number of characters printed
 */
int print_uns(unsigned int i)
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
		print_uns(i / 10);

		_putchar((i % 10) + '0');
		c++;
	}
	return (c);
}
