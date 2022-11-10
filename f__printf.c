#include "main.h"
/**
 *f__printf - it allows us to call the correct function
 * @format: string
 * @appfunc: tableau de stucture
 * @arg: augument
 * Return: (len)
 *int f__printf(const char *format, t appfunc[], va_list arg)
*/
int f__printf(t appfunc[], const char *format, va_list arg)
{
	int i;
	int j;
	int len = 0;

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
					len += appfunc[j].f(arg);
					break;
				}
			}
			if (appfunc[j].type == NULL)
			{
				if (format[i + 1] != '\0')
				{
					my_write(format[i]);
					my_write(format[i + 1]);
					len = len + 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			my_write(format[i]);
			len++;
		}

	}
	return (len);
}
