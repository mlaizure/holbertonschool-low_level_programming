#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers entered from command line
 * @argc: number of command line arguments & size of array argv
 * @argv: array containing the program command line arguments
 *
 * Return: 1 if program does not receive two arguments, 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}

	printf("Error\n");
	return (1);
}
