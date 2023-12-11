#include "main.h"

/**
 *  _islower()- entry point
 * @c: is the value to be checked
 * description this function detects lowercase letters
 * Return: 1; success
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);

	} else

	{
		return (0);
	}
}
