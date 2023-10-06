#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - This function allocates memory using malloc.
 *
 * @b: the size of memory to be allocated.
 *
 * Return: a pointer to the allocated memory.
 * a nomarl process termination with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
