#include "main.h"

/**
 * p_bin - convert an input number to binary
 * @b: the number tobe printed
 *
 * Return: the number of char printed
 */

int p_bin(va_list b)
{
	unsigned int length, p, i, digit, num, n;
	int n_printed = 0;

	n = va_arg(b, unsigned int);
	if (n != 0)
	{
		num = n;
		length = 0;
		while (num != 0)
		{
			num /= 2;
			length++;
		}
		p = 1;
		for (i = 1; i <= length - 1; i++)
		{
			digit = n / p;
			_putchar(digit + '0');
			n_printed++;
			n -= digit * p;
			p /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (n_printed);
}
