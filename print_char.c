#include "main.h"
/**
 *print_char - print character
 *@arg: argument
 *
 *Return: (1)
 */

int print_char(va_list arg)
{
	my_write(va_arg(arg, int));
	return (1);
}
