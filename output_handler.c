#include "main.h"
/**
 * print_format - print format
 * @specifier: string format
 * @params: list of arguments
 * Return: int of bytes printed to the std ouput
 */
int print_format(char specifier, va_list params)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count = output_char(va_arg(params, int));
	else if (specifier == 's')
		count = output_str(va_arg(params, char *));
	else if (specifier == '%')
		count = output_char('%');
	else
		count += write(1, &specifier, 1);
	return (count);
}
