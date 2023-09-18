#include "main.h"
/**
 * print_rev - This function prints a string, in reverse.
 *
 * @s: the string to be reversed.
 *
 * Return: Nothing.
 *
 */

void print_rev(char *s)
{
	int n, i, j;

	while (*(s + i) != 0)
	{
		i++;
	}
	n = i;
	for (j = n - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
