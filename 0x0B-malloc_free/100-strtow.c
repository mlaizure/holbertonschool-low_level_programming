#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array of strings; NULL if NULL or empty string or on
 * failure
 */

char **strtow(char *str)
{
	char **arrstr;
	int i, wordstart, j = 0, k = 0, c = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; ++i)
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			k++;
		}
	arrstr = malloc(sizeof(char *) * (k + 1));
	if (!arrstr)
		return (NULL);
	for (i = 0; str[i] == ' '; ++i)
		;
	for (wordstart = i; str[i] != '\0'; ++i)
		if (str[i] == ' ' || str[i] == '\0')
		{
			arrstr[j] = malloc(sizeof(char) * (i - wordstart + 1));
			if (!arrstr[j])
				return (NULL);
			for (c = wordstart, k = 0; c < i; ++c, ++k)
				arrstr[j][k] = str[c];
			arrstr[j++][k] = '\0';
			for (; str[i] == ' '; ++i)
				;
			wordstart = i;
		}
	arrstr[j] = NULL;
	return (arrstr);
}
