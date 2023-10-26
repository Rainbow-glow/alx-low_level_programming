#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: a pointer to the string of 0 and 1 chars.
 *
 * Return: 0 if there are other strings in b other than 0 and 1 or b is NULL,
 * otherwise the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, bin = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0 ; b[len];)
		len++;

	for (len = len - 1 ; len >= 0 ; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		n = n + (b[len] - '0') * bin;
		bin = bin * 2;
	}

	return (n);
}
