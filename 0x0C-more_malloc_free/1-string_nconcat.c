#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * string_nconcat - A fumction thta concatenate strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: memeror to be allocated
 * Return: charater
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int a, lent1, lent2;

	if (s1 == NULL)
	{
		lent1 = 0;
	}
	else
	{
		for (lent1 = 0; s1[lent1]; lent1++)
		;
	}
	if (s2 == NULL)
	{
		lent2 = 0;
	}
	else
	{
		for (lent2 = 0; s1[lent2]; lent2++)
		;
	}
	if (lent2 > n)
	{
		lent2 = n;
	}
	z = malloc(sizeof(char) * (lent1 + lent2 + 1));
	if (z == NULL)
		return (NULL);
	for (a = 0; a < lent1; a++)
		z[a] = s1[a];
	for (a = 0; a < lent2; a++)
		z[a + lent2] = s2[a];
	z[lent1 + lent2] = '\0';
	return (z);
}
