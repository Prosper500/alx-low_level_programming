#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that print number.
 * @separator: strings
 * @n: input
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int id;

	va_start(v, n);

	for (id = 0; id < n; id++)
	{
		printf("%d", va_arg(v, int));

		if (id != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
