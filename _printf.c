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

<<<<<<< HEAD
=======
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;

>>>>>>> df74f57d3655f29a13e8c24b9b0d19375a4b8d8e
	va_list arg;


<<<<<<< HEAD
	va_start(arg, format);
	for (format; *format; format++)
=======
	if (format[0] == '%' || format[1] == '\0' || format == NULL)
		return (0);

	while (format[i] != '\0')
>>>>>>> df74f57d3655f29a13e8c24b9b0d19375a4b8d8e
	{
		if (*format != '%')
		{
			write(1, format, 1);
			continue;
		}
		else
		{
<<<<<<< HEAD
			format++;
			if (*format == 'c')
				appfunc[0].f(arg);
		}
	}
	va_end(arg);
	return (0);
=======
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
>>>>>>> df74f57d3655f29a13e8c24b9b0d19375a4b8d8e
}
