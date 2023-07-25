#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
int _putchar(char c);
int print_str(char *str);
int print_int(int i);
int print_uns(unsigned int i);
int print_char(int c);
#include <stddef.h>
/**
 * struct spec - struct spec
 * @spec: the format specifier
 * @f: function asscociated
 */
typedef struct print_spec
{
	char spec;
	int (*f)(int);
} specifier;
int(*get_funct(char spc))(int);
#endif
