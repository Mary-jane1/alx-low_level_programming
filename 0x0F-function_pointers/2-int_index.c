#include "function_pointers.h"

/**
 * int_index - returns the index of the first element that
 * satisfies the comparison condition, otherwise -1
 * @array: the array
 * @size: the size of the elements in the array
 * @cmp: pointer to a function that performs the comparison
 * Return: the index of the first matching element, or -1 if no match is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
