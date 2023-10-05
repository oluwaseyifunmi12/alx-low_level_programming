#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function creates an array and initializes with a character
 *
 * @size: the size of array to be created
 * @c: the character to be input
 *
 * Return: Null for failure
 */

char *create_array(unsigned int size, char c)
{

	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	else if (ptr == NULL)
		return (NULL);

	else
	{

		for (i = 0; i < size; i++)

			ptr[i] = c;
	}
		return (ptr);
}
