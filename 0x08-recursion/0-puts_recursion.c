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

	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
