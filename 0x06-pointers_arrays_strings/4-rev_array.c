#include "main.h"
/**
 * reverse_array - Function that reverse an array of integer
 * @a: array of numbers
 * @n: number of element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j, k;

	for (j = 0; j < n; j++)
	{
		n--;
		k = a[j];
		a[j] = a[n];
		a[n] = k;
}
