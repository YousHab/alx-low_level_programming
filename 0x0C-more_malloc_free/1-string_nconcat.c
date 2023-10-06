#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *string_nconcat - a function that concatenates two strings.
 *
 * @s1: the fisrt string.
 * @s2: the second string.
 * @n: the fisrt n character in s2.
 *
 * Return: NULL if it fails, a pointer to the result string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int n1, n2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n1 = strlen(s1);
	n2 = strlen(s2);

	if (n > n2)
		n = n2;

	p = (char *)malloc(n1 + n + 1);
	if (p == NULL)
		return (NULL);

	strcpy(p, s1);
	strncat(p, s2, n);

	*(p + n1 + n) = '\0';
	return (p);
}
