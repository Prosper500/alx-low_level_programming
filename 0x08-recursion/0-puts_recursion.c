#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - A function thta print a string with a neww line.
 * @s: the string inputs
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	_putchar('\n');
	else if (*s != '\0')
	{
	_puts_recursion(*s);
	s++;
	}
	_putchar('\n');
}
