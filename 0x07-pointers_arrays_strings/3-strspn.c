#include "main.h"
/**
 * _strspn - A funtion that gets the length of a prefix substring.
 *
 * @s: teh string to be evaluated.
 * @accept: the check string.
 *
 * Return: Returns the number of byte in the initial segment of s
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i = 0;
	int j;

	while (*(s + i) != '\0' && *(s + i) != ' ')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				c++;
			}
			j++;
		}
		i++;
	}
	return (c);
}
