#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 *
 * Return: none
 */

void print_binary(unsigned long int n)
{
	int c, k, len;
	short int finished_leading_zeros = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	len = sizeof(unsigned long int) * 8;

	for (c = len - 1; c >= 0; c--)
	{
		k = n >> c;
		if (k & 1)
		{
			_putchar('1');
			finished_leading_zeros = 1;
		}
		else if (finished_leading_zeros)
			_putchar('0');
	}
}
