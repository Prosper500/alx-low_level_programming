#include "main.h"
/**
 * peint_rev - A function that print in reverse
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c = 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
