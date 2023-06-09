#include "main.h"

/**
 * binary_to_uint - it helps to convert a binary number to unsigned int
 * @b: the string containing the binary number
 *
 * Return: it is the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int dec_vals = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dec_vals = 2 * dec_vals + (b[j] - '0');
	}

	return (dec_vals);
}
