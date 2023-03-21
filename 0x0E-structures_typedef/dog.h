#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure for dog details
 * @name: parameter 1
 * @age: parameter 2
 * @owner: parameter 3
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
