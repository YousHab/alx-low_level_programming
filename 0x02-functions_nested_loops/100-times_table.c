#include "main"
/**
 * print_times_table - print the time table.
 *
 * @n : the number of times.
 *
 */

void print_times_table(int n)
{
	int i;
	int j;
	int c;

	if (n < 0 || n > 15)
		return (0);
	for (i = 0; i <= n; i++)
	{
		j = 0;
		for (j = 0; j <= n ; j++)
		{
			c = i * j;
			_putchar('0' + c);
			if (j < n)
				_putchar(',');
				_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
