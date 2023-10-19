#include "lists.h"

__attribute__((constructor)) void first(void);
/**
 * first - function that print a string before the the execution
 * of the main function
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
