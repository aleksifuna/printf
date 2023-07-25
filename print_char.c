#include "main.h"
#include <stdarg.h>
/**
 * print_char - prints a character
 * @ap: variable argument
 *
 * Return: number of characters printed
 */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
