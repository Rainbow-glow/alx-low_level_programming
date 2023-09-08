#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except for q and e.
 *
 * Return: 0.
 */

int main(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
	{
		if (v != 'q' && v != 'e')
			putchar(v);
	}

	putchar('\n');

	return (0);
}
