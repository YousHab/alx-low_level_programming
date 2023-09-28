#include "main.h"
/**
 * factorial - a function that calculate the factorial of a given number.
 *
 * @n: The base number.
 *
 * Return: The factorial of n.
 */

unsigned int factorial(unsigned int n)
{
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
