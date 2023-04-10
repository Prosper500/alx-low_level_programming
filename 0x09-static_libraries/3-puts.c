#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _puts - A function that print string followed by a new line, to stdout
 * @str: the string to be printed
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
