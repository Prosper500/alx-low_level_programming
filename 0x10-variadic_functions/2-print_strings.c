#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - A function that print strings
 * @separator: string separator
 * @n: input
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	char *st;
	unsigned int j;

	va_start(v, n);

	for (j = 0; j < n; j++)
	{
		st = va_arg(v, char *);
		if (!st)
			st = "nil";
		if (!separator)
			printf("%s", st);
		else if (separator && 1 == 0)
			printf("%s", st);
		else
			printf("%s%s", separator, st);
	}
	printf("\n");
	va_end(v);
}
