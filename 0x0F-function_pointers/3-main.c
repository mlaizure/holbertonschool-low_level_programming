#include "3-calc.h"

/**
 * main - converts arguments from command line to ints and calls other
 * functions to perform operation asked by the user
 * @argc: number of arguments from command line
 * @argv: array of arguments from command line
 *
 * Return: 0 on success, 98 if # of arguments wrong, 99 if invalid operator,
 * 100 if user tries to divide by 0
 */

int main(int argc, char *argv[])
{
	char operator = *argv[2];
	int (*func)(int, int);
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(&operator);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (*func)(num1, num2);

	printf("%d\n", result);

	return (0);
}
