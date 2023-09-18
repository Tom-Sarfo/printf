#include "main.h"
/**
 * output_char - output a character
 * @c: char input argument
 * Return: 1
*/
int output_char(char c)
{
    return (write(1, &c, 1));
}
