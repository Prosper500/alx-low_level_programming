#include <stdio.h>
/**
 * main - printing in reverse
 *
 * Return: (success)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);

}
