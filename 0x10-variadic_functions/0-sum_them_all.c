#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all parameters.
 *
 * @n: number of integers to sum.
 *
 * Return: 0 if n = 0, the result otherwise.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0, i;

	if (n == 0)
		return (0);
	
	va_list args;
	va_start(args, n);
	
	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}

	va_end(args);
	return (result);
}
