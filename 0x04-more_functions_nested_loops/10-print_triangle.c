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
	int i, j;

	if (size == 0)
		_putchar('\n');
	else
		j = 0;
		while (size)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(' ');
				j++;
			}
			if (j == (size - i))
				for (j = size - i; j <= size; j++)
				{
				_putchar('#');
				}
			_putchar('\n');
			size--;
		}
}
