#include "main.h"
/**
 * _printf - it sends the format the arguments and the array
 *to the function f__printf
 * @format: string
 * Return: (len)
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int len;

	t appfunc[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_pourcentage},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(arg, format);
/**	len = f__printf(format, appfunc, arg);**/
	len = f__printf(appfunc, format, arg);
	va_end(arg);

	return (len);
}
