/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to be raised to power of y
 * @y: power to raise x to
 *
 * Return: x raised to power of y (if y is less than 0, returns -1)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
