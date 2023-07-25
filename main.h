#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char);
int print_str(va_list ap);
int print_int(va_list ap);
int print_uns(va_list ap);
int print_char(va_list ap);
int print_abs(unsigned int i);
int print_recur(unsigned int i);
#include <stddef.h>
/**
 * struct print_spec - struct spec
 * @spec: the format specifier
 * @f: function asscociated
 */
typedef struct print_spec
{
	char spec;
	int (*f)(va_list);
} specifier;
int(*get_funct(char spc))(va_list);
#endif
