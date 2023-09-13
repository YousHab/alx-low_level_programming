#include "main.h"
/**
 * print_last_digit - print the last digit of a given integer.
 * @n: the number n.
 *
 * Return: the last digit of n
 *
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = n * (-1);
	_putchar('0' + n);
	return (n);
}
