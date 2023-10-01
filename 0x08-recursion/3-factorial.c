#include "main.h"

/**
 * factorial - This function returns the factorial of a given number
 *
 * @n: this the value to be estimated
 *
 * Return: the factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		n = (n *factorial(n - 1));
	return (n);
}
