#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 *
 * @n: the number.
 * @index: the index of the bit.
 *
 * Return: the value, -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1;

	if (index >= sizeof(n) * 8)
		return (-1);
	n = n >> index;
	return (n & x);
}
