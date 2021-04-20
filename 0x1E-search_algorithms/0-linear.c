#include "search_algos.h"

/**
 * linear_search - searches array of ints with linear search
 * @array: pointer to array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%d] = [%d]\n",
		       (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
