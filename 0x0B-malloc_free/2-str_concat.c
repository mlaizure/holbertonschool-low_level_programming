#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string to add
 * @s2: second string to add
 *
 * Return: pointer to newly allocated space in memory which conatins contents
 * of s1 followed by contents of s2 and null terminated; null on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s1ands2;
	int l1 = 0, l2 = 0;
	int i, j;

	while (s1 && s1[l1] != '\0')
		l1++;

	while (s2 && s2[l2] != '\0')
		l2++;

	s1ands2 = malloc(sizeof(char) * (l1 + l2 + 1));

	if (s1ands2 == 0)
		return (0);

	for (i = 0; s1 && i < l1; ++i)
		s1ands2[i] = s1[i];

	for (j = 0; s2 && j <= l2; ++j)
		s1ands2[i + j] = s2[j];

	return (s1ands2);
}
