#include "main.h"

int strlen_recursion(char *s);
int check_pal(char *s, int m, int i);
int is_palindrome(char *s);

/**
 * strlen_recursion - returns the length of a string.
 * @s: the string.
 *
 * Return: the length of the string.
 */

int strlen_recursion(char *s)
{
	int m = 0;

	if (*(s + m))
	{
		m++;
		m = m + strlen_recursion(s + m);
	}
	return (m);
}

/**
 * check_pal - checks if the string is a palindrome.
 * @s: the string.
 * @m: the length of the string.
 * @i: the indexof the string s.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */

int check_pal(char *s, int m, int i)
{
	if (s[i] == s[m / 2])
		return (1);
	if (s[i] == s[m - i - 1])
		return (check_pal(s, m, i + 1));
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the string.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */

int is_palindrome(char *s)
{
	int i = 0;
	int m = strlen_recursion(s);

	if (!(*s))
		return (1);

	return (check_pal(s, m, i));
}
