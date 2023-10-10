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

	 if (name == NULL || owner == NULL)
		return (NULL);
	

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL || name == NULL || owner == NULL)
		return (NULL);

	new_dog->name = strdup(name);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = strdup(owner);

	if (owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}
