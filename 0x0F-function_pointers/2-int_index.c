#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer.
 *
 * @array: the array of integers to be evaluated.
 * @size:the number of elements in the array.
 * @cmp: a pointer to the function to be used to compare values.
 *
 * Return: -1 if no element matches or size <= 0.
 * index of the element otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
