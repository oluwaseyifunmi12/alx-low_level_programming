#include "main.h"

/**
 * _isdigit - Entry point
 * @c: the argument to be checked
 *
 * Description: the function checks for numbers
 * Return: (1); success
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
