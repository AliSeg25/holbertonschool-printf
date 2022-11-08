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
                if (format[i + 1] == *appfunc[j].type)
                {
                        c  = appfunc[j].f(arg);
                        longue += c;
                        break;
                }
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
