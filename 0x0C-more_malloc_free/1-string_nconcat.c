#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function concatenates two strings with predefined bytes
 *
 * @s1: first string
 * @s2: second string
 *
 * @n: predefined of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, exit is 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

		if (n > j)
			n = j;

	ptr = malloc(i + j + 1);

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k <= i; k++)
		ptr[k] = s1[k];

	for (k = 0; k <= n; k++)
		ptr[i + k] = s2[k];

	ptr[i + n] = '\0';

	return (ptr);

}
