#include <stdio.h>

/**
 * main - prints lowercase alphabet
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;
	char new = '\n';

	for (ch = 'a'; ch <= 'z'; ++ch)
		putchar(ch);
	putchar(new);

	return (0);
}
