#include "main.h"

/**
 * _strcpy - copies a string by src to the buffer pointed to by dest.
 * @dest: a buffer to copy the string to.
 * @src: the string to be copied.
 *
 * Return: a pointer to the dest destination.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
