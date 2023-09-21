#include "main.h"
/**
 * rot13 - Function that encodes a string using rot13.
 *
 * @s: The string to be encoded.
 *
 * Return: pointer to the result of encoding.
 */

char *rot13(char *s)
{
	char a[] = "ABCDEFGHIGKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char crypt[] = "NOPQRSTUVWXYZABCDEFGHIGKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] == crypt[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
