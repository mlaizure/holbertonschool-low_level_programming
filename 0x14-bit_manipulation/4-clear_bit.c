#include "holberton.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: number to set bit in
 * @index: index of the bit to set
 *
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int k;

	if (index > sizeof(*n) * 8 - 1)
		return (-1);

	k = ~(1 << index);
	*n = k & *n;

	return (1);
}
