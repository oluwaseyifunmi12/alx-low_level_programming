#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints assigned string with a new line.
 * @separator: to be printed between stringss.
 * @n: The number of stringss passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list alps;

	char *st;

	unsigned int i;

	va_start(alps, n);

	for (i = 0; i < n; i++)
	{
		st = va_arg(alps, char *);

		printf("%s", st);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

		if (st == NULL)
			printf("nil");
	}

	printf("\n");

	va_end(alps);
}
