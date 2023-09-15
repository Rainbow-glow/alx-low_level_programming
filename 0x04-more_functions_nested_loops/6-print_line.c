#include "main.h"

/**
 * print_line - prints straight line followed by a new line.
 * @n: number of times '_' will be printed to create a line.
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
