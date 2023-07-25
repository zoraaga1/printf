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
int p_int(va_list i);
int p_dec(va_list d);
int p_bin(va_list b);
int p_unsig(va_list u);
int p_octal(va_list o);
int p_x(va_list x);
int p_X(va_list X);
int p_S(va_list S);
int p_rev(va_list r);
int p_rot13(va_list R);
int p_p(va_list ptr);
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

/* Helper function to print non-printable characters in hexadecimal format */
void p_hex_char(unsigned char c);


#endif
