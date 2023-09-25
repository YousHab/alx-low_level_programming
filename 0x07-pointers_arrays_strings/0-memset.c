#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte.
 *
 * @s: a pointer to adress memory to be filled.
 * @b: The caracter to fill with
 * @n: size.
 *
 * Return: a pointer to the string s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s)
}

