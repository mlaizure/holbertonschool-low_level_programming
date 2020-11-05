#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get from
 * @index: index of bit to get
 *
 * Return: value of bit at given index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int k;

	k = n >> index;

	return (k & 1);
}
