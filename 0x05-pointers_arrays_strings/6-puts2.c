#include "holberton.h"

/**
 * puts2 - prints every other char of a string
 * @str: pointer to a string
 *
 * Return: none
 */

void puts2(char *str)
{
	int i, l = 0;

	while (str[l] != '\0')
		l++;

	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
