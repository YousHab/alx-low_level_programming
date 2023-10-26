#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: the number.
 */

void print_binary(unsigned long int n)
{
	unsigned long int x = 1;

	if (n == 0)
		_putchar('0');
	if (n == 1)
		_putchar('1');
	while (x)
	{
		if (x & n)
			_putchar('1');
		else
			_putchar('0');
		x = x << 1;
	}
	_putchar('\n');
}
