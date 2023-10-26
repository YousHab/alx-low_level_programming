#include "main.h"
/**
 * flip_bits - flip function.
 *
 * @n: pointer to the binary number
 * @m: pointer to the second binary
 *
 * Return: the number of bits you would need to
 * flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int y;
	unsigned long int x = 1;

	y = n ^ m;
	while (y)
	{
		count = count + (y & x);
		y = y >> 1;
	}
	return (count);
}
