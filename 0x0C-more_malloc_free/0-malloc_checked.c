#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that checks the status of malloc
 * @b: the amount of bytes
 *
 * Return: ptr to allocated memory
 * exit status is set to 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
