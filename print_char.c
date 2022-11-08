#include "main.h"
/**
 * print_char - imprimer char
 * @arg: arguemznt
 * Return: return (1);
 */
int print_char(va_list arg)
{
	my_write(va_arg(arg, int));
	return (1);
}
