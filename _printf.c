#include "main.h"
/**
 * _printf - elle nous permet d'appeler la bonne fonction:
 * @format: la string
 * Return: .f
 */
int _printf(const char *format, ...)
{
        va_list arg;
        int len;

        t appfunc[] = {
                {"c", print_char},
                {"s", print_string},
                {"%", print_pourcentage},
                {NULL, NULL}
        };

	if (format == NULL)
		return(-1);

        va_start(arg, format);
        len = f__printf(format, appfunc, arg);
        va_end(arg);

        return(len);
}
