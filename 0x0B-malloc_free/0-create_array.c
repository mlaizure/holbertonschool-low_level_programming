#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a
 * specific char
 * @size: the size of the array
 * @c: char used to initialize array
 *
 * Return: pointer to array or NULL if it fails or size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (str == 0 || size == 0)
		return (0);

	for (i = 0; i < size; ++i)
		str[i] = c;

	return (str);
}
