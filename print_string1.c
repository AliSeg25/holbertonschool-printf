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
	write(1, c, len);
	return (len);
}
