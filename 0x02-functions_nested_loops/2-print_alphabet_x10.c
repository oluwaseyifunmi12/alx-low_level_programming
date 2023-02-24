#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * the function prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
			_putchar('\n');

	}
}
