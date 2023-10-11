#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string.
 * @str: the string to be measured.
 *
 * Return: the length of the value.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcpy - copies a string from src to dest with the terminating null bytes.
 * @src: the source pointer.
 * @dest: the destination pointer.
 *
 * Return: a pointer, dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0 ; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: the name.
 * @age: the age.
 * @owner: the owner of the dog.
 *
 * Return: the new struct.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dussy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dussy = malloc(sizeof(dog_t));
	if (dussy == NULL)
		return (NULL);

	dussy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dussy->name == NULL)
	{
		free(dussy);
		return (NULL);
	}

	dussy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dussy->owner == NULL)
	{
		free(dussy->name);
		free(dussy);
		return (NULL);
	}

	dussy->name = _strcpy(dussy->name, name);
	dussy->age = age;
	dussy->owner = _strcpy(dussy->owner, owner);

	return (dussy);
}

