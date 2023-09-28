#include "main.h"

int is_divisable(int n, int div);
int is_prime_number(int n);

/**
 * is_divisable - checks if the number is divisable.
 * @n: the number.
 * @div: the diviser.
 *
 * Return: 0 if n is divisable, otherwise 1.
 */

int is_divisable(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);
	return (is_divisable(n, div + 1));
}

/**
 * is_prime_number - returns 1 if the integer is a prime number.
 * @n: the number.
 *
 * Return: 1 if the input integer is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisable(n, div));
}
