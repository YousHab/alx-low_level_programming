#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 *
 * @s: a pointer to the string.
 *
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
