#include "main.h"
/**
 * factorial - a function that calculate the factorial of a given number.
 *
 * @n: The base number.
 *
 * Return: The factorial of n.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
