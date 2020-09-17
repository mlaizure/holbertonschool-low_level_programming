#include <stdio.h>

/**
 * main - prints numbers 00 to 99
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int new = 10;
	int sp = ' ';
	int co = ',';

	for (i = 0; i <= 99; ++i)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');

		if (i < 99)
		{
			putchar(co);
			putchar(sp);
		}

		else
			putchar(new);
	}
	return (0);
}
