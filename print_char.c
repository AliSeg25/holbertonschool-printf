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
<<<<<<< HEAD
        write(1, &c, 1);
=======
	my_write(c);
>>>>>>> df74f57d3655f29a13e8c24b9b0d19375a4b8d8e

	return (1);

}
