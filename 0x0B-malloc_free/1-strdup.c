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
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str != '\0')
	{
		ptr = (char *)malloc((i + 1) * sizeof(char));
		i++;
	}

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		ptr[j] = str[j];

	return (ptr);
}

