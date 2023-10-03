#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *str_concat - function that concatenates two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: NULL if s1 or s2 is empty or failure,
 * pointer should point to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *p;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	i = 0;
	while (i < len1)
	{
		*(p + i) = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		*(p + i + j) = s2[j];
		j++;
	}
	*(p + i + j) = '\0';
	return (p);
}
