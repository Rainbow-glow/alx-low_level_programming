#include <stdio.h>

/**
 * main - prints the number of argument passed into it.
 * @argc: counts the number of argument.
 * @argv: the argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
