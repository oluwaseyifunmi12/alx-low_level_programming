#include "main.h"

/**
 * puts2 - Entry point
 * @str: input
 *
 * Return: string;
*/

void puts2(char *str)
{
	int count = 0;
	int t = 0;
	char *y = str;
	int p;

	while (*y != '\0')
	{
		y++;
		count++;
	}
	t = count - 1;
	for (p = 0 ; p <= t ; p++)
	{
		if (p % 2 == 0)
	{
		_putchar(str[p]);
	}
	}
	_putchar('\n');

}
