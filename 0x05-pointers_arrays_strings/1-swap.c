#include "main.h"

/**
 * swap_int - A function that swap value inbetween variable
 * @a: A variable name1
 * @b: A variable name2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int num1;
	num1 = *a;
	*a = *b;
	*b = *a;
}
