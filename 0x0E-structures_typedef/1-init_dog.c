#include "dog.h"

/**
 * init_dog - dog details function
 * @d: tag
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: void;
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	while (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
