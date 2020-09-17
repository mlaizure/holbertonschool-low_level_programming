#include <stdio.h>

/**
 * main - prints numbers 0 - 9 using purchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int new = 10;

	for (i = '0'; i <= '9'; ++i)
		putchar(i);
	putchar(new);

	return (0);
}
