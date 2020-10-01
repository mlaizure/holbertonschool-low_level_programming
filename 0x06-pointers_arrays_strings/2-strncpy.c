/**
 * *_strncpy - copies a string
 * @dest: pointer to destination buffer
 * @src: pointer to source string
 * @n: max number of bytes copied from source
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
