#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers entered from command line
 * @argc: number of command line arguments & size of array argv
 * @argv: array containing the program command line arguments
 *
 * Return: 1 if any arg contains a symbol, 0 on success
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; ++i)
		{
			for (j = 0; argv[i][j] != '\0'; ++j)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
