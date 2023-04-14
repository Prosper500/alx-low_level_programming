#include "main.h"
#include <stddef.h>
#include <stdlib>
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
	unsigned int a, b, lent1, lent2;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	lent1 = lent2 = 0;

	while (s1[lent1] != '\0')
		lent1++;
	while (s2[lent2] != '\0')
		lent2++;

	if (n >= lent2)
		n = lent2;

	z = (char *) malloc(sizeof(char) * (lent1 + n + 1));
	if (z == NULL)
		return (NULL);

	for (a = 0; s1[a] = '\0'; a++)
		z[a] = s1[a];

	for (b = 0; b < n && s2[b] != '\0'; b++)
	{
		z[a] = s2[b];
		a++;
	}
	z[a] = '\0';
	return (z);
}
