#include "main.h"

/**
 * p_p - print the memory address of a pointer
 * @ptr: pointer to be printed
 *
 * Return: Number of characters printed
 */
int p_p(va_list ptr)
{
	void *address = va_arg(ptr, void *);

	_putchar('0');
	_putchar('x');
	return (p_hex((unsigned long)address, 0) + 2);
}
