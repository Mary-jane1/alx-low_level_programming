#include "main.h"

/**
 * _print_rev_recursion - Recursively prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	/* Recursively call the function with the next character in the string */
	_print_rev_recursion(s + 1);

	/*  Print the current character */
	_putchar(*s);
	}
}

