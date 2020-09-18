#include <stdio.h>

/**
 * main - prints all possible non-redundant combinations of two 2-digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, t = 1;
	int new = 10;
	int sp = ' ';
	int co = ',';

	for (i = 0; i <= 99; ++i)
	{
		for (j = i + 1; j <= 99; ++j)
		{
			if (t)
				t = 0;
			else
			{
				putchar(co);
				putchar(sp);
			}
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar (sp);
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
		}
	}
	putchar(new);

	return (0);
}
