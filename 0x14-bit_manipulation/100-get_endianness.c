#include "holberton.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n;

	n = 1 << 1;

	if (n)
		return (1);
	else
		return (0);
}
