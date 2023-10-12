#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *cmp, *separator;

	va_start(args, format);

	i = 0;
	separator = "";

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					cmp = va_arg(args, char*);
					if (!cmp)
						cmp = "(nil)";
					printf("%s%s", separator, cmp);
					break;
				default:
					i++;
					continue;
			}
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
