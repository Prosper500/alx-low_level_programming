#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - A funtion that print square root of an integer
 * @n: input integer
 *
 * Return: integer value
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - A function that solve square-root natura number
 * @n: input
 * @i: posible result
 * Return: integer
 */
int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq == n)
		return (i);
	else if (sq > n)
		return (-1);
	else
		return (_sqrt(n, i + 1));
}
