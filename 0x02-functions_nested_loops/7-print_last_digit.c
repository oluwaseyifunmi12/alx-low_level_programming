#include "main.h"

/**
 * print_last_digit - Entry point
 * @i:the value to be checked
 * Description: checks for last digit on a number
 * Return: l; success
*/

int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
	{
		_putchar(-l + 0);
		return (-l);
	}
	else
	{
		_putchar(l + 0);
		return (l);
	}

}

