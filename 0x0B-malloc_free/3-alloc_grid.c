#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * **alloc_grid - A function that returns a pointer to a 2 dim array of ints.
 * @width: the number of culums.
 * @height: number of rows.
 *
 * Return: NULL if it failed of if width or height = 0.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	p = malloc(sizeof(int) * width * height);
	if (p == NULL || (width <= 0 || height <= 0))
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
