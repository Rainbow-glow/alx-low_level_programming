#include "main.h"

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index marking the end of the string.
 * @str: the string to be searched.
 *
 * Return: a pointer to an array of strings.
 */

int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * count_words - counts the number of worrds in the string.
 * @str: the string to be counted.
 *
 * Return: the number of words in the string.
 */

int count_words(char *str)
{
	int i = 0, len = 0, count = 0;

	for (i = 0 ; str[i]; i++)
		len++;
	for (i = 0 ; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			count++;
			i = i + word_len(str + i);
		}
	}
	return (count);
}

/**
 * strtow - spilts a string into words.
 * @str: the string to be spilt.
 *
 * Return: a pointer to an array of strings.
 */

char **strtow(char *str)
{
	char **words;
	int i = 0, count, b, l, letters;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = count_words(str);
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char) * (count + 1));
	if (words == NULL)
		return (NULL);

	for (b = 0 ; b < count; b++)
	{
		while (str[i] == ' ')
			i++;
		letters = word_len(str + i);

		words[b] = malloc(sizeof(char) * (letters + 1));

		if (words[b] == NULL)
		{
			for (; b >= 0 ; b--)
				free(words[b]);

			free(words);
			return (NULL);
		}

		for (l = 0 ; l < letters; l++)
			words[b][l] = str[i++];

		words[b][l] = '\0';
	}
	words[b] = NULL;

	return (words);
}
