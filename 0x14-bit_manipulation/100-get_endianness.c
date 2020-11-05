#include "holberton.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n = 1;
	unsigned char *get_endian = (unsigned char *)&n;

	return (*get_endian != 0);
}
