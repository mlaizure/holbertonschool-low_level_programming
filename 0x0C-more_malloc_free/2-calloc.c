#include <stdlib.h>

/**
 * _calloc - allocates memory of an array using malloc and initilizes to 0
 * @nmemb: number of elements in array
 * @size: size in bytes of each element of array
 *
 * Return: pointer to allocated memory; NULL on faiure or if nmemb or size
 * is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *space;
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);

	ptr = space;
	for (i = 0; i < nmemb * size; ++i)
		ptr[i] = 0;

	return (space);
}
