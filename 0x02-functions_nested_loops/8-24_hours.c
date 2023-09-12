#include "main.h"
/**
 * jack_bauer - print minutes of jack bauer day
 *
 *
 */

void jack_bauer(void)
{
	int i, j, m, n;

	while (i < 3)
	{
		j = 0;
		while (j < 10)
		{
			m = 0;
			while (m < 6)
			{
				n = 0;
				while (n < 10)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + m);
					_putchar('0' + n);
					_putchar('\n');
					n++;
					if (i == 2 && j == 9 && m == 5 && n == 9)
						return;
				}
				m++;
			}
			j++;
		}
		i++;
	}
}
