#include "main.h"
#include <stddef.h>
#include <stdlib>
/**
 * strind_nconcat - A fumction thta concatenate strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: memeror to be allocated
 * Return: charater
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int a, b, lent1, lent2;

	a = 0;
	b = 0;
	lent1 = 0;
	lent2 = 0;

	while (s1 && s1[lent1])
		lent1++;
	while (s2 && s2[lent1])
		lent2++;

	if (n < lent2)
	{
		z = malloc(sizeof(char) * (lent1 + n + 1));
	}
	else
	{
		z = malloc(sizeof(char) * (lent1 + lent2 + 1));
	}
	if (!z)
	{
		return (NULL);
	}
	while (a < lent1)
	{
		z[a] = s1[a];
		a++;
	}
	while (n < lent2 && n < (lent1 + n))
	{
		z[a++] = s2[b++];
	}
	while (n > lent2 && n < (lent1 + lent2))
	{
		z[a++] = s2[b++];
	}
	z[a] = '\0';
	return (z);
}
