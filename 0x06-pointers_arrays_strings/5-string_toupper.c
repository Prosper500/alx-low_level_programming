#include "main.h"
/**
 * *string_toupper - A function that change lowercase to uppercas
 * @n: strings pointer
 * Return: character
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		n[i] = n[i] - 32;
		i++;
	}
		return (n);
}
