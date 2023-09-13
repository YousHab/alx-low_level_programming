#include "main.h"
/**
 * print_alphabet - printing alphabet in lowercase followed by a new line
 *
 *
 *
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	putchar('\n');
}
