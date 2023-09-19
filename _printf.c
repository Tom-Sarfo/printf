#include "main.h"
/**
 * _printf - print to stdo
 *
 * @format: format specifier
 * Return:  int of bytes printed to the stdo
 */
int _printf(const char *format, ...)
{
	unsigned int i, count;

	va_list params;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
va_start(params, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count += output_char(format[i]);
		}
		else
		{
		count += print_format(format[i + 1], params);
		}
	}
	va_end(params);
	return (count);
}
