#include "main.h"
#include <stdarg.h>
/**
 *_strelen - function that return length
 *@: parametr of the function
 *
 *Return: int
 */
int _strlen(const char *s)
{
	int len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len - 1);
}

/**
 * _printf - elle nous permet d'appeler la bonne fonction:
 * @format: la string
 * Return: .f
 */


int _printf(const char *format, ...)
{
	type appfunc[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list arg;

	int i = 0;
	int len;
	len = _strlen(format);

	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			my_write(format[i]);
		}
		else
		{

			if (format[i] == '%' && format[i + 1] == 'c')
			{
				appfunc[0].f(arg);
				i += 1;
			}
		}
	}
	va_end(arg);
	return (len);
}
