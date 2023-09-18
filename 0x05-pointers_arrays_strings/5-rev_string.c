#include "main.h"
/**
 * rev_string - This function reverse a string.
 *
 * @s: the string to be reversed.
 *
 */

void rev_string(char *s)
{
	int n, i, j;
	char c;

	i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}	
	n = i - 1;
	for (j = 0; j <= n / 2 ; j++)
	{
		c = s[j];
		s[j] = s[n - j];
		s[n - j] = c;
	}
}

