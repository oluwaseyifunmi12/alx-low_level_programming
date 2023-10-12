#include "function_pointers.h"

/**
 * array_iterator - this function mones through each element in an array
 * @array: the given array
 * @size: size of array
 * @action: function pointer
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int t;

	if (action && array)
	{
		for (t = 0; t < size; t++)
			action(array[t]);
	}
}
