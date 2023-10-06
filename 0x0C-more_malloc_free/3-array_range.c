#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *array_range - A function that creates an array of integers.
 *
 * @min: the min value in the array.
 * @max: max value in the array.
 *
 * Return: NULL if min is greater then max, or if malloc fails,
 * the pointer to the created array otherwise.
 */

int *array_range(int min, int max)
{
	int i, n;
	int *p;

	if (min > max)
		return (NULL);

	n = max - min;
	p = (int *)malloc(sizeof(int) * (n + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= n; i++)
	{
		*(p + i) = min + i;
	}
	return (p);
}
