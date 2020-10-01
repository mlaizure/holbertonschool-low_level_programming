#include <stdio.h>
/**
 * *_strcat - appends the src string to the dest string
 * @dest: string to be appended to
 * @src: string appended to dest
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, dl = 0, sl = 0;

	while (dest[dl] != '\0')
		dl++;

	while (src[sl] != '\0')
		sl++;

	for (i = 0; i < sl; i++)
		dest[dl + i] = src[i];

	dest[dl + i] = '\0';

	return (dest);
}
