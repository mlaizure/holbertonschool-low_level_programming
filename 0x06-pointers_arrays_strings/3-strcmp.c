/**
 * _strcmp - compares two strings
 * @s1: a pointer to a string to compare
 * @s2: a pointer to another string to compare
 *
 * Return: an int less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
