#include "printf.h"

/**
 * p_char - print the character c to stdout
 * @c: char to be printed
 *
 * Return: 1
 */

int p_char(va_list c)
{
	unsigned char _char;

	_char = va_arg(c, int);
	_putchar(_char);
	return (1);
}

/**
 * p_porcentage - print %
 *
 * Return: 1 (Success)
 */

int p_porcentage(void)
{
	_putchar('%');
	return (1);
}
