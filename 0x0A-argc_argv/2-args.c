#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that print all input
 * @argc: number of input
 * @argv: input argument
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);
	return (0);
}
