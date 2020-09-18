#include <stdio.h>

/**
 * main - prints unique number combinations from 00 to 99
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, n, t = 1;
	int new = 10;
	int sp = ' ';
	int co = ',';

	for (i = 0; i <= 99; ++i)
	{
		for (n = i;;)
		{
			if (n / 10 % 10 >= n % 10)
				break;
			n /= 10;
			if (!n)
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
				break;
			}
		}
	}
	putchar(new);

	return (0);
}
