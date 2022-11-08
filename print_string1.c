#include "main.h"

/**
 * print_string - print character
 *@arg: argument
 *
 *Return: void
 */
int print_string(va_list arg)
{
	char *c;
	int len = 0;
	c = va_arg(arg, char *);
	if (c == NULL)
		c = "(null)";
	for (len = 0; c[len]; len++)
	{
		len++;
	}
	write(1, c, len);
}
