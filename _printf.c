#include "main.h"

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
	va_list arg;


	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			continue;
		}
		else
		{
			if (format[i + 1] == 'c')
				appfunc[0].f(arg);
		}
	}
	va_end(arg);
	return (0);
}
