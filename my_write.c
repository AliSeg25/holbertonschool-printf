#include <unistd.h>

/**
 * my_write - print
 * @c: variable
 * Return: int
 */
int my_write(char c)
{
	return (write(1, &c, 1));
}
