#include "main.h"
/**
 * print_most_numbers - print 0 to 9 without printing 2 and 4
 *
 * Return: nothing.
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(48 + i);
	}
	_putchar('\n');
}
