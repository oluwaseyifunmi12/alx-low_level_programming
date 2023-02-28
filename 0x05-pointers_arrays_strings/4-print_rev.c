#include "main.h"

/**
 * print_rev - Entry point
 * @s: input
 *
 * Return: string;
*/

void print_rev(char *s)
{
	void print_rev(char *s)
{
	int count = 0;
	int p;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	s--;

	for (p = count; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

}
