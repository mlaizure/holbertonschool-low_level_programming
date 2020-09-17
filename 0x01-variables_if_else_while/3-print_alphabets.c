#include <stdio.h>

/**
 * main - prints lowercase then uppercase alphabet
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch, ch1;
	char new = '\n';

	for (ch = 'a'; ch <= 'z'; ++ch)
		putchar(ch);

	for (ch1 = 'A'; ch1 <= 'Z'; ++ch1)
		putchar(ch1);

	putchar(new);

	return (0);
}
