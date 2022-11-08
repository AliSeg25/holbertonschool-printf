#include "main.h"
<<<<<<< HEAD:_printf.c
=======
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

>>>>>>> fda961be0f1f0a6392bd82d76d7acded206a90b6:_printf1.c
/**
 * _printf - elle nous permet d'appeler la bonne fonction:
 * @format: la string
 * Return: .f
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD:_printf.c
    va_list arg;

    int = len;

    t appfunc[] = {
	    {"c", print_char},
	    {"s", print_string},
	    {"%", print_pourcentage},
	    {NULL, NULL}
    };
=======
	type appfunc[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list arg;

	int i = 0;
	int len;
	len = _strlen(format);
>>>>>>> fda961be0f1f0a6392bd82d76d7acded206a90b6:_printf1.c

	if(!format)
	{
<<<<<<< HEAD:_printf.c
		return (-1);
=======
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
>>>>>>> fda961be0f1f0a6392bd82d76d7acded206a90b6:_printf1.c
	}

	va_start(arg, format);
	len = f__printf(format, appfunc, arg);
	va_end(arg);
<<<<<<< HEAD:_printf.c

	return(len);
=======
	return (len);
>>>>>>> fda961be0f1f0a6392bd82d76d7acded206a90b6:_printf1.c
}
