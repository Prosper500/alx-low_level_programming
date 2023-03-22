#include <stdio.h>
#include "main.h"
/**
 * main - printing the sum of natural number
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
