#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: pointer to array (square matrix) of integers
 * @size: dimesions of array
 *
 * Return: none.
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; ++i)
	{
		sum1 += a[(i * size) + i];
		sum2 += a[(i * size) + size - i - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
