#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (Sucess)
 */

int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');

	return (0);
}
