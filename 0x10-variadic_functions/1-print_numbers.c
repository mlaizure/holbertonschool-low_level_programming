#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list int_list;
	unsigned int i;

	va_start(int_list, n);

	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(int_list, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(int_list);
}
