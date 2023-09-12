#include "main.h"

/**
 * times_table - print out the 9 times table
 *
 *
 */
void times_table(void)
{
	int i, j;

	for (j = 0 ; j < 10 ; j++)
	{
		_putchar('0');
		for (i = 1 ; i < 10 ; i++)
		{
			int a = i * j;

			_putchar(',');
			if (a / 100 == 0)
			{
				_putchar(32);
			}
			if (a / 10 == 0)
			{
				_putchar(32);
			}
			else
			{
				_putchar('0' + (a / 10));
			}
			if (a % 10 == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar('0' + (a % 10));
			}
		}
		_putchar('\n');
	}
}

