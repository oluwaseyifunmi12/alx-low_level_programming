#include <stdlib.h>
#include <stdio.h>


/**
 * malloc_checked - a function that allocates memory
 *
 * @b: the size of bytes to be allocated
 *
 * Return:pointer to allocated memory
 *
 * exit status is set to 98 if memory is not allocated
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
