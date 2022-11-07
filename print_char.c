#include "main.h"
/**
 *print_char - print character
 *@arg: argument
 *
 *Return: (1)
 */

int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	my_write(c);

	return (1);
}
