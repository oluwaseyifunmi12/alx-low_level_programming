#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int test_value = 1;
	unsigned char *ptr = (unsigned char *)&test_value;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
