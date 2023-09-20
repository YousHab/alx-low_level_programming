#include "main.h"
/**
 * leet - This function encodes a string into 1337.
 *
 * @s: the string to be encoded.
 *
 * Return: a pointer to the result of encoding.
 *
 */

char *leet(char *s)
{
	char a[5] = {'a', 'e', 'o', 't', 'l'};
	char b[5] = {'A', 'E', 'O', 'T', 'L'};
	char c[5] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if ((s[i] == a[j]) || (s[i] == b[j]))
			{
				s[i] = c[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
