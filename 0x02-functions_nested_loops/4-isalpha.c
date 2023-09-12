#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character to test.
 *
 * Return: 1 (True) else 0 (False)
 *
 */

int _isalpha(int c);
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}	
