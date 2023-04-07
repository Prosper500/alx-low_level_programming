#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiple two number
 * @argc: argument count
 * @argv: argument entered
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int c, mul = 1;

	if (argc == 3)
	{
	for (c = 1; c < argc; c++)
	mul *= atoi(argv[c]);
	printf("%d\n", mul);
	}
	else if (argc < 3 || argc > 3)
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
