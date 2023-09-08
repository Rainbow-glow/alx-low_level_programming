#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return: 0.
 */

int main(void)
{
	int num;
	char h;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (h = 'a'; h <= 'f'; h++)
		putchar(h);

	putchar('\n');

	return (0);
}
