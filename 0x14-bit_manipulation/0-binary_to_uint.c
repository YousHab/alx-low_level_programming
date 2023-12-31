#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: a pointer to the string containing the binary number.
 *
 * Return: the converted number, 0 if b is NULL or if
 * it's not binary number.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		num = (num << 1) + (b[i] - '0');
	}
	return (num);
}
