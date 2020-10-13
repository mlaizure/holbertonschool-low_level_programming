#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2-D array of ints; NULL on failure or if width or
 * height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, x;

	if (width <= 0 || height <= 0)
		return (0);

	arr = malloc(sizeof(int *) * height);
	if (!arr)
		return (0);

	for (i = 0; i < height; ++i)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (!arr[i])
		{
			for (x = 0; x < i; ++x)
				free(arr[x]);
			free(arr);
			return (0);
		}
		for (j = 0; j < width; ++j)
			arr[i][j] = 0;
	}
	return (arr);
}
/*
 *int **alloc_grid(int width, int height)
 *{
 *	int i, j;
 *	int **arr = malloc(sizeof(int *) * height);
 *	int *vals;
 *
 *	if (width <= 0 || height <= 0 || !arr)
 *		return (0);
 *
 *	vals = malloc(sizeof(int) * height * width);
 *	if (!vals)
 *	{
 *		free(arr);
 *		return (0);
 *	}
 *
 *	for (i = 0; i < height; ++i)
 *	{
 *		arr[i] = vals + width * i;
 *		for (j = 0; j < width; ++j)
 *			arr[i][j] = 0;
 *	}
 *	return (arr);
 *}
 */
