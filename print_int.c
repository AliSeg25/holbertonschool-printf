#include "main.h"

/**
 *print_int - function that print a number
 *@num: number
 *
 *Return: length
 */
int print_int(va_list arg)
{
	int num;
	num = va_arg(arg, int);
	my_write(num);
	return (4);
}
