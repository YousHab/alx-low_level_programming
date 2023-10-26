#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: a pointer to the the binary number.
 * @index: the index of the bit to be changed.
 *
 * Return: 1 if it worked, -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	x = ~(x << index);
	*n = *n & x;
	return (1);
}
