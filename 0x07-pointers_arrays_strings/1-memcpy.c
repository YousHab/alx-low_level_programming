#include "main.h"
/**
 * _memcpy - Fuction that copies a memory area.
 *
 * @dest: the destination.
 * @src: the source to be copied.
 * @n: size
 *
 * Return: a pointer to result
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

