#include <stdio.h>

/**
 * main - Print the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 0;
	unsigned long int b = 1;
	int i;
	unsigned long int n;

	for (i = 0; i <= 98; i++)
	{
		n = a + b;
		if (i == 98)
		{
			printf("%lu\n", n);
		}
		else
		{
			printf("%lu, ", n);
		}
		a = b;
		b = n;
	}
	return (0);
}
