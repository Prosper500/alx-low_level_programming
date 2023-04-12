#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - A function that concatenate strings input
 * @s1: first input
 * @s2: second input
 * Return: concatenated string if succefull
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, k1, k2;

	i = 0;
	j = 0;
	k1 = 0;
	k2 = 0;

	while (s1 && s1[k1])
		k1++;
	while (s2 && s2[k2])
		k2++;

	str = malloc(sizeof(char) * (k1 + k2 + 1));
	if (str == NULL)
		return (NULL);
	if (s1)
	{
		while (i < k1)
		{
			str[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (k2 + k1))
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	str[i] = '\0';
	return (str);
}
