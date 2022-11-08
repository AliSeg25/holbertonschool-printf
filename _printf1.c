#include "main.h"
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
	return (len);
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

	int i = 0;
	int len;
	len = _strlen(format);
      	va_list arg;


	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			my_write(format[i]);
			continue;
		}
		else
		{

			if (format[i] == '%' && format[i + 1] == 'c')
			{
				appfunc[0].f(arg);
			}
		}
	}
	va_end(arg);
	return (len);
}
