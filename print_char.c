#include "main.h"

/**
 *print_char - print character
 *@arg: argument
 *
 *Return: void
 */

void print_char(va_list arg)
{
	char c;

	/*write(1, &c, 1));*/

	my_write(va_arg(arg, int));
}
