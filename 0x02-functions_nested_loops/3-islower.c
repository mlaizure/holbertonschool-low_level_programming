/**
 * _islower - check if a letter is lowercase
 * @c: the letter to be checked
 *
 * Return: 1 if lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
