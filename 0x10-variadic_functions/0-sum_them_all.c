#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * @n: constant
 * Return: 0; success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum  = 0;

	va_start(a, n);

	if (n == 0)
		return (0);


	for (i = 0; i < n; i++)
		sum += va_arg(a, int);

	va_end(a);
	return (sum);

}
