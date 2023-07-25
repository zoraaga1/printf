#include "main.h"

/**
 * find_function - choose the right function
 * @format : type of input
 * Return: NULL or function associated to the type
 */

int (*find_function(const char *format))(va_list)
{
	unsigned int i = 0;
	code_f find_f[] = {
		{"c", p_char},
		{"s", p_string},
		{"i", p_int},
		{"d", p_dec},
		{"b", p_bin},
		{"u", p_unsig},
		{"o", p_octal},
		{"x", p_x},
		{"X", p_X},
		{"S", p_S},
		{"r", p_rev},
		{"R", p_rot13},
		{NULL, NULL}
	};

	while (find_f[i].sp)
	{
		if (find_f[i].sp[0] == (*format))
			return (find_f[i].f);
		i++;
	}
	return (NULL);
}

/**
 * _printf - print the input to stdout
 *		according to a format
 * @format: type of input
 * Return: print the result to output
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int (*f)(va_list);
	unsigned int i = 0;
	unsigned int n_printed = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			n_printed++;
			i++;
		}
		if (format[i] == '\0')
			return (n_printed);
		f = find_function(&format[i + 1]);
		if (f != NULL)
		{
			n_printed += f(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		n_printed++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (n_printed);
}
