#include "main.h"

/**
 * get_bit - return the value of a bit at a given index.
 * @n: the bit.
 * @index: the index starting from zero.
 *
 * Return: -1 if an error occured, otherwise the value of the bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
