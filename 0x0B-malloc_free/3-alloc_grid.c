#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the number  of columns.
 * @height: the number of rows.
 *
 * Return: NULL if width or height is 0 or negative,
 * otherwise a pointer to an array.
 */

int **alloc_grid(int width, int height)
{
	int **dim;
	int rows, columns;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim = malloc(sizeof(int *) * height);

	if (dim == NULL)
		return (NULL);

	for (rows = 0 ; rows < height; rows++)
	{
		dim[rows] = malloc(sizeof(int) * width);

		if (dim[rows] == NULL)
		{
			free(dim);
			for (columns = 0 ; columns <= height; columns++)
				free(dim[columns]);
			return (NULL);
		}
		for (columns = 0 ; columns < width; columns++)
			dim[rows][columns] = 0;
	}
	return (dim);
}
