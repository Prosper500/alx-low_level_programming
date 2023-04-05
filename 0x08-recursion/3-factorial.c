#include "main.h"

/**
 * factorial - A function that print factorial of a number
 * @n: input integer
 *
 * Return: integer value
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}

