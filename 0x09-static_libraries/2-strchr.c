#include "main.h"

/**
 * *_strchr - A function that locate charater to a string
 * @s: string destination
 * @c: character to be located
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
