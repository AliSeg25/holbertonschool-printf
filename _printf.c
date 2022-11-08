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


	va_list arg;


	va_start(arg, format);
	for (format; *format; format++)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			continue;
		}
		else
		{
			format++;
			if (*format == 'c')
				appfunc[0].f(arg);
		}
	}
	va_end(arg);
	return (0);
}
