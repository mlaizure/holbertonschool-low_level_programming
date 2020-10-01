/**
 * isItChar - checks for delimiter character
 * @c: element of array it is checking
 * @ptr: list of delimiters it is checking against
 *
 * Return: 0 if no matches, 1 if there's a match
 */

short int isItChar(char c, char *ptr)
{
	short int didFind = 0;

	for (; *ptr != '\0'; ptr++)
		if (*ptr == c)
			didFind = 1;
	return (didFind);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: string in which words will be capitalized
 *
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		if (isItChar(s[i], " \t\n,;.!?\"(){}"))
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
	return (s);
}
