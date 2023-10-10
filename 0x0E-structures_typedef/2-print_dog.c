#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog.
 * @d: a pointer to the structure to be printed.
 *
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "nil";

	if (d->owner == NULL)
		d->owner = "nil";

	printf("%s", d->name);
	printf("%f", d->age);
	printf("%s", d->owner);
}
