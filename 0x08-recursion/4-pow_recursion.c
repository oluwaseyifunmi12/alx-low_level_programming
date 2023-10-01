#include "main.h"

/**
 * _pow_recursion - This functions finds the power of a given number
 *
 * @x: The original number
 * @y: The power
 *
 * Return: the power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		x = (x * _pow_recursion(x, y - 1));
	return (x);
}
