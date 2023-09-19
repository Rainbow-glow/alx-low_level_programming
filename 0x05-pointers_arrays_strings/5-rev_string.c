#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int i;
	int count;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count - 1 ; i >= count / 2 ; i--)
	{
		char j;

		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}
