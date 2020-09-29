/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte, to the buffer pointed to by dest
 * @dest: pointer to desination buffer
 * @src: pointer to the source string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, l = 0;

	while (src[l] != '\0')
		l++;

	for (i = 0; i < l; i++)
		dest[i] = src[i];

	return (dest);
}
