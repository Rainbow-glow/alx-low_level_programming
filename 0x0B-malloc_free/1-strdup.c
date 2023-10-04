#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of the string as a parameter/
 * @str: the string.
 *
 * Return: a pointer to the duplicate, otherwise NULL.
 */

char *_strdup(char *str)
{
	char *strcpy;
	int i, strlen = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0'; i++)
		strlen++;

	strcpy = malloc(sizeof(char) * strlen + 1);

	if (strcpy == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0'; i++)
		strcpy[i] = str[i];
	return (strcpy);
}
