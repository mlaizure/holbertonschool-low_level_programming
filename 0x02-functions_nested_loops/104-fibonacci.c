#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{

	unsigned long int f1 = 1, f2 = 1, next = 0;
	int i;

	for (i = 1; i <= 98; i++)
	{
		if (i < 98)
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
