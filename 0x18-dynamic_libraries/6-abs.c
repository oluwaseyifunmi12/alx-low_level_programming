#include "main.h"

/**
 * _abs - Entry point
 * @e: integer to be checked
 * Description: gets the absolute value of input
 * Return: e; success
*/

int _abs(int e)
{
	if (e >= 0)
	{
		return (e);
	}
	else
	{
		return (e * -1);
	}

}
