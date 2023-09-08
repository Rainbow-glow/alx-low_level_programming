#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
		putchar(v);

	putchar('\n');

	return (0);
}
