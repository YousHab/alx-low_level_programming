#include "main.h"
/**
 * _strncat - Concatenates n bytes from a string to another one.
 *
 * @dest: the string to append to.
 * @src : the string to be appended.
 * @n: The number of caracters to be added from src.
 * Return: the pointer dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
