#include <stdio.h>

/**
 * main - A function that prints its arguments.
 * @argc: number of  arguments.
 * @argv: array
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
