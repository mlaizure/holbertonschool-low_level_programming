#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long int i = 612852475143, div = 2, maxP;

	while (1)
	{
		if (i % div != 0)
			div = div + 1;
		else
		{
			maxP = i;
			i /= div;
			if (i == 1)
			{
				printf("%ld\n", maxP);
				break;
			}
		}
	}
	return (0);
}
