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
	{
	_putchar('\0');
	}
	else
	{
	_putchar(*s);
	_putchar('\n');
	}
}
