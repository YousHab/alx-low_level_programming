#include "main.h"
/**
 * _strchr - A fuction that locate a character in a string.
 *
 * @s: pointer to the string.
 * @c: the character to be located.
 *
 * Return: a pointer to the first occurence of the carachter c in the string s
 * or NULL if the character is not found.
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int n = 0;

	while (*(s + i) != '\0')
		n++;

	i = 0;
	for (i = 0; i < n; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
