#include "variadic_functions.h"
/**
 * print_strings - A function that prints strings.
 * @separator: string to be printed between strings.
 * @n: number of strings.
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *cmp;

	va_start(args, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		cmp = va_arg(args, char *);
		if (cmp == NULL)
			cmp = "nil";

		if (i == n - 1)
		{
			printf("%s", cmp);
		}
		else
		{
			printf("%s", cmp);
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
