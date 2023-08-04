#include "main.h"

/**
 * flip_bits - it helps to count the number of bits to change
 * to get from one number to another
 * @o: first number
 * @n: second number
 *
 * Return: it is the number of bits to change
 */
unsigned int flip_bits(unsigned long int o, unsigned long int n)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = o ^ n;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
