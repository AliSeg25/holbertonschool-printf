#include "main.h"
/**
 * _printf - elle nous permet d'appeler la bonne fonction:
 * @format: la string
 * @appfunc: &aa
 * @arg: aze
 * Return: .f
 */
int f__printf(const char *format, t appfunc[], va_list arg)
{
	int i;
	int j;
	int longue = 0;
	int c = 0;

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            for (j = 0; appfunc[j].type != NULL; j++)
            {
                if (format[i + 1] == appfunc[j].type[0])
                {
			c = appfunc[j].f(arg);

			if (c == -1)
				return(-1);
			longue += c;
			break;
                }
            }
            if (format[i] == '\0')
                break;

            if (appfunc[j].type == NULL && format[i + 1] != ' ')
            {
                if (format[i + 1] != '\0')
                {
                    my_write(format[i]);
                    my_write(format[i + 1]);
                    longue = longue + 2;
                }

                else
                    return (-1);
            }
            i = i + 1;
        }
        else
        {
            my_write(format[i]);
            longue++;
        }

    }
    return (longue);
}
