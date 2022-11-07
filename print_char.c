#include "main.h"

/**
 *print_char - print character
 *@arg: argument
 *
 *Return: void
 */

void print_char(va_list arg)
{
	my_write(va_arg(arg, int));
}
