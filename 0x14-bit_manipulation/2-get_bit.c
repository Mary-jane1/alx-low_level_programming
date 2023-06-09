#include "main.h"

/**
 * get_bit - it helps to return the value of a
 * bit at an index in a decimal number
 * @n: the number to search
 * @index: the index of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bits_vals;

	if (index > 63)
		return (-1);

	bits_vals = (n >> index) & 1;

	return (bits_vals);
}
