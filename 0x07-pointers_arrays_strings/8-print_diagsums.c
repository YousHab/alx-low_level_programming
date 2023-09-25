#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 *
 * @a: the array to be evaluated.
 * @size: the size of the matrix.
 *
 * Return: NOTHING
 *
 */

void print_diagsums(int *a, int size)
{
	unsigned int sum_diag1 = 0;
	unsigned int sum_diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[(size * i) + i];
		sum_diag2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
