#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: the address of the previously allocated memory block
 * @old_size: the size in bytes of the previously allocated memory block
 * @new_size: the size in bytes of the new memory block
 *
 * Return: pointer to new memory block; NULL on failure and if new_size = 0
 * and ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *space;
	char *ptr1;
	char *copy;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);

	if (ptr)
	{
		copy = ptr;
		for (i = 0; i < old_size && i < new_size; ++i)
			ptr1[i] = copy[i];
		free(ptr);
	}

	space = ptr1;

	return (space);
}
