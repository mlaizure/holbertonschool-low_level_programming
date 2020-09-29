#include "holberton.h"

/**
 * _puts - prints a string followed by a newline to stdout
 * @str: pointer to string to be printed
 *
 * Return: none
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
