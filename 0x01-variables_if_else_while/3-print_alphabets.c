#include <stdio.h>

/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
