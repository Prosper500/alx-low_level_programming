#include <stdio.h>

/**
 * main - alphabet in lower to upper(case)
 *
 * Return: (success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'z'; low++)
	putchar(low);

	return (0);
}

