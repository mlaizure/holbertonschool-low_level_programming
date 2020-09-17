#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;
	char new = '\n';

	for (ch = 'z'; ch >= 'a'; --ch)
		putchar(ch);
	putchar(new);

	return (0);
}
