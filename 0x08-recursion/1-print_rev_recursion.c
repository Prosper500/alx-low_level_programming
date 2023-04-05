#include "main.h"

/**
 * _print_rev_recursion - A function that print reverved string
 * @s: string input
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
