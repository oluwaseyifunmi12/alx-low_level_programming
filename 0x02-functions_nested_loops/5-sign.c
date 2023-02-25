#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: is the value being checked
 *
 * description: the function checks signs on values
 * Return: 1; if greater than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
