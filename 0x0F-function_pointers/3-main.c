#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * main - programe calculator
 * @argc: argument counter
 * @argv: argument vector
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int input1, input2;
	char *symbol;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	input1 = atoi(argv[1]);

	symbol = argv[2];

	input2 = atoi(argv[3]);

	if (get_op_func(symbol) == NULL || symbol[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*symbol == 47 || *symbol == 37) && input2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(symbol)(input1, input2));
	return (0);
}
