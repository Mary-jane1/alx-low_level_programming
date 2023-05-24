#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - uses a function pointer to print a name
 * @name: string to be printed
 * @f: pointer to the function that prints the name
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
