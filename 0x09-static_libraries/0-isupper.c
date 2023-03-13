#include "main.h"

/**
 * _isupper - Entry point
 * @c: the argument to be checked
 *
 * Description: the function checks for uppercase letters
 * Return: (1); success
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
