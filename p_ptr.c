#include "main.h"

/**
 * p_ptr print the adress of a pointer in hexadecimal
 * @ap: va_lis cointaining the pointer to be printed
 *
 * Return: number of charachters printed
 */
int p_ptr(va_list p)
{
	unsigned long address = (unsigned long )p;
	char hex_digits[] = "0123456789abcdef";
	int i;

	/*Calculate the hexadecimal representation of the pointer's address*/
	char hex_address[sizeof(unsigned long) * 2 + 3];
	hex_address[0] = '0';
	hex_address[1] = 'x';
	hex_address[sizeof(unsigned long) * 2 + 2] = '\0';
	for (i = sizeof(unsigned long) * 2 + 1; i >= 2; i--)
    	{
        	hex_address[i] = hex_digits[address & 0xF];
        	address >>= 4;
    	}
	/*Print the hexadecimal address*/
	i = 0;
	while (hex_address[i] != '\0')
	{
		_putchar(hex_address[i]);
        	i++;
	}
	return i;
}
