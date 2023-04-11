#include "main.h"

/**
 * _isdigit - A function that check for a digit from 0 to 9
 * @c: the checked value
 * Return: 0 or1
 */

int _isdigit(int c)
{
	c = 0;
	if (c <= 9)
		return (1);
	else /*(c >= 'a' || c <= 'z')
		c++;*/
		return (0);
}
