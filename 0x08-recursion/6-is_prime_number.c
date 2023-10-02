#include "main.h"

/**
 * is_prime_number - Function to check prime number
 *
 * @n: number to be checked
 *
 * Return: (0);
 *
 */


int is_prime_number(int n)
{
	int m = 2;

	if ( n == 0)
		return (-1);

	if ( n == 1 || n == 2)
		return (1);

	else if (n % m == 0)
		return (1);

	else
		m++;
	return (is_prime_number(n));
}
