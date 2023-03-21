#include <stdio.h>
/**
 * main - A program that print alpjabet x10
 *
 * Return: (Success)
 */

int main(void)
{
	char low;
	int i = 0;

	while (i < 9)
	{
	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	i++;
	}
	return (0);
}
