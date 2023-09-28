#include "main.h"
int _strlen(char *s);
int is_pal(char *s, int i, int n);


/**
 * is_palindrome - Function that returns 1 if a string is a palindrome
 * and 0 if not.
 *
 * @s: A pointer to the string to be evaluated.
 *
 * Return: 1 if it's a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (is_pal(s, 0, _strlen(s)));
}

/**
 * _strlen - returns the length of a string.
 *
 * @s: the string.
 *
 * Return: Length of string.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_pal - checks recursively if a string is palindrome.
 *
 * @s: string to be evaluated.
 * @i: iteration number.
 * @n: length of the string.
 *
 * Return: 1 if it's palindrome, 0 else.
 */

int is_pal(char *s, int i, int n)
{
	if (*(s + i) != *(s + n - 1))
		return (0);
	if (i >= n)
		return (1);
	return (is_pal(s, i + 1, n - 1));
}
