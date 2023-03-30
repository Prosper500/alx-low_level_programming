#include "main.h"
/**
 * *leet - function that encodes a string into 1337.
 * @str: the string to be coded
 *
 * Return: character
 */
char *leet(char *str)
{
	int i, j;
	char s1[] = aAeEoOtTlL;
	char s2[] = 4433007711;

	for (i = 0; str[i] != '\0')
	{
		if (str[i] == s1[j])
		{
			str[i] = s2[j];
		}
	}
	return (str);
}
