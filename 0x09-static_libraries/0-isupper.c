#include "main.h"

/**
 * _isupper - identifing uppercase
 * @c: the checked character
 * Return: 1 if c is uppercase else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
