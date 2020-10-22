#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments from command line
 * @argv: array of arguments from command line
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
