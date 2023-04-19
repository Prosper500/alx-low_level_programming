#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - A functiont that print name
 * @name: the name to print
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
