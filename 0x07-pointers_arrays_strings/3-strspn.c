#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring.
 * @accept: input
 * @s: inputs
 * Return: int value
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
