#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure for dog details
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description - this stores basic info about a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
