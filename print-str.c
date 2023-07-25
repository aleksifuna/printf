#include "main.h"
/**
 * print_str - prints a string.
 * @str: string to be printed.
 *
 * Return: 1 on Success.
 */
int print_str(char *str)
{
	int i;

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
