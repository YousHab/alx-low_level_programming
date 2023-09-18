#include "main.h"
/**
 * puts_half - this function prints the second half of a given string.
 *
 * @str: the string to be printed.
 *
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (i - 1) / 2; j < i - 1; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
