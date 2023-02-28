#include "main.h"

/**
 * swap_int -Entry point
 * @a: first input
 * @b: second input
 *
 * Return: a,b;
*/

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
