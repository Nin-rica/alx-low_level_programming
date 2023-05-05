#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string.
 * @src: input string
 * Return: string
 */

char *cap_string(char *src)
{
	int i;
	int j;

	i = 0;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(src + i) >= 97 && *(src + i) <= 122)
		*(src + i) = *(src + i) - 32;
	i++;
	while (*(src + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(src + i) == sep[j])
			{
				if ((*(src + (i + 1)) >= 97) && (*(src + (i + 1)) <= 122))
					*(src + (i + 1)) = *(s + (i + 1)) - 32;
				break;
			}
		}
		i++;
	}
	return (src);
}
