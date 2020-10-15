#include <stdlib.h>

/**
 * array_range - creates an array of all integers from min to max inclusive
 * @min: smallest value in array
 * @max: largest value in array
 *
 * Return: pointer to array; NULL on failure or if min > max
 */

int *array_range(int min, int max)
{
	int *nums;
	int i = 0;
	int count = min;

	if (min > max)
		return (NULL);

	nums = malloc(sizeof(int) * (max - min + 1));
	if (nums == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); ++i)
		nums[i] = count++;

	return (nums);
}
