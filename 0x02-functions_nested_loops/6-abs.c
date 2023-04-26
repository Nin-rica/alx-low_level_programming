#include "main.h"

/**
 * _abs - A function that computes
 * absolute value of an integer
 * @n: parameter
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
