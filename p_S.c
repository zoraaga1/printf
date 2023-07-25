#include "main.h"

/**
 * p_hex_char - Helper function to print non-printable
 *			characters in hexadecimal format
 * @c: The character to be printed
 */
void p_hex_char(unsigned char c)
{
	char hex_digits[] = "0123456789ABCDEF";

	_putchar('\\');
	_putchar('x');
	_putchar(hex_digits[c >> 4]);
	_putchar(hex_digits[c & 0x0F]);
}

/**
 * p_S - Custom conversion specifier 'S'
 *		: prints the string with handlin
 *		g for non-printable characters
 * @S: The string to be printed
 *
 * Return: Number of characters printed
 */
int p_S(va_list S)
{
	char *str = va_arg(S, char *);
	int count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str)
	{
		if (*str >= 32 && *str < 127)
		{
			_putchar(*str);
			count++;
		}
		else
		{
			p_hex_char(*str);
			count += 4; /*Account for the extra char printed in hexadecimal format*/
		}
		str++;
	}
	return (count);
}
