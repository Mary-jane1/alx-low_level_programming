#include "main.h"

/**
 * get_endianness - it checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *d = (char *) &j;

	return (*d);
}
