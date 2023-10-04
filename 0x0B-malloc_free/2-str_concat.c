#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: a pointer, otherwise NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int slen = 0;
	int output = 0;
	int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] || s2[i]; i++)
		slen++;

	concat = malloc(sizeof(char) * slen);

	if (concat == NULL)
		return (NULL);

	for (i = 0 ; s1[i]; i++)
		concat[output++] = s1[i];
	for (i = 0 ; s2[i] != '\0'; i++)
		concat[output++] = s2[i];
	return (concat);
}
