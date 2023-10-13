#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that suns its arguments
 * @n: count of arguments
 * Return: 0; a
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, add  = 0;

	va_start(x, n);

	if (n == 0)
		return (0);


	for (i = 0; i < n; i++)
		add += va_arg(x, int);

	va_end(x);
	return (add);

}
