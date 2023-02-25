#include "main.h"

/**
 * _isalpha()- entry point
 * @c: is the value to be checked
 * the functions checks for alphabets
 * Return: (1); success
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
