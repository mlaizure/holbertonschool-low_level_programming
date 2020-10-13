#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer that is size of array of arguments from command line
 * @av: pointer to char array of arguments from command line
 *
 * Return: pointer to a new string; NULL on failure of if ac or av are 0
 */

char *argstostr(int ac, char **av)
{
	char *cat;
	int i, j, k = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		while (av[i][l] != '\0')
			l++;
	}
/* l is combined length of strings without null terminators
 * ac the number of new lines needed
 * 1 for the null terminator
 */
	cat = malloc(sizeof(char) * l + sizeof(char) * ac + 1);
	if (!cat)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j] != '\0'; ++j)
		{
			cat[k] = av[i][j];
			++k;
		}
		cat[k] = '\n';
		k += 1;
	}
	cat[k] = '\0';
	return (cat);
}
