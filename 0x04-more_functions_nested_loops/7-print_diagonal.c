#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n:  number of times the character \ should be printed.
 * Return : Nothing.
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			j = 0;
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		n--;
	}
}
