#include <stdio.h>

/**
 * main - Entry point
 *
 * The function prints alphabets in lower case except e and q
 * Return: 0;
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	putchar('\n');
	return (0);
}
