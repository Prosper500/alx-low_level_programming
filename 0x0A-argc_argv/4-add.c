#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - A program that add positive number
 * @argc: argument counter
 * @argv: input argument
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, b;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (b = 1; b < argc; b++ )
			{
			if (isdigit(argv[i]))
			{
				continue;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
