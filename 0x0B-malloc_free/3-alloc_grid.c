#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2-D array of ints; NULL on failure or if width or
 * height is 0 or negative
 */

/* int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);

	arr = malloc(sizeof(int *) * height);
	if (!arr)
		return (0);

	for (i = 0; i < height; ++i)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (!arr[i])
			return (0);
		for (j = 0; j < width; ++j)
			arr[i][j] = 0;
	}
	return (arr);
} */

int **alloc_grid(int width, int height)
{
	int i;
	int **arr = malloc(height * sizeof(int *));
	int *vals = malloc(width * height * sizeof(int));

	for (i = 0; i < height; ++i)
		arr[i] = vals + width * i;

	return (arr);
}