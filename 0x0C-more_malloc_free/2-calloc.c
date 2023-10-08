#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: the number of the members of the array.
 * @size: the size of the array.
 *
 * Return: a pointer to the newly allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *allo;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	allo = mem;

	for (i = 0 ; i < (size * nmemb); i++)
		allo[i] = '\0';

	return (mem);
}
