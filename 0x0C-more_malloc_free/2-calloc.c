#include "main.h"
#include <stdlib.h>

/**
 * _calloc - This function alloctes memmory for array
 *
 * @nmemb: number of elements present in the array.
 * @size: size of each element
 *
 * Return: NULL. if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * (nmemb * size));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
