#include "main.h"
/**
 * reset_to_98-Resets the value of a variable back to 98.
 * @n:Variable to be reset.
 * Return:Void.
 */

void reset_to_98(int *n)
{
	*n = 98;
}

Task 1
#include "main.h"

/**
 * swap_int-Swaps the values of 2 integers.
 * @a:First argument to be swapped.
 * @b:second argument to be swapped.
 *
 * Return:void.
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;

}
