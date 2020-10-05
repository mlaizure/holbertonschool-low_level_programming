/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s:a string
 * @accept: set of bytes to match
 *
 * Return: pointer to the byte in s that matches one of hte bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *ctr;

	while (*s)
	{
		ctr = accept;
		while (*ctr)
		{
			if (*s == *ctr)
				return (s);
			++ctr;
		}
		++s;
	}
	return (0);
}
