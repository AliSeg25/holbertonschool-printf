#include "main.h"

/**
 *_strlen - function that return length
 *@len: parametre of the function
 *
 *Return: length
 */
int _strlen (char *s)
{
	int len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * print_string - print character
 *@arg: argument
 *
 *Return: void
 */
int print_string(va_list arg)
{
	char *c;

	c = va_arg(arg, char *);
	write(1, c, _strlen(c));
	return (_strlen(c + 1));
}
