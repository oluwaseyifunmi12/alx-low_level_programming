#include "main.h"

/**
 * print_alphabet()- Entry point
 *
 * The fuction should print alphabets in lower case
 * Return: 0;
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);

	}
	_putchar('\n');
}
