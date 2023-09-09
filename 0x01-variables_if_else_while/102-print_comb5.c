#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0.
 */

int main(void)
{
	int digits1, digits2;

	for (digits1 = 0; digits1 <= 98; digits1++)
	{
		for (digits2 = digits1 + 1; digits2 <= 99; digits2++)
		{
			putchar((digits1 / 10) + '0');
			putchar((digits1 % 10) + '0');
			putchar(' ');
			putchar((digits2 / 10) + '0');
			putchar((digits2 % 10) + '0');

			if (digits1 == 98 && digits2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
