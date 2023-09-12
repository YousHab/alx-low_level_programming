#include "main.h"
/**
 * _islower - check for lower case character
 * @c: character to test
 * Return: 1 (True) else 0 (False)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
