#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string.
 * @c: the character tp be located.
 *
 * Return: a pointer to the first occurance of c in string s, otherwise Null.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
