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

/**
 * dog_t - creating a typedef for struct dog
 */
typedef struct dog dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
