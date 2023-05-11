#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The resulting square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	/* If the number is negative, return -1 (not defined) */
	return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Recursively
 * finds the natural square root of a number.
 * @n: The number to calculate the square root of.
 * @i: The iterator.
 *
 * Return: The resulting square root.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
	/* If the square of the iterator exceeds the number, return -1 (not found) */
	return (-1);
	}
	else if (i * i == n)
	{
	/* If the square of the iterator matches */
	/* the number, return the iterator (found) */
	return (i);
	}
	else
	{
	/* Recursively increment the iterator and continue searching */
	return (actual_sqrt_recursion(n, i + 1));
	}
}
