#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Determines whether an integer is a prime number or not.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	/* If the number is less than or equal to 1, it's not prime */
	return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Checks if a number is prime recursively.
 * @n: The number to evaluate.
 * @i: The iterator.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
	/* If the iterator reaches 1, the number is prime */
	return (1);
	}
	else if (n % i == 0 && i > 0)
	{
	/* If the number is divisible by the iterator and */
	/* the iterator is positive, it's not prime */
	return (0);
	}
	else
	{
	/* Recursively decrement the iterator and continue checking */
	return (actual_prime(n, i - 1));
	}
}
