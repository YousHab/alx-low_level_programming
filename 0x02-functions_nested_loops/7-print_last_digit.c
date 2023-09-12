#include "main.h"
/**
 * print_last_digit - print the last digit of a given integer.
 * @n: the 
 *
 *
 *
 */

int print_last_digit(int n)
{
	n = n%10;
	if (n < 0)
		n*=-1;
	return (n);
