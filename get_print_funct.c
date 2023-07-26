#include "main.h"
#include <stdarg.h>
/**
 * get_funct - returns a pointer to function correspoind to a specifier
 * @spc: specifier
 *
 * Return: pointer to function
 */
int (*get_funct(char spc))(va_list)
{
	specifier funct[] = {
		{'i', print_int},
		{'d', print_int},
		{'c', print_char},
		{'s', print_str},
		{'u', print_uns},
		{'b', print_bin},
		{'o', print_oct},
		{'x', print_hex},
		{'X', print_heX},
	};
	int i;

	i = 0;
	while (funct[i].spec)
	{
		if (funct[i].spec == spc)
		{
			return (funct[i].f);
		}
		i++;
	}
	return (NULL);
}
