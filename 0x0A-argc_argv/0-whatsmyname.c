#include <stdio.h>

/**
 * main - A function that prints its name.
 * @argc: number of  arguments.
 * @argv: array
 * Return: 0 - success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
