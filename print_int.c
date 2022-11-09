#include "main.h"

/**
 *print_int - function that print a number
 *
 *@arg: argument
 *
 *Return: length
 */
int print_int(va_list arg)
{
	int num;
	int len = 0;
	int div = 1;

	num = va_arg(arg, int);

	if (num < 0)
	{
		len += my_write('-');
		num *= -1;

	}
	while ((num / div) > 9)
		div *= 10;
	while (div != 0)
	{
		len += my_write('0' + (num / div));
		num %=  div;
		div /= 10;
	}
	return (len);
}
