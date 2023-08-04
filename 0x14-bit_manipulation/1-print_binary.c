#include "main.h"

/**
 * print_binary - it helps to print the binary equivalent of a decimal number
 * @o: it is the number to print in binary
 */
void print_binary(unsigned long int o)
{
	int j, count = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = o >> j;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
