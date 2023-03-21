#include "dog.h"

/**
 * init_dog - dog details function
 * @d: pointer
 * @name: param 1
 * @age: param 2
 * @owner: param 3
 *
 * description - plenty variables
 * Return: void;
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/**
	 * d = mallloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
*/
	(*d).name = name;
	d->age = age;
	(*d).owner = owner;

}
