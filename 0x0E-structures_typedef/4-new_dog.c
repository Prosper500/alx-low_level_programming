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
	int j;

	for (j = 0; src[j]; j++)
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
int _strlen(const char *s)
{
	int j;

	j = 0;
	while (*s++)
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

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (*dog_t) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	(*dog).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	(*dog).age = age;
	return (dog);
}
