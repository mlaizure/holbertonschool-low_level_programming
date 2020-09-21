#include "holberton.h"

/**
 * commas - adds appropriate commas and spaces around numbers
 * @k: multiplied number
 *
 * Return: none
 */

void commas(int k)
{
	if (k >= 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(k + '0');
	}
}


/**
 * times_table - prints the 9 times table
 *
 * Return: none
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j >= 1 && j < 9)
				commas(k);
			else if (j == 9)
			{
				commas(k);
				_putchar('\n');
			}
			else
				_putchar(k + '0');
		}
	}
}
