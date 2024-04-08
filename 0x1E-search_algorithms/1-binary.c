#include "search_algos.h"

/**
 * inary_search - searches for a value in a sorted array of integers
 * @array: the array
 * @size: the size
 * @value: the value
 *
 * Return: the index or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	int result = 0;
	size_t j = 0;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (j = 0; j < size; j++)
	{
		if (j == size - 1)
		{
			printf("%d\n", array[j]);
		}
		else
		{
			printf("%d, ", array[j]);
		}
	}

	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
	{
		result = binary_search(array + mid + 1, size - mid - 1, value);
		if (result == -1)
		{
			return (-1);
		}
		else
		{
			return (mid + 1 + result);
		}
	}
	return (binary_search(array, mid, value));
}
