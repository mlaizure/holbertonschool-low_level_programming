/**
 * find_prime - figures out if n is prime
 * @n: number to test if prime
 * @k: number to divide by
 *
 * Return: 1 if n is prime, otherwise 0
 */

int find_prime(int n, int k)
{
	if (k == n)
		return (1);
	else if (n % k == 0)
		return (0);
	else
		return (find_prime(n, k + 1));
}

/**
 * is_prime_number - returns 1 if the input int is a prime number, otherwise
 * returns 0
 * @n: int to test if it's a prime number
 *
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (find_prime(n, 2));
}
