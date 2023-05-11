#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number to calculate the factorial from.
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
	/* Negative numbers don't have a factorial, so return -1 */
	return (-1);
	}
	else if (n == 0)
	{
	/* The factorial of 0 is defined as 1 */
	return (1);
	}
	else
	{
	/* Recursively calculate the factoria */
	/* l by multiplying n with factorial(n - 1) */
	return (n * factorial(n - 1));
	}
	/* Default return statement */
	return (0);
}
