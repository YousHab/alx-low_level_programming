#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array.
 * @array: an given array of integers.
 * @size: the size of the array.
 * @action: a pointer to the function.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
