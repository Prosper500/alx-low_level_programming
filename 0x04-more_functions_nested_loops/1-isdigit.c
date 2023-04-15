#include "main.h"

/**
 * _isdigit - A function that check for a digit from 0 to 9
 * @c: the checked value
 * Return: 0 or1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
