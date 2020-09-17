#include <stdio.h>

/**
 * main - prints lowercase alphabet
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	char new = '\n';

	for (i = 0; i < 10; ++i)
		printf("%d", i);
	putchar(new);

	return (0);
}
