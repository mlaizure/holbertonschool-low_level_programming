/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of the character in string s
 * or NULL if character not found
 */

char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		++s;
	if (*s == c)
		return (s);
	return (0);
}
