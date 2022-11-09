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
	int len = 0;
	num = va_arg(arg, int);
	len += my_write(num + '0');
	printf("%d", len);
	return (len);
}
