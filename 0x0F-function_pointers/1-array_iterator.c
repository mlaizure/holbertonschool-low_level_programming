#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: array of elements to have funciton executed on
 * @size: size of array
 * @action: pointer to the function you execute on elements of array
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action && size > 0)
		for (i = 0; i < size; ++i)
			action(array[i]);
}
