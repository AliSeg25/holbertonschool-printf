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
		{"%", print_pourcentage},
		{NULL, NULL}
	};

	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;

	va_list arg;

	va_start(arg, format);

	if (format[0] == '%' || format[1] == '\0' || format == NULL)
		return (0);

	while (format[i] != '\0')
	{
		if (format[i] ==  '%')
		{
			j = 0;
			while (appfunc[j].type != NULL)
			{
				if (format[i + 1] == appfunc[j].type[0])
				{
					len = len + appfunc[j].f(arg);

				}
				j++;
			}
		}
		i++;

	}

	va_end(arg);
	return(len);
}
