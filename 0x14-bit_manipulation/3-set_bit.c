#include "main.h"

/**
 * set_bit - it helps to set a bit at a given inde to 1
 * @o: it is the pointer to the number to change
 * @inde: it is the index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *o, unsigned int inde)
{
	if (inde > 63)
		return (-1);

	*o = ((1UL << inde) | *o);
	return (1);
}
