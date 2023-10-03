#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the string to be copied.
 *
 * Return: NULL if the str is NULL of if the available memory is insufficient.
 * a pointer to the new string otherwise.
 *
 */

char *_strdup(char *str)
{
	char *p = malloc(sizeof(str));
	int i = 0;

	if (str == NULL || p == NULL)
	{
		return (NULL);
	}

	while (str[i] == '\0')
	{
		*(p + i) = str[i];
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
