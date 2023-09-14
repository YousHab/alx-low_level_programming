#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: the size of the triangle
 *
 * Return: nothing.
 *
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= (size - i - 1); j++)
			{
				_putchar(' ');
			}

			for (k = 0; k <= (size - j); k++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
}
