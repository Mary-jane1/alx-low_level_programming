#include "main.h"

/**
 * clear_bit - it helps to set the value of a given bit to 0
 * @o: pointer to the number to change
 * @inde: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *o, unsigned int inde)
{
	if (inde > 63)
		return (-1);

	*o = ((~1UL << inde) & *o);
	return (1);
}
