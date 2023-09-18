#include "main.h"
/**
 * swap_int - This function swap the values of tow pointers.
 *
 * @a: the first pointer.
 * @b: the second pointer.
 *
 * Return : Nothing.
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
