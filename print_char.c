#include "main.h"


/**
 *print_char - print character
 *@arg: argument
 *
 *Return: (1)
 */

int print_char(va_list arg)
{
<<<<<<< HEAD
	my_write(va_arg(arg, int));
=======
	char c;

	c = va_arg(arg, int);

        write(1, &c, 1);

>>>>>>> 392092163a8b3ebcb910a57d36f7b1bc74e90af8
	return (1);

}
