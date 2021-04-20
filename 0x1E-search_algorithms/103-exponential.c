#include "search_algos.h"

int binary_search_1(int *array, int value, size_t left, size_t right);
/**
 * exponential_search - searches array of ints with exponential search
 * @array: pointer to array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 on failure
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, prev = 1;

	if (!array)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)bound,
		       array[bound]);
		prev = bound;
		bound *= 2;
	}

	bound = (size - 1) < bound ? (size - 1) : bound;

	printf("Value found between indexes [%d] and [%d]\n", (int)prev,
	       (int)bound);

	return (binary_search_1(array, value, prev, bound));
}


/**
 * binary_search_1 - searches for value in array of ints using binary search
 * @array: pointer to array to search
 * @value: value to search for
 * @left: low index of array to search
 * @right: high index of array to search
 * Return: first index where value is located or -1 on failure
 */

int binary_search_1(int *array, int value, size_t left, size_t right)
{
	size_t mid, i;

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
