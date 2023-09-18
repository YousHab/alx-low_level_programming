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
	int n, i;

	while (*(s + i) != 0)
	{
		i++;
	}
	n = i;
	for (int j = n - 1; j >= 0; j--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
