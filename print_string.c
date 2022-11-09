#include "main.h"
/**
 * print_string - function that print string
 * @arg: argument
 * Return: (i);
 */
int print_string(va_list arg)
{
	char *s;
	int i;

	s = va_arg(arg, char*);
	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		my_write(s[i]);
	}

	return (i);
}
