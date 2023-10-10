#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * *new_dog - a function that creates a new dog.
 * @name: the name.
 * @age: the age.
 * @owner: the owner.
 *
 * Return: NULL if it fails, a pointer to the new structure otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(new_dog);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(new_dog);
		free(name);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->owner = owner;
	new_dog->age = age;

	return (new_dog);
}
