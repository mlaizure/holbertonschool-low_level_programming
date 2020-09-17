#include <stdio.h>

/**
 * main - prints lowercase alphabet except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;
	char new = '\n';

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	}

	putchar(new);

	return (0);
}
