#include "search_algos.h"

/**
 * binary_search - searches for value in array of ints using binary search
 * @array: pointer to array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	int left = 0, right = size - 1, i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");

		for (i = left; i <= right; ++i)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
