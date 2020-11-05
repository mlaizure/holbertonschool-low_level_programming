#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number to set bet in
 * @index: index of the bit to set
 *
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int k;

	if (index > sizeof(*n) * 8 - 1)
		return (-1);

	k = 1 << index;
	*n = k | *n;

	return (1);
}
