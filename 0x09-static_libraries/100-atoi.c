#include "main.h"
/**
 * _atoi - this function converts a string to an integer.
 *
 * @s: The string to be converted.
 *
 * Return: the result of conversion.
 *
 */

int _atoi(char *s)
{
	int i, j, x, n, k, m;

	i = 0;
	j = 0;
	x = 0;
	n = 0;
	k = 0;
	m = 0;
	while (s[n] != '\0')
		n++;
	while ((i < n) && (k == 0))
	{
		if (s[i] == '-')
			++j;

		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			m = s[i] - '0';
			if (j % 2)
				m = -m;
			x = x * 10 + m;
			k = 1;
			if ((s[i + 1] < '0') || (s[i + 1] > '9'))
				break;
			k = 0;
		}
		i++;
	}

	if (k == 0)
		return (0);
	return (x);
}
