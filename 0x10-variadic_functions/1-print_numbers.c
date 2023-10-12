#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator: a string to be printed between numbers.
 * @n: number of arguments to be printed.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (separator == NULL)
		separator = "";

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(args, int));
		else
		{
			printf("%d", va_arg(args, int));
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}

