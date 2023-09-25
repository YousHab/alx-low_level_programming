#include "main.h"
#include <stddef.h>
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

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s);
	}
	return (NULL);
}
