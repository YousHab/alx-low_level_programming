#include "main.h"
#include <stdlib.h>
/**
 * *create_array - A function that creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: The size of the array.
 * @c: the character.
 *
 * Return: NULL if the size is 0 or if it fails,
 * the pointer otherwise.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
