#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Function locates the first occurence in the string s
 * of any of the bytes in the string accept
 *
 * @s: the fisrt string.
 * @accept: the second string.
 *
 * Return: A pointer to the byte in c that matches one of the bytes
 * in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
