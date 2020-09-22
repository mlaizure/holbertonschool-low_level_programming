#include <stdio.h>

/**
 * main - prints sum of even-valued fibonacci numbers below 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
	long int f1 = 1, f2 = 1, next = 0, sum = 0;

	while (next < 4000000)
	{
		if (next % 2 == 0)
			sum += next;
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
	printf("%ld\n", sum);
	return (0);
}
