#include "main.h"

/**
 * string_toupper - changes all the lowercase letters of a string to uppercase.
 * @str: the string to be changed.
 *
 * Return: a pointer to a changed string.
 */

char *string_toupper(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

		i++;
	}

	return (str);
}
