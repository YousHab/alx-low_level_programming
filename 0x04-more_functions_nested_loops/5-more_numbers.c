#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: nothing.
 *
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			j++;
		}
		_putchar('\n');
	}
}
