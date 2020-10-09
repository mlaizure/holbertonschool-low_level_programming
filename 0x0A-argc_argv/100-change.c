#include <stdio.h>
#include <stdlib.h>

int change_parser(int num);

/**
 * main - prints the minimum number of coins to make change for an amount
 * of money using coin values of 25, 10, 5, 2, and 1 cent
 * @argc: number of command line arguments & size of array argv
 * @argv: array containing the program command line arguments (in this case
 * a number of cents to be parsed into coins)
 *
 * Return: 1 if number of args is not one, 0 on success
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		num = atoi(argv[1]);
		if (num < 0)
			printf("0\n");
		else
			printf("%d\n", change_parser(num));
		return (0);
	}
}

/**
 * change_parser - calculates the minimum number of coins to make change for
 * an amount of money using coin values of 25, 10, 5, 2, and 1 cent
 * @num: amount of money to be parsed
 *
 * Return: minimum number of coins
 */

int change_parser(int num)
{
	int res = 0;

	if (num / 25 > 0)
	{
		res += num / 25;
		num = num % 25;
	}
	if (num / 10 > 0)
	{
		res += num / 10;
		num = num % 10;
	}
	if (num / 5 > 0)
	{
		res += num / 5;
		num = num % 5;
	}
	if (num / 2 > 0)
	{
		res += num / 2;
		num = num % 2;
	}
	if (num > 0)
		res += num;
	return (res);
}
