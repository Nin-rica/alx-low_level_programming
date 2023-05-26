#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line
 * @separator: Separator
 * @n: numbers of arguments
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(args, unsigned int));

		if (separator != NULL && count != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
