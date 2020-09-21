/**
 * _abs - computes the absolute value of an integer
 * @n: number going through computation
 *
 * Return: absolute value of the integer
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
