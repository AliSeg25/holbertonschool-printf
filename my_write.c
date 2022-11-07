#include <unistd.h>

/**
 * my_write - writes the character c to stdout
 * @c: The character to print
 * Return: 1 success
 */
int my_write(char c)
{
	return (write(1, &c, 1));
}
