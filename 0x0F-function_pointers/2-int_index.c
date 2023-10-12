#include "function_pointers.h"

/**
 * int_index - this function searches through element in an array
 * @array: the given array
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int t;

	if (cmp && array)
	{
		if (size <= 0)
			return (-1);

		for (t = 0; t < size; t++)
		{
			cmp(array[t]);
			return (t);
		}
	}
	return (-1);
}
