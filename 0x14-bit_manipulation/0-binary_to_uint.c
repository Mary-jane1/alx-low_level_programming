#include "main.h"

/**
 * binary_to_uint - it helps to convert a binary number to unsigned int
 * @c: it is the string containing the binary number
 *
 * Return: it is the converted number
 */
unsigned int binary_to_uint(const char *c)
{
	int j;
	unsigned int dec_val = 0;

	if (!c)
		return (0);

	for (j = 0; c[j]; j++)
	{
		if (c[j] < '0' || c[j] > '1')
			return (0);
		dec_val = 2 * dec_val + (c[j] - '0');
	}

	return (dec_val);
}
