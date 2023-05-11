#include "main.h"

/**
 * wildcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
	/* If the first string reaches its end */
	if (*s2 != '\0' && *s2 == '*')
	{
	/* If the second string is not at its end and the */
	/* next character is '*', continue comparing */
	return (wildcmp(s1, s2 + 1));
	}
	return (*s2 == '\0');
	/* Return 1 if the second string also reaches its end, 0 otherwise */
	}
	if (*s2 == '*')
	{
	/* If the next character in the second string is '*', */
	/* continue comparing by skipping a character in s1 or s2 */
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
	/* If the current characters in both strings are the same, */
	/* continue comparing the next characters */
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0); /* Return 0 if the characters don't match */
}
