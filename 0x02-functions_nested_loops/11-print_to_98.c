#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers from the given number to 98
 *
 * @n: number of start
 *
 *
 *
 *
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("%d ,", n);

	else if (n < 98)
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
		}
	else
		for (i = n; i >= 98; i--)
		{
			printf("%d ,", i);
			if (i > 98)
				printf(", ");
		}
	printf("\n");
}
