#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: number of elements to print
 *
 */

void print_array(int *a, int n)
{
	int i;
	
	if (n != 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[n - 1]);
	}
	printf('\n');
/bin/bash: line 1: q: command not found
