#include <stdlib.h>
#include "main.h"

/**
 * array_range - a funkion that creates an array of integers.
 *
 * @min: minimum value to be created
 * @max: maximum value to be created
 *
 * Return:  NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		min++;
		ptr[i] = min;
	}
	return (ptr);
}
