/**
 * _memcpy - copies memory area
 * @dest: area to be copied to
 * @src: area that is copied
 * @n: number of bytes copied from src
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		dest[i] = src[i];

	return (dest);
}
