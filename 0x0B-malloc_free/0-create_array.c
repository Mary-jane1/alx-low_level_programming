#include "main.h"
#include <stdlib.h>

/**
*create_array - Creates an array of characters and
*initializes it with a specific character.
*@c: The character to initialize the array with.
*
*@size: The number of bytes to allocate.
*
*Return: A pointer to the created array or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
	return (NULL);

	while (size--)
	array[size] = c;

	return (array);
}
