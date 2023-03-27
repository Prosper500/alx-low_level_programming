#include <stdio.h>
#include "main.h"

/**
 * _strlen - A function that retuen the lenght value of a variable
 * @s: the checked string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
