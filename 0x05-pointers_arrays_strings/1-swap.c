/**
 * swap_int - swaps the values of two integers
 * @a: an int to be swapped
 * @b: the other int to be swapped
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int i;
	int *c = &i;

	*c = *a;
	*a = *b;
	*b = *c;
}
