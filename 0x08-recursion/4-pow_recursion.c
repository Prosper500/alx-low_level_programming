#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * _pow_recursion - A funcrion that return power value.
 * @x: input 1
 * @y: input 2
 * Return: integer value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
