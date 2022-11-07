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
		{"%", print_poucentage},
		{NULL, NULL}
	};

	int i = 0;
	int j = 0;

	va_list arg;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] ==  '%')
		{
			for (j = 0; appfunc[j].type != NULL; j++)
			{
				if (format[i + 1] == *(appfunc[j].type))
					appfunc[j].f(arg);
				break;
			}
		}
	}

	if (format [i] == '\0')
		break;

	va_end(arg);
	return(0);
}
