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
	int i;

	if (s[i] == '\0')
	_putchar('\n');
	else if (s[i] != '\0')
	{
	_putchar(s[i]);
	s++;
	}
	_putchar('\n');
}
