#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*prototypes of functions*/
int _printf(const char *format, ...);
int _putchar(char c);
int p_char(va_list c);
int p_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);

/**
 * struct code_format - Struct format
 * @sp: Specifiers
 * @f: Function associated to each type
 */
typedef struct code_format
{
	char *sp;
	int (*f)(va_list);
} code_f;

#endif
