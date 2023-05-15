#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or Error, followed by a new line and then 1
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;

	printf("%d\n", k);
	return (0);
}
