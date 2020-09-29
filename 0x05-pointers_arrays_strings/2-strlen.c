/**
 * _strlen - returns the length of a string
 * @s: pointer to a char array
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;

	return (l);
}
