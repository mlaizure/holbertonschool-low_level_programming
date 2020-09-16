#include <stdio.h>

/**
 * main - prints the size of various types on the current machine
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int long1;
	long long int long2;
	float f;

	printf("Size of a char: %zd byte(s)\n", sizeof(c));
	printf("Size of an int: %zd byte(s)\n", sizeof(i));
	printf("Size of a long int: %zd byte(s)\n", sizeof(long1));
	printf("Size of a long long int: %zd byte(s)\n", sizeof(long2));
	printf("Size of a float: %zd byte(s)\n", sizeof(f));

	return (0);
}
