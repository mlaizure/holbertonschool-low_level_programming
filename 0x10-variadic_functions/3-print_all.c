#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function where c is char,
 * i is int, f is float, and s is char *
 *
 * Return: none
 */

void print_all(const char * const format, ...)
{
	va_list arg_list;
	unsigned int i = 0, t = 0;
	char *str;
	const char * const f = format;

	va_start(arg_list, format);
	while (f[i] != '\0')
	{
		while (f[i] == 'c' || f[i] == 'i' || f[i] == 'f' || f[i] == 's')
		{
			if (t++)
				printf(", ");
			switch (f[i])
			{
			case 'c':
				printf("%c", va_arg(arg_list, int));
				break;
			case 'i':
				printf("%d", va_arg(arg_list, int));
				break;
			case 'f':
				printf("%f", va_arg(arg_list, double));
				break;
			case 's':
				str = va_arg(arg_list, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
			}
			break;
		}
		++i;
	}
	printf("\n");
	va_end(arg_list);
}
