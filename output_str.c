#include "main.h"
/**
 * output_str - print out string
 * @s: char pointer
 * Return: int count of string to the std ouput
 */
int	output_str(char *s)
{
	int	count;

	count = 0;
	while (*s)
		count += write(1, s++, 1);
	return (count);
}
