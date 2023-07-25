#include "main.h"
/**
 * get_funct - returns a pointer to function correspoind to a specifier
 * @spc: specifier
 *
 * Return: pointer to function
 */
int (*get_funct(char spc))(int)
{
	specifier funct[] = {
		{'i', print_int},
		{'d', print_int},
		{'c', print_char},
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
