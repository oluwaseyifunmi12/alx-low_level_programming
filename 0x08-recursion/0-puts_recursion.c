
#include "main.h"

/**
 * _puts_recursion - Name of the function prototype
 *
 * @s: Character to be printed
 *
 * Return: 0
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')

	{
		_putchar('\n');

		return;
	}

	else

	{
		_putchar(*s);

		_puts_recursion(s + 1);
	}
}
