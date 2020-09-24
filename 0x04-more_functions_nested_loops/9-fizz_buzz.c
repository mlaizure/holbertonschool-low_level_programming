#include <stdio.h>

/**
 * main - prints numbers 1 to 100 except multiples of 3 are fizz, multiples of
 * 5 are buzz, and multiples of both are fizzbuzz.
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
