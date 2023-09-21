#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all the lowercase letters of a string to uppercase.
 * @str: the string to be changed.
 *
 * Return: a pointer to a changed string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = toupper(str[i]);

		i++;
	}

	return (str);
}
