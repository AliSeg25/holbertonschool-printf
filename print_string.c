#include "main.h"
<<<<<<< HEAD
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


=======
>>>>>>> df74f57d3655f29a13e8c24b9b0d19375a4b8d8e
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
