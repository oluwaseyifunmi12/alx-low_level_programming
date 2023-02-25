#include "main.h"
#include <stdio.h>
/**
 * times_table - Entry point
 *
 * Description - prints multiplication table
 * Return: 0; success
*/

void times_table(void)
{
	int m;
	int n;
	int mul;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
		mul = m * n;

			if (mul <= 9)
			{
				printf("%d,  ", mul);
			}
			else
			{	printf("%d, ", mul);

			}
		}
		_putchar('\n');
	}
}
