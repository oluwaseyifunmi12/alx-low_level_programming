#include <stdio.h>

/**
 * main - A function that prints the number of arguments in it.
 * @argc: number of  arguments.
 * @argv: array
 * Return: 0 - success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
