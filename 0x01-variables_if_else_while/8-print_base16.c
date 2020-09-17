#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	char ch;
	char new = '\n';

	for (i = '0'; i <= '9'; ++i)
		putchar(i);

	for (ch = 'a'; ch <= 'f'; ++ch)
		putchar(ch);
	putchar(new);

	return (0);
}
