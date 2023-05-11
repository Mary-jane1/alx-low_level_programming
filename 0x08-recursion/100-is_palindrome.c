#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if it is a palindrome, 0 if it's not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
	/* If the string is empty, it's a palindrome */
	return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	/* If the end of the string is reached, return 0 (base case) */
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Recursively checks the characters for palindrome.
 * @s: The string to check.
 * @i: The iterator.
 * @len: The length of the string.
 *
 * Return: 1 if it is a palindrome, 0 if it's not.
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
	/* If the characters at the current positions */
	/* are not equal, it's not a palindrome */
	return (0);
	}
	else if (i >= len)
	{
	/* If the iterator is greater than or equal to the length, */
	/* the entire string has been checked and it's a palindrome */
	return (1);
	}
	else
	{
	/* Recursively increment the iterator and decrement */
	/* the length to continue checking */
	return (check_pal(s, i + 1, len - 1));
	}
}
