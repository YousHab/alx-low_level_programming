#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: the number.
 */

void print_binary(unsigned long int n)
{
	unsigned long int x = 1;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	if (n == 1)
		_putchar('1');

	while (x < n)
	{
		x = x << 1;
		flag = 1;
	}
	if (flag)
	{
		x = x >> 1;
	}
	while (x)
	{
		if (n & x)
			_putchar('1');
		else
			_putchar('0');
		x = x >> 1;
	}
}
