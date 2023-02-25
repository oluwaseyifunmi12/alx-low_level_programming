#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Entry point
 *
 * Description: prints every seconds in a day
 * Return: 0; success
*/

void jack_bauer(void)
{
	int n;
	int m;

	for (n = 0; n <= 23; n++)
	{
		for (m = 0; m <= 59; m++)
		{
			printf("%02d:%02d", n, m);
			printf("\n");
		}
	}
}
