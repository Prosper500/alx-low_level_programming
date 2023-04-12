#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments of your program
 * @ac: input count
 * @av: input array
 * Return: character
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int g, h, r, lent;

	if (av == NULL || ac == 0)
	{
		return (NULL);
	}
	for (g = 0; g < ac; g++)
	{
		for (h = 0; av[g][h] != '\0'; h++ )
		{
			lent++;
		}
		lent++;
	}
	s = malloc(sizeof(char) * (lent + 1));
	if (s == NULL)
		return (NULL);
	r = 0;
	for (g =0; g < ac; g++)
	{
		for (h = 0; av[g][h] != '\0'; h++)
		{
			s[r] = av[g][h];
			r++;
		}
		s[r] = '\n';
		r++;
	}
	return (s);
}
