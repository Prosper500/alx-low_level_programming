#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * _strcpy - A function that copy strings
 * @dest: destination to copy to
 * @src: source file
 * Return: pointer to string
 */
char *_strcpy(char *dest, char *src)
{
	int lent, j;

	lent = 0;
	while (src[lent] != '\0')
	{
		lent++;
	}
	for (j = 0; j < lent; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
/**
 * _strlen - A function that print lenght of string
 * @s: the string to check
 *
 * Return: int value
 */
int _strlen(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 * new_dog - A function  that create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: successfull
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lent1, lent2;

	lent1 = _strlen(name);
	lent2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	(*dog).name = malloc(sizeof(char) * (lent1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * (lent2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strlen(dog->name, name);
	_strlen(dog->owner, owner);
	(*dog).age = age;
	return (dog);
}
