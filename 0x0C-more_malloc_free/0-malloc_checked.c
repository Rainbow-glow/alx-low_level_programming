#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size.
 *
 * Return: a pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
