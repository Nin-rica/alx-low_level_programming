#include "main.h"
#include <string.h>

/**
 * _strcmp - A functtion that compares two strings.
 * @s1: parameter
 * @s2: parameter
 * Return: positive, negetive or zero
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
