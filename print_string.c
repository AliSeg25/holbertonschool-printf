#include "main.h"

/**
 * - print character
 *@arg: argument
 *
 *Return: void
 */
void print_string(va_list arg)
{
	char *varg;
	int i;

	varg = va_arg(arg, char*);

	for (i = 0; varg[i] != '\0'; i++;)
	{
		my_write(varg);
	}
}
