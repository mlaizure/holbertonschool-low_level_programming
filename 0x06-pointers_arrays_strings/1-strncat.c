/**
 * *_strncat - concatenates two strings using at most n bytes from src
 * @dest: string to be appended to
 * @src: string to append to dest
 * @n: max number of bytes from src
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dl = 0, sl = 0;

	while (dest[dl] != '\0')
		dl++;

	while (src[sl] != '\0')
		sl++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dl + i] = src[i];

	dest[dl + i] = '\0';

	return (dest);
}
