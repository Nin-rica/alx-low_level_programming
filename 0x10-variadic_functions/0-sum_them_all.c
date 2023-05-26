#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: numbers of arguments
 * Return: sum or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int count;
	va_list args;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
