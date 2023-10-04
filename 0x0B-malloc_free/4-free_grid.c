#include "main.h"

/**
 * free_grid - frees a 2 dimnensional arrays of integers.
 * @grid: the array to be freed.
 * @height: the number of rows of the array.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height; i++)
		free(grid[i]);

	free(grid);
}
