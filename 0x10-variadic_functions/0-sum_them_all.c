#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that return the sum of entered perimeter
 * @n: input
 *
 * Return: integer sum value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	unsigned int input1, sum = 0;

	va_start(v, n);

	for (input1 = 0; input1 < n; input1++)
		sum = sum + va_arg(v, int);
	va_end(v);
	return (sum);
}
