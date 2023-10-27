#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned integer
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	return (0);

	unsigned int decimal = 0;

	while (*b != '\0')
	{
		char c = *b;

		if (c == '0')
		{
			decimal = (decimal << 1);
		}

		else if (c == '1')
		{
			decimal = (decimal << 1) | 1;
		}
		else
		{
			return (0);
		}

		b++;
	}

	return (decimal);
}
