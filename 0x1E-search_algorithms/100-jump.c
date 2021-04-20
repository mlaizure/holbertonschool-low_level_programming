#include "search_algos.h"

size_t minimum(size_t step, size_t size);
/**
 * jump_search - searches array of ints with jump search
 * @array: pointer to array to search
 * @size: number of elements in array
 * @value: values to search for
 * Return: first index where value is located or -1 on failure
 */

int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, next = 0, step = sqrt(size);

	if (!array)
		return (-1);

	while (array[minimum(next, size - 1)] < value)
	{
		printf("Value checked array[%d] = [%d]\n",
		       (int)next, array[next]);
		prev = next;
		next = step;
		step += sqrt(size);
		if (next >= size)
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n",
	       (int)prev, (int)next);

	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n",
		       (int)prev, array[prev]);
		if (prev == (minimum(next, size - 1)))
			return (-1);
		prev++;
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%d] = [%d]\n",
		       (int)prev, array[prev]);
		return (prev);
	}
	return (-1);
}

/**
 * minimum - gets min of two values
 * @step: first value
 * @size: second value
 * Return: lowest value
 */

size_t minimum(size_t step, size_t size)
{
	return ((step < size) ? step : size);
}
