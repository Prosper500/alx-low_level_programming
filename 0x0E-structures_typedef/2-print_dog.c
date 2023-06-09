#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - A function that print a "struct dog"
 * @d: user
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if ((*d).name == NULL)
		d->name = "(nil)";
	if ((*d).owner == NULL)
		d->owner = "(nil)";
	}

	if (d == NULL)
		return;

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
