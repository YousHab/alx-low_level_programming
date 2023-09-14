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
		for (j = 0; j < 15; j++)
		{
			_putchar(48 + j);
		}
		_putchar('\n');
	}
}
