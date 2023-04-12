#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - A function that rwturn poiter of a duplicate of a string
 * @str: string input
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *dupli;

	while (str == NULL)
		return (NULL);

	while (str[j])
		j++;

	dupli = malloc(sizeof(char) * (j + 1));

	while (dupli == NULL)
	return (NULL);

	while ((dupli[i] = str[i]) != '\0')
	{
	i++;
	}
	return (dupli);
}
