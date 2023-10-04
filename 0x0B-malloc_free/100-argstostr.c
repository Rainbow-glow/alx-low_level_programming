#include "main.h"

/**
 * argstostr - concatenates all the argument of your program.
 * @ac: the argument count.
 * @av: the argument vector.
 *
 * Return: NULL if ac is 0 and av is NULL, otherwise a pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
	char *concat_all;
	int count = ac, a, b, c;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0 ; a < ac; a++)
	{
		for (b = 0 ; av[a][b]; b++)
			count++;
	}

	concat_all = malloc(sizeof(char) * count + 1);

	if (concat_all == NULL)
		return (NULL);

	c = 0;

	for (a = 0 ; a < ac; a++)
	{
		for (b = 0 ; av[a][b]; b++)
			concat_all[c++] = av[a][b];

		concat_all[c++] = '\n';
	}
	concat_all[count] = '\0';
	return (concat_all);
}

