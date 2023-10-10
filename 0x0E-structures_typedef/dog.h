#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A structure that contains a dog information.
 * @name: the dog name.
 * @age: the age.
 * @owner: the owner of the dog
 *
 * Description : desc.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog;

#endif
