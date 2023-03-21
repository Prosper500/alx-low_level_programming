#include "main.h"
/**
 * main - A program that print alpjabet x10
 *
 * Return: (Success)
 */

int main(void)
{
	char ch;
	int i = 0;

	while (i < 9)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	i++;
	}
	return (0);
}
