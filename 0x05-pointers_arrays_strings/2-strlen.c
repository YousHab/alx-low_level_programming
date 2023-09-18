#include "main.h"
/**
 * _strlen - return the length of a string.
 *
 * @s: the string to be evaluated.
 *
 * Return: nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != 0)
	{
		len++;
	}
	return (len);
}
