#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: the string destination.
 * @src: the source string.
 * @n: the number of bytes to be concatenated.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
