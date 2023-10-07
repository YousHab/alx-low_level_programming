#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_calloc - Function that allocates memory for an array using malloc.
 *
 * @nmemb: number of elements.
 * @size: size of each numbers.
 *
 * Return: NULL if nmemb or size = 0 or if it fails,
 * a pointer to the allocated memory otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	memset(p, 0, size);
	return (p);
}
