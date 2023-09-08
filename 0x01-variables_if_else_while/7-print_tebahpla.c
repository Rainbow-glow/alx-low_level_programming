#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 *
 * Return: o
 */

int main(void)
{
	char g;

	for (g = 'z'; g >= 'a'; g--)
		putchar(g);

	putchar('\n');

	return (0);
}
