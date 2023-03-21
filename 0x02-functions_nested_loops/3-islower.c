#include <stdio.h>
/**
 * main - A function that dictate a lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	-putchar(r + '0');
	_putchar('\n');
	return (0);
}
