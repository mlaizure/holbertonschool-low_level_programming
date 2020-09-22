#include "holberton.h"

/**
 * commas - adds appropriate commas and spaces around numbers
 * @k: multiplied number
 *
 * Return: none
 */

void commas(int k)
{
	if (k >= 10 && k <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
	}
	else if (k < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(k + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(k / 100 + '0');
		_putchar(k / 10 % 10 + '0');
		_putchar(k % 10 + '0');
	}
}


/**
 * print_times_table - prints the n times table
 * @n: number of times table
 *
 * Return: none
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j >= 1 && j < n)
					commas(k);
				else if (j == n)
				{
					commas(k);
					_putchar('\n');
				}
				else
					_putchar(k + '0');
			}
		}
	}
	else
	{
		;
	}
}
