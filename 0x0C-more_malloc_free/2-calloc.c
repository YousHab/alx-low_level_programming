#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
int main(void)
{
	char *a;

	a = _calloc(98, sizeof(char));
	strcpy(a, "Best");
	strcpy(a + 4, " School! :)\n");
	a[97] = '!';
	simple_print_buffer(a, 98);
	free(a);
	return (0);
}
