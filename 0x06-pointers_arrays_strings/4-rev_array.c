/**
 * reverse_array - reverses content of an array of ints
 * @a: an array of integers
 * @n: the number of elements in array
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int *start = a;
	int temp;
	int *end;

	end = start + n - 1;

	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		++start;
		--end;
	}
}
