#include "dog.h"
#include <stdio.h>

/**
 * init_dog - A function that initialize variable type "struct dog"
 * @d: User
 * @name: user name
 * @age: user age
 * @owner: user's guardian
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
