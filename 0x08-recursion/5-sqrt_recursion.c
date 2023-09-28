#include "main.h"

int find_sqrt(int n, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural squart root of an inputed number.
 * @n: the number.
 * @root: the root to be tested.
 *
 * Return: the square root, otherwise -1 if num have no natural square root.
 */

int find_sqrt(int n, int root)
{
	if ((root * root) == n)
		return (root);
	if (root == n / 2)
		return (1);
	if (root * root > n)
		return (-1);
	return (find_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number.
 *
 * Return: the result, otherwise -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_sqrt(n, 0));
}
