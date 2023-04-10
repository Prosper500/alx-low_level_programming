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
	char *g;
	int i;
	unsigned int sum = 0, b;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			g = argv[i];

			for (b = 0; b < strlen(g); b++)
			{
				if (g[b] < 48 || g[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(g);
			g++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
