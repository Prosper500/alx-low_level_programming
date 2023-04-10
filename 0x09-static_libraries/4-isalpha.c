#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * @c: the checked character
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
