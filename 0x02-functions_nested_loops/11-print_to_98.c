#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: none
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
	else
		printf("%d\n", n);
}
