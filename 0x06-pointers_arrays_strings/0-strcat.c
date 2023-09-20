#include "miain.h"
/**
 * _strcat - This function concatenates two strings.
 *
 * @dest: the string to be added to.
 * @src : string to be added.
 *
 * Return: a pointer to dest.
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
