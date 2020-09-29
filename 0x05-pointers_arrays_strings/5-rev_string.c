/**
 * rev_string - reverses a string
 * @s: pointer to a string
 *
 * Return: none
 */

void rev_string(char *s)
{
	int i = 0;
	char *start = s;
	char temp;
	char *end;

	while (s[i] != '\0')
		i++;

	end = start + i - 1;

	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		++start;
		--end;
	}
}
