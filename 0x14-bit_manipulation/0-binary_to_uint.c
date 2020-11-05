#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: converted number or 0 if there is 1 or more chars in the string b
 * that are not 0 or 1 or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, j, d = 1, len = 0;

	if (!b)
		return (0);

	while (b[len] != '\0')
		++len;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '0')
			continue;
		if (b[i] == '1')
		{
			d = 1;
			for (j = 1; j < len - i; ++j)
				d *= 2;
			n += d;
		}
	}
	return (n);
}
