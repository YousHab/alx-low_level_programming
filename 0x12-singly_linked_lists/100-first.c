#include "lists.h"

void first(void) __attribute__((constructor));
/**
 * first - function that print a string before the the execution
 * of the main function
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n I bore my house upon my back!\n");
}
