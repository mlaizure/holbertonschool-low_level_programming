/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring to locate within haystack
 *
 * Return: pointer to the beginning of the located substring or NULL if the
 * substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *needleCtr, *haystackCtr;

	while (*haystack)
	{
		needleCtr = needle;
		haystackCtr = haystack;
		while (*needleCtr == *haystackCtr && *needleCtr && *haystackCtr)
		{
			++needleCtr;
			++haystackCtr;
		}
		if (*needleCtr == '\0')
			return (haystack);
		++haystack;
	}
	return (0);
}
