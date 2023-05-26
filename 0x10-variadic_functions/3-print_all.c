#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - A function that prints anything
 * @format: List of types of argument passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int count;
	va_list args;
	char *ptr;
	char *sep;

	va_start(args, format);

	sep = "";
	count = 0;

	while (format && format[count])
	{
		switch (format[count])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				ptr = va_arg(args, char *);
				if (ptr == NULL)
					ptr = "(nil)";
				printf("%s%s", sep, ptr);
				break;
			default:
				count++;
				continue;
		}
		sep = ", ";
		count++;
	}
	printf("\n");
	va_end(args);
}
