#include "main.h"
/**
 * _strncpy - function that copies a string.
 *
 * @dest: The destination.
 * @src: the source string to be copied
 * @n: nomber of caracters to be copied.
 *
 * Return: A pointer to the result.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[n] = '\0';
	return (dest);
}
