#ifndef printf_h
#define printf_h

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*prototypes of functions*/
int _printf(const char *format, ...);
int _putchar(char c);
int p_char(va_list c);
int p_string(va_list s);

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
