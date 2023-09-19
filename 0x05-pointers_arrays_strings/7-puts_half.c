#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: the string to be printed.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int in, out, count = 0;

	for (in = 0 ; str[in] != '\0' ; in++)
		count++;
	out = (count - 1) / 2;
	for (in = out + 1 ; str[in] != '\0' ; in++)
		_putchar(str[in]);
	_putchar('\n');
}
