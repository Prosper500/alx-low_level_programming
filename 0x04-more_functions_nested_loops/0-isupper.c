#include "main.h"

/**
 * _isupper - identifing uppercase
 * @c: the checked character
 * Return: 1 if c is uppercase else return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
