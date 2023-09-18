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
            output_char(format[i]);
        }
        else if (format[i + 1] == 'c')
	{
		output_char(va_arg(params, int));
            	i++;
	}
        count =+ 1;
    }
    va_end(params);
    return (count);
}

