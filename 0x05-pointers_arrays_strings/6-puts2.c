#include "main.h"

/**
 * puts2 - Fuction that prints one char out of 2 of string.
 *
 * @str: the string.
 *
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	for (j = 0; j <= i - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
