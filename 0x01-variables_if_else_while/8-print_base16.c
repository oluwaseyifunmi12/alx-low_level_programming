#include <stdio.h>

/**
 * main - Entry point
 *
 * The function prints base 16 numbers
 * Return: 0;
 */

int main(void)
{
	int n;
	int l;

	for (n = 48; n <= 57; n++)
		putchar(n);
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');
	return (0);

}
