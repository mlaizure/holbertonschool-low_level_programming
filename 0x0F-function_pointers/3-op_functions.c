#include "3-calc.h"

/**
 * op_add - adds two ints together
 * @a: first int to be added
 * @b: second int to be added
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 * @a: int to be subtracted from
 * @b: int to be subtracted by
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: first int to be multiplied
 * @b: second int to be multiplied
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: int to be divided
 * @b: int to be divided by
 *
 * Return: result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of the division of two ints
 * @a: int to be divided
 * @b: int to be devided by
 *
 * Return: remainder of division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
