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

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d bytes(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(long1));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long2));
	printf("Size of a float: %d byte(s)\n", sizeof(f));

	return (0);
}
