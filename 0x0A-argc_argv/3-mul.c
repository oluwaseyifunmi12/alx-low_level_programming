#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function multiplies its arguments and send its output
 *
 * @argc: number of argument
 *
 * @argv: argument string
 *
 * Return: (1); failure
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{

		mul = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", mul);
			return (0);
	}

	else
		{
                printf("Error\n");
        }

	return (1);

}
