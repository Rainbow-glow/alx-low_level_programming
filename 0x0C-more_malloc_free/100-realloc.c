#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: a pointer to the memory previously allocated.
 * @old_size: the size in bytes for ptr.
 * @new_size: the sizein bytes of the new memory block.
 *
 * Return: ptr if new_size is equal to old_size,NULL if new_size is equals to 0
 * and ptr is not NULL,otherwise a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *memb;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	memb = mem;

	for (index = 0 ; index < old_size && index < new_size; index++)
		memb[index] = *ptr_copy++;

	free(ptr);
	return (mem);
}
