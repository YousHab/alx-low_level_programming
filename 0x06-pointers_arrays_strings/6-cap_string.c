#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string.
 *
 * @s: String to be capitalized.
 *
 * Return: A pointer to s.
 *
 */

char *cap_string(char *s)
{
	int i, j;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	
	i = 0;
	while (s[i] != '\0')
	{	
		if (i == 0 && s[i] <= 'z' && s[i] >= 'a')
			s[i] = s[i] - 32;
		for (j = 0; j < 13; j++)
		{
			if (s[i] == separators[j])
			{
				if (s[i + 1] <= 'z' && s[i + 1] >= 'a')
					s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
