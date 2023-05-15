#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or Error followed by a new line, then 1
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		k += atoi(argv[i]);

	}
	printf("%d\n", k);
	return (0);
}
