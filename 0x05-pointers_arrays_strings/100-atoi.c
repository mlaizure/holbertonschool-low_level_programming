/**
 * _atoi - converts a string to an int
 * @s: pointer to a string
 *
 * Return: int from string (0 if string contains no ints)
 */

int _atoi(char *s)
{
	int i = 0, j = 0, sign = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while ((s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		j = j * 10 + (s[i] - '0');
		if (j < 0)
			return (sign * 2147483647);
		i++;
	}

	return (j * sign);
}
