#include "main.h"

/**
 * more_numbers - Function that print 10x it input
 *
 * Return: void
 */

void more_numbers(void)
{
	int c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			-putchar(d);
		}
		_putchar("\n");
	}
