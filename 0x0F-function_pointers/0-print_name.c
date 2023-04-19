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
	while (name && f)
		f(name);
}
