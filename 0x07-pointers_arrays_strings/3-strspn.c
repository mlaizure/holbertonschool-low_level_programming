/**
 * _strspn - gets the length of the initial segment of s which consists
 * entirely of bytes in accept
 * @s: string
 * @accept: bytes to match to
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *ctr;

	while (*s)
	{
		ctr = accept;
		while (*ctr)
		{
			if (*s == *ctr)
			{
				++i;
				break;
			}
			++ctr;
		}
		if (*ctr == '\0')
			return (i);
		++s;
	}
	return (0);
}
