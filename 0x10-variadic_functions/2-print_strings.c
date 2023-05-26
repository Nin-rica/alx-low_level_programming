#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings, followed by a new line.
 * @separator: Separator
 * @n: numbers of arguments
 * @...: A variable number of srings to be printed
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int count;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && count != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
