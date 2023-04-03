#include "main.h"

/**
 * set_string - A function that set the value of a pointer to a char
 * @s: pointer of a pointer
 * @to: pointer to s
 *
 * Retturn: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
