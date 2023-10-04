#include "main.h"

/**
 * create_array - creates an array of chars and intializes it with a special c.
 * @size: the size of the array.
 * @c: the special char.
 *
 * Return: a pointer to the array, otherwise NULL if its fails.
 */

char *create_array(unsigned int size, char c)
{
	char *creator;
	unsigned int i;

	if (size == 0)
		return (NULL);

	creator = malloc(sizeof(char) * size);

	if (creator == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		creator[i] = c;
	return (creator);
}
