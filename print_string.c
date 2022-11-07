#include "main.h"

/**
 * - print character
 *@arg: argument
 *
 *Return: void
 */
void print_string(va_list arg)
{
	char *s;
	int i;

	s = va_arg(arg, char*);

	for (i = 0; s[i] != '\0'; i++)
	{
		my_write(varg[i]);
	}
}
