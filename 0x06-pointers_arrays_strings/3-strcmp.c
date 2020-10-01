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
	int s1l = 0, s2l = 0;

	while (s1[s1l] != '\0')
		s1l++;

	while (s2[s2l] != '\0')
		s2l++;

	if (s1l == s2l)
		return (0);
	else if (s1l > s2l)
		return (15);
	else
		return (-15);
}
