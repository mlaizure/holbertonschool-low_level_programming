#include <stdio.h>
#include <unistd.h>

/**
 * main - outputs string to stderr
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 1, sizeof(str), stderr);

	return (1);
}
