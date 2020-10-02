#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: n is the number to print
 *
 * Return: none
 */

void print_number(int n)
{
	if (n / 10 == 0 && n < 0)
		_putchar('-');

	if (n / 10)
		print_number(n / 10);

	if (n % 10 < 0)
		_putchar(-(n % 10) + '0');
	else
		_putchar(n % 10 + '0');
}
