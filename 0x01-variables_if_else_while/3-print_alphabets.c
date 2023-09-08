#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 */

int main(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
		putchar(v);
	for (v = 'A'; v <= 'Z'; v++)
		putchar(v);

	putchar('\n');

	return (0);
}
