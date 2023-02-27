#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: prints numbers
 * Return: void;
*/

void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x == 50 || x == 52)
		{
			continue;
		}
		else
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
