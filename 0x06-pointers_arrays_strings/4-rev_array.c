#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array of integers to be reversed.
 * @n: the number of elements of the array.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = n - 1 ; i >= n / 2 ; i--)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
