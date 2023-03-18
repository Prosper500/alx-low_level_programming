#include <stdio.h>
/**
 * main - prints of all possible digit combination
 *
 * Return: (success)
 */

int main(void)
{
	int d, p;

	for (d = 'o'; d < '9'; d++)
	{
	for (p = d + 1; p <= '9'; p++)
	{
	if (p != d)
	{
	putchar(d);
	putchar(p);
	if (d == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
