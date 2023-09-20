#include "main.h"
/**
 * reverse_array - Fuction that reverses the content of an array of integers.
 *
 * @a: a given array of integers.
 * @n: the number of elements of the array.
 *
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int c;

	for (i = 0; i < n / 2 ; i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}
}
