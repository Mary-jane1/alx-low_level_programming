#include "main.h"

/**
 * _strspn - returns the length of the maximum initial segment of `s`
 *           that consists entirely of characters from `accept`
 * @s: pointer to the input string
 * @accept: pointer to the characters to match
 *
 * Return: the number of bytes in the initial segment of `s` that match
 *         any of the characters in `accept`
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
	for (r = 0; accept[r]; r++)
	{
	if (*s == accept[r])
	{
	n++;
	break;
	}
	else if (accept[r + 1] == '\0')
	{
	return (n);
	}
	}
	s++;
	}
	return (n);
}
