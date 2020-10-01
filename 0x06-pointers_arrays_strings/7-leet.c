/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: encoded string.
 */

char *leet(char *s)
{
	unsigned int i, j;
	char arrl[] = {'a', 'e', 'o', 't', 'l'};
	char arrn[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; ++i)
		for (j = 0; j < sizeof(arrl); ++j)
			if (arrl[j] == s[i] || arrl[j] - 32 == s[i])
				s[i] = arrn[j];
	return (s);
}
