#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments provided.
 *
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: Always 0 (indicating successful execution).
 */
int main(int argc, char *argv[])
{
	(void) argv; /* Ignoring the argv parameter */

	printf("Number of arguments: %d\n", argc - 1);

	return (0);
}
