#include "main.h"

/**
 * p_rev - print a string in reverse way
 * @r: char to be reversed
 *
 * Return: number of char printed
 */

int p_rev(va_list r)
{
	char *str;
	int i = 0;
	int j = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i] != '\0'; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar (str[i]);
		j++;
	}
	return (c_printed);
}
