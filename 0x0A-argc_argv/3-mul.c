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

	for (c = 1; c < argc; c++)
		mul *= atoi(argv[c]);
	if (mul == 1)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", mul);
	return (0);
}
