#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints a string
 * 
 * @separator: printed between stringss.
 * @n: number of stringss
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list prt;

	char *st;

	unsigned int i;

	va_start(prt, n);

	for (i = 0; i < n; i++)
	{
		st = va_arg(prt, char *);

		printf("%s", st);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

		if (st == NULL)
			printf("nil");
	}

	printf("\n");

	va_end(prt);
}
