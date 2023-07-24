#include "main.h"

/**
 * p_S - print the input string
 *	with special formatting
 *	for non-printable characters
 * @s: the input string
 * Return: number of characters printed
 */
int p_S(va_list S)
{
    char *str = va_arg(S, char *);
    int s_printed = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			s_printed += _putchar('\\');
			s_printed += _putchar('x');
			s_printed += _putchar('0' + ((*str >> 4) & 0xF));
			s_printed += _putchar('0' + (*str & 0xF));
		}
		else
		{
			s_printed += _putchar(*str);
		}
	str++;
	}
	return (s_printed);
}
