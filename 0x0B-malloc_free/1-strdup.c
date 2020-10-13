#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory which
 * contains a copy of the string given as a parameter
 * @str: string to make copy of
 *
 * Return: pointer to memory space containing string or NULL if str = NULL or
 * if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *strcpy;
	int l = 0;
	int i = 0;

	if (str == 0)
		return (0);

	while (str[l] != '\0')
		l++;

	strcpy = malloc(sizeof(char) * l);

	if (strcpy == 0)
		return (0);

	for (i = 0; i < l; ++i)
		strcpy[i] = str[i];

	return (strcpy);
}
