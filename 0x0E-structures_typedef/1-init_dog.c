#include "dog.h"
/**
 * init_dog - A funtion that initialize a variable of type struct dog.
 *
 * @d: struct dog name.
 * @name: the name of the dog d.
 * @age: the age.
 * @owner: the owner.
 *
 * Return: Nothing.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
