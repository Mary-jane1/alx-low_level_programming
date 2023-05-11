#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The value to raise.
 * @y: The power.
 *
 * Return: The result of the power operation.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	/* If the power is negative, return -1 (not defined) */
	return (-1);
	}
	else if (y == 0)
	{
	/* If the power is 0, return 1 (x^0 = 1) */
	return (1);
	}
	else
	{
	/* Recursively calculate the power */
	/* by multiplying x with _pow_recursion(x, y - 1) */
	return (x * _pow_recursion(x, y - 1));
	}
}
