#include <stdio.h>

/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 10)
	{
		while(b < 10)
		{
			if (a != b && a < b)
			{
				putchar('0' + a);
				putchar('0' + b);
			
				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}	
			}
			b++;
		}
		a++;
	}
	putchar(\n);
	return (0);
}

			
