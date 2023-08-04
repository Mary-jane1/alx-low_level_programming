#include "main.h"

/**
 * get_bit - it helps to return the value of
 * a bit at an inde in a decimal number
 * @o: it is the number to search
 * @inde: it is the inde of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int o, unsigned int inde)
{
	int bit_val;

	if (inde > 63)
		return (-1);

	bit_val = (o >> inde) & 1;

	return (bit_val);
}
