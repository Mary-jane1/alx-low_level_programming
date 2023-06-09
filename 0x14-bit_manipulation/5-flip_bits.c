#include "main.h"

/**
 * flip_bits - it helps to count the number of bits to change
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: it is the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int present;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		present = exclusive >> j;
		if (present & 1)
			count++;
	}

	return (count);
}
