#include "main.h"

/**
 * print_most_numbers - A function that prints the numbers, 0 to 9,
 * followed by a new line without 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
