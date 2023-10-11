#include "function_pointer.h"
/**
 * print_name - a function that prints a name.
 *
 * @name: the name to be printed.
 * @f: a pointer to the printing funtion.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
