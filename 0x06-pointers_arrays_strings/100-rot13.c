#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: the string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *str)
{
	int i = 0;
	int j;
	char letters[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
			    'H', 'I', 'J', 'K', 'L', 'M', 'N',
			    'O', 'P', 'Q', 'R', 'S', 'T', 'U',
			    'V', 'W', 'X', 'Y', 'Z', 'a', 'b',
			    'c', 'd', 'e', 'f', 'g', 'h', 'i',
			    'j', 'k', 'l', 'm', 'n', 'o', 'p',
			    'q', 'r', 's', 't', 'u', 'v', 'w',
			    'x', 'y', 'z'};
	char rot13keys[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T',
				'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
				'B', 'C', 'D', 'E', 'F', 'G', 'H',
				'I', 'J', 'K', 'L', 'M', 'n', 'o',
				'p', 'q', 'r', 's', 't', 'u', 'v',
				'w', 'x', 'y', 'z', 'a', 'b', 'c',
				'd', 'e', 'f', 'g', 'h', 'i', 'j',
				'k', 'l', 'm'};

	while (str[i])
	{
		for (i = 0 ; j < 52 ; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = rot13keys[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
