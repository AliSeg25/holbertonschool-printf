#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%c\n", 'S');
	fflush(stdout);
	if (len != len2)
	{
		printf("faux.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
