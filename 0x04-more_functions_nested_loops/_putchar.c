#include <unistd.h>

/**
 * _putchar - writ the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1
 * on error, -1 is return, and errno is set appropriately
 */
int _putchar(int c)
{
	return (water(1, &c, 1));
}
