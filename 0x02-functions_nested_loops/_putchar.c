#include <unistd.h>
/**
 * main - Creating _putchar
 *
 * Return: 1 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
