#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
<<<<<<< HEAD

	int len, len2;

	len = _printf("%c", 'S');
	
=======
	int len, len2;

//	len = _printf("%c", 'S');
	len2 = printf("%c", 'S');
>>>>>>> df74f57d3655f29a13e8c24b9b0d19375a4b8d8e
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
<<<<<<< HEAD
    return (0);
=======
	return (0);
>>>>>>> df74f57d3655f29a13e8c24b9b0d19375a4b8d8e
}
