/**
 * find_root - finds the square root of int n
 * @n: number to find square root of
 * @k: number to guess square root
 *
 * Return: natural square root of n
 */

int find_root(int n, int k)
{
	if (k * k == n)
		return (k);
	else if (k * k > n)
		return (-1);
	else
		return (find_root(n, k + 1));
}

/**
 * _sqrt_recursion - returns the natural sqare root of an integer
 * @n: number to be square rooted
 *
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_root(n, 0));
}
