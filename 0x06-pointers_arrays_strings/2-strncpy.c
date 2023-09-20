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

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
