#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Computes the sum of the diagonal
 * s in a square matrix and prints them.
 * @a: Pointer to the first element of the matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i, j;

	/* Compute the sum of the diagonal from top-left to bottom-right */
	for (i = 0; i < size; i++)
	{
	sum1 += a[i * size + i];
	}

	/* Compute the sum of the diagonal from top-right to bottom-left */
	for (j = 0; j < size; j++)
	{
	sum2 += a[j * size + (size - 1 - j)];
	}

	/* Print the computed sums */
	printf("%d, %d\n", sum1, sum2);
}
