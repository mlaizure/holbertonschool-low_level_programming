#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 *
 * Return: none
 */

void puts_half(char *str)
{
	int i, n, l = 0;

	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
	{
		for (i = l / 2; i < l; i++)
			_putchar(str[i]);
	}
	else
	{
		n = (l - 1) / 2;
		for (i = n + 1; i < l; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
