#include "main.h"

/**
 * p_S - print a string with special formatting
 * @s: string to be printed
 *
 * Return: Number of characters printed
 */
int p_S(va_list s)
{
	char *str = va_arg(s, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2 + p_hex(*str, 1);
		}
		else
		{
			_putchar(*str);
			count++;
		}
		str++;
	}

	return (count);
}
