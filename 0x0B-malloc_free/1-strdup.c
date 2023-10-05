#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function duplicates a string
 *
 * @str: string to be duplicated
 *
 * Return: Null for failure
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

		ptr = (char *)malloc((i + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		ptr[j] = str[j];

	return (ptr);
}

