#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocated space of ptr.
 * @new_size: new size, in bytes, of the new memory block.
 *
 * Return: ptr.
 * If new_size == old_size, the function returns ptr without changes.
 * If new_size is 0 and ptr is not NULL,
 * the function frees the memory and returns NULL.
 * If malloc fails, the function returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}

	if (ptr == NULL)
	ptr = malloc(new_size);

	if (new_size == old_size)
	return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
