#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or Error followed by a new line, then 1
 */

int main(int argc, char *argv[])
{
	int cents;
	int num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		num_coins++;
	}
	printf("%d\n", num_coins);
	return (0);
}
