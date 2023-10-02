#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: the argument count.
 * @argv: the argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int n1, n2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mult = n1 * n2;

	printf("%d\n", mult);
	return (0);
}
