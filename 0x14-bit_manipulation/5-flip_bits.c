#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int numbr = 0;

	while (result > 0)
	{
		numbr += result & 1;
		result >>= 1;
	}

	return (numbr);
}

