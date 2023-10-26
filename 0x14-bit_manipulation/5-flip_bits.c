#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: the bit.
 * @m: the bit to flip n to.
 *
 * Return: the number of bits needed to flip n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int row = n ^ m, bits = 0;

	while (row > 0)
	{
		bits = bits + (row & 1);
		row >>= 1;
	}

	return (bits);
}
