#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - A program that prints the opcodes of its own main function.
 * @argv: argument vector
 * @argc: argument count
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, n;
	char *p = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02x", p[i] & 0xFF);
		if (i != n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
