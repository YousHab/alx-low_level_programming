#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that frees dogs.
 * @d: a pointer to the dog structure
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	free(d);
}
