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

	i = 0;
	while (str[i] != '\0')
		;
	{
		ptr = (char *)malloc(sizeof(char) * (i + 1));
		i++;
	}

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		ptr[j] = str[j];

	return (ptr);
}

