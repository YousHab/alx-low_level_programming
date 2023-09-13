#include "main.h"
/**
 * jack_bauer - print minutes of jack bauer day
 *
 *
 */

void jack_bauer(void)
{
	int i, j, m, n;

	for (i = 0 ; i <= 2 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (m = 0 ; m < 6 ; m++)
			{
				for (n = 0 ; n < 10 ; n++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + m);
					_putchar('0' + n);
					_putchar('\n');
					if (i == 2 && j == 3 && m == 5 && n == 9)
					{
						return;
					}
				}
			}
		}
	}
}

