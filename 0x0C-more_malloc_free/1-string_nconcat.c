#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: number of bytes to use from s2
 *
 * Return: pointer to a newly allocated space in memory which contains s1
 * followed by the first n bytes of s2, and null terminated; NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int i = 0, j = 0, l = 0;

	while (s1 && s1[l] != '\0')
		++l;

	cat = malloc(sizeof(char) * (l + n + 1));

	if (cat == NULL)
		return (NULL);

	for (i = 0; s1 && s1[i] != '\0'; ++i)
		cat[i] = s1[i];

	for (j = 0; s2 && j < n && s2[j] != '\0'; ++j)
		cat[i + j] = s2[j];

	cat[i + j] = '\0';

	return (cat);
}
