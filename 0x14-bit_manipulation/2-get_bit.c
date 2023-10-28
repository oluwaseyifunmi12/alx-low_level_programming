#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at an index
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shift;

	if (index >= (sizeof(unsigned long int) * 8))
	{

		return (-1);
	}

	shift = 1UL << index;

	if ((n & shift) != 0)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
