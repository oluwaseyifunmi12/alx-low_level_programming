#include "main.h"

/**
 * _puts - entry point
 * @str: input
 *
 * Return: string;
*/

void _puts(char *str)
{

	while (*str != '\0')
	{

		_putchar(*str++);
	}
	_putchar('\n');
}
