#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Fuctions that combines two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: Null if failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (m = 0; m < i; m++)
		ptr[m] = s1[m];

	for (m = 0; m < j; m++)
		ptr[i + m] = s2[m];

	return (ptr);

}
