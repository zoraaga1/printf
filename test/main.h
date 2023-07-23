#ifndef main_h
#define main_h

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/*Prototypes of functions used*/
int _printf(const char *format, ...);
int _putchar(char c);
int p_char(va_list c);
int p_string(va_list s);

/**
  * struct code_format - Struct format
  *
  * @sp: specifiers
  * @f: The function associated
  */
typedef struct code_format
{
	char *sp;
	int (*f)(va_list);
} code_f;

