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

	for (i = 0; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
