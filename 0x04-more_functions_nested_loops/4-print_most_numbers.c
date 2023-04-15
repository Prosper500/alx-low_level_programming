#include "main.h"

/**
 * print_most_numbers - Function that print most number from 0 to 9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == 2)
			continue;
		if (i == 4)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
