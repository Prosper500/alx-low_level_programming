#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * word_count - a function to count charater
 * @s: string to count
 *
 * Return: character value
 */
int word_count(char *s)
{
	int value = 0, p, o = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == ' ')
			value = 0;
		else if (value == 0)
		{
			value = 1;
			o++;
		}
	}
	return (o);
}
/**
 * strtow - A function that split string into words
 * @str: input to be split
 *
 * Return: character
 */
char **strtow(char *str)
{
	char **tri, *top;
	int i, j = 0, head, tail;
	int lent = 0, string, k = 0;

	while (*(str + lent))
		lent++;
	string = word_count(str);
	if (string == 0)
		return (NULL);

	tri = (char **)malloc(sizeof(char *) * (string + 1));
	for (i = 0; i <= lent; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				tail = i;
				top = (char *) malloc(sizeof(char) * (k + 1));
				if (top == NULL)
					return (NULL);
				while (head < tail)
				*top++ = str[head++];
				*top = '\0';
				tri[j] = top - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			head = i;
	}
	tri[j] = NULL;
	return (tri);
}
