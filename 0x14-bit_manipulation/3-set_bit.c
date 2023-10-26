#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: a pointer to the binary number.
 * @index: the index of the bit to be set.
 *
 * Return: 1 if it works, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 64)
		return (-1);
	x = x << index;
	*n = *n | x;
	return (1);
}
