#include "main.h"

/**
 * print_string - imprimer un string
 * @arg: argument
 * return:  (0);
 */
int print_string(va_list arg)
{
        char *s;
        int i;

        s = va_arg(arg, char*);
	if (s == NULL)
		s = "(null)";

        for (i = 0; s[i] != '\0'; i++)
        {
                my_write(s[i]);
        }

        return (i);
}
