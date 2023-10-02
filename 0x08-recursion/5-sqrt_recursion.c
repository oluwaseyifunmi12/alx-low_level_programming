#include "main.h"

/**
 * _sqrt_recursion - function for square root
 *
 * @n: the number to be evaluated
 *
 * Return: natural square root only
 */

int _sqrt_recursion(int n)
{
	int m = 1;

	if ((m * m) > n)
		return (-1);

	else if ((m * m) == n)
		return (m);

	else
		m++;
	return (_sqrt_recursion(n));

}
