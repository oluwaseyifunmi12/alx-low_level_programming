#include <stdio.h>

/**
 * main - Entry  point
 *
 * the function prints lowercase ketters in reverse order
 * Return: 0; (success)
 */

int main(void)
{
	int al;

	for (al = 'z'; al >= 'a'; al--)

		putchar(al);

	putchar('\n');
	return (0);
}
