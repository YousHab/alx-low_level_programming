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

	while (size)
	{
		for (i = 1; i < size; i++)
		{
			_putchar(' ');
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
