#include <unistd.h>
/**
 * my_write - imprimer
 * @c: variable
 * Return: putchar
 */
int my_write(char c)
{
        return (write(1, &c, 1));
}
