#include "main.h"
#include <stdarg.h>
/**
 * print_str - prints a string.
 * @ap: string to be printed.
 *
 * Return: 1 on Success.
 */
int print_str(va_list ap)
{
	int i;
	char *str;

	str = va_arg(ap, char *);
	i = 0;
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
