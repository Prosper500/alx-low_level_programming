#include "main.h"

/**
 * print_number - function that print numbers 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
