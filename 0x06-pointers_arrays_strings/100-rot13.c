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
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] <= 'm' && s[i] >= 'a') || (s[i] <= 'M' && s[i] >= 'A'))
			s[i] += 13;
		else if ((s[i] <= 'z' && s[i] >= 'n') || (s[i] <= 'Z' && s[i] >= 'N'))
			s[i] -= 13;
		i++;
	}
	return (s);
}
