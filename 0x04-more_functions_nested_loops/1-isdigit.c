#include "main.h"
/**
 * _isdigit - checking for a digit (0 to 9)
 *
 * @c: parameter to be tested.
 *
 * Return: 1 if True, 0 else.
 *
 */

int _isdigit(int c)
{
	if (c <= 1 && c >= 9)
		return (1);
	return (0);
}
