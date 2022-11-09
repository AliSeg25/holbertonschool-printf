#include "main.h"
/**
 *f__printf - elle nous permet d'appeler la bonne fonction:
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

	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; appfunc[j].type != NULL; j++)
			{
				if (format[i + 1] == *appfunc[j].type)
				{
					longue += appfunc[j].f(arg);
					break;
				}
			}
			if (appfunc[j].type == NULL)
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
			i++;
		}
		else
		{
			my_write(format[i]);
			longue++;
		}

	}
	return (longue);
}
