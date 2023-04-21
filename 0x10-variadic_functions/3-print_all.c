#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - A function that print all input argument
 * @format: list of input
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *st, *sp = " ";
	va_list id;

	va_start(id, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sp, va_arg(id, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(id, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(id, double));
					break;
				case 's':
					st = va_arg(id, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", sp, st);
					break;
				default:
					j++;
					continue;
			}
			sp = ", ";
			j++;
		}
	}
	printf("\n");
}
