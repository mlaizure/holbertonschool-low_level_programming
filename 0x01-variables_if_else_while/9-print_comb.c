#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int new = 10;
	int sp = ' ';
	int co = ',';

	for (i = '0'; i <= '9'; ++i)
	{
		putchar(i);
		if (i <= '8')
		{
			putchar(co);
			putchar(sp);
		}

		else
			putchar(new);
	}
	return (0);
}
