#include "main.h"
#include<stdio.h>

/**
 * _puts - Prints a string to the standard output.
 * @str: The string to be printed.
 *
 * This function takes a null-terminated string
 * as input and prints it to the standard output.
 * It does not append a newline character at the end of the string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
