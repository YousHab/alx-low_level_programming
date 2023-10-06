#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * *_realloc - a function that reallocates a memory block using malloc
 * and free.
 *
 * @ptr: a pointer to the memory previously allocated.
 * @old_size: the size of the allocated space for ptr.
 * @new_size: the new size of the new memory block.
 *
 * Return: NULL if malloc fails or if new_size=0, the new pointer otherwise.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	if (old_size < new_size)
		min_size = old_size;
	else
		min_size = new_size;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, min_size);
	free(ptr);

	return (new_ptr);
}
