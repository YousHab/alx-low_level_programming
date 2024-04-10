#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: the array
 * @size: the size
 * @value: the value
 *
 * Return: the index or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *a_cp = array;

	if (!array)
		return (-1);

	while (size)
	{
		for (i = 0, printf("Searching in array: "); i < size; i++)
			printf("%d%s", a_cp[i], i + 1 == size ? "\n" : ", ");

		i = (size - 1) / 2;
		if (a_cp[i] == value)
			return ((a_cp - array) + i);
		else if (a_cp[i] > value)
			size = i;
		else
		{
			a_cp += (i + 1);
			size -= (i + 1);
		}

	}
	return (-1);
}

