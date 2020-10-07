/**
 * _strlen_recursion - returns the length of a string
 * @s: string to find the length of
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_pal_rec - checks if a string is a palindrome
 * @s: pointer to a string to test
 * @st: start of string
 * @e: end of string
 *
 * Return: 1 if string is a palindrome, otherwise 0
 */

int is_pal_rec(char *s, int st, int e)
{
	if (st == e)
		return (1);
	if (s[st] != s[e])
		return (0);
	if (st < e + 1)
		return (is_pal_rec(s, st + 1, e - 1));

	return (1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to a string to test
 *
 * Return: 1 if string is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
		return (1);
	else
		return (is_pal_rec(s, 0, n - 1));
}
