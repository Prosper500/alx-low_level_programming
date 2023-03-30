#include "main.h"
/**
 * *_strncat - A function that merge two strings
 * @dest: string to be merge to
 * @src: string merging to dest
 * @n: string array number
 * Return: character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
