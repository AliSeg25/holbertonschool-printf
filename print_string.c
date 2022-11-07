#include "main.h"

/**
 * print_string - print character
 *@arg: argument
 *
 *Return: void
 */
int print_string(va_list arg)
{
	char *s;
	int i;

	s = va_arg(arg, char*);

	for (i = 0; s[i] != '\0'; i++)
	{
		my_write(s[i]);
	}

	return (i);
}
