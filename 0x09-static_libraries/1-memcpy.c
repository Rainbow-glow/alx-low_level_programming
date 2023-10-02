#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: a pointer to the destination memory area.
 * @src: a pointer to the source memory area.
 * @n: the numver of bytes to be cpoied.
 *
 * Return: a pointer to @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
