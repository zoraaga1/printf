#include "main.h"

/**
 * p_string - print type string to stdout
 * @s: string to be printed
 *
 * Return: 1 (Success)
 */

int p_string(va_list s)
{
	char *_string;
	int i = 0;

	_string = va_arg(s, char *);
	if (_string == NULL)
		_string = "(null)";
	while (_string[i])
	{
		_putchar(_string[i]);
		i++;
	}
	return (i);
}
