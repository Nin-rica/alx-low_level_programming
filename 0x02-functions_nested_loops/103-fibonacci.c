#include <stdio.h>

/**
 * main - print sum of fibonacci sequence
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	long int sum = 2;
	int i;

	for (i = 3; i <= 33; i++)
	{
		if ((c % 2 == 0) && (c < 4000000))
		{
			sum = sum + c;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%lu\n", sum);
	return (0);
}
