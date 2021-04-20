#include "search_algos.h"

/**
 * interpolation_search - searches array of ints with interpolation search
 * @array: pointer to array to search
 * @size: number of elements in array
 * @value: values to search for
 * Return: first index where value is located or -1 on failure
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) /
			      (array[high] - array[low])) *
			     (value - array[low]));
		if (pos > high)
			break;

		printf("Value checked array[%d] = [%d]\n",
		       (int)pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	if (value == array[low])
		return (low);
	printf("Value checked array[%d] is out of range\n", (int)pos);
	return (-1);
}
