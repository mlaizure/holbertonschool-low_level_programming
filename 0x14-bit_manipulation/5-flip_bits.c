#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number to compare
 * @m: second number to compare
 *
 * Return: the number of bits you would need to flip to get from one number to
 * another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c, k1, k2, len, r = 0;

	len = sizeof(n) * 8;

	for (c = 0; c < len; ++c)
	{
		k1 = n >> c & 1;
		k2 = m >> c & 1;

		if (k1 != k2)
			++r;
	}
	return (r);
}
