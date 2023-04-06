#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - A functio that check prime number
 * @n: the input integer
 *
 * Return: interger
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - checking for iteration
 * @n: input
 * @i: a possible prime value
 *
 * Return: integer value
 */

int prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (i > 0 && n % i == 0)
		return (0);
	else
		return (prime(n, i - 1));
}
