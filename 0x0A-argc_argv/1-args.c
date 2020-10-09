#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments & size of array argv
 * @argv: array containing the program command line arguments
 *
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
