#include "main.h"
/**
 * print_alphabet_x10 - Printing alphabet 10 times in lowercase
 * followed by a new line
 *
 *
 *
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
