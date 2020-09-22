#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	long int f1 = 1, f2 = 1, next = 0;
	int i;

	for (i = 1; i <= 50; i++)
	{
		if (i < 50)
		{
			printf("%ld, ", f2);
			next = f1 + f2;
			f1 = f2;
			f2 = next;
		}
		else
		{
			printf("%ld\n", f2);
		}
	}
	return (0);
}
