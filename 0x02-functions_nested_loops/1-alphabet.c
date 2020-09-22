#include "holberton.h"

/**
 * print_alphabet - use _putchar to print alphabet
 *
 * Return: no return
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
