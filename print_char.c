#include "main.h"
/**
 * print_char - function that print char
 * @arg: arguement
 * Return: return (1);
 */
int print_char(va_list arg)
{
	my_write(va_arg(arg, int));
	return (1);
}
