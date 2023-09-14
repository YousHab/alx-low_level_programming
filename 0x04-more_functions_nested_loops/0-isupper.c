#include "main.h"
/**
 * _isupper - checking for uppercase character
 *
 * @c: the character to be tested
 *
 * Return: 1 if True, 0 else.
 */


int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	return (0);
}
