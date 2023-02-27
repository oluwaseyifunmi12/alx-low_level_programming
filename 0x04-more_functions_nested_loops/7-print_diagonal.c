#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: integer to be checked
 * Description: prints numbers
 * Return: void;
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
		}
	}_putchar('\n');
}
